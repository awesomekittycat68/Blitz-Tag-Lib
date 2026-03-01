#include "../Include/httplib.h"
#include "../Include/json.hpp"
#include "Logger.hpp"
#include <string>
#include <functional>
#include <optional>
#include <cstdint>

class Backend {
public:
    enum class MothershipClientDataRole : int {
        None = -1,
        Moderator,
        Admin,
        Owner
    };

    enum MothershipClientDataError : int {
        Unknown = -1,
        NewUpdate
    };

    struct MothershipClientDataUser {
        std::string UserId;
        std::string Username;
        MothershipClientDataRole Role;
    };

    struct MothershipClientDataFailureResponseData {
        std::string Message;
        MothershipClientDataError Error;
    };

    struct MothershipClientDataResponseData {
        std::vector<MothershipClientDataUser> Admins;
    };

    static void GetMothershipClientData(const std::string& version, const std::function<void(MothershipClientDataResponseData)>& successCallback, const std::function<void(MothershipClientDataFailureResponseData)>& failureCallback) {
        httplib::SSLClient client("mothership.btag-cf.com", 443);
        client.enable_server_certificate_verification(false);

        auto res = client.Get("/v1/data/client?v=" + version);

        if (res && res->status == 200) {
            auto json_data = nlohmann::json::parse(res->body);

            MothershipClientDataResponseData response;

            for (const auto& admin : json_data["admins"]) {
                response.Admins.push_back({
                    admin["userId"].get<std::string>(),
                    admin["username"].get<std::string>(),
                    static_cast<MothershipClientDataRole>(
                        admin["role"].get<int>()
                    )
                });
            }

            if (successCallback) {
                successCallback(response);
            }
        }
        else {
            MothershipClientDataFailureResponseData failure;

            try {
                auto json_data = nlohmann::json::parse(res->body);
                failure.Message = json_data.value("message", "Unknown error");
                failure.Error = static_cast<MothershipClientDataError>(json_data.value("error", static_cast<int>(MothershipClientDataError::Unknown)));
            } catch (...) {
                failure.Message = "Failed to parse error response";
                failure.Error = MothershipClientDataError::Unknown;
            }

            if (failureCallback) {
                failureCallback(failure);
            }
        }
    }
};