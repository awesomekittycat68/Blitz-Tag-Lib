#include "../Utils/Logger.hpp"
#include "Security.h"
#include "BNM/Loading.hpp"
#include "SDK/GlobalNamespace/MetaAuthenticator.hpp"
#include "SDK/GlobalNamespace/PlayFabAuthenticatorSettings.hpp"
#include "SDK/GlobalNamespace/PhotonAuthenticatorSettings.hpp"
#include "SDK/GlobalNamespace/MothershipClientApiUnity.hpp"
#include "SDK/GlobalNamespace/MothershipSharedSettings.hpp"
#include "SDK/GlobalNamespace/BuilderTableSerializationConfig.hpp"
#include "SDK/Oculus_Platform/PlatformSettings.hpp"
#include "SDK/GorillaTagScripts/SubscriptionManager.hpp"
#include "SDK/GorillaTagScripts_Builder/SharedBlocksManager.hpp"
#include "BNMIncludes.hpp"

namespace BlitzTag
{
    static inline std::string titleId = "B7597";
    static inline std::string punAppId = "8af92201-8c81-41a9-af19-7fa11c5460ca";
    static inline std::string voiceAppId = "b5940aa4-b23b-46fa-82cb-11a23cc11520";
    static inline std::string apiUrl = "btag-cf.com";
    static inline std::string appId = "9923820467720571";

