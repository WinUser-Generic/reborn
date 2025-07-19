#include "GameCoordinator.hpp"

#include "Globals.hpp"
#include "Constants.hpp"

namespace GameCoordinator {
    void RefreshServerBrowser() {
        httplib::Result result;

        if (!Globals::GameCoordinatorHttpClient.get()) {
            Globals::GameCoordinatorHttpClient = std::make_shared<httplib::Client>(Constants::GameCoordinatorEndpoint);
        }

        result = Globals::GameCoordinatorHttpClient.get()->Get("/api/games");

        if (!result || result->status != 200) {
            std::cout << "[NETWORKING] Failed to refresh server list!" << std::endl;
            return;
        }

        Globals::ServerBrowserEntries.clear();

        std::vector<nlohmann::json> entries = nlohmann::json::parse(result->body).get<std::vector<nlohmann::json>>();

        for (nlohmann::json browserEntry : entries) {
            Globals::ServerBrowserEntries.push_back(ServerBrowserEntry(browserEntry));
        }

        return;
    }
}