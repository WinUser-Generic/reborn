using gamecontroller.Models;
using gamecontroller.Singletons;
using System.Net.Sockets;
using System.Net.WebSockets;
using System.Text;
using System.Text.Json;
using static Microsoft.EntityFrameworkCore.DbLoggerCategory.Database;

namespace gamecontroller.Services
{
	public class WebsocketIncomingService
	{
		private readonly LobbySingleton _lobbySingleton;

		public WebsocketIncomingService(LobbySingleton lobbySingleton)
		{
			_lobbySingleton = lobbySingleton;
		}

		public void HandleNewWebsocket(Guid PlayerGuid, WebSocket webSocket)
		{
			_ = Task.Run(async () => await WebsocketRecieveLoop(PlayerGuid, webSocket));
		}

		private async Task WebsocketRecieveLoop(Guid PlayerGuid, WebSocket webSocket)
		{
			var buffer = new ArraySegment<byte>(new byte[9999]); // TODO: hardcoding size bad

			while (webSocket.State == WebSocketState.Open)
			{
				WebSocketReceiveResult result;
				var message = new StringBuilder();

				do
				{
					result = await webSocket.ReceiveAsync(buffer, CancellationToken.None);

					if (result.MessageType == WebSocketMessageType.Text)
					{
						var messageChunk = Encoding.UTF8.GetString(buffer.Array, 0, result.Count);
						message.Append(messageChunk);
					}
					else if (result.MessageType == WebSocketMessageType.Close)
					{
						await webSocket.CloseAsync(
							WebSocketCloseStatus.NormalClosure,
							"Closing",
							CancellationToken.None);

						_lobbySingleton.RemovePlayerFromAllLobbies(PlayerGuid, webSocket);

						break;
					}
				} while (!result.EndOfMessage);

				if (webSocket.State == WebSocketState.Open && message.Length > 0)
				{
					var messageText = message.ToString();

					ProcessClientMessage(PlayerGuid, webSocket, JsonSerializer.Deserialize<WebsocketMessage>(messageText));
				}
			}
		}

		private void ProcessClientMessage(Guid PlayerGuid, WebSocket webSocket, WebsocketMessage? message)
		{
			if (message != null)
			{
				if (message.MessageType == "ChatMessage")
				{
					WebsocketChatMessage? websocketChatMessage = JsonSerializer.Deserialize<WebsocketChatMessage>(message.Message);

					if (websocketChatMessage != null)
					{
						_lobbySingleton.HandleChatMessage(PlayerGuid, websocketChatMessage);
					}
				}
				else if(message.MessageType == "CharacterSelection")
				{
					WebsocketCharacterSelection? websocketCharacterSelection = JsonSerializer.Deserialize<WebsocketCharacterSelection>(message.Message);

					if(websocketCharacterSelection != null)
					{
						_lobbySingleton.HandleCharacterSelection(PlayerGuid, websocketCharacterSelection);
					}
				}
				else if (message.MessageType == "SkinSelection")
				{
					WebsocketSkinSelection? websocketSkinSelection = JsonSerializer.Deserialize<WebsocketSkinSelection>(message.Message);

					if (websocketSkinSelection != null)
					{
						_lobbySingleton.HandleSkinSelection(PlayerGuid, websocketSkinSelection);
					}
				}
				else if (message.MessageType == "TauntSelection")
				{
					WebsocketTauntSelection? websocketTauntSelection = JsonSerializer.Deserialize<WebsocketTauntSelection>(message.Message);

					if (websocketTauntSelection != null)
					{
						_lobbySingleton.HandleTauntSelection(PlayerGuid, websocketTauntSelection);
					}
				}
				else if (message.MessageType == "GearSelection")
				{
					WebsocketGearSelection? websocketGearSelection = JsonSerializer.Deserialize<WebsocketGearSelection>(message.Message);

					if (websocketGearSelection != null)
					{
						_lobbySingleton.HandleGearSelection(PlayerGuid, websocketGearSelection);
					}
				}
				else if (message.MessageType == "MapModeSelection")
				{
					WebsocketMapModeSelection? websocketMapModeSelection = JsonSerializer.Deserialize<WebsocketMapModeSelection>(message.Message);

					if (websocketMapModeSelection != null)
					{
						_lobbySingleton.HandleMapModeSelection(PlayerGuid, websocketMapModeSelection);
					}
				}
				else if (message.MessageType == "LaunchMatch")
				{
					_lobbySingleton.HandleLaunchMatch(PlayerGuid);
				}
				else if (message.MessageType == "SwitchTeam")
				{
					WebsocketSwitchTeam? websocketSwitchTeam = JsonSerializer.Deserialize<WebsocketSwitchTeam>(message.Message);

					if(websocketSwitchTeam != null)
					{
						_lobbySingleton.HandleSwitchTeam(PlayerGuid, websocketSwitchTeam);
					}
				}
			}
		}
	}
}