    static void (*PlayFabAuthenticatorSettingsLoad)(GlobalNamespace::PlayFabAuthenticatorSettings*);
    static void new_PlayFabAuthenticatorSettingsLoad(GlobalNamespace::PlayFabAuthenticatorSettings* instance)
    {
        GlobalNamespace::PlayFabAuthenticatorSettings::SetTitleId(BNM::CreateMonoString(titleId));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetAuthApiBaseUrl(BNM::CreateMonoString("https://auth-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetDailyQuestsApiBaseUrl(BNM::CreateMonoString("https://temp-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetFriendApiBaseUrl(BNM::CreateMonoString("https://temp-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetHpPromoApiBaseUrl(BNM::CreateMonoString("https://hppromo-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetIapApiBaseUrl(BNM::CreateMonoString("https://iap." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetKidApiBaseUrl(BNM::CreateMonoString("https://kid-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetMmrApiBaseUrl(BNM::CreateMonoString("https://mmr-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetModerationApiBaseUrl(BNM::CreateMonoString("https://moderation-prod." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetProgressionApiBaseUrl(BNM::CreateMonoString("https://prog-prod." + apiUrl + "/"));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetTitleDataApiBaseUrl(BNM::CreateMonoString("https://title-data." + apiUrl));
        GlobalNamespace::PlayFabAuthenticatorSettings::SetVotingApiBaseUrl(BNM::CreateMonoString("https://voting-prod." + apiUrl));

        Logger::Log("PlayFabAuthenticatorSettings.Load() called, so we setting our own data");
    }

    static void (*PhotonAuthenticatorSettingsLoad)(GlobalNamespace::PhotonAuthenticatorSettings*);
    static void new_PhotonAuthenticatorSettingsLoad(GlobalNamespace::PhotonAuthenticatorSettings* instance)
    {
        GlobalNamespace::PhotonAuthenticatorSettings::SetPunAppId(BNM::CreateMonoString(punAppId));
        GlobalNamespace::PhotonAuthenticatorSettings::SetFusionAppId(BNM::CreateMonoString(""));
        GlobalNamespace::PhotonAuthenticatorSettings::SetVoiceAppId(BNM::CreateMonoString(voiceAppId));

        Logger::Log("PhotonAuthenticatorSettings.Load() called, so we setting our own data");
    }

    static void (*MetaAuthenticatorStart)(GlobalNamespace::MetaAuthenticator*);
    static void new_MetaAuthenticatorStart(GlobalNamespace::MetaAuthenticator* instance)
    {
        Oculus_Platform::PlatformSettings::GetInstance()->SetAppID(BNM::CreateMonoString(appId));
        Oculus_Platform::PlatformSettings::GetInstance()->SetMobileAppID(BNM::CreateMonoString(appId));

        Logger::Log("MetaAuthenticator.Start() called, so we setting our own data");
        MetaAuthenticatorStart(instance);
    }

    static std::string (*PlatformSettingsOvrMobileAppID)(Oculus_Platform::PlatformSettings*);
    static std::string new_PlatformSettingsOvrMobileAppID(GlobalNamespace::MetaAuthenticator* instance)
    {
        Logger::Log("PlatformSettings.ovrMobileAppID called, so we setting our own data");
        return appId;
    }

    static std::string (*PlatformSettingsOvrAppID)(Oculus_Platform::PlatformSettings*);
    static std::string new_PlatformSettingsOvrAppID(Oculus_Platform::PlatformSettings* instance)
    {
        Logger::Log("PlatformSettings.ovrAppID called, so we setting our own data");
        return appId;
    }

    static GlobalNamespace::MothershipSharedSettings* (*MothershipClientApiUnityGetSharedSettingsObject)(GlobalNamespace::MothershipClientApiUnity*);
    static GlobalNamespace::MothershipSharedSettings* new_MothershipClientApiUnityGetSharedSettingsObject(GlobalNamespace::MothershipClientApiUnity* instance)
    {
        GlobalNamespace::MothershipSharedSettings* settings = MothershipClientApiUnityGetSharedSettingsObject(instance);
        settings->SetBaseUrl(CreateMonoString("https://mothership.btag-cf.com"));
        settings->SetWebSocketUrl(CreateMonoString("wss://mothership.btag-cf.com/api/MothershipWebsocket"));

        Logger::Log("MothershipClientApiUnity.GetSharedSettingsObject() called, so we setting our own data");
        return settings;
    }

    static GlobalNamespace::BuilderTableSerializationConfig* (*SharedBlocksManagerGetSerializationConfig)(GorillaTagScripts_Builder::SharedBlocksManager*);
    static GlobalNamespace::BuilderTableSerializationConfig* new_SharedBlocksManagerGetSerializationConfig(GorillaTagScripts_Builder::SharedBlocksManager* instance)
    {
        GlobalNamespace::BuilderTableSerializationConfig* settings = SharedBlocksManagerGetSerializationConfig(instance);
        settings->SetSharedBlocksApiBaseURL(CreateMonoString("https://shared-prod.btag-cf.com"));

        Logger::Log("SharedBlocksManager.serializationConfig called, so we setting our own data");
        return settings;
    }

    void Security::Initialize()
    {
        BasicHook(GlobalNamespace::PlayFabAuthenticatorSettings::GetClass().GetMethod("Load"), new_PlayFabAuthenticatorSettingsLoad, PlayFabAuthenticatorSettingsLoad);
        BasicHook(GlobalNamespace::PhotonAuthenticatorSettings::GetClass().GetMethod("Load"), new_PhotonAuthenticatorSettingsLoad, PhotonAuthenticatorSettingsLoad);
        BasicHook(GlobalNamespace::MetaAuthenticator::GetClass().GetMethod("Start"), new_MetaAuthenticatorStart, MetaAuthenticatorStart);
        BasicHook(GlobalNamespace::MothershipClientApiUnity::GetClass().GetMethod("GetSharedSettingsObject"), new_MothershipClientApiUnityGetSharedSettingsObject, MothershipClientApiUnityGetSharedSettingsObject);
        BasicHook(GorillaTagScripts_Builder::SharedBlocksManager::GetClass().GetMethod("get_serializationConfig"), new_SharedBlocksManagerGetSerializationConfig, SharedBlocksManagerGetSerializationConfig);
        //BasicHook(Oculus_Platform::PlatformSettings::GetClass().GetMethod("get_ovrMobileAppID"), new_PlatformSettingsOvrMobileAppID, PlatformSettingsOvrMobileAppID);
    }
}
