using Microsoft.AspNetCore.Mvc;
using gamecontroller.Middleware;
using System.Diagnostics;
using gamecontroller.Singletons;

namespace gamecontroller.Controllers
{
    [ApiController]
    [Route("api/games")]
    public class Game : ControllerBase
    {
        private RCONAuth _RCONAuth;   

        private List<GameInstance> GetGameInstances()
        {
            return _gameSessions.gameInstances;
        }

        private async Task<string> GetPublicIp()
        {
            HttpClient httpClient = new HttpClient();

            var response = await httpClient.GetAsync("https://checkip.amazonaws.com");

            return (await response.Content.ReadAsStringAsync()).Replace("\n", "");
        }

        private int? GetFreePort()
        {
            List<int> freePorts = new List<int>();

            foreach (var port in _gameSessions.ports)
            {
                bool taken = false;

                foreach (var instance in GetGameInstances())
                {
                    if (instance.ServerConfig.Port == port)
                    {
                        taken = true;
                        break;
                    }
                }

                if (!taken)
                {
                    freePorts.Add(port);
                }
            }

            return freePorts.Count > 0 ? freePorts[0] : null;
        }

        private async Task<GameInstance> StartGameInstance(GameCreationConfig config)
        {
            int port = GetFreePort().Value;

            string serverIp = await GetPublicIp();

            GameInstance instance = new GameInstance(config, serverIp, port);

            var proc = Process.Start(new ProcessStartInfo("Serverborn.exe", "-SEEKFREEPACKAGEMAP -SEEKFREELOADINGPCCONSOLE GameCoordinator localhost:5000 "+instance.ServerAuthToken));

            instance.PID = proc.Id;

            return instance;
        }

        private readonly ILogger<Game> _logger;

        private readonly GameSessions _gameSessions;

        public Game(ILogger<Game> logger, GameSessions sessions)
        {
            _logger = logger;
            _RCONAuth = new RCONAuth();
            _gameSessions = sessions;
        }

        [HttpGet]
        public List<GameInstance> Get()
        {
			return GetGameInstances();
        }

        [HttpPost]
        public async Task<bool> Post([FromBody] GameCreationConfig config)
        {
            if(await _RCONAuth.HasValidRCONAuth(HttpContext) && GetFreePort().HasValue)
            {
                GameInstance newInstance = await StartGameInstance(config);

                _gameSessions.gameInstances.Add(newInstance);

                return true;
            }

            return false;
        }

        [HttpGet("server-config")]
        public ServerConfig? GetServerConfig()
        {
			if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
            {
                foreach(GameInstance instance in GetGameInstances())
                {
                    if(instance.ServerAuthToken.Equals(authHeader))
                    {
                        return instance.ServerConfig;
                    }
                }
            }

			HttpContext.Response.StatusCode = 401;
            return null;
        }

        [HttpPost("server-poll")]
        public void PostServerPoll([FromBody] ServerPollUpdate update)
        {
			if (HttpContext.Request.Headers.TryGetValue("X-Server-Token", out var authHeader))
			{
				foreach (GameInstance instance in GetGameInstances())
				{
					if (instance.ServerAuthToken.Equals(authHeader))
					{
                        instance.CurrentNumPlayers = update.ConnectedPlayers;
                        instance.LastUpdateTime = DateTime.UtcNow;
                        instance.MatchStarted = update.HumansHaveStarted;

						HttpContext.Response.StatusCode = 200;
						return;
					}
				}
			}
            HttpContext.Response.StatusCode = 401;
            return;
        }
    }
}
