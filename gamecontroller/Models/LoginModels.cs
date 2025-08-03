using System.IdentityModel.Tokens.Jwt;
using System.Security.Claims;

namespace gamecontroller.Models
{
	public class LoginRequest
	{
		public string Name { get; set; }
	}
	
	public class LoginResult
	{
		public Guid MyGuid { get; set; }
		public string AuthToken { get; set; }

		public LoginResult(Guid myGuid, string authToken)
		{
			MyGuid = myGuid;
			AuthToken = authToken;
		}
	}
}
