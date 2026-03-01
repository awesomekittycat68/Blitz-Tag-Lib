#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkComponent.hpp"
#include "SecondLookSkeleton_GhostState.hpp"
#include "SkeletonNetData.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SecondLookSkeletonSynchValues : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SecondLookSkeletonSynchValues");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SkeletonNetData GetNetData() {
            static BNM::Method<::GlobalNamespace::SkeletonNetData> _method = GetClass().GetMethod(O("get_NetData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNetData(::GlobalNamespace::SkeletonNetData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NetData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SkeletonNetData GetNetData_f() {
            static BNM::Field<::GlobalNamespace::SkeletonNetData> _field = GetClass().GetField(O("_NetData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAngerPoint() {
            static BNM::Field<int> _field = GetClass().GetField(O("angerPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentNode() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SecondLookSkeleton_GhostState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SecondLookSkeleton_GhostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SecondLookSkeleton* GetMySkeleton() {
            static BNM::Field<::GlobalNamespace::SecondLookSkeleton*> _field = GetClass().GetField(O("mySkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextNode() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNetData_fs(::GlobalNamespace::SkeletonNetData value) {
            static BNM::Field<::GlobalNamespace::SkeletonNetData> _field = GetClass().GetField(O("_NetData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngerPoint(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("angerPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentNode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::SecondLookSkeleton_GhostState value) {
            static BNM::Field<::GlobalNamespace::SecondLookSkeleton_GhostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMySkeleton(::GlobalNamespace::SecondLookSkeleton* value) {
            static BNM::Field<::GlobalNamespace::SecondLookSkeleton*> _field = GetClass().GetField(O("mySkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextNode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
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
        ::GlobalNamespace::SkeletonNetData get_NetData() {
            static BNM::Method<::GlobalNamespace::SkeletonNetData> _m = GetClass().GetMethod(O("get_NetData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnOwnerSwitched(::GlobalNamespace::NetPlayer* newOwningPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerSwitched"), {"newOwningPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwningPlayer);
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
        void RemoteActivateGhost(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteActivateGhost"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RemotePlayerCaught(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemotePlayerCaught"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RemotePlayerSeen(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemotePlayerSeen"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        template <typename TP0 = void*>
        void RPC_RemoteActiveGhost(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemoteActiveGhost"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_RemoteActiveGhost$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemoteActiveGhost@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP0 = void*>
        void RPC_RemotePlayerCaught(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemotePlayerCaught"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_RemotePlayerCaught$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemotePlayerCaught@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP0 = void*>
        void RPC_RemotePlayerSeen(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemotePlayerSeen"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_RemotePlayerSeen$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RemotePlayerSeen@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_NetData(::GlobalNamespace::SkeletonNetData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NetData"), {"value"});
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
