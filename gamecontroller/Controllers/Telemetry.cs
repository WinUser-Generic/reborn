using gamecontroller.Middleware;
using gamecontroller.Singletons;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace gamecontroller.Controllers
{
	[Route("api/telemetry")]
	[ApiController]
	public class Telemetry : ControllerBase
	{
		RCONAuth RCONAuth = new RCONAuth();

		private readonly ILogger<Telemetry> _logger;

		private readonly GameSessions _gameSessions;

		private readonly DatabaseSessions _databaseSessions;
		public Telemetry(ILogger<Telemetry> logger, GameSessions sessions, DatabaseSessions databaseSessions) {
			_logger = logger;
			_gameSessions = sessions;
			_databaseSessions = databaseSessions;
		}

		[HttpPost("event")]
		public async Task<StatusCodeResult> TelemetryEvent([FromBody] TelemetryEvent Event)
		{
			/*
			if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
			{
				foreach (GameInstance instance in _gameSessions.gameInstances)
				{
					if (instance.ServerAuthToken.Equals(authHeader))
					{
						// TODO: Yes you could technically have a discrepancy between the Server Token you use to authenticate and the Server Token you're reporting for,
						// But we consider all server tokens to be "safe", and only accessible to trusted people
						var Log = await _databaseSessions.TelemetryContext.Logs.FindAsync(authHeader);

						if(Log == null)
						{
							Log = _databaseSessions.TelemetryContext.Logs.Add(new TelemetryMatchLogs(authHeader, Event)).Entity;
						}
						else
						{
							Log.TelemetryEvents.Add(Event);
						}

						await _databaseSessions.TelemetryContext.SaveChangesAsync();

						return Ok();
					}
				}
			}
			*/

			// TODO: unfuck this after refactor

			return Ok();
		}

		[HttpPost("snapshot")]
		public async Task<StatusCodeResult> TelemetrySnapshot([FromBody] TelemetrySnapshot Snapshot)
		{
			/*
			if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
			{
				foreach (GameInstance instance in _gameSessions.gameInstances)
				{
					if (instance.ServerAuthToken.Equals(authHeader))
					{
						// TODO: Yes you could technically have a discrepancy between the Server Token you use to authenticate and the Server Token you're reporting for,
						// But we consider all server tokens to be "safe", and only accessible to trusted people
						var Log = await _databaseSessions.TelemetryContext.Logs.FindAsync(authHeader);

						if (Log == null)
						{
							Log = _databaseSessions.TelemetryContext.Logs.Add(new TelemetryMatchLogs(authHeader, Snapshot)).Entity;
						}
						else
						{
							Log.TelemetrySnapshots.Add(Snapshot);
						}

						await _databaseSessions.TelemetryContext.SaveChangesAsync();

						Console.WriteLine(Snapshot.MatchGUID.ToString());

						return Ok();
					}
				}
			}
			*/

            // TODO: unfuck this after refactor

            return Ok();
        }

		[HttpGet]
		public async Task<List<TelemetryMatchLogs>> GetTelemetry()
		{
			if (await RCONAuth.HasValidRCONAuth(HttpContext))
			{
				return await _databaseSessions.TelemetryContext.Logs.ToListAsync();
			}

			return [];
		}
	}
}
