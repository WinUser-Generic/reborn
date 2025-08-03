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
			CleanupSessions();

			await Task.Delay(5000, stoppingToken);
		}
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