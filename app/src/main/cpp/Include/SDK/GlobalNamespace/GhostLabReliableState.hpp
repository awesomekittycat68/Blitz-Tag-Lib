#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostLab_EntranceDoorsState.hpp"
#include "GhostLabData.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GhostLabReliableState : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostLabReliableState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GhostLabData GetNetData() {
            static BNM::Method<::GlobalNamespace::GhostLabData> _method = GetClass().GetMethod(O("get_NetData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNetData(::GlobalNamespace::GhostLabData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NetData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GhostLabData GetNetData_f() {
            static BNM::Field<::GlobalNamespace::GhostLabData> _field = GetClass().GetField(O("_NetData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostLab_EntranceDoorsState GetDoorState() {
            static BNM::Field<::GlobalNamespace::GhostLab_EntranceDoorsState> _field = GetClass().GetField(O("doorState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSingleDoorCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("singleDoorCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetSingleDoorOpen() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("singleDoorOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNetData_fs(::GlobalNamespace::GhostLabData value) {
            static BNM::Field<::GlobalNamespace::GhostLabData> _field = GetClass().GetField(O("_NetData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState value) {
            static BNM::Field<::GlobalNamespace::GhostLab_EntranceDoorsState> _field = GetClass().GetField(O("doorState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSingleDoorCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("singleDoorCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSingleDoorOpen(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("singleDoorOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GhostLabData get_NetData() {
            static BNM::Method<::GlobalNamespace::GhostLabData> _m = GetClass().GetMethod(O("get_NetData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnOwnerChange(::Photon_Realtime::Player* newOwner, ::Photon_Realtime::Player* previousOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerChange"), {"newOwner", "previousOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner, previousOwner);
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void RemoteEntranceDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState newState, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteEntranceDoorState"), {"newState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, info);
        }
        void RemoteSingleDoorState(int doorIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteSingleDoorState"), {"doorIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(doorIndex, info);
        }
        template <typename TP1 = void*>
        void RPC_RemoteEntranceDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState newState, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemoteEntranceDoorState"), {"newState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, info);
        }
        static void RPC_RemoteEntranceDoorState$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemoteEntranceDoorState@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP1 = void*>
        void RPC_RemoteSingleDoorState(int doorIndex, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemoteSingleDoorState"), {"doorIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(doorIndex, info);
        }
        static void RPC_RemoteSingleDoorState$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemoteSingleDoorState@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_NetData(::GlobalNamespace::GhostLabData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NetData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateEntranceDoorsState(::GlobalNamespace::GhostLab_EntranceDoorsState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEntranceDoorsState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateSingleDoorState(int singleDoorIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSingleDoorState"), {"singleDoorIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(singleDoorIndex);
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
