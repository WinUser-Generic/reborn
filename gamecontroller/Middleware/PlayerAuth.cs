using gamecontroller.Services;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Filters;

namespace gamecontroller.Middleware
{
	public class PlayerAuthActionFilter : IActionFilter
	{
		private readonly AuthService _authService;

		public PlayerAuthActionFilter(AuthService authService)
		{
			_authService = authService;
		}

		public void OnActionExecuting(ActionExecutingContext context)
		{
			var token = context.HttpContext.Request.Headers["Authorization"]
				.FirstOrDefault()?.Split(" ").Last();

			if (!string.IsNullOrEmpty(token))
			{
				var principal = _authService.ValidateJWT(token);
				if (principal != null)
				{
					var guid = principal.FindFirst("guid")?.Value;
					var name = principal.FindFirst("name")?.Value;

					context.HttpContext.Items["guid"] = Guid.Parse(guid);
					context.HttpContext.Items["name"] = name;
				}
				else
				{
					context.Result = new UnauthorizedObjectResult(new { message = "Unauthorized" });
					return;
				}
			}
			else
			{
				context.Result = new UnauthorizedObjectResult(new { message = "Unauthorized" });
				return;
			}	
		}

		public void OnActionExecuted(ActionExecutedContext context) { }
	}
}
