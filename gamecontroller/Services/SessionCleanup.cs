using gamecontroller.Models;
using gamecontroller.Singletons;
using Microsoft.Extensions.Hosting;
using System.Diagnostics;

public class SessionCleanupService : BackgroundService
{
	private readonly ILogger<SessionCleanupService> _logger;
	private readonly LobbySingleton _lobbySingleton;

	public SessionCleanupService(ILogger<SessionCleanupService> logger, LobbySingleton lobbySingleton)
	{
		_logger = logger;
		_lobbySingleton = lobbySingleton;
	}

	protected override async Task ExecuteAsync(CancellationToken stoppingToken)
	{
		while (!stoppingToken.IsCancellationRequested)
		{
			CleanupPlayers();
			CleanupLobbies();
			CleanupSessions();

			await Task.Delay(5000, stoppingToken);
		}
	}

	private void CleanupPlayers()
	{
		foreach(Lobby lobby in _lobbySingleton.Lobbies)
		{
			List<LobbyPlayer> playersToRemove = new List<LobbyPlayer>();

			foreach (LobbyPlayer lobbyPlayer in lobby.LobbyPlayers)
			{
				if((DateTime.UtcNow - lobbyPlayer.JoinedAt).TotalSeconds > 60 && lobbyPlayer.WebSocket == null)
				{
					playersToRemove.Add(lobbyPlayer);
				}
			}

			foreach (LobbyPlayer lobbyPlayer in playersToRemove)
			{
				lobby.RemovePlayer(lobbyPlayer.Guid);
			}
		}
	}

	private void CleanupLobbies()
	{
		_lobbySingleton.Lobbies.RemoveAll(e => (DateTime.UtcNow - e.LobbyCreatedAt).TotalSeconds > 60 && e.LobbyPlayers.Count == 0);
	}

	private void CleanupSessions()
	{
		foreach (Lobby lobby in _lobbySingleton.Lobbies)
		{
			if(lobby.GameInstance != null && (DateTime.UtcNow - lobby.GameInstance.LastServerCheckIn).TotalSeconds > 20)
			{
				lobby.MatchShutdown();
			}
		}
	}
}