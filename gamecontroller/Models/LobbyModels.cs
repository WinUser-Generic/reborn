using Microsoft.AspNetCore.Mvc;
using System.Net;
using System.Net.WebSockets;
using System.Text.Json;

namespace gamecontroller.Models
{

	public enum ETeam
	{
		None = 0,
		TeamA = 1,
		TeamB = 2,
		Spectator = 3,
	}

	public class LobbyPlayer
	{
		public Guid Guid { get; set; }
		public string Name { get; set; }
		public ETeam Team { get; set; }
		public string? CharacterObjectName { get; set; }
		public string? SkinObjectName { get; set; }
		public string? TauntObjectName { get; set; }
		public string? GearSlotOneObjectName { get; set; }
		public string? GearSlotTwoObjectName { get; set; }
		public string? GearSlotThreeObjectName { get; set; }

		public WebSocket? WebSocket;

		public LobbyPlayer(HttpContext context)
		{
			Guid = (context.Items["guid"] as Guid?).Value;
			Name = context.Items["name"] as string;

			Team = ETeam.None;
		}
	}

	public enum ELobbyState
	{
		PreGame = 0,
		WaitingForServer = 1,
		ServerLaunching = 2,
		InGame = 3,
	}

	public enum EMode
	{
		PvE = 1,
		PvP = 2
	}

	public class LobbyCreationConfig
	{
		public string LobbyName { get; set; }
		public List<string> LobbyTags { get; set; }
		public string? LobbyPassword { get; set; }
		public string HostPlayerGuid { get; set; }
	}

	public class LobbyJoinConfig
	{
		public string LobbyGuid;
		public string? Password;
	}

	public class Lobby {
		public Guid Guid { get; set; }
		public string Name { get; set; }
		public Guid HostPlayerGuid { get; set; }
		public ELobbyState State { get; set; }
		public EMode Mode { get; set; }
		public bool IsPasswordProtected { get; set; }
		public string? Password;
		public List<string> LobbyTags { get; set; }
		public List<LobbyPlayer> LobbyPlayers { get; set; }
		public string? HumanReadableMapModeName { get; set; }
		public string? ServerStartString { get; set; }
		public bool Dirty;

		public List<ChatMessage> ChatMessages;
		public bool ChatMessagesDirty;

		public GameInstance? GameInstance;

		public int PlayerIndexToAllowJoin;

		public bool AllowJoin;

		public Lobby(LobbyCreationConfig config)
		{
			Guid = Guid.NewGuid();
			Name = config.LobbyName;
			if(config.LobbyPassword != null)
			{
				Password = config.LobbyPassword;
				IsPasswordProtected = true;
			}
			else
			{
				IsPasswordProtected = false;
			}
			LobbyTags = config.LobbyTags;
			LobbyPlayers = new List<LobbyPlayer>();
			State = ELobbyState.PreGame;
			HostPlayerGuid = Guid.Parse(config.HostPlayerGuid);

			Mode = EMode.PvE;
			Dirty = false;

			ChatMessages = new List<ChatMessage>();

			ChatMessagesDirty = false;

			AllowJoin = false;
			PlayerIndexToAllowJoin = -1;
		}

		public void HandleChatMessage(Guid playerGuid, WebsocketChatMessage websocketChatMessage)
		{
			ChatMessages.Add(new ChatMessage
			{
				IsSystemMessage = false,
				PlayerFrom = playerGuid,
				Message = websocketChatMessage.Message
			});

			ChatMessagesDirty = true;
		}

		public void HandleCharacterSelection(Guid playerGuid, WebsocketCharacterSelection websocketCharacterSelection)
		{
			foreach (var player in LobbyPlayers.Where(e => e.Guid == playerGuid))
			{
				player.CharacterObjectName = websocketCharacterSelection.CharacterSelectionObjectName;
				Dirty = true;
			}
		}

		public void HandleSkinSelection(Guid playerGuid, WebsocketSkinSelection websocketSkinSelection)
		{
			foreach (var player in LobbyPlayers.Where(e => e.Guid == playerGuid))
			{
				player.SkinObjectName = websocketSkinSelection.SkinSelectionObjectName;
				Dirty = true;
			}
		}

		public void HandleTauntSelection(Guid playerGuid, WebsocketTauntSelection websocketTauntSelection)
		{
			foreach (var player in LobbyPlayers.Where(e => e.Guid == playerGuid))
			{
				player.TauntObjectName = websocketTauntSelection.TauntSelectionObjectName;
				Dirty = true;
			}
		}

		public void HandleGearSelection(Guid playerGuid, WebsocketGearSelection websocketGearSelection)
		{
			foreach (var player in LobbyPlayers.Where(e => e.Guid == playerGuid))
			{
				player.GearSlotOneObjectName = websocketGearSelection.GearSlotOneSelectionObjectName;
				player.GearSlotTwoObjectName = websocketGearSelection.GearSlotTwoSelectionObjectName;
				player.GearSlotThreeObjectName = websocketGearSelection.GearSlotThreeSelectionObjectName;
				Dirty = true;
			}
		}

