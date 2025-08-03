using gamecontroller.Models;
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

    public class PlayerConfig
    {
        public string Name { get; set; }
        public int TeamId { get; set; }
        public string CharacterObjectName { get; set; }
        public string? TauntObjectName { get; set; }
        public string? SkinObjectName { get; set; }
        public string? GearSlotOneObjectName { get; set; }
        public string? GearSlotTwoObjectName { get; set; }
        public string? GearSlotThreeObjectName { get; set; }

        public PlayerConfig(LobbyPlayer lobbyPlayer)
        {
            Name = lobbyPlayer.Name;
            CharacterObjectName = lobbyPlayer.CharacterObjectName; // This is validated as not null by launch reqs
            TauntObjectName = lobbyPlayer.TauntObjectName;
            SkinObjectName = lobbyPlayer.SkinObjectName;
            GearSlotOneObjectName = lobbyPlayer.GearSlotOneObjectName;
            GearSlotTwoObjectName = lobbyPlayer.GearSlotTwoObjectName;
            GearSlotThreeObjectName = lobbyPlayer.GearSlotThreeObjectName;
        }
    }

    public class GameInstance
    {
        public int PID { get; set; }
        public string ConnectionString { get; set; }
        public int Port { get; set; }
    }

    public class GameCreationConfig
    {
        public string InstanceName { get; set; }

		public string HumanReadableInstanceMapMode { get; set; }

		public string ServerStartupCommand { get; set; }

		public int MaxNumPlayers { get; set; }

        public List<PlayerConfig> PlayerConfigs { get; set; }

		public GameCreationConfig(Lobby lobby) //string InstanceName, string HumanReadableInstanceMapMode, string ServerStartupCommand, List<LobbyPlayer> lobbyPlayers
		{
            this.InstanceName = lobby.Name;
            this.HumanReadableInstanceMapMode = lobby.HumanReadableMapModeName; // validated by launch reqs
            this.ServerStartupCommand = lobby.ServerStartString; // validated by launch reqs

			PlayerConfigs = lobby.LobbyPlayers.Select(e => new PlayerConfig(e)).ToList();

			this.MaxNumPlayers = PlayerConfigs.Count;
		}
    }
}
