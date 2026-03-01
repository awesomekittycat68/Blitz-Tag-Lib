#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Realtime/ConnectionHandler.hpp"

namespace Photon_Pun {
    struct PhotonHandler : ::Photon_Realtime::ConnectionHandler {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Pun::PhotonHandler* get_Instance() {
            static BNM::Method<::Photon_Pun::PhotonHandler*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::Photon_Pun::PhotonHandler* GetInstance() {
            static BNM::Field<::Photon_Pun::PhotonHandler*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int SerializeRateFrameCorrection = 8;
        ::Photon_Pun::PhotonHandler* GetInstance_pg() {
            static BNM::Method<::Photon_Pun::PhotonHandler*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::Photon_Pun::PhotonHandler* GetInstance_f() {
            static BNM::Field<::Photon_Pun::PhotonHandler*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static int GetMaxDatagrams() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDatagrams"));
            return _field.Get();
        }
        int GetNextSendTickCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSendTickCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextSendTickCountOnSerialize() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSendTickCountOnSerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetReusableIntList() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("reusableIntList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetSendAsap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendAsap"));
            return _field.Get();
        }
        ::Photon_Realtime::SupportLogger* GetSupportLoggerComponent() {
            static BNM::Field<::Photon_Realtime::SupportLogger*> _field = GetClass().GetField(O("supportLoggerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("UpdateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateIntervalOnSerialize() {
            static BNM::Field<int> _field = GetClass().GetField(O("UpdateIntervalOnSerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::Photon_Pun::PhotonHandler* value) {
            static BNM::Field<::Photon_Pun::PhotonHandler*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetMaxDatagrams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDatagrams"));
            _field.Set(value);
        }
        void SetNextSendTickCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSendTickCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSendTickCountOnSerialize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSendTickCountOnSerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReusableIntList(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("reusableIntList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSendAsap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendAsap"));
            _field.Set(value);
        }
        void SetSupportLoggerComponent(::Photon_Realtime::SupportLogger* value) {
            static BNM::Field<::Photon_Realtime::SupportLogger*> _field = GetClass().GetField(O("supportLoggerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("UpdateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateIntervalOnSerialize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("UpdateIntervalOnSerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispatch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::Photon_Pun::PhotonHandler* get_Instance_1() {
            static BNM::Method<::Photon_Pun::PhotonHandler*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
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
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
