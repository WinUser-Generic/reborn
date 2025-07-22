using Microsoft.EntityFrameworkCore;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Numerics;

namespace gamecontroller
{
    public class TelemetryContext : DbContext
    {
        public DbSet<TelemetryMatchLogs> Logs { get; set; }

		public string DbPath { get; }

		public TelemetryContext()
		{
			DbPath = "telemetry.db";
		}

		protected override void OnConfiguring(DbContextOptionsBuilder options)
			=> options.UseSqlite($"Data Source={DbPath}");
	}

    public class TelemetryMatchLogs
    {
        [Key]
        public string MatchGUID { get; set; }

        public List<TelemetryEvent> TelemetryEvents { get; set; }
        public List<TelemetrySnapshot> TelemetrySnapshots { get; set; }

        public TelemetryMatchLogs(string matchGUID, TelemetryEvent seedEvent)
        {
            MatchGUID = matchGUID;
            TelemetryEvents = new List<TelemetryEvent>();
            TelemetrySnapshots = new List<TelemetrySnapshot>();
            TelemetryEvents.Add(seedEvent);
        }

		public TelemetryMatchLogs(string matchGUID, TelemetrySnapshot seedSnapshot)
		{
			MatchGUID = matchGUID;
			TelemetryEvents = new List<TelemetryEvent>();
			TelemetrySnapshots = new List<TelemetrySnapshot>();
			TelemetrySnapshots.Add(seedSnapshot);
		}

        public TelemetryMatchLogs()
        {
            MatchGUID = "";
            TelemetryEvents = new List<TelemetryEvent>();
            TelemetrySnapshots = new List<TelemetrySnapshot>();
        }
	}

    public class TelemetryEvent
    {
        [Key]
		public DateTime Timestamp { get; set; }

		public required string MatchGUID { get; set; }

		public required string EventName { get; set; }

        public bool IsError { get; set; }
    }

    public class TelemetrySnapshot
    {
        [Key]
        public DateTime Timestamp { get; set; }

		public required string MatchGUID { get; set; }

		public float TargetTickrate { get; set; }

        public float EffectiveTickrate { get; set; }

        public required List<int> ReplicationFNames { get; set; }

        public int PlayersConnected { get; set; }

        public int MaxPlayers { get; set; }

        public int MemoryUsageMB { get; set; }
    }

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
