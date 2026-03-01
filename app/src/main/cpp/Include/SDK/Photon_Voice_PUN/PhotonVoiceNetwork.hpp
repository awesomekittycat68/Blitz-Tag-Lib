#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Realtime/ClientState.hpp"
#include "../Photon_Voice_Unity/VoiceConnection.hpp"

namespace Photon_Voice_PUN {
    struct PhotonVoiceNetwork : ::Photon_Voice_Unity::VoiceConnection {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.PUN", "PhotonVoiceNetwork");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Voice_PUN::PhotonVoiceNetwork* get_Instance() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceNetwork*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::Photon_Voice_PUN::PhotonVoiceNetwork* GetInstance() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceNetwork*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* VoiceRoomNameSuffix = "_voice_";
        ::Photon_Voice_PUN::PhotonVoiceNetwork* GetInstance_pg() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceNetwork*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::Photon_Voice_PUN::PhotonVoiceNetwork* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUsePunAuthValues() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UsePunAuthValues"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUsePunAuthValues(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UsePunAuthValues"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAutoConnectAndJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoConnectAndJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoLeaveAndDisconnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoLeaveAndDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClientCalledConnectAndJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("clientCalledConnectAndJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClientCalledConnectOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("clientCalledConnectOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClientCalledDisconnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("clientCalledDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Voice_PUN::PhotonVoiceNetwork* GetInstance_f() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceNetwork*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void* GetInstanceLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceLock"));
            return _field.Get();
        }
        static bool GetInstantiated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("instantiated"));
            return _field.Get();
        }
        bool GetInternalConnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("internalConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInternalDisconnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("internalDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsePunAppSettings() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usePunAppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsePunAuthValues_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usePunAuthValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::EnterRoomParams* GetVoiceRoomParams() {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("voiceRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWorkInOfflineMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("WorkInOfflineMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoConnectAndJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoConnectAndJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoLeaveAndDisconnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoLeaveAndDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientCalledConnectAndJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("clientCalledConnectAndJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientCalledConnectOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("clientCalledConnectOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientCalledDisconnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("clientCalledDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance_fs(::Photon_Voice_PUN::PhotonVoiceNetwork* value) {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceNetwork*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetInstanceLock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceLock"));
            _field.Set(value);
        }
        static void SetInstantiated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("instantiated"));
            _field.Set(value);
        }
        void SetInternalConnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("internalConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternalDisconnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("internalDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsePunAppSettings(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usePunAppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsePunAuthValues_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usePunAuthValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceRoomParams(::Photon_Realtime::EnterRoomParams* value) {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("voiceRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkInOfflineMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("WorkInOfflineMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckLateLinking(::Photon_Voice_Unity::Speaker* speaker, int viewId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckLateLinking"), {"speaker", "viewId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speaker, viewId);
        }
        bool Connect() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Connect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ConnectAndJoinRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectAndJoinRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ConnectOrJoin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConnectOrJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Disconnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FollowPun() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FollowPun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FollowPun(::Photon_Realtime::ClientState toState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FollowPun"), {"toState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toState);
        }
        static ::Photon_Voice_PUN::PhotonVoiceNetwork* get_Instance_1() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceNetwork*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        bool get_UsePunAuthValues() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UsePunAuthValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetVoiceRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetVoiceRoomName"));
            return _m.Call();
        }
        bool JoinRoom(::BNM::Structures::Mono::String* voiceRoomName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinRoom"), {"voiceRoomName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voiceRoomName);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPunStateChanged(::Photon_Realtime::ClientState fromState, ::Photon_Realtime::ClientState toState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPunStateChanged"), {"fromState", "toState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromState, toState);
        }
        void OnVoiceStateChanged(::Photon_Realtime::ClientState fromState, ::Photon_Realtime::ClientState toState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoiceStateChanged"), {"fromState", "toState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromState, toState);
        }
        static void set_Instance(::Photon_Voice_PUN::PhotonVoiceNetwork* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void set_UsePunAuthValues(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UsePunAuthValues"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP2 = void*>
        ::Photon_Voice_Unity::Speaker* SimpleSpeakerFactory(int playerId, uint8_t voiceId, TP2 userData) {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _m = GetClass().GetMethod(O("SimpleSpeakerFactory"), {"playerId", "voiceId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, voiceId, userData);
        }
    };
}
