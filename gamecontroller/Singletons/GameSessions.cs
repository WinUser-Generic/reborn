using gamecontroller.Models;

namespace gamecontroller.Singletons
{
	public class GameSessions
	{
		private readonly LobbySingleton _lobbySingleton;

		public List<int> ports = [7777, 7778, 7779];

		public GameSessions(LobbySingleton lobbySingleton)
		{
			_lobbySingleton = lobbySingleton;
		}

		public List<int> GetAvailablePorts()
		{
			List<int> retPorts = new List<int>();

			foreach (int port in ports)
			{
				bool shouldAdd = true;

				foreach (Lobby lobby in _lobbySingleton.Lobbies)
				{
					if(lobby.GameInstance != null && lobby.GameInstance.Port == port)
					{
						shouldAdd = false;
						break;
					}
				}

				if (shouldAdd)
				{
					retPorts.Add(port);
				}
			}

			return retPorts;
		}

		public async Task LaunchNewGame(GameCreationConfig config)
		{
			 
		}
	}
}
