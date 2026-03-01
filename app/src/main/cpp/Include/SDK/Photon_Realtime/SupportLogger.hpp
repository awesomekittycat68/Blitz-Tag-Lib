#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DisconnectCause.hpp"

namespace Photon_Realtime {
    struct SupportLogger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "SupportLogger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::LoadBalancingClient* GetClient() {
            static BNM::Method<::Photon_Realtime::LoadBalancingClient*> _method = GetClass().GetMethod(O("get_Client"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetClient(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Client"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::LoadBalancingClient* GetClient_f() {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialOnApplicationPauseSkipped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialOnApplicationPauseSkipped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoggedStillOfflineMessage() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loggedStillOfflineMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLogTrafficStats() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LogTrafficStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPingMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("pingMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPingMin() {
            static BNM::Field<int> _field = GetClass().GetField(O("pingMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStartStopwatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("startStopwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClient_fs(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialOnApplicationPauseSkipped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialOnApplicationPauseSkipped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoggedStillOfflineMessage(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loggedStillOfflineMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogTrafficStats(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LogTrafficStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pingMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingMin(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pingMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartStopwatch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("startStopwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Photon_Realtime::LoadBalancingClient* get_Client() {
            static BNM::Method<::Photon_Realtime::LoadBalancingClient*> _m = GetClass().GetMethod(O("get_Client"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetFormattedTimestamp() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFormattedTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LogBasics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogBasics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LogStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnApplicationPause(bool pause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationPause"), {"pause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pause);
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConnected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConnectedToMaster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectedToMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreatedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreateRoomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreateRoomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnCustomAuthenticationFailed(::BNM::Structures::Mono::String* debugMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomAuthenticationFailed"), {"debugMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(debugMessage);
        }
        void OnCustomAuthenticationResponse(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomAuthenticationResponse"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnected(::Photon_Realtime::DisconnectCause cause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"), {"cause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cause);
        }
        void OnErrorInfo(::Photon_Realtime::ErrorInfo* errorInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnErrorInfo"), {"errorInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorInfo);
        }
        void OnFriendListUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::FriendInfo*>* friendList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFriendListUpdate"), {"friendList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendList);
        }
        void OnJoinedLobby() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinRandomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRandomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnJoinRoomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRoomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnLeftLobby() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLobbyStatisticsUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::TypedLobbyInfo*>* lobbyStatistics) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLobbyStatisticsUpdate"), {"lobbyStatistics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lobbyStatistics);
        }
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPlayerEnteredRoom(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::Photon_Realtime::Player* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnPlayerPropertiesUpdate(::Photon_Realtime::Player* targetPlayer, ::ExitGames_Client_Photon::Hashtable* changedProps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerPropertiesUpdate"), {"targetPlayer", "changedProps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer, changedProps);
        }
        void OnPreLeavingRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreLeavingRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRegionListReceived(::Photon_Realtime::RegionHandler* regionHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRegionListReceived"), {"regionHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(regionHandler);
        }
        void OnRoomListUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::RoomInfo*>* roomList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomListUpdate"), {"roomList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomList);
        }
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
        }
        void set_Client(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Client"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartLogStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartLogStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartTrackValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartTrackValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopLogStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopLogStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopTrackValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopTrackValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrackValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
