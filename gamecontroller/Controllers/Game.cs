using Microsoft.AspNetCore.Mvc;
using gamecontroller.Middleware;
using System.Diagnostics;
using gamecontroller.Singletons;
using gamecontroller.Models;

namespace gamecontroller.Controllers
{
    // TODO: Refactor this whole thing, clients used to hit here but no longer, so this should be refactored to reflect it's server only nature

    [ApiController]
    [Route("api/games")]
    public class Game : ControllerBase
    {
        private readonly ILogger<Game> _logger;

        private readonly GameSessions _gameSessions;

        private readonly LobbySingleton _lobbySingleton;

        public Game(ILogger<Game> logger, LobbySingleton lobbySingleton)
        {
            _logger = logger;
            _lobbySingleton = lobbySingleton;
        }

        [HttpGet("server-config")]
        public GameCreationConfig? GetServerConfig()
        {
			if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
            {
                foreach(Lobby lobby in _lobbySingleton.Lobbies)
                {
                    if(lobby.GameInstance != null && lobby.GameInstance.MyGuid.Equals(authHeader))
                    {
                        return lobby.GameInstance.Config;
                    }
                }
            }

			HttpContext.Response.StatusCode = 401;
            return null;
        }

        [HttpPost("server-allow-player-join")]
        public void PostServerPoll([FromBody] AllowPlayerJoin playerJoin)
        {
			if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
			{
                foreach (Lobby lobby in _lobbySingleton.Lobbies)
                {
                    if (lobby.GameInstance != null && lobby.GameInstance.MyGuid.Equals(authHeader))
                    {
                        lobby.PlayerIndexToAllowJoin = playerJoin.PlayerIndex;
                        lobby.AllowJoin = true;

                        HttpContext.Response.StatusCode = 200;
                        return;
                    }
				}
			}

            HttpContext.Response.StatusCode = 401;
            return;
        }

        [HttpPost("server-match-natural-shutdown")]
        public void ServerMatchNaturalShutdown()
        {
            if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
            {
                foreach (Lobby lobby in _lobbySingleton.Lobbies)
                {
                    if (lobby.GameInstance != null && lobby.GameInstance.MyGuid.Equals(authHeader))
                    {
                        lobby.MatchShutdown();

                        HttpContext.Response.StatusCode = 200;
                        return;
                    }
                }
            }

            HttpContext.Response.StatusCode = 401;
            return;
        }

        [HttpPost("server-poll")]
        public void ServerPoll()
        {
            if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
            {
                foreach (Lobby lobby in _lobbySingleton.Lobbies)
                {
                    if (lobby.GameInstance != null && lobby.GameInstance.MyGuid.Equals(authHeader))
                    {
                        lobby.GameInstance.LastServerCheckIn = DateTime.UtcNow;
                    }
                }
            }
        }
    }
}