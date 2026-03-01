#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/NonAllocDictionary$2_ValueIterator.hpp"
#include "../ExitGames_Client_Photon/SendOptions.hpp"
#include "ConnectMethod.hpp"
#include "InstantiateParameters.hpp"
#include "PhotonNetwork_RaiseEventBatch.hpp"
#include "PunLogLevel.hpp"
#include "RpcTarget.hpp"
#include "../Photon_Realtime/ClientState.hpp"
#include "../Photon_Realtime/MatchmakingMode.hpp"
#include "../Photon_Realtime/PhotonPortDefinition.hpp"
#include "../Photon_Realtime/ServerConnection.hpp"

namespace Photon_Pun {
    struct PhotonNetwork : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonNetwork");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* PunVersion = "2.40";
        static constexpr const char* ServerSettingsFileName = "PhotonServerSettings";
        static constexpr const char* PlayerPrefsKey = "PUNCloudBestRegion";
        static constexpr const char* CurrentSceneProperty = "curScn";
        static constexpr const char* CurrentScenePropertyLoadAsync = "curScnLa";
        static constexpr int SyncViewId = 0;
        static constexpr int SyncCompressed = 1;
        static constexpr int SyncNullValues = 2;
        static constexpr int SyncFirstValue = 3;
        ::BNM::Structures::Mono::String* GetAppVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AppVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::AuthenticationValues* GetAuthValues() {
            static BNM::Method<::Photon_Realtime::AuthenticationValues*> _method = GetClass().GetMethod(O("get_AuthValues"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAuthValues(::Photon_Realtime::AuthenticationValues* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AuthValues"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAutomaticallySyncScene() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AutomaticallySyncScene"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAutomaticallySyncScene(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AutomaticallySyncScene"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetBestRegionSummaryInPreferences() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BestRegionSummaryInPreferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBestRegionSummaryInPreferences(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BestRegionSummaryInPreferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetCloudRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CloudRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCountOfPlayers() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CountOfPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCountOfPlayersInRooms() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CountOfPlayersInRooms"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCountOfPlayersOnMaster() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CountOfPlayersOnMaster"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCountOfRooms() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CountOfRooms"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCrcCheckEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CrcCheckEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCrcCheckEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CrcCheckEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetCurrentCluster() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CurrentCluster"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::TypedLobby* GetCurrentLobby() {
            static BNM::Method<::Photon_Realtime::TypedLobby*> _method = GetClass().GetMethod(O("get_CurrentLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::Room* GetCurrentRoom() {
            static BNM::Method<::Photon_Realtime::Room*> _method = GetClass().GetMethod(O("get_CurrentRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        double GetCurrentTime() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_CurrentTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetEnableLobbyStatistics() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EnableLobbyStatistics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetGameVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGameVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GameVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetInLobby() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static bool GetInRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InRoom"));
            return _method.Call();
        }
        static bool GetIsConnected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsConnected"));
            return _method.Call();
        }
        bool GetIsConnectedAndReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsConnectedAndReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMasterClient() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMasterClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMessageQueueRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMessageQueueRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsMessageQueueRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsMessageQueueRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetKeepAliveInBackground() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_KeepAliveInBackground"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetKeepAliveInBackground(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_KeepAliveInBackground"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetLevelLoadingProgress() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LevelLoadingProgress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::Player* GetLocalPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _method = GetClass().GetMethod(O("get_LocalPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::Player* GetMasterClient() {
            static BNM::Method<::Photon_Realtime::Player*> _method = GetClass().GetMethod(O("get_MasterClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMaxResendsBeforeDisconnect() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxResendsBeforeDisconnect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxResendsBeforeDisconnect(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxResendsBeforeDisconnect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::ClientState GetNetworkClientState() {
            static BNM::Method<::Photon_Realtime::ClientState> _method = GetClass().GetMethod(O("get_NetworkClientState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetNetworkStatisticsEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_NetworkStatisticsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNetworkStatisticsEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NetworkStatisticsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetNickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_NickName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NickName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetOfflineMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_OfflineMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOfflineMode(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OfflineMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPacketLossByCrcCheck() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PacketLossByCrcCheck"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Pun::ServerSettings* GetPhotonServerSettings() {
            static BNM::Method<::Photon_Pun::ServerSettings*> _method = GetClass().GetMethod(O("get_PhotonServerSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPhotonServerSettings(::Photon_Pun::ServerSettings* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PhotonServerSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* GetPhotonViews() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _method = GetClass().GetMethod(O("get_PhotonViews"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* GetPlayerList() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _method = GetClass().GetMethod(O("get_PlayerList"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* GetPlayerListOthers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _method = GetClass().GetMethod(O("get_PlayerListOthers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetQuickResends() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_QuickResends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetQuickResends(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_QuickResends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetResentReliableCommands() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ResentReliableCommands"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSendRate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SendRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendRate(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SendRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSerializationRate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SerializationRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSerializationRate(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SerializationRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::ServerConnection GetServer() {
            static BNM::Method<::Photon_Realtime::ServerConnection> _method = GetClass().GetMethod(O("get_Server"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::PhotonPortDefinition GetServerPortOverrides() {
            static BNM::Method<::Photon_Realtime::PhotonPortDefinition> _method = GetClass().GetMethod(O("get_ServerPortOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetServerPortOverrides(::Photon_Realtime::PhotonPortDefinition value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ServerPortOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetServerTimestamp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ServerTimestamp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        double GetTime() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_Time"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetUseAlternativeUdpPorts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseAlternativeUdpPorts"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseAlternativeUdpPorts(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseAlternativeUdpPorts"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetViewCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ViewCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnOwnershipRequestEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOwnershipRequestEv"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnOwnershipRequestEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOwnershipRequestEv"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnOwnershipTransferedEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOwnershipTransferedEv"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnOwnershipTransferedEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOwnershipTransferedEv"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnOwnershipTransferFailedEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOwnershipTransferFailedEv"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnOwnershipTransferFailedEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOwnershipTransferFailedEv"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetAsyncLevelLoadingOperation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_AsyncLevelLoadingOperation"));
            return _field.Get();
        }
        static ::Photon_Realtime::RegionHandler* GetCachedRegionHandler() {
            static BNM::Field<::Photon_Realtime::RegionHandler*> _field = GetClass().GetField(O("_cachedRegionHandler"));
            return _field.Get();
        }
        static float GetLevelLoadingProgress_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_levelLoadingProgress"));
            return _field.Get();
        }
        static void* GetAllowedReceivingGroups() {
            static BNM::Field<void*> _field = GetClass().GetField(O("allowedReceivingGroups"));
            return _field.Get();
        }
        static bool GetAutomaticallySyncScene_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("automaticallySyncScene"));
            return _field.Get();
        }
        static void* GetBlockedSendingGroups() {
            static BNM::Field<void*> _field = GetClass().GetField(O("blockedSendingGroups"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, void*>*>* GetCachedData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, void*>*>*> _field = GetClass().GetField(O("cachedData"));
            return _field.Get();
        }
        static ::Photon_Realtime::Player* GetCachedEventPlayerRef() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("cachedEventPlayerRef"));
            return _field.Get();
        }
        static ::Photon_Pun::ConnectMethod GetConnectMethod() {
            static BNM::Field<::Photon_Pun::ConnectMethod> _field = GetClass().GetField(O("ConnectMethod"));
            return _field.Get();
        }
        static uint8_t GetCurrentLevelPrefix() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("currentLevelPrefix"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetDuplicateIDEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("duplicateIDEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetEmptyObjectArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("emptyObjectArray"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetEmptyTypeArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("emptyTypeArray"));
            return _field.Get();
        }
        static bool GetEnableCloseConnection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableCloseConnection"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>* GetFoundPVs() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("foundPVs"));
            return _field.Get();
        }
        static int GetFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("frame"));
            return _field.Get();
        }
        static double GetFrametime() {
            static BNM::Field<double> _field = GetClass().GetField(O("frametime"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetGameVersion_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameVersion"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* GetInternalEventError() {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("InternalEventError"));
            return _field.Get();
        }
        static bool GetIsMessageQueueRunning_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMessageQueueRunning"));
            return _field.Get();
        }
        static void* GetKeyByteEight() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteEight"));
            return _field.Get();
        }
        static void* GetKeyByteFive() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteFive"));
            return _field.Get();
        }
        static void* GetKeyByteFour() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteFour"));
            return _field.Get();
        }
        static void* GetKeyByteOne() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteOne"));
            return _field.Get();
        }
        static void* GetKeyByteSeven() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteSeven"));
            return _field.Get();
        }
        static void* GetKeyByteSix() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteSix"));
            return _field.Get();
        }
        static void* GetKeyByteThree() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteThree"));
            return _field.Get();
        }
        static void* GetKeyByteTwo() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteTwo"));
            return _field.Get();
        }
        static void* GetKeyByteZero() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keyByteZero"));
            return _field.Get();
        }
        static int GetLastUsedViewSubId() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastUsedViewSubId"));
            return _field.Get();
        }
        static int GetLastUsedViewSubIdStatic() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastUsedViewSubIdStatic"));
            return _field.Get();
        }
        static bool GetLoadingLevelAndPausedNetwork() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingLevelAndPausedNetwork"));
            return _field.Get();
        }
        static ::Photon_Pun::PunLogLevel GetLogLevel() {
            static BNM::Field<::Photon_Pun::PunLogLevel> _field = GetClass().GetField(O("LogLevel"));
            return _field.Get();
        }
        static int GetMAXVIEWIDS() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_VIEW_IDS"));
            return _field.Get();
        }
        static float GetMinimalTimeScaleToDispatchInFixedUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("MinimalTimeScaleToDispatchInFixedUpdate"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*>* GetMonoRPCMethodsCache() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*>*> _field = GetClass().GetField(O("monoRPCMethodsCache"));
            return _field.Get();
        }
        static ::Photon_Realtime::LoadBalancingClient* GetNetworkingClient() {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("NetworkingClient"));
            return _field.Get();
        }
        static int GetObjectsInOneUpdate() {
            static BNM::Field<int> _field = GetClass().GetField(O("ObjectsInOneUpdate"));
            return _field.Get();
        }
        static bool GetOfflineMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("offlineMode"));
            return _field.Get();
        }
        static ::Photon_Realtime::Room* GetOfflineModeRoom() {
            static BNM::Field<::Photon_Realtime::Room*> _field = GetClass().GetField(O("offlineModeRoom"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* GetOnOwnershipRequestEv() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("OnOwnershipRequestEv"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* GetOnOwnershipTransferedEv() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("OnOwnershipTransferedEv"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* GetOnOwnershipTransferFailedEv() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("OnOwnershipTransferFailedEv"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetOpCleanRpcBufferOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("OpCleanRpcBufferOptions"));
            return _field.Get();
        }
        static ::Photon_Pun::ServerSettings* GetPhotonServerSettings_f() {
            static BNM::Field<::Photon_Pun::ServerSettings*> _field = GetClass().GetField(O("photonServerSettings"));
            return _field.Get();
        }
        static float GetPrecisionForFloatSynchronization() {
            static BNM::Field<float> _field = GetClass().GetField(O("PrecisionForFloatSynchronization"));
            return _field.Get();
        }
        static float GetPrecisionForQuaternionSynchronization() {
            static BNM::Field<float> _field = GetClass().GetField(O("PrecisionForQuaternionSynchronization"));
            return _field.Get();
        }
        static float GetPrecisionForVectorSynchronization() {
            static BNM::Field<float> _field = GetClass().GetField(O("PrecisionForVectorSynchronization"));
            return _field.Get();
        }
        static void* GetPrefabPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("prefabPool"));
            return _field.Get();
        }
        static void* GetPrefabsWithoutMagicCallback() {
            static BNM::Field<void*> _field = GetClass().GetField(O("PrefabsWithoutMagicCallback"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::Hashtable* GetRemoveFilter() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("removeFilter"));
            return _field.Get();
        }
        static void* GetReusablePVHashset() {
            static BNM::Field<void*> _field = GetClass().GetField(O("reusablePVHashset"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::Hashtable* GetRpcEvent() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("rpcEvent"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::Hashtable* GetRpcFilterByViewId() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("rpcFilterByViewId"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetRpcOptionsToAll() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("RpcOptionsToAll"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetRpcShortcuts() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("rpcShortcuts"));
            return _field.Get();
        }
        static bool GetRunRpcCoroutines() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RunRpcCoroutines"));
            return _field.Get();
        }
        static int GetSendFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("sendFrequency"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::Hashtable* GetSendInstantiateEvHashtable() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("SendInstantiateEvHashtable"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetSendInstantiateRaiseEventOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendInstantiateRaiseEventOptions"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetSendToAllOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendToAllOptions"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetSendToOthersOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendToOthersOptions"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetSendToSingleOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendToSingleOptions"));
            return _field.Get();
        }
        static int GetSerializationFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("serializationFrequency"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetSerializeRaiseEvOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("serializeRaiseEvOptions"));
            return _field.Get();
        }
        static ::Photon_Pun::PhotonStream* GetSerializeStreamIn() {
            static BNM::Field<::Photon_Pun::PhotonStream*> _field = GetClass().GetField(O("serializeStreamIn"));
            return _field.Get();
        }
        static ::Photon_Pun::PhotonStream* GetSerializeStreamOut() {
            static BNM::Field<::Photon_Pun::PhotonStream*> _field = GetClass().GetField(O("serializeStreamOut"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Photon_Pun::PhotonNetwork_RaiseEventBatch, ::Photon_Pun::PhotonNetwork_SerializeViewBatch*>* GetSerializeViewBatches() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Photon_Pun::PhotonNetwork_RaiseEventBatch, ::Photon_Pun::PhotonNetwork_SerializeViewBatch*>*> _field = GetClass().GetField(O("serializeViewBatches"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::Hashtable* GetServerCleanDestroyEvent() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("ServerCleanDestroyEvent"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetServerCleanOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("ServerCleanOptions"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetStartupStopwatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("StartupStopwatch"));
            return _field.Get();
        }
        static ::BNM::MonoType* GetTypePhotonMessageInfo() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("typePhotonMessageInfo"));
            return _field.Get();
        }
        static ::BNM::MonoType* GetTypePunRPC() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("typePunRPC"));
            return _field.Get();
        }
        static bool GetUseRpcMonoBehaviourCache() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseRpcMonoBehaviourCache"));
            return _field.Get();
        }
        static void SetAsyncLevelLoadingOperation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_AsyncLevelLoadingOperation"));
            _field.Set(value);
        }
        static void SetCachedRegionHandler(::Photon_Realtime::RegionHandler* value) {
            static BNM::Field<::Photon_Realtime::RegionHandler*> _field = GetClass().GetField(O("_cachedRegionHandler"));
            _field.Set(value);
        }
        static void SetLevelLoadingProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_levelLoadingProgress"));
            _field.Set(value);
        }
        static void SetAllowedReceivingGroups(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("allowedReceivingGroups"));
            _field.Set(value);
        }
        static void SetAutomaticallySyncScene_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("automaticallySyncScene"));
            _field.Set(value);
        }
        static void SetBlockedSendingGroups(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("blockedSendingGroups"));
            _field.Set(value);
        }
        static void SetCachedData(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, void*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, void*>*>*> _field = GetClass().GetField(O("cachedData"));
            _field.Set(value);
        }
        static void SetCachedEventPlayerRef(::Photon_Realtime::Player* value) {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("cachedEventPlayerRef"));
            _field.Set(value);
        }
        static void SetConnectMethod(::Photon_Pun::ConnectMethod value) {
            static BNM::Field<::Photon_Pun::ConnectMethod> _field = GetClass().GetField(O("ConnectMethod"));
            _field.Set(value);
        }
        static void SetCurrentLevelPrefix(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("currentLevelPrefix"));
            _field.Set(value);
        }
        static void SetDuplicateIDEvent(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("duplicateIDEvent"));
            _field.Set(value);
        }
        static void SetEnableCloseConnection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableCloseConnection"));
            _field.Set(value);
        }
        static void SetFoundPVs(::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("foundPVs"));
            _field.Set(value);
        }
        static void SetFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frame"));
            _field.Set(value);
        }
        static void SetFrametime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("frametime"));
            _field.Set(value);
        }
        static void SetGameVersion_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameVersion"));
            _field.Set(value);
        }
        static void SetInternalEventError(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("InternalEventError"));
            _field.Set(value);
        }
        static void SetIsMessageQueueRunning_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMessageQueueRunning"));
            _field.Set(value);
        }
        static void SetLastUsedViewSubId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastUsedViewSubId"));
            _field.Set(value);
        }
        static void SetLastUsedViewSubIdStatic(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastUsedViewSubIdStatic"));
            _field.Set(value);
        }
        static void SetLoadingLevelAndPausedNetwork(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingLevelAndPausedNetwork"));
            _field.Set(value);
        }
        static void SetLogLevel(::Photon_Pun::PunLogLevel value) {
            static BNM::Field<::Photon_Pun::PunLogLevel> _field = GetClass().GetField(O("LogLevel"));
            _field.Set(value);
        }
        static void SetMinimalTimeScaleToDispatchInFixedUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MinimalTimeScaleToDispatchInFixedUpdate"));
            _field.Set(value);
        }
        static void SetNetworkingClient(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("NetworkingClient"));
            _field.Set(value);
        }
        static void SetObjectsInOneUpdate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ObjectsInOneUpdate"));
            _field.Set(value);
        }
        static void SetOfflineMode_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("offlineMode"));
            _field.Set(value);
        }
        static void SetOfflineModeRoom(::Photon_Realtime::Room* value) {
            static BNM::Field<::Photon_Realtime::Room*> _field = GetClass().GetField(O("offlineModeRoom"));
            _field.Set(value);
        }
        static void SetOnOwnershipRequestEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("OnOwnershipRequestEv"));
            _field.Set(value);
        }
        static void SetOnOwnershipTransferedEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("OnOwnershipTransferedEv"));
            _field.Set(value);
        }
        static void SetOnOwnershipTransferFailedEv(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("OnOwnershipTransferFailedEv"));
            _field.Set(value);
        }
        static void SetPhotonServerSettings_fs(::Photon_Pun::ServerSettings* value) {
            static BNM::Field<::Photon_Pun::ServerSettings*> _field = GetClass().GetField(O("photonServerSettings"));
            _field.Set(value);
        }
        static void SetPrecisionForFloatSynchronization(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PrecisionForFloatSynchronization"));
            _field.Set(value);
        }
        static void SetPrecisionForQuaternionSynchronization(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PrecisionForQuaternionSynchronization"));
            _field.Set(value);
        }
        static void SetPrecisionForVectorSynchronization(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PrecisionForVectorSynchronization"));
            _field.Set(value);
        }
        static void SetPrefabPool(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("prefabPool"));
            _field.Set(value);
        }
        static void SetReusablePVHashset(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("reusablePVHashset"));
            _field.Set(value);
        }
        static void SetRpcEvent(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("rpcEvent"));
            _field.Set(value);
        }
        static void SetRpcOptionsToAll(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("RpcOptionsToAll"));
            _field.Set(value);
        }
        static void SetRpcShortcuts(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("rpcShortcuts"));
            _field.Set(value);
        }
        static void SetRunRpcCoroutines(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RunRpcCoroutines"));
            _field.Set(value);
        }
        static void SetSendFrequency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sendFrequency"));
            _field.Set(value);
        }
        static void SetSendToAllOptions(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendToAllOptions"));
            _field.Set(value);
        }
        static void SetSendToOthersOptions(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendToOthersOptions"));
            _field.Set(value);
        }
        static void SetSendToSingleOptions(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("SendToSingleOptions"));
            _field.Set(value);
        }
        static void SetSerializationFrequency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("serializationFrequency"));
            _field.Set(value);
        }
        static void SetSerializeRaiseEvOptions(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("serializeRaiseEvOptions"));
            _field.Set(value);
        }
        static void SetStartupStopwatch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("StartupStopwatch"));
            _field.Set(value);
        }
        static void SetUseRpcMonoBehaviourCache(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseRpcMonoBehaviourCache"));
            _field.Set(value);
        }
        static void add_OnOwnershipRequestEv_1(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOwnershipRequestEv"), {"value"});
            _m.Call(value);
        }
        static void add_OnOwnershipTransferedEv_1(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOwnershipTransferedEv"), {"value"});
            _m.Call(value);
        }
        static void add_OnOwnershipTransferFailedEv_1(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnOwnershipTransferFailedEv"), {"value"});
            _m.Call(value);
        }
        template <typename TP0 = void*>
        static void AddCallbackTarget(TP0 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackTarget"), {"target"});
            _m.Call(target);
        }
        static bool AllocateRoomViewID(::Photon_Pun::PhotonView* view) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AllocateRoomViewID"), {"view"});
            return _m.Call(view);
        }
        static bool AllocateSceneViewID(::Photon_Pun::PhotonView* view) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AllocateSceneViewID"), {"view"});
            return _m.Call(view);
        }
        static bool AllocateViewID(::Photon_Pun::PhotonView* view) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AllocateViewID"), {"view"});
            return _m.Call(view);
        }
        static int AllocateViewID(bool roomObject) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AllocateViewID"), {"roomObject"});
            return _m.Call(roomObject);
        }
        static int AllocateViewID(int ownerId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AllocateViewID"), {"ownerId"});
            return _m.Call(ownerId);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool AlmostEquals(TP0 lastData, TP1 currentContent) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlmostEquals"), {"lastData", "currentContent"});
            return _m.Call(lastData, currentContent);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool AlmostEquals_1(TP0 one, TP1 two) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlmostEquals"), {"one", "two"});
            return _m.Call(one, two);
        }
        static ::BNM::Structures::Mono::String* CallbacksToString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("CallbacksToString"));
            return _m.Call();
        }
        static bool CheckTypeMatch(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* methodParameters, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* callParameterTypes) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckTypeMatch"), {"methodParameters", "callParameterTypes"});
            return _m.Call(methodParameters, callParameterTypes);
        }
        static void CleanRpcBufferIfMine(::Photon_Pun::PhotonView* view) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanRpcBufferIfMine"), {"view"});
            _m.Call(view);
        }
        static bool CloseConnection(::Photon_Realtime::Player* kickPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CloseConnection"), {"kickPlayer"});
            return _m.Call(kickPlayer);
        }
        static bool ConnectToBestCloudServer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectToBestCloudServer"));
            return _m.Call();
        }
        static bool ConnectToMaster(::BNM::Structures::Mono::String* masterServerAddress, int port, ::BNM::Structures::Mono::String* appID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectToMaster"), {"masterServerAddress", "port", "appID"});
            return _m.Call(masterServerAddress, port, appID);
        }
        static bool ConnectToRegion(::BNM::Structures::Mono::String* region) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectToRegion"), {"region"});
            return _m.Call(region);
        }
        static bool ConnectUsingSettings() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectUsingSettings"));
            return _m.Call();
        }
        static bool ConnectUsingSettings(::Photon_Realtime::AppSettings* appSettings, bool startInOfflineMode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectUsingSettings"), {"appSettings", "startInOfflineMode"});
            return _m.Call(appSettings, startInOfflineMode);
        }
        static bool CreateRoom(::BNM::Structures::Mono::String* roomName, ::Photon_Realtime::RoomOptions* roomOptions, ::Photon_Realtime::TypedLobby* typedLobby, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* expectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateRoom"), {"roomName", "roomOptions", "typedLobby", "expectedUsers"});
            return _m.Call(roomName, roomOptions, typedLobby, expectedUsers);
        }
        static ::BNM::Structures::Mono::Array<void*>* DeltaCompressionRead(::BNM::Structures::Mono::Array<void*>* lastOnSerializeDataReceived, ::BNM::Structures::Mono::Array<void*>* incomingData) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("DeltaCompressionRead"), {"lastOnSerializeDataReceived", "incomingData"});
            return _m.Call(lastOnSerializeDataReceived, incomingData);
        }
        static ::BNM::Structures::Mono::List<void*>* DeltaCompressionWrite(::BNM::Structures::Mono::List<void*>* previousContent, ::BNM::Structures::Mono::List<void*>* currentContent) {
            static BNM::Method<::BNM::Structures::Mono::List<void*>*> _m = GetClass().GetMethod(O("DeltaCompressionWrite"), {"previousContent", "currentContent"});
            return _m.Call(previousContent, currentContent);
        }
        static void Destroy(::Photon_Pun::PhotonView* targetView) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"), {"targetView"});
            _m.Call(targetView);
        }
        static void Destroy(::GameObject* targetGo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"), {"targetGo"});
            _m.Call(targetGo);
        }
        static void DestroyAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyAll"));
            _m.Call();
        }
        static void DestroyAll(bool localOnly) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyAll"), {"localOnly"});
            _m.Call(localOnly);
        }
        static void DestroyPlayerObjects(::Photon_Realtime::Player* targetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPlayerObjects"), {"targetPlayer"});
            _m.Call(targetPlayer);
        }
        static void DestroyPlayerObjects(int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPlayerObjects"), {"targetPlayerId"});
            _m.Call(targetPlayerId);
        }
        static void DestroyPlayerObjects(int playerId, bool localOnly) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPlayerObjects"), {"playerId", "localOnly"});
            _m.Call(playerId, localOnly);
        }
        static void Disconnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disconnect"));
            _m.Call();
        }
        static void EnterOfflineRoom(::BNM::Structures::Mono::String* roomName, ::Photon_Realtime::RoomOptions* roomOptions, bool createdRoom) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnterOfflineRoom"), {"roomName", "roomOptions", "createdRoom"});
            _m.Call(roomName, roomOptions, createdRoom);
        }
        static void ExecuteRpc(::ExitGames_Client_Photon::Hashtable* rpcData, ::Photon_Realtime::Player* sender) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteRpc"), {"rpcData", "sender"});
            _m.Call(rpcData, sender);
        }
        static void FetchServerTimestamp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchServerTimestamp"));
            _m.Call();
        }
        static bool FindFriends(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* friendsToFind) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FindFriends"), {"friendsToFind"});
            return _m.Call(friendsToFind);
        }
        static void* FindGameObjectsWithComponent(::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FindGameObjectsWithComponent"), {"type"});
            return _m.Call(type);
        }
        static ::BNM::Structures::Mono::String* get_AppVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AppVersion"));
            return _m.Call();
        }
        static ::Photon_Realtime::AuthenticationValues* get_AuthValues() {
            static BNM::Method<::Photon_Realtime::AuthenticationValues*> _m = GetClass().GetMethod(O("get_AuthValues"));
            return _m.Call();
        }
        static bool get_AutomaticallySyncScene() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AutomaticallySyncScene"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BestRegionSummaryInPreferences() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BestRegionSummaryInPreferences"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_CloudRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CloudRegion"));
            return _m.Call();
        }
        static int get_CountOfPlayers() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CountOfPlayers"));
            return _m.Call();
        }
        static int get_CountOfPlayersInRooms() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CountOfPlayersInRooms"));
            return _m.Call();
        }
        static int get_CountOfPlayersOnMaster() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CountOfPlayersOnMaster"));
            return _m.Call();
        }
        static int get_CountOfRooms() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CountOfRooms"));
            return _m.Call();
        }
        static bool get_CrcCheckEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CrcCheckEnabled"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_CurrentCluster() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CurrentCluster"));
            return _m.Call();
        }
        static ::Photon_Realtime::TypedLobby* get_CurrentLobby() {
            static BNM::Method<::Photon_Realtime::TypedLobby*> _m = GetClass().GetMethod(O("get_CurrentLobby"));
            return _m.Call();
        }
        static ::Photon_Realtime::Room* get_CurrentRoom() {
            static BNM::Method<::Photon_Realtime::Room*> _m = GetClass().GetMethod(O("get_CurrentRoom"));
            return _m.Call();
        }
        static double get_CurrentTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_CurrentTime"));
            return _m.Call();
        }
        static bool get_EnableLobbyStatistics() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EnableLobbyStatistics"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameVersion"));
            return _m.Call();
        }
        static bool get_InLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InLobby"));
            return _m.Call();
        }
        static bool get_InRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InRoom"));
            return _m.Call();
        }
        static bool get_IsConnected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsConnected"));
            return _m.Call();
        }
        static bool get_IsConnectedAndReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsConnectedAndReady"));
            return _m.Call();
        }
        static bool get_IsMasterClient() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMasterClient"));
            return _m.Call();
        }
        static bool get_IsMessageQueueRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMessageQueueRunning"));
            return _m.Call();
        }
        static float get_KeepAliveInBackground() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_KeepAliveInBackground"));
            return _m.Call();
        }
        static float get_LevelLoadingProgress() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LevelLoadingProgress"));
            return _m.Call();
        }
        static ::Photon_Realtime::Player* get_LocalPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("get_LocalPlayer"));
            return _m.Call();
        }
        static ::Photon_Realtime::Player* get_MasterClient() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("get_MasterClient"));
            return _m.Call();
        }
        static int get_MaxResendsBeforeDisconnect() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxResendsBeforeDisconnect"));
            return _m.Call();
        }
        static ::Photon_Realtime::ClientState get_NetworkClientState() {
            static BNM::Method<::Photon_Realtime::ClientState> _m = GetClass().GetMethod(O("get_NetworkClientState"));
            return _m.Call();
        }
        static bool get_NetworkStatisticsEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_NetworkStatisticsEnabled"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_NickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_NickName"));
            return _m.Call();
        }
        static bool get_OfflineMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_OfflineMode"));
            return _m.Call();
        }
        static int get_PacketLossByCrcCheck() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PacketLossByCrcCheck"));
            return _m.Call();
        }
        static ::Photon_Pun::ServerSettings* get_PhotonServerSettings() {
            static BNM::Method<::Photon_Pun::ServerSettings*> _m = GetClass().GetMethod(O("get_PhotonServerSettings"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* get_PhotonViews() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _m = GetClass().GetMethod(O("get_PhotonViews"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* get_PlayerList() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _m = GetClass().GetMethod(O("get_PlayerList"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* get_PlayerListOthers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _m = GetClass().GetMethod(O("get_PlayerListOthers"));
            return _m.Call();
        }
        static void* get_PrefabPool() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_PrefabPool"));
            return _m.Call();
        }
        static int get_QuickResends() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_QuickResends"));
            return _m.Call();
        }
        static int get_ResentReliableCommands() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ResentReliableCommands"));
            return _m.Call();
        }
        static int get_SendRate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SendRate"));
            return _m.Call();
        }
        static int get_SerializationRate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SerializationRate"));
            return _m.Call();
        }
        static ::Photon_Realtime::ServerConnection get_Server() {
            static BNM::Method<::Photon_Realtime::ServerConnection> _m = GetClass().GetMethod(O("get_Server"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_ServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ServerAddress"));
            return _m.Call();
        }
        static ::Photon_Realtime::PhotonPortDefinition get_ServerPortOverrides() {
            static BNM::Method<::Photon_Realtime::PhotonPortDefinition> _m = GetClass().GetMethod(O("get_ServerPortOverrides"));
            return _m.Call();
        }
        static int get_ServerTimestamp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ServerTimestamp"));
            return _m.Call();
        }
        static double get_Time() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_Time"));
            return _m.Call();
        }
        static bool get_UseAlternativeUdpPorts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseAlternativeUdpPorts"));
            return _m.Call();
        }
        static int get_ViewCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ViewCount"));
            return _m.Call();
        }
        static bool GetCustomRoomList(::Photon_Realtime::TypedLobby* typedLobby, ::BNM::Structures::Mono::String* sqlLobbyFilter) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetCustomRoomList"), {"typedLobby", "sqlLobbyFilter"});
            return _m.Call(typedLobby, sqlLobbyFilter);
        }
        static bool GetMethod(::MonoBehaviour* monob, ::BNM::Structures::Mono::String* methodType, ::BNM::IL2CPP::Il2CppObject*& mi) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetMethod"), {"monob", "methodType", "mi"});
            return _m.Call(monob, methodType, &mi);
        }
        static ::Photon_Pun::PhotonView* GetPhotonView(int viewID) {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("GetPhotonView"), {"viewID"});
            return _m.Call(viewID);
        }
        static int GetPing() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPing"));
            return _m.Call();
        }
        static ::GameObject* Instantiate(::BNM::Structures::Mono::String* prefabName, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, uint8_t group, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"prefabName", "position", "rotation", "group", "data"});
            return _m.Call(prefabName, position, rotation, group, data);
        }
        static ::GameObject* InstantiateRoomObject(::BNM::Structures::Mono::String* prefabName, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, uint8_t group, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("InstantiateRoomObject"), {"prefabName", "position", "rotation", "group", "data"});
            return _m.Call(prefabName, position, rotation, group, data);
        }
        static ::GameObject* InstantiateSceneObject(::BNM::Structures::Mono::String* prefabName, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, uint8_t group, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("InstantiateSceneObject"), {"prefabName", "position", "rotation", "group", "data"});
            return _m.Call(prefabName, position, rotation, group, data);
        }
        static bool JoinLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinLobby"));
            return _m.Call();
        }
        static bool JoinLobby(::Photon_Realtime::TypedLobby* typedLobby) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinLobby"), {"typedLobby"});
            return _m.Call(typedLobby);
        }
        static bool JoinOrCreateRoom(::BNM::Structures::Mono::String* roomName, ::Photon_Realtime::RoomOptions* roomOptions, ::Photon_Realtime::TypedLobby* typedLobby, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* expectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinOrCreateRoom"), {"roomName", "roomOptions", "typedLobby", "expectedUsers"});
            return _m.Call(roomName, roomOptions, typedLobby, expectedUsers);
        }
        static bool JoinRandomOrCreateRoom(::ExitGames_Client_Photon::Hashtable* expectedCustomRoomProperties, uint8_t expectedMaxPlayers, ::Photon_Realtime::MatchmakingMode matchingType, ::Photon_Realtime::TypedLobby* typedLobby, ::BNM::Structures::Mono::String* sqlLobbyFilter, ::BNM::Structures::Mono::String* roomName, ::Photon_Realtime::RoomOptions* roomOptions, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* expectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinRandomOrCreateRoom"), {"expectedCustomRoomProperties", "expectedMaxPlayers", "matchingType", "typedLobby", "sqlLobbyFilter", "roomName", "roomOptions", "expectedUsers"});
            return _m.Call(expectedCustomRoomProperties, expectedMaxPlayers, matchingType, typedLobby, sqlLobbyFilter, roomName, roomOptions, expectedUsers);
        }
        static bool JoinRandomRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinRandomRoom"));
            return _m.Call();
        }
        static bool JoinRandomRoom(::ExitGames_Client_Photon::Hashtable* expectedCustomRoomProperties, uint8_t expectedMaxPlayers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinRandomRoom"), {"expectedCustomRoomProperties", "expectedMaxPlayers"});
            return _m.Call(expectedCustomRoomProperties, expectedMaxPlayers);
        }
        static bool JoinRandomRoom(::ExitGames_Client_Photon::Hashtable* expectedCustomRoomProperties, uint8_t expectedMaxPlayers, ::Photon_Realtime::MatchmakingMode matchingType, ::Photon_Realtime::TypedLobby* typedLobby, ::BNM::Structures::Mono::String* sqlLobbyFilter, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* expectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinRandomRoom"), {"expectedCustomRoomProperties", "expectedMaxPlayers", "matchingType", "typedLobby", "sqlLobbyFilter", "expectedUsers"});
            return _m.Call(expectedCustomRoomProperties, expectedMaxPlayers, matchingType, typedLobby, sqlLobbyFilter, expectedUsers);
        }
        static bool JoinRoom(::BNM::Structures::Mono::String* roomName, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* expectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinRoom"), {"roomName", "expectedUsers"});
            return _m.Call(roomName, expectedUsers);
        }
        static bool LeaveLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LeaveLobby"));
            return _m.Call();
        }
        static bool LeaveRoom(bool becomeInactive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LeaveRoom"), {"becomeInactive"});
            return _m.Call(becomeInactive);
        }
        static void LeftRoomCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeftRoomCleanup"));
            _m.Call();
        }
        static void LoadLevel(int levelNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadLevel"), {"levelNumber"});
            _m.Call(levelNumber);
        }
        static void LoadLevel(::BNM::Structures::Mono::String* levelName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadLevel"), {"levelName"});
            _m.Call(levelName);
        }
        static void LoadLevelIfSynced() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadLevelIfSynced"));
            _m.Call();
        }
        static void LoadOrCreateSettings(bool reload) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadOrCreateSettings"), {"reload"});
            _m.Call(reload);
        }
        static bool LocalCleanPhotonView(::Photon_Pun::PhotonView* view) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCleanPhotonView"), {"view"});
            return _m.Call(view);
        }
        static void LocalCleanupAnythingInstantiated(bool destroyInstantiatedGameObjects) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalCleanupAnythingInstantiated"), {"destroyInstantiatedGameObjects"});
            _m.Call(destroyInstantiatedGameObjects);
        }
        static ::GameObject* NetworkInstantiate(::ExitGames_Client_Photon::Hashtable* networkEvent, ::Photon_Realtime::Player* creator) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetworkInstantiate"), {"networkEvent", "creator"});
            return _m.Call(networkEvent, creator);
        }
        static ::GameObject* NetworkInstantiate(::Photon_Pun::InstantiateParameters parameters, bool roomObject, bool instantiateEvent) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetworkInstantiate"), {"parameters", "roomObject", "instantiateEvent"});
            return _m.Call(parameters, roomObject, instantiateEvent);
        }
        static void NetworkStatisticsReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkStatisticsReset"));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* NetworkStatisticsToString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("NetworkStatisticsToString"));
            return _m.Call();
        }
        static void NewSceneLoaded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewSceneLoaded"));
            _m.Call();
        }
        static void OnClientStateChanged(::Photon_Realtime::ClientState previousState, ::Photon_Realtime::ClientState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnClientStateChanged"), {"previousState", "state"});
            _m.Call(previousState, state);
        }
        static void OnEvent(::ExitGames_Client_Photon::EventData* photonEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEvent"), {"photonEvent"});
            _m.Call(photonEvent);
        }
        static void OnOperation(::ExitGames_Client_Photon::OperationResponse* opResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOperation"), {"opResponse"});
            _m.Call(opResponse);
        }
        static void OnRegionsPinged(::Photon_Realtime::RegionHandler* regionHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRegionsPinged"), {"regionHandler"});
            _m.Call(regionHandler);
        }
        static void OnSerializeRead(::BNM::Structures::Mono::Array<void*>* data, ::Photon_Realtime::Player* sender, int networkTime, int16_t correctPrefix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"data", "sender", "networkTime", "correctPrefix"});
            _m.Call(data, sender, networkTime, correctPrefix);
        }
        static ::BNM::Structures::Mono::List<void*>* OnSerializeWrite(::Photon_Pun::PhotonView* view) {
            static BNM::Method<::BNM::Structures::Mono::List<void*>*> _m = GetClass().GetMethod(O("OnSerializeWrite"), {"view"});
            return _m.Call(view);
        }
        static void OpCleanActorRpcBuffer(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpCleanActorRpcBuffer"), {"actorNumber"});
            _m.Call(actorNumber);
        }
        static void OpCleanRpcBuffer(::Photon_Pun::PhotonView* view) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpCleanRpcBuffer"), {"view"});
            _m.Call(view);
        }
        static void OpRemoveCompleteCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpRemoveCompleteCache"));
            _m.Call();
        }
        static void OpRemoveCompleteCacheOfPlayer(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpRemoveCompleteCacheOfPlayer"), {"actorNumber"});
            _m.Call(actorNumber);
        }
        static void OpRemoveFromServerInstantiationsOfPlayer(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpRemoveFromServerInstantiationsOfPlayer"), {"actorNr"});
            _m.Call(actorNr);
        }
        static void OwnershipUpdate(::BNM::Structures::Mono::Array<int>* viewOwnerPairs, int targetActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OwnershipUpdate"), {"viewOwnerPairs", "targetActor"});
            _m.Call(viewOwnerPairs, targetActor);
        }
        template <typename TP1 = void*>
        static bool RaiseEvent(uint8_t eventCode, TP1 eventContent, ::Photon_Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames_Client_Photon::SendOptions sendOptions) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RaiseEvent"), {"eventCode", "eventContent", "raiseEventOptions", "sendOptions"});
            return _m.Call(eventCode, eventContent, raiseEventOptions, sendOptions);
        }
        template <typename TP1 = void*>
        static bool RaiseEventInternal(uint8_t eventCode, TP1 eventContent, ::Photon_Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames_Client_Photon::SendOptions sendOptions) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RaiseEventInternal"), {"eventCode", "eventContent", "raiseEventOptions", "sendOptions"});
            return _m.Call(eventCode, eventContent, raiseEventOptions, sendOptions);
        }
        static bool Reconnect() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Reconnect"));
            return _m.Call();
        }
        static bool ReconnectAndRejoin() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReconnectAndRejoin"));
            return _m.Call();
        }
        static void RegisterPhotonView(::Photon_Pun::PhotonView* netView) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterPhotonView"), {"netView"});
            _m.Call(netView);
        }
        static bool RejoinRoom(::BNM::Structures::Mono::String* roomName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RejoinRoom"), {"roomName"});
            return _m.Call(roomName);
        }
        static void remove_OnOwnershipRequestEv_1(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOwnershipRequestEv"), {"value"});
            _m.Call(value);
        }
        static void remove_OnOwnershipTransferedEv_1(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOwnershipTransferedEv"), {"value"});
            _m.Call(value);
        }
        static void remove_OnOwnershipTransferFailedEv_1(::BNM::Structures::Mono::Action<::Photon_Pun::PhotonView*, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnOwnershipTransferFailedEv"), {"value"});
            _m.Call(value);
        }
        static bool RemoveBufferedRPCs(int viewId, ::BNM::Structures::Mono::String* methodName, ::BNM::Structures::Mono::Array<int>* callersActorNumbers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RemoveBufferedRPCs"), {"viewId", "methodName", "callersActorNumbers"});
            return _m.Call(viewId, methodName, callersActorNumbers);
        }
        static void RemoveCacheOfLeftPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCacheOfLeftPlayers"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RemoveCallbackTarget(TP0 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackTarget"), {"target"});
            _m.Call(target);
        }
        static void RemoveInstantiatedGO(::GameObject* go, bool localOnly) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveInstantiatedGO"), {"go", "localOnly"});
            _m.Call(go, localOnly);
        }
        static void RemovePlayerCustomProperties(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* customPropertiesToDelete) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayerCustomProperties"), {"customPropertiesToDelete"});
            _m.Call(customPropertiesToDelete);
        }
        static void RemoveRPCs(::Photon_Realtime::Player* targetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRPCs"), {"targetPlayer"});
            _m.Call(targetPlayer);
        }
        static void RemoveRPCs(::Photon_Pun::PhotonView* targetPhotonView) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRPCs"), {"targetPhotonView"});
            _m.Call(targetPhotonView);
        }
        static void RemoveRPCsInGroup(int group) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRPCsInGroup"), {"group"});
            _m.Call(group);
        }
        static void RequestOwnership(int viewID, int fromOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestOwnership"), {"viewID", "fromOwner"});
            _m.Call(viewID, fromOwner);
        }
        static void ResetPhotonViewsOnSerialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetPhotonViewsOnSerialize"));
            _m.Call();
        }
        static void RPC(::Photon_Pun::PhotonView* view, ::BNM::Structures::Mono::String* methodName, ::Photon_Pun::RpcTarget target, bool encrypt, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC"), {"view", "methodName", "target", "encrypt", "parameters"});
            _m.Call(view, methodName, target, encrypt, parameters);
        }
        static void RPC(::Photon_Pun::PhotonView* view, ::BNM::Structures::Mono::String* methodName, ::Photon_Realtime::Player* targetPlayer, bool encrypt, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC"), {"view", "methodName", "targetPlayer", "encrypt", "parameters"});
            _m.Call(view, methodName, targetPlayer, encrypt, parameters);
        }
        static void RPC(::Photon_Pun::PhotonView* view, ::BNM::Structures::Mono::String* methodName, ::Photon_Pun::RpcTarget target, ::Photon_Realtime::Player* player, bool encrypt, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC"), {"view", "methodName", "target", "player", "encrypt", "parameters"});
            _m.Call(view, methodName, target, player, encrypt, parameters);
        }
        static void RunViewUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunViewUpdate"));
            _m.Call();
        }
        static void SendAllOutgoingCommands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendAllOutgoingCommands"));
            _m.Call();
        }
        static void SendDestroyOfAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDestroyOfAll"));
            _m.Call();
        }
        static void SendDestroyOfPlayer(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDestroyOfPlayer"), {"actorNr"});
            _m.Call(actorNr);
        }
        static bool SendInstantiate(::Photon_Pun::InstantiateParameters parameters, bool roomObject) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendInstantiate"), {"parameters", "roomObject"});
            return _m.Call(parameters, roomObject);
        }
        static void SendSerializeViewBatch(::Photon_Pun::PhotonNetwork_SerializeViewBatch* batch) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSerializeViewBatch"), {"batch"});
            _m.Call(batch);
        }
        static void ServerCleanInstantiateAndDestroy(::Photon_Pun::PhotonView* photonView) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ServerCleanInstantiateAndDestroy"), {"photonView"});
            _m.Call(photonView);
        }
        static void set_AuthValues(::Photon_Realtime::AuthenticationValues* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AuthValues"), {"value"});
            _m.Call(value);
        }
        static void set_AutomaticallySyncScene(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AutomaticallySyncScene"), {"value"});
            _m.Call(value);
        }
        static void set_BestRegionSummaryInPreferences(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BestRegionSummaryInPreferences"), {"value"});
            _m.Call(value);
        }
        static void set_CrcCheckEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CrcCheckEnabled"), {"value"});
            _m.Call(value);
        }
        static void set_GameVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GameVersion"), {"value"});
            _m.Call(value);
        }
        static void set_IsMessageQueueRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsMessageQueueRunning"), {"value"});
            _m.Call(value);
        }
        static void set_KeepAliveInBackground(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_KeepAliveInBackground"), {"value"});
            _m.Call(value);
        }
        static void set_MaxResendsBeforeDisconnect(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxResendsBeforeDisconnect"), {"value"});
            _m.Call(value);
        }
        static void set_NetworkStatisticsEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NetworkStatisticsEnabled"), {"value"});
            _m.Call(value);
        }
        static void set_NickName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NickName"), {"value"});
            _m.Call(value);
        }
        static void set_OfflineMode(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OfflineMode"), {"value"});
            _m.Call(value);
        }
        static void set_PhotonServerSettings(::Photon_Pun::ServerSettings* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PhotonServerSettings"), {"value"});
            _m.Call(value);
        }
        template <typename TP0 = void*>
        static void set_PrefabPool(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PrefabPool"), {"value"});
            _m.Call(value);
        }
        static void set_QuickResends(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_QuickResends"), {"value"});
            _m.Call(value);
        }
        static void set_SendRate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SendRate"), {"value"});
            _m.Call(value);
        }
        static void set_SerializationRate(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SerializationRate"), {"value"});
            _m.Call(value);
        }
        static void set_ServerPortOverrides(::Photon_Realtime::PhotonPortDefinition value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ServerPortOverrides"), {"value"});
            _m.Call(value);
        }
        static void set_UseAlternativeUdpPorts(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseAlternativeUdpPorts"), {"value"});
            _m.Call(value);
        }
        static void SetInterestGroups(uint8_t group, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInterestGroups"), {"group", "enabled"});
            _m.Call(group, enabled);
        }
        static void SetInterestGroups(::BNM::Structures::Mono::Array<uint8_t>* disableGroups, ::BNM::Structures::Mono::Array<uint8_t>* enableGroups) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInterestGroups"), {"disableGroups", "enableGroups"});
            _m.Call(disableGroups, enableGroups);
        }
        template <typename TP0 = void*>
        static void SetLevelInPropsIfSynced(TP0 levelId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLevelInPropsIfSynced"), {"levelId"});
            _m.Call(levelId);
        }
        static void SetLevelPrefix(uint8_t prefix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLevelPrefix"), {"prefix"});
            _m.Call(prefix);
        }
        static bool SetMasterClient(::Photon_Realtime::Player* masterClientPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetMasterClient"), {"masterClientPlayer"});
            return _m.Call(masterClientPlayer);
        }
        static bool SetPlayerCustomProperties(::ExitGames_Client_Photon::Hashtable* customProperties) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetPlayerCustomProperties"), {"customProperties"});
            return _m.Call(customProperties);
        }
        static void SetSendingEnabled(uint8_t group, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSendingEnabled"), {"group", "enabled"});
            _m.Call(group, enabled);
        }
        static void SetSendingEnabled(::BNM::Structures::Mono::Array<uint8_t>* disableGroups, ::BNM::Structures::Mono::Array<uint8_t>* enableGroups) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSendingEnabled"), {"disableGroups", "enableGroups"});
            _m.Call(disableGroups, enableGroups);
        }
        static void SetupLogging() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupLogging"));
            _m.Call();
        }
        static void StaticReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticReset"));
            _m.Call();
        }
        static void TransferOwnership(int viewID, int playerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferOwnership"), {"viewID", "playerID"});
            _m.Call(viewID, playerID);
        }
        static bool VerifyCanUseNetwork() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VerifyCanUseNetwork"));
            return _m.Call();
        }
        static bool ViewIDExists(int viewID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ViewIDExists"), {"viewID"});
            return _m.Call(viewID);
        }
        template <typename TP1 = void*>
        static bool WebRpc(::BNM::Structures::Mono::String* name, TP1 parameters, bool sendAuthCookie) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WebRpc"), {"name", "parameters", "sendAuthCookie"});
            return _m.Call(name, parameters, sendAuthCookie);
        }
    };
}
