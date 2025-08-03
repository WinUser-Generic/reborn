using gamecontroller.Models;
using System.Net.WebSockets;

namespace gamecontroller.Singletons
{
	public class LobbySingleton
	{
		public List<Lobby> Lobbies { get; set; }

		public LobbySingleton() {
			Lobbies = new List<Lobby>();
		}

		public bool PlayerHasAnyOtherLobbies(Guid? playerGuid)
		{
			return Lobbies.Where(e => e.HostPlayerGuid == playerGuid).ToList().Any();
		}

		public bool PlayerIsInAnyLobbies(Guid? playerGuid)
		{
			return Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == playerGuid).Any()).ToList().Any();
		}

		public Lobby? GetPlayersLobby(Guid? playerGuid)
		{
			return Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == playerGuid).Any()).FirstOrDefault();
		}

		public void HandleChatMessage(Guid PlayerGuid, WebsocketChatMessage message)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any())) {
				lobby.HandleChatMessage(PlayerGuid, message);
			}
		}

		public void HandleCharacterSelection(Guid PlayerGuid, WebsocketCharacterSelection message)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.HandleCharacterSelection(PlayerGuid, message);
			}
		}

		public void HandleSkinSelection(Guid PlayerGuid, WebsocketSkinSelection message)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.HandleSkinSelection(PlayerGuid, message);
			}
		}

		public void HandleGearSelection(Guid PlayerGuid, WebsocketGearSelection message) 
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.HandleGearSelection(PlayerGuid, message);
			}
		}

		public void HandleMapModeSelection(Guid PlayerGuid, WebsocketMapModeSelection message)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.HandleMapModeSelection(PlayerGuid, message);
			}
		}

		public void HandleTauntSelection(Guid PlayerGuid, WebsocketTauntSelection message)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.HandleTauntSelection(PlayerGuid, message);
			}
		}

		public void HandleLaunchMatch(Guid PlayerGuid)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.LaunchMatch(PlayerGuid);
			}
		}

		public void HandleSwitchTeam(Guid PlayerGuid, WebsocketSwitchTeam message)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.HandleSwitchPlayerTeam(PlayerGuid, message);
			}
		}

		public void RemovePlayerFromAllLobbies(Guid PlayerGuid, WebSocket webSocket)
		{
			foreach (Lobby lobby in Lobbies.Where(e => e.LobbyPlayers.Where(x => x.Guid == PlayerGuid).Any()))
			{
				lobby.RemovePlayer(PlayerGuid, webSocket);
			}
		}

		public Lobby CreateLobby(LobbyCreationConfig config)
		{
			Lobby lobby = new Lobby(config);

			Lobbies.Add(lobby);

			return lobby;
		}

		public Lobby? GetLobbyFromGuid(Guid lobbyGuid)
		{
			return Lobbies.Where(e => e.Guid == lobbyGuid).FirstOrDefault();
		}
	}
}
