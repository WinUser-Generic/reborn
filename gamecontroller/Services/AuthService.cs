using gamecontroller.Models;
using Microsoft.IdentityModel.Tokens;
using System.IdentityModel.Tokens.Jwt;
using System.Security.Claims;
using System.Text;

namespace gamecontroller.Services
{
	public class AuthService
	{
		private readonly string _jwtKey;
		private readonly JwtSecurityTokenHandler _jwtHandler;

		public AuthService() {
			_jwtKey = Environment.GetEnvironmentVariable("JWT_KEY");
			_jwtHandler = new JwtSecurityTokenHandler();
		}

		public LoginResult AuthorizeLoginRequest(LoginRequest loginRequest)
		{
			Guid guid = Guid.NewGuid();

			List<Claim> claims = new List<Claim>
			{
				new Claim("guid", guid.ToString()),
				new Claim("name", loginRequest.Name)
			};

			SecurityTokenDescriptor descriptor = new SecurityTokenDescriptor
			{
				Subject = new ClaimsIdentity(claims),
				Expires = DateTime.UtcNow.AddDays(1),
				Issuer = "reborn-gamecontroller",
				Audience = "reborn-gamecontroller",
				SigningCredentials = new SigningCredentials(new SymmetricSecurityKey(Encoding.UTF8.GetBytes(_jwtKey)), SecurityAlgorithms.HmacSha256Signature)
			};

			string token = _jwtHandler.CreateEncodedJwt(descriptor);

			return new LoginResult(guid, token);
		}

		public ClaimsPrincipal? ValidateJWT(string JWT)
		{
			try
			{
				var tokenHandler = new JwtSecurityTokenHandler();
				var key = Encoding.UTF8.GetBytes(_jwtKey);

				var validationParameters = new TokenValidationParameters
				{
					ValidateIssuer = true,
					ValidateAudience = true,
					ValidateLifetime = true,
					ValidateIssuerSigningKey = true,
					ValidIssuer = "reborn-gamecontroller",
					ValidAudience = "reborn-gamecontroller",
					IssuerSigningKey = new SymmetricSecurityKey(key),
					ClockSkew = TimeSpan.Zero
				};

				var principal = tokenHandler.ValidateToken(JWT, validationParameters, out _);
				return principal;
			}
			catch
			{
				return null;
			}
		}
	}
}
