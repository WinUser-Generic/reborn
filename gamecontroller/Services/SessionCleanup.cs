using gamecontroller.Singletons;
using Microsoft.Extensions.Hosting;
using System.Diagnostics;

public class SessionCleanupService : BackgroundService
{
	private readonly ILogger<SessionCleanupService> _logger;
	private readonly GameSessions _gameSessions;

	public SessionCleanupService(ILogger<SessionCleanupService> logger, GameSessions gameSessions)
	{
		_logger = logger;
		_gameSessions = gameSessions;
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
		foreach(var instance in _gameSessions.gameInstances)
		{
			if(instance.LastUpdateTime.HasValue && (DateTime.UtcNow - instance.LastUpdateTime).Value.Seconds > 10)
			{
				if (instance.PID.HasValue)
				{
					Process? process = Process.GetProcessById(instance.PID.Value);

					if(process != null && !process.HasExited)
					{
						process.Kill();
					}
				}
			}
		}

		_gameSessions.gameInstances.RemoveAll(instance =>
		{
			Console.WriteLine(instance.LastUpdateTime);
			return instance.LastUpdateTime.HasValue &&
				   (DateTime.UtcNow - instance.LastUpdateTime.Value).TotalSeconds > 10;
		});
	}
}