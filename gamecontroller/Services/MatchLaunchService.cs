
using gamecontroller.Models;
using gamecontroller.Singletons;

namespace gamecontroller.Services
{
    public class MatchLaunchService : BackgroundService
    {
        public LobbySingleton _lobbySingleton;
        public GameSessions _gameSessions;

        public MatchLaunchService(LobbySingleton lobbySingleton, GameSessions gameSessions)
        {
            _lobbySingleton = lobbySingleton;
            _gameSessions = gameSessions;
        }

        protected override async Task ExecuteAsync(CancellationToken stoppingToken)
        {
            while (stoppingToken.IsCancellationRequested)
            {
                await CheckAndLaunchMatches();

                await Task.Delay(1000);
            }
        }

        private async Task CheckAndLaunchMatches()
        {
            foreach(Lobby lobby in _lobbySingleton.Lobbies)
            {
                if(lobby.State == ELobbyState.WaitingForServer && _gameSessions.GetAvailablePorts().Count > 0)
                {
                    await _gameSessions.LaunchNewGame(lobby);
                }
            }
        }
    }
}