		public void HandleMapModeSelection(Guid playerGuid, WebsocketMapModeSelection websocketMapModeSelection)
		{
			if(playerGuid == HostPlayerGuid)
			{
				HumanReadableMapModeName = websocketMapModeSelection.HumanReadableMapModeName;
				ServerStartString = websocketMapModeSelection.ServerStartString;
			}
		}

		public void HandleSwitchPlayerTeam(Guid playerGuid, WebsocketSwitchTeam websocketSwitchTeam)
		{
			LobbyPlayer? player = LobbyPlayers.Where(e => e.Guid == playerGuid).FirstOrDefault();

			if (player != null)
			{
				ETeam teamToSwitchTo = (ETeam)websocketSwitchTeam.TeamId;
				if(teamToSwitchTo == ETeam.TeamA || (teamToSwitchTo == ETeam.TeamB && Mode == EMode.PvP))
				{
					if(GetNumPlayersOnTeam(teamToSwitchTo) < 5)
					{
						player.Team = teamToSwitchTo;

						Dirty = true;
					}
				}
				else if(teamToSwitchTo == ETeam.Spectator)
				{
					if(GetNumPlayersOnTeam(teamToSwitchTo) < 2)
					{
						player.Team = teamToSwitchTo;

						Dirty = true;
					}
				}
			}
		}

		public void RemovePlayer(Guid playerGuid, WebSocket webSocket)
		{
			LobbyPlayer? playerRemoved = LobbyPlayers.Where(e => e.Guid == playerGuid).FirstOrDefault();

			if(LobbyPlayers.RemoveAll(e => e.Guid == playerGuid) > 0)
			{
				Dirty = true;

				AddSystemChatMessage(String.Format("{0} left the lobby!", playerRemoved.Name));
			}
		}

		public void AddSystemChatMessage(string ChatMessage)
		{
			ChatMessages.Add(new ChatMessage { 
				IsSystemMessage = true,
				Message = ChatMessage
			});

			ChatMessagesDirty = true;
		}

		public void AddWebsocket(Guid playerGuid, WebSocket webSocket)
		{
			foreach (var player in LobbyPlayers)
			{
				if(player.Guid == playerGuid)
				{
					player.WebSocket = webSocket;
				}
			}
		}

		public int GetNumPlayersOnTeam(ETeam team)
		{
			return LobbyPlayers.Where(e => e.Team == team).Count();
		}

		public bool ValidateCharacterSelections()
		{
			return !LobbyPlayers.Where(e => e.CharacterObjectName == null).Any();
		}

		public void LaunchMatch(Guid PlayerGuid)
		{
			if(ServerStartString != null && HumanReadableMapModeName != null && HostPlayerGuid == PlayerGuid && State == ELobbyState.PreGame && ValidateCharacterSelections())
			{
				State = ELobbyState.WaitingForServer;

				AddSystemChatMessage("Waiting for an available server...");

				Dirty = true;
			}
		}

		public void ServerLaunching()
		{
			State = ELobbyState.ServerLaunching;

            AddSystemChatMessage("Server found! Launching game...");

            Dirty = true;
		}

		public void MatchShutdown()
		{
			State = ELobbyState.PreGame;

            AddSystemChatMessage("Match complete!");

			GameInstance = null;

			Dirty = true;
        }

		public bool AddPlayerAndAssignToTeam(HttpContext context)
		{
			LobbyPlayer newPlayer = new LobbyPlayer(context);

			if (Mode == EMode.PvE)
			{
				if(GetNumPlayersOnTeam(ETeam.TeamA) >= 5)
				{
					if (GetNumPlayersOnTeam(ETeam.Spectator) > 2)
					{
						return false;
					}
					else
					{
						newPlayer.Team = ETeam.Spectator;
					}
				}
				else {
					newPlayer.Team = ETeam.TeamA;
				}
			}
			else
			{
				if(GetNumPlayersOnTeam(ETeam.TeamA) == GetNumPlayersOnTeam(ETeam.TeamB))
				{
					if(GetNumPlayersOnTeam(ETeam.TeamA) >= 5)
					{
						if (GetNumPlayersOnTeam(ETeam.Spectator) > 2)
						{
							return false;
						}
						else
						{
							newPlayer.Team = ETeam.Spectator;
						}
					}
					else
					{
						newPlayer.Team = ETeam.TeamA;
					}
				}
				else
				{
					newPlayer.Team = ETeam.TeamB;
				}
			}

			LobbyPlayers.Add(newPlayer);

			AddSystemChatMessage(String.Format("{0} joined the lobby!", newPlayer.Name));

			Dirty = true;

			return true;
		}
	}

	public class ChatMessage
	{
		public bool IsSystemMessage { get; set; }
		public Guid? PlayerFrom { get; set; }
		public string Message { get; set; }
	}
}
