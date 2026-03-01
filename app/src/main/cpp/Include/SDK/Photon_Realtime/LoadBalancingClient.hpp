#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/ConnectionProtocol.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"
#include "../ExitGames_Client_Photon/SendOptions.hpp"
#include "../ExitGames_Client_Photon/SerializationProtocol.hpp"
#include "../ExitGames_Client_Photon/StatusCode.hpp"
#include "AuthModeOption.hpp"
#include "ClientAppType.hpp"
#include "ClientState.hpp"
#include "DisconnectCause.hpp"
#include "EncryptionMode.hpp"
#include "JoinType.hpp"
#include "PhotonPortDefinition.hpp"
#include "ServerConnection.hpp"

namespace Photon_Realtime {
    struct LoadBalancingClient : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "LoadBalancingClient");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int FriendRequestListMax = 512;
        ::BNM::Structures::Mono::String* GetAppId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AppId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAppId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AppId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetAppVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AppVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAppVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AppVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        ::Photon_Realtime::ClientAppType GetClientType() {
            static BNM::Method<::Photon_Realtime::ClientAppType> _method = GetClass().GetMethod(O("get_ClientType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetClientType(::Photon_Realtime::ClientAppType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ClientType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetCloudRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CloudRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCloudRegion(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CloudRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetCurrentCluster() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CurrentCluster"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentCluster(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentCluster"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::TypedLobby* GetCurrentLobby() {
            static BNM::Method<::Photon_Realtime::TypedLobby*> _method = GetClass().GetMethod(O("get_CurrentLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentLobby(::Photon_Realtime::TypedLobby* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::Room* GetCurrentRoom() {
            static BNM::Method<::Photon_Realtime::Room*> _method = GetClass().GetMethod(O("get_CurrentRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentRoom(::Photon_Realtime::Room* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetCurrentServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CurrentServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::DisconnectCause GetDisconnectedCause() {
            static BNM::Method<::Photon_Realtime::DisconnectCause> _method = GetClass().GetMethod(O("get_DisconnectedCause"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisconnectedCause(::Photon_Realtime::DisconnectCause value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DisconnectedCause"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetEnableProtocolFallback() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EnableProtocolFallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEnableProtocolFallback(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EnableProtocolFallback"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetGameServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGameServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GameServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetInLobby() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsConnected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsConnected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsConnectedAndReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsConnectedAndReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFetchingFriendList() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFetchingFriendList"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsUsingNameServer() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsUsingNameServer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsUsingNameServer(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsUsingNameServer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::LoadBalancingPeer* GetLoadBalancingPeer() {
            static BNM::Method<::Photon_Realtime::LoadBalancingPeer*> _method = GetClass().GetMethod(O("get_LoadBalancingPeer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLoadBalancingPeer(::Photon_Realtime::LoadBalancingPeer* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LoadBalancingPeer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::Player* GetLocalPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _method = GetClass().GetMethod(O("get_LocalPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLocalPlayer(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LocalPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetMasterServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MasterServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMasterServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MasterServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetNameServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_NameServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        int GetPlayersInRoomsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayersInRoomsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayersInRoomsCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayersInRoomsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPlayersOnMasterCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayersOnMasterCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayersOnMasterCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayersOnMasterCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRoomsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RoomsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRoomsCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RoomsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::SerializationProtocol GetSerializationProtocol() {
            static BNM::Method<::ExitGames_Client_Photon::SerializationProtocol> _method = GetClass().GetMethod(O("get_SerializationProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSerializationProtocol(::ExitGames_Client_Photon::SerializationProtocol value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SerializationProtocol"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::ServerConnection GetServer() {
            static BNM::Method<::Photon_Realtime::ServerConnection> _method = GetClass().GetMethod(O("get_Server"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetServer(::Photon_Realtime::ServerConnection value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Server"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::ClientState GetState() {
            static BNM::Method<::Photon_Realtime::ClientState> _method = GetClass().GetMethod(O("get_State"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetState(::Photon_Realtime::ClientState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_State"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        ::BNM::Structures::Mono::String* GetUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_UserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUserId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_EventReceived(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_EventReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_EventReceived(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_EventReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OpResponseReceived(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OpResponseReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OpResponseReceived(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OpResponseReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_StateChanged(::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_StateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_StateChanged(::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_StateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::Photon_Realtime::AuthModeOption GetAuthMode() {
            static BNM::Field<::Photon_Realtime::AuthModeOption> _field = GetClass().GetField(O("AuthMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBestRegionSummaryFromStorage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bestRegionSummaryFromStorage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCallbackTargetChanges() {
            static BNM::Field<void*> _field = GetClass().GetField(O("callbackTargetChanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCallbackTargets() {
            static BNM::Field<void*> _field = GetClass().GetField(O("callbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::ConnectionCallbacksContainer* GetConnectionCallbackTargets() {
            static BNM::Field<::Photon_Realtime::ConnectionCallbacksContainer*> _field = GetClass().GetField(O("ConnectionCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetConnectToBestRegion() {
            static BNM::Field<bool> _field = GetClass().GetField(O("connectToBestRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableLobbyStatistics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableLobbyStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::EncryptionMode GetEncryptionMode() {
            static BNM::Field<::Photon_Realtime::EncryptionMode> _field = GetClass().GetField(O("EncryptionMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::EnterRoomParams* GetEnterRoomParamsCache() {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("enterRoomParamsCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::ErrorInfoCallbacksContainer* GetErrorInfoCallbackTargets() {
            static BNM::Field<::Photon_Realtime::ErrorInfoCallbacksContainer*> _field = GetClass().GetField(O("ErrorInfoCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>* GetEventReceived() {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>*> _field = GetClass().GetField(O("EventReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::OperationResponse* GetFailedRoomEntryOperation() {
            static BNM::Field<::ExitGames_Client_Photon::OperationResponse*> _field = GetClass().GetField(O("failedRoomEntryOperation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetFriendListRequested() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("friendListRequested"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::InRoomCallbacksContainer* GetInRoomCallbackTargets() {
            static BNM::Field<::Photon_Realtime::InRoomCallbacksContainer*> _field = GetClass().GetField(O("InRoomCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::JoinType GetLastJoinType() {
            static BNM::Field<::Photon_Realtime::JoinType> _field = GetClass().GetField(O("lastJoinType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::LobbyCallbacksContainer* GetLobbyCallbackTargets() {
            static BNM::Field<::Photon_Realtime::LobbyCallbacksContainer*> _field = GetClass().GetField(O("LobbyCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Realtime::TypedLobbyInfo*>* GetLobbyStatistics() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::TypedLobbyInfo*>*> _field = GetClass().GetField(O("lobbyStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::MatchMakingCallbacksContainer* GetMatchMakingCallbackTargets() {
            static BNM::Field<::Photon_Realtime::MatchMakingCallbacksContainer*> _field = GetClass().GetField(O("MatchMakingCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNameServerHost() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("NameServerHost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNameServerPortInAppSettings() {
            static BNM::Field<int> _field = GetClass().GetField(O("NameServerPortInAppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>* GetOpResponseReceived() {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>*> _field = GetClass().GetField(O("OpResponseReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::ExitGames_Client_Photon::ConnectionProtocol, int>* GetProtocolToNameServerPort() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::ExitGames_Client_Photon::ConnectionProtocol, int>*> _field = GetClass().GetField(O("ProtocolToNameServerPort"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetProxyServerAddress() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProxyServerAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::RegionHandler* GetRegionHandler() {
            static BNM::Field<::Photon_Realtime::RegionHandler*> _field = GetClass().GetField(O("RegionHandler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::PhotonPortDefinition GetServerPortOverrides() {
            static BNM::Field<::Photon_Realtime::PhotonPortDefinition> _field = GetClass().GetField(O("ServerPortOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::ClientState GetState_f() {
            static BNM::Field<::Photon_Realtime::ClientState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>* GetStateChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>*> _field = GetClass().GetField(O("StateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSummaryToCache() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SummaryToCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTokenCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tokenCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::WebRpcCallbacksContainer* GetWebRpcCallbackTargets() {
            static BNM::Field<::Photon_Realtime::WebRpcCallbacksContainer*> _field = GetClass().GetField(O("WebRpcCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAuthMode(::Photon_Realtime::AuthModeOption value) {
            static BNM::Field<::Photon_Realtime::AuthModeOption> _field = GetClass().GetField(O("AuthMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestRegionSummaryFromStorage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bestRegionSummaryFromStorage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnectionCallbackTargets(::Photon_Realtime::ConnectionCallbacksContainer* value) {
            static BNM::Field<::Photon_Realtime::ConnectionCallbacksContainer*> _field = GetClass().GetField(O("ConnectionCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnectToBestRegion(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("connectToBestRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableLobbyStatistics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableLobbyStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncryptionMode(::Photon_Realtime::EncryptionMode value) {
            static BNM::Field<::Photon_Realtime::EncryptionMode> _field = GetClass().GetField(O("EncryptionMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterRoomParamsCache(::Photon_Realtime::EnterRoomParams* value) {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("enterRoomParamsCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorInfoCallbackTargets(::Photon_Realtime::ErrorInfoCallbacksContainer* value) {
            static BNM::Field<::Photon_Realtime::ErrorInfoCallbacksContainer*> _field = GetClass().GetField(O("ErrorInfoCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventReceived(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>*> _field = GetClass().GetField(O("EventReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailedRoomEntryOperation(::ExitGames_Client_Photon::OperationResponse* value) {
            static BNM::Field<::ExitGames_Client_Photon::OperationResponse*> _field = GetClass().GetField(O("failedRoomEntryOperation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendListRequested(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("friendListRequested"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInRoomCallbackTargets(::Photon_Realtime::InRoomCallbacksContainer* value) {
            static BNM::Field<::Photon_Realtime::InRoomCallbacksContainer*> _field = GetClass().GetField(O("InRoomCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastJoinType(::Photon_Realtime::JoinType value) {
            static BNM::Field<::Photon_Realtime::JoinType> _field = GetClass().GetField(O("lastJoinType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLobbyCallbackTargets(::Photon_Realtime::LobbyCallbacksContainer* value) {
            static BNM::Field<::Photon_Realtime::LobbyCallbacksContainer*> _field = GetClass().GetField(O("LobbyCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchMakingCallbackTargets(::Photon_Realtime::MatchMakingCallbacksContainer* value) {
            static BNM::Field<::Photon_Realtime::MatchMakingCallbacksContainer*> _field = GetClass().GetField(O("MatchMakingCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameServerHost(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("NameServerHost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameServerPortInAppSettings(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NameServerPortInAppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpResponseReceived(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>*> _field = GetClass().GetField(O("OpResponseReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProxyServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProxyServerAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionHandler(::Photon_Realtime::RegionHandler* value) {
            static BNM::Field<::Photon_Realtime::RegionHandler*> _field = GetClass().GetField(O("RegionHandler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerPortOverrides(::Photon_Realtime::PhotonPortDefinition value) {
            static BNM::Field<::Photon_Realtime::PhotonPortDefinition> _field = GetClass().GetField(O("ServerPortOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState_fs(::Photon_Realtime::ClientState value) {
            static BNM::Field<::Photon_Realtime::ClientState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateChanged(::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>*> _field = GetClass().GetField(O("StateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummaryToCache(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SummaryToCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTokenCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tokenCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWebRpcCallbackTargets(::Photon_Realtime::WebRpcCallbacksContainer* value) {
            static BNM::Field<::Photon_Realtime::WebRpcCallbacksContainer*> _field = GetClass().GetField(O("WebRpcCallbackTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_EventReceived_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_EventReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OpResponseReceived_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OpResponseReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_StateChanged_1(::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_StateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void AddCallbackTarget(TP0 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackTarget"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
        bool CallAuthenticate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CallAuthenticate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CallbackRoomEnterFailed(::ExitGames_Client_Photon::OperationResponse* operationResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallbackRoomEnterFailed"), {"operationResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationResponse);
        }
        void ChangeLocalID(int newID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeLocalID"), {"newID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newID);
        }
        void CheckConnectSetupWebGl() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckConnectSetupWebGl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckIfClientIsReadyToCallOperation(uint8_t opCode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfClientIsReadyToCallOperation"), {"opCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opCode);
        }
        bool CheckIfOpAllowedOnServer(uint8_t opCode, ::Photon_Realtime::ServerConnection serverConnection) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfOpAllowedOnServer"), {"opCode", "serverConnection"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opCode, serverConnection);
        }
        bool CheckIfOpCanBeSent(uint8_t opCode, ::Photon_Realtime::ServerConnection serverConnection, ::BNM::Structures::Mono::String* opName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfOpCanBeSent"), {"opCode", "serverConnection", "opName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opCode, serverConnection, opName);
        }
        bool Connect() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Connect(::BNM::Structures::Mono::String* serverAddress, ::BNM::Structures::Mono::String* proxyServerAddress, ::Photon_Realtime::ServerConnection serverType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"), {"serverAddress", "proxyServerAddress", "serverType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverAddress, proxyServerAddress, serverType);
        }
        bool ConnectToMasterServer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectToMasterServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ConnectToNameServer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectToNameServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ConnectToRegionMaster(::BNM::Structures::Mono::String* region) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectToRegionMaster"), {"region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(region);
        }
        bool ConnectUsingSettings(::Photon_Realtime::AppSettings* appSettings) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectUsingSettings"), {"appSettings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(appSettings);
        }
        ::Photon_Realtime::Player* CreatePlayer(::BNM::Structures::Mono::String* actorName, int actorNumber, bool isLocal, ::ExitGames_Client_Photon::Hashtable* actorProperties) {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("CreatePlayer"), {"actorName", "actorNumber", "isLocal", "actorProperties"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorName, actorNumber, isLocal, actorProperties);
        }
        ::Photon_Realtime::Room* CreateRoom(::BNM::Structures::Mono::String* roomName, ::Photon_Realtime::RoomOptions* opt) {
            static BNM::Method<::Photon_Realtime::Room*> _m = GetClass().GetMethod(O("CreateRoom"), {"roomName", "opt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opt);
        }
        void DebugReturn(::ExitGames_Client_Photon::DebugLevel level, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugReturn"), {"level", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(level, message);
        }
        void Disconnect(::Photon_Realtime::DisconnectCause cause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disconnect"), {"cause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cause);
        }
        void DisconnectToReconnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisconnectToReconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GameEnteredOnGameServer(::ExitGames_Client_Photon::OperationResponse* operationResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameEnteredOnGameServer"), {"operationResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationResponse);
        }
        ::BNM::Structures::Mono::String* get_AppId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AppId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_AppVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AppVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::AuthenticationValues* get_AuthValues() {
            static BNM::Method<::Photon_Realtime::AuthenticationValues*> _m = GetClass().GetMethod(O("get_AuthValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::ClientAppType get_ClientType() {
            static BNM::Method<::Photon_Realtime::ClientAppType> _m = GetClass().GetMethod(O("get_ClientType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_CloudRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CloudRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_CurrentCluster() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CurrentCluster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::TypedLobby* get_CurrentLobby() {
            static BNM::Method<::Photon_Realtime::TypedLobby*> _m = GetClass().GetMethod(O("get_CurrentLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Room* get_CurrentRoom() {
            static BNM::Method<::Photon_Realtime::Room*> _m = GetClass().GetMethod(O("get_CurrentRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_CurrentServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CurrentServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::DisconnectCause get_DisconnectedCause() {
            static BNM::Method<::Photon_Realtime::DisconnectCause> _m = GetClass().GetMethod(O("get_DisconnectedCause"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_EnableProtocolFallback() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EnableProtocolFallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_ExpectedProtocol() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_ExpectedProtocol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_GameServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsConnected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsConnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsConnectedAndReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsConnectedAndReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFetchingFriendList() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFetchingFriendList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsUsingNameServer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsUsingNameServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::LoadBalancingPeer* get_LoadBalancingPeer() {
            static BNM::Method<::Photon_Realtime::LoadBalancingPeer*> _m = GetClass().GetMethod(O("get_LoadBalancingPeer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* get_LocalPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("get_LocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_MasterServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MasterServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_NameServerAddress() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_NameServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_NickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_NickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayersInRoomsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayersInRoomsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayersOnMasterCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayersOnMasterCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RoomsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RoomsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::SerializationProtocol get_SerializationProtocol() {
            static BNM::Method<::ExitGames_Client_Photon::SerializationProtocol> _m = GetClass().GetMethod(O("get_SerializationProtocol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::ServerConnection get_Server() {
            static BNM::Method<::Photon_Realtime::ServerConnection> _m = GetClass().GetMethod(O("get_Server"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::ClientState get_State() {
            static BNM::Method<::Photon_Realtime::ClientState> _m = GetClass().GetMethod(O("get_State"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_TokenForInit() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_TokenForInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseAlternativeUdpPorts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseAlternativeUdpPorts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_UserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_UserId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetNameServerAddress_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetNameServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisconnectMessageReceived(::ExitGames_Client_Photon::DisconnectMessage* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectMessageReceived"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void OnEvent(::ExitGames_Client_Photon::EventData* photonEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEvent"), {"photonEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(photonEvent);
        }
        template <typename TP0 = void*>
        void OnMessage(TP0 message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMessage"), {"message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message);
        }
        void OnOperationResponse(::ExitGames_Client_Photon::OperationResponse* operationResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOperationResponse"), {"operationResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationResponse);
        }
        void OnRegionPingCompleted(::Photon_Realtime::RegionHandler* regionHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRegionPingCompleted"), {"regionHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(regionHandler);
        }
        void OnStatusChanged(::ExitGames_Client_Photon::StatusCode statusCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStatusChanged"), {"statusCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(statusCode);
        }
        bool OpChangeGroups(::BNM::Structures::Mono::Array<uint8_t>* groupsToRemove, ::BNM::Structures::Mono::Array<uint8_t>* groupsToAdd) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpChangeGroups"), {"groupsToRemove", "groupsToAdd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(groupsToRemove, groupsToAdd);
        }
        bool OpCreateRoom(::Photon_Realtime::EnterRoomParams* enterRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpCreateRoom"), {"enterRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enterRoomParams);
        }
        bool OpFindFriends(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* friendsToFind, ::Photon_Realtime::FindFriendsOptions* options) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpFindFriends"), {"friendsToFind", "options"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(friendsToFind, options);
        }
        bool OpGetGameList(::Photon_Realtime::TypedLobby* typedLobby, ::BNM::Structures::Mono::String* sqlLobbyFilter) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpGetGameList"), {"typedLobby", "sqlLobbyFilter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(typedLobby, sqlLobbyFilter);
        }
        bool OpGetRegions() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpGetRegions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool OpJoinLobby(::Photon_Realtime::TypedLobby* lobby) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinLobby"), {"lobby"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lobby);
        }
        bool OpJoinOrCreateRoom(::Photon_Realtime::EnterRoomParams* enterRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinOrCreateRoom"), {"enterRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enterRoomParams);
        }
        bool OpJoinRandomOrCreateRoom(::Photon_Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon_Realtime::EnterRoomParams* createRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinRandomOrCreateRoom"), {"opJoinRandomRoomParams", "createRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opJoinRandomRoomParams, createRoomParams);
        }
        bool OpJoinRandomRoom(::Photon_Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinRandomRoom"), {"opJoinRandomRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opJoinRandomRoomParams);
        }
        bool OpJoinRoom(::Photon_Realtime::EnterRoomParams* enterRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinRoom"), {"enterRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enterRoomParams);
        }
        bool OpLeaveLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpLeaveLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpLeaveRoom"), {"becomeInactive", "sendAuthCookie"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(becomeInactive, sendAuthCookie);
        }
        template <typename TP1 = void*>
        bool OpRaiseEvent(uint8_t eventCode, TP1 customEventContent, ::Photon_Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames_Client_Photon::SendOptions sendOptions) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpRaiseEvent"), {"eventCode", "customEventContent", "raiseEventOptions", "sendOptions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(eventCode, customEventContent, raiseEventOptions, sendOptions);
        }
        bool OpRejoinRoom(::BNM::Structures::Mono::String* roomName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpRejoinRoom"), {"roomName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName);
        }
        bool OpSetCustomPropertiesOfActor(int actorNr, ::ExitGames_Client_Photon::Hashtable* propertiesToSet, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetCustomPropertiesOfActor"), {"actorNr", "propertiesToSet", "expectedProperties", "webFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNr, propertiesToSet, expectedProperties, webFlags);
        }
        bool OpSetCustomPropertiesOfRoom(::ExitGames_Client_Photon::Hashtable* propertiesToSet, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetCustomPropertiesOfRoom"), {"propertiesToSet", "expectedProperties", "webFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(propertiesToSet, expectedProperties, webFlags);
        }
        bool OpSetPropertiesOfActor(int actorNr, ::ExitGames_Client_Photon::Hashtable* actorProperties, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetPropertiesOfActor"), {"actorNr", "actorProperties", "expectedProperties", "webFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNr, actorProperties, expectedProperties, webFlags);
        }
        bool OpSetPropertiesOfRoom(::ExitGames_Client_Photon::Hashtable* gameProperties, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetPropertiesOfRoom"), {"gameProperties", "expectedProperties", "webFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameProperties, expectedProperties, webFlags);
        }
        template <typename TP1 = void*>
        bool OpSetPropertyOfRoom(uint8_t propCode, TP1 value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetPropertyOfRoom"), {"propCode", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(propCode, value);
        }
        template <typename TP1 = void*>
        bool OpWebRpc(::BNM::Structures::Mono::String* uriPath, TP1 parameters, bool sendAuthCookie) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpWebRpc"), {"uriPath", "parameters", "sendAuthCookie"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(uriPath, parameters, sendAuthCookie);
        }
        void ReadoutProperties(::ExitGames_Client_Photon::Hashtable* gameProperties, ::ExitGames_Client_Photon::Hashtable* actorProperties, int targetActorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadoutProperties"), {"gameProperties", "actorProperties", "targetActorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameProperties, actorProperties, targetActorNr);
        }
        ::ExitGames_Client_Photon::Hashtable* ReadoutPropertiesForActorNr(::ExitGames_Client_Photon::Hashtable* actorProperties, int actorNr) {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _m = GetClass().GetMethod(O("ReadoutPropertiesForActorNr"), {"actorProperties", "actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorProperties, actorNr);
        }
        bool ReconnectAndRejoin() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReconnectAndRejoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ReconnectToMaster() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReconnectToMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void remove_EventReceived_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_EventReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OpResponseReceived_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::OperationResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OpResponseReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_StateChanged_1(::BNM::Structures::Mono::Action<::Photon_Realtime::ClientState, ::Photon_Realtime::ClientState>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_StateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void RemoveCallbackTarget(TP0 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackTarget"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
        static ::BNM::Structures::Mono::String* ReplacePortWithAlternative(::BNM::Structures::Mono::String* address, uint16_t replacementPort) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ReplacePortWithAlternative"), {"address", "replacementPort"});
            return _m.Call(address, replacementPort);
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_AppId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AppId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AppVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AppVersion"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AuthValues(::Photon_Realtime::AuthenticationValues* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AuthValues"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ClientType(::Photon_Realtime::ClientAppType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ClientType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CloudRegion(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CloudRegion"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentCluster(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentCluster"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentLobby(::Photon_Realtime::TypedLobby* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentLobby"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentRoom(::Photon_Realtime::Room* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentRoom"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DisconnectedCause(::Photon_Realtime::DisconnectCause value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisconnectedCause"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EnableProtocolFallback(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EnableProtocolFallback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_ExpectedProtocol(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ExpectedProtocol"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GameServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GameServerAddress"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsUsingNameServer(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsUsingNameServer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LoadBalancingPeer(::Photon_Realtime::LoadBalancingPeer* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LoadBalancingPeer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LocalPlayer(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LocalPlayer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MasterServerAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MasterServerAddress"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NickName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NickName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayersInRoomsCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayersInRoomsCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayersOnMasterCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayersOnMasterCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RoomsCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RoomsCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SerializationProtocol(::ExitGames_Client_Photon::SerializationProtocol value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SerializationProtocol"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Server(::Photon_Realtime::ServerConnection value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Server"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_State(::Photon_Realtime::ClientState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_State"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseAlternativeUdpPorts(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseAlternativeUdpPorts"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UserId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UserId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetupEncryption(::BNM::Structures::Mono::Dictionary<uint8_t, void*>* encryptionData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupEncryption"), {"encryptionData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(encryptionData);
        }
        void SimulateConnectionLoss(bool simulateTimeout) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimulateConnectionLoss"), {"simulateTimeout"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(simulateTimeout);
        }
        template <typename T>
        void UpdateCallbackTarget(::Photon_Realtime::LoadBalancingClient_CallbackTargetChange* change, ::BNM::Structures::Mono::List<T>* container) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCallbackTarget"), {"change", "container"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(change, container);
        }
        void UpdateCallbackTargets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCallbackTargets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatedActorList(::BNM::Structures::Mono::Array<int>* actorsInGame) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatedActorList"), {"actorsInGame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorsInGame);
        }
    };
}
