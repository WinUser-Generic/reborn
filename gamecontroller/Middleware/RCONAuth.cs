using Microsoft.AspNetCore.Builder;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc.Filters;
using System.Threading.Tasks;

namespace gamecontroller.Middleware
{
	// You may need to install the Microsoft.AspNetCore.Http.Abstractions package into your project
	public class RCONAuth
	{
		private readonly string _RCONToken;

		public RCONAuth()
		{
			_RCONToken = Environment.GetEnvironmentVariable("RCON_TOKEN") ??
						 throw new InvalidOperationException("RCON_TOKEN environment variable is not set");
		}

		public async Task<bool> HasValidRCONAuth(HttpContext context)
		{
			if (!context.Request.Headers.TryGetValue("Authorization", out var authHeader))
			{
				return false;
			}

			var token = authHeader.ToString();

			if (token.StartsWith("Bearer ", StringComparison.OrdinalIgnoreCase))
			{
				token = token.Substring(7);
			}

			if (string.IsNullOrEmpty(token) || !string.Equals(token, _RCONToken, StringComparison.Ordinal))
			{
				return false;
			}

			return true;
		}
	}

	// Extension method used to add the middleware to the HTTP request pipeline.
	public static class HasRCONAuthExtensions
	{
		public static IApplicationBuilder UseHasRCONAuth(this IApplicationBuilder builder)
		{
			return builder.UseMiddleware<RCONAuth>();
		}
	}
}
