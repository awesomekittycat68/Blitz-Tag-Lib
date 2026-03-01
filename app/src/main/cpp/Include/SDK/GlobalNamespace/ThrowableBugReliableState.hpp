#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkComponent.hpp"
#include "ThrowableBugReliableState_BugData.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct ThrowableBugReliableState : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThrowableBugReliableState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ThrowableBugReliableState_BugData GetData() {
            static BNM::Method<::GlobalNamespace::ThrowableBugReliableState_BugData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GlobalNamespace::ThrowableBugReliableState_BugData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::ThrowableBugReliableState_BugData GetData_f() {
            static BNM::Field<::GlobalNamespace::ThrowableBugReliableState_BugData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTravelingDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("travelingDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GlobalNamespace::ThrowableBugReliableState_BugData value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugReliableState_BugData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTravelingDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("travelingDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        ::GlobalNamespace::ThrowableBugReliableState_BugData get_Data() {
            static BNM::Method<::GlobalNamespace::ThrowableBugReliableState_BugData> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer* fromPlayer, ::GlobalNamespace::NetPlayer* toPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnMasterClientAssistedTakeoverRequest"), {"fromPlayer", "toPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromPlayer, toPlayer);
        }
        void OnMyCreatorLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMyCreatorLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMyOwnerLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMyOwnerLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnOwnershipRequest(::GlobalNamespace::NetPlayer* fromPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnOwnershipRequest"), {"fromPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromPlayer);
        }
        void OnOwnershipTransferred(::GlobalNamespace::NetPlayer* toPlayer, ::GlobalNamespace::NetPlayer* fromPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipTransferred"), {"toPlayer", "fromPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toPlayer, fromPlayer);
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
        void set_Data(::GlobalNamespace::ThrowableBugReliableState_BugData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
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
