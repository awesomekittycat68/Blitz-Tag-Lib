#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Realtime/DisconnectCause.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct ConnectAndJoin : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "ConnectAndJoin");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsConnected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsConnected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAutoConnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoTransmit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoTransmit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::EnterRoomParams* GetEnterRoomParams() {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("enterRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPublishUserId() {
            static BNM::Field<bool> _field = GetClass().GetField(O("publishUserId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRandomRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RandomRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RoomName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoConnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoTransmit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoTransmit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublishUserId(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("publishUserId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RandomRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RoomName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConnectNow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConnectNow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsConnected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsConnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnected(::Photon_Realtime::DisconnectCause cause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"), {"cause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cause);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFriendListUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::FriendInfo*>* friendList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFriendListUpdate"), {"friendList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendList);
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
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
    };
}
