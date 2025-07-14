namespace gamecontroller
{
    public class ServerPollUpdate
    {
		public int ConnectedPlayers { get; set; }

        public bool HumansHaveStarted { get; set; }
	}

    public class ServerConfig
    {
        public int Port { get; set; }

        public string ServerStartupCommand { get; set; }

		public int MaxNumPlayers { get; set; }

		public ServerConfig(int port, string ServerStartupCommand, int MaxNumPlayers)
        {
            this.Port = port;
            this.ServerStartupCommand = ServerStartupCommand;
            this.MaxNumPlayers = MaxNumPlayers;
        }
    }

    public class GameInstance
    {
        public string InstanceName { get; set; }

        public string HumanReadableInstanceMapMode { get; set; }

		public int CurrentNumPlayers { get; set; }

        public int MaxNumPlayers { get; set; }

		public string ServerConnectString { get; set; }

        public bool MatchStarted { get; set; }

        public string ServerAuthToken;

        public ServerConfig ServerConfig;

        public int? PID;

        public DateTime? LastUpdateTime;

		public GameInstance(GameCreationConfig config, string publicip, int port) { 
            this.InstanceName = config.InstanceName;
            this.HumanReadableInstanceMapMode = config.HumanReadableInstanceMapMode;
            this.MaxNumPlayers = config.MaxNumPlayers;
            this.CurrentNumPlayers = 0;
            this.MatchStarted = false;

            this.ServerAuthToken = Guid.NewGuid().ToString();
            this.ServerConfig = new ServerConfig(port, config.ServerStartupCommand, MaxNumPlayers);

			this.ServerConnectString = "open "+publicip+":"+port.ToString();
		}
    }

    public class GameCreationConfig
    {
        public string InstanceName { get; set; }

		public string HumanReadableInstanceMapMode { get; set; }

		public string ServerStartupCommand { get; set; }

		public int MaxNumPlayers { get; set; }

		public GameCreationConfig(string InstanceName, string HumanReadableInstanceMapMode, string ServerStartupCommand, int MaxNumPlayers)
        {
            this.InstanceName = InstanceName;
            this.HumanReadableInstanceMapMode = HumanReadableInstanceMapMode;
            this.ServerStartupCommand = ServerStartupCommand;
            this.MaxNumPlayers = MaxNumPlayers;
        }
    }
}
