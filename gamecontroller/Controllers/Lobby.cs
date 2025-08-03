using gamecontroller.Middleware;
using gamecontroller.Models;
using gamecontroller.Services;
using gamecontroller.Singletons;
using Microsoft.AspNetCore.Mvc;
using System.Net.WebSockets;

namespace gamecontroller.Controllers
{
	[ApiController]
	[Route("api/lobby")]
	public class LobbyController : Controller {
		private readonly LobbySingleton _lobbySingleton;
		private readonly StinkyWordService _stinkyWordService;

		public LobbyController(LobbySingleton lobbySingleton, StinkyWordService stinkyWordService) {
			_lobbySingleton = lobbySingleton;
			_stinkyWordService = stinkyWordService;
		}

		[HttpGet]
		[ServiceFilter(typeof(PlayerAuthActionFilter))]
		public ActionResult<List<Lobby>> GetAllLobbies()
		{
			return _lobbySingleton.Lobbies;
		}

		[HttpPost]
		[ServiceFilter(typeof(PlayerAuthActionFilter))]
		public ActionResult<Lobby> CreateLobby([FromBody] LobbyCreationConfig config)
		{
			// TODO: Validate tags to ensure they're on the list of allowed tags
			if (_stinkyWordService.StringContainsNoNoWords(config.LobbyName))
			{
				return Unauthorized();
			}

			if (HttpContext.Items["guid"] is Guid)
			{
				if (!_lobbySingleton.PlayerHasAnyOtherLobbies(HttpContext.Items["guid"] as Guid?) && !_lobbySingleton.PlayerIsInAnyLobbies(HttpContext.Items["guid"] as Guid?))
				{
					return _lobbySingleton.CreateLobby(config);
				}

				return Conflict();
			}

			return Unauthorized();
		}

		[HttpPost("join")]
		[ServiceFilter(typeof(PlayerAuthActionFilter))]
		public IActionResult JoinLobby([FromBody] LobbyJoinConfig config)
		{
			if(_lobbySingleton.PlayerIsInAnyLobbies(HttpContext.Items["guid"] as Guid?))
			{
				return Conflict();
			}

			Guid lobbyGuid = Guid.Parse(config.LobbyGuid);

			Lobby? lobby = _lobbySingleton.GetLobbyFromGuid(lobbyGuid);

			if (lobby == null)
			{
				return NotFound();
			}

			if (lobby.Password != null)
			{
				if (!lobby.Password.Equals(config.Password))
				{
					return Unauthorized();
				}
			}

			if (lobby.AddPlayerAndAssignToTeam(HttpContext))
			{
				return Ok();
			}

			return Conflict();
		}

		[HttpGet("connecttows")]
		[ServiceFilter(typeof(PlayerAuthActionFilter))]
		public async Task<IActionResult> ConnectToWs()
		{
			Lobby? lobby = _lobbySingleton.GetPlayersLobby(HttpContext.Items["guid"] as Guid?);

			if(lobby == null)
			{
				return NotFound();
			}

			WebSocket ws = await HttpContext.WebSockets.AcceptWebSocketAsync();

			lobby.AddWebsocket((HttpContext.Items["guid"] as Guid?).Value, ws);

			return Ok();
		}
	}
}
