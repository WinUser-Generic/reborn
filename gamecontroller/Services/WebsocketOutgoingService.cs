
using gamecontroller.Models;
using gamecontroller.Singletons;
using System.Linq.Expressions;
using System.Net.WebSockets;
using System.Text;
using System.Text.Json;

namespace gamecontroller.Services
{
	public class WebsocketOutgoingService : BackgroundService
	{
		private readonly LobbySingleton _lobbySingleton;
		private CancellationTokenSource _cancellationTokenSource;

		public WebsocketOutgoingService(LobbySingleton lobbySingleton) {
			_lobbySingleton = lobbySingleton;
		}

		protected async override Task ExecuteAsync(CancellationToken stoppingToken)
		{
			while (!stoppingToken.IsCancellationRequested)
			{
				try
				{
					await SendDirtyLobbyStates();
					await SendDirtyChatMessages();
					await SendJoinMessages();
				}
				catch (OperationCanceledException)
				{
					break;
				}
				catch (Exception ex)
				{
					// TODO: something should probably be here...
				}
			}
		}

		private async Task SendDirtyLobbyStates()
		{
			foreach (Lobby lobby in _lobbySingleton.Lobbies)
			{
				if (lobby.Dirty)
				{
					lobby.Dirty = false;

					foreach (LobbyPlayer player in lobby.LobbyPlayers)
					{
						WebSocket? ws = player.WebSocket;

						if (ws != null)
                        {
                            string lobbyPayload = JsonSerializer.Serialize(lobby);

                            WebsocketMessage message = new WebsocketMessage("LobbyUpdate", lobbyPayload); // TODO: JSON in JSON? what is this, phx labs?

                            string messagePayload = JsonSerializer.Serialize(message);

                            byte[] bytes = Encoding.UTF8.GetBytes(messagePayload);

                            await ws.SendAsync(bytes, WebSocketMessageType.Text, true, _cancellationTokenSource.Token);
                        }
					}
				}
			}
		}

		private async Task SendDirtyChatMessages()
		{
			foreach(Lobby lobby in _lobbySingleton.Lobbies)
			{
				if (lobby.ChatMessagesDirty)
				{
					lobby.ChatMessagesDirty = false;

                    foreach (LobbyPlayer player in lobby.LobbyPlayers)
                    {
                        WebSocket? ws = player.WebSocket;

						if (ws != null)
						{
							string chatPayload = JsonSerializer.Serialize(lobby.ChatMessages);

							WebsocketMessage message = new WebsocketMessage("Chat", chatPayload);

							string messagePayload = JsonSerializer.Serialize(message);

							byte[] bytes = Encoding.UTF8.GetBytes(messagePayload);

							await ws.SendAsync(bytes, WebSocketMessageType.Text, true, _cancellationTokenSource.Token);
						}
					}

					lobby.ChatMessages.Clear();
				}
			}
		}

		private async Task SendJoinMessages()
		{
			foreach (Lobby lobby in _lobbySingleton.Lobbies)
			{
				if (lobby.AllowJoin)
				{
					lobby.AllowJoin = false;

					LobbyPlayer player = lobby.LobbyPlayers[lobby.PlayerIndexToAllowJoin];

					WebsocketJoinMessage joinMessage = new WebsocketJoinMessage
					{
						IpToJoin = lobby.GameInstance.ConnectionString
					};

					string joinPayload = JsonSerializer.Serialize(joinMessage);

                    WebsocketMessage message = new WebsocketMessage("Join", joinPayload);

                    string messagePayload = JsonSerializer.Serialize(message);

                    byte[] bytes = Encoding.UTF8.GetBytes(messagePayload);

					if (player.WebSocket != null) {
						await player.WebSocket.SendAsync(bytes, WebSocketMessageType.Text, true, _cancellationTokenSource.Token);
					}
				}
			}
		}
	}
}
