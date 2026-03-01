#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSerializer.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct VirtualStumpSerializer : ::GlobalNamespace::GorillaSerializer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VirtualStumpSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float STATUS_UPDATE_INTERVAL = 0.5f;
        bool GetHasAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VirtualStumpBarrierSFX* GetBarrierSFX() {
            static BNM::Field<::GlobalNamespace::VirtualStumpBarrierSFX*> _field = GetClass().GetField(O("barrierSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsDisplayScreen* GetDetailsScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsDisplayScreen*> _field = GetClass().GetField(O("detailsScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceNewSearch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceNewSearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetRoomInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomInitialized"));
            return _field.Get();
        }
        bool GetSendModList() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendModList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendNewStatus() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendNewStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStatusUpdateCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("statusUpdateCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetWaitingForRoomInitialization() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForRoomInitialization"));
            return _field.Get();
        }
        bool GetWaitToSendStatus() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitToSendStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBarrierSFX(::GlobalNamespace::VirtualStumpBarrierSFX* value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpBarrierSFX*> _field = GetClass().GetField(O("barrierSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetailsScreen(::GlobalNamespace::CustomMapsDisplayScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsDisplayScreen*> _field = GetClass().GetField(O("detailsScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceNewSearch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceNewSearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRoomInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomInitialized"));
            _field.Set(value);
        }
        void SetSendModList(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendModList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendNewStatus(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendNewStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusUpdateCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("statusUpdateCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetWaitingForRoomInitialization(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForRoomInitialization"));
            _field.Set(value);
        }
        void SetWaitToSendStatus(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitToSendStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_HasAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeRoom_RPC(int currentScreen, int driverID, int64_t modDetailsID, int64_t loadedMapModID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeRoom_RPC"), {"currentScreen", "driverID", "modDetailsID", "loadedMapModID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentScreen, driverID, modDetailsID, loadedMapModID, info);
        }
        static bool IsWaitingForRoomInit() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsWaitingForRoomInit"));
            return _m.Call();
        }
        void LoadMapSynced(int64_t modId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadMapSynced"), {"modId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(modId);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* leavingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"leavingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leavingPlayer);
        }
        void RefreshDriverNickName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDriverNickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshDriverNickName_RPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDriverNickName_RPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RequestRoomInitialization_RPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRoomInitialization_RPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RequestTerminalControlStatusChange(bool lockedStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTerminalControlStatusChange"), {"lockedStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lockedStatus);
        }
        void RequestTerminalControlStatusChange_RPC(bool lockedStatus, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTerminalControlStatusChange_RPC"), {"lockedStatus", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lockedStatus, info);
        }
        void SendTerminalStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendTerminalStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetRoomMap_RPC(int64_t modId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRoomMap_RPC"), {"modId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(modId, info);
        }
        void SetTerminalControlStatus(bool locked, int playerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTerminalControlStatus"), {"locked", "playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(locked, playerID);
        }
        void SetTerminalControlStatus_RPC(bool locked, int driverID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTerminalControlStatus_RPC"), {"locked", "driverID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(locked, driverID, info);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnloadMap_RPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnloadMap_RPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void UnloadMapSynced() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnloadMapSynced"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScreen_RPC(int currentScreen, int64_t modDetailsID, int driverID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreen_RPC"), {"currentScreen", "modDetailsID", "driverID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentScreen, modDetailsID, driverID, info);
        }
        ::BNM::Coroutine::IEnumerator* WaitToSendStatus() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("WaitToSendStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
