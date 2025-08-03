using gamecontroller.Models;
using gamecontroller.Services;
using Microsoft.AspNetCore.Mvc;

namespace gamecontroller.Controllers
{
	[ApiController]
	[Route("/api/login")]
	public class LoginController : Controller
	{
		private readonly StinkyWordService _noNoWordService;
		private readonly AuthService _authService;
		public LoginController(StinkyWordService noNoWordService, AuthService authService)
		{
			_noNoWordService = noNoWordService;
			_authService = authService;
		}

		[HttpPost]
		public ActionResult<LoginResult> Login([FromBody] LoginRequest request)
		{
			if (!_noNoWordService.StringContainsNoNoWords(request.Name))
			{
				return Ok(_authService.AuthorizeLoginRequest(request));
			}
			else {
				return Unauthorized();
			}
		}
	}
}
