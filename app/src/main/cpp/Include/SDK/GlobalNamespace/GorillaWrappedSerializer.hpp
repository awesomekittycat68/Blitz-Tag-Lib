#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"
#include "../Photon_Pun/RpcTarget.hpp"

namespace GlobalNamespace {
    struct GorillaWrappedSerializer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaWrappedSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsLocallyOwned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLocallyOwned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetworkView* GetNetView() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _method = GetClass().GetMethod(O("get_NetView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetworkView* GetNetView_f() {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("netView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSerializeTarget() {
            static BNM::Field<void*> _field = GetClass().GetField(O("serializeTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSuccessfullInstantiate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("successfullInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTargetObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetTargetType() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("targetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNetView(::GlobalNamespace::NetworkView* value) {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("netView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeTarget(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("serializeTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessfullInstantiate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("successfullInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetType(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("targetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename T>
        T AddRPCComponent() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("AddRPCComponent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void Despawned(::BNM::IL2CPP::Il2CppObject* runner, bool hasState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Despawned"), {"runner", "hasState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, hasState);
        }
        void FailedToSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FailedToSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdateNetwork() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdateNetwork"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FusionDataRPC(::BNM::Structures::Mono::String* method, ::Photon_Pun::RpcTarget target, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FusionDataRPC"), {"method", "target", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, target, parameters);
        }
        void FusionDataRPC(::BNM::Structures::Mono::String* method, ::GlobalNamespace::NetPlayer* targetPlayer, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FusionDataRPC"), {"method", "targetPlayer", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, targetPlayer, parameters);
        }
        void* get_data() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLocallyOwned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLocallyOwned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetworkView* get_NetView() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _m = GetClass().GetMethod(O("get_NetView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBeforeDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFailedSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailedSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped wrappedInfo, ::GameObject*& outTargetObject, ::BNM::MonoType*& outTargetType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnSpawnSetupCheck"), {"wrappedInfo", "outTargetObject", "outTargetType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(wrappedInfo, &outTargetObject, &outTargetType);
        }
        void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccesfullySpawned"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ProcessSpawn(::GlobalNamespace::PhotonMessageInfoWrapped wrappedInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessSpawn"), {"wrappedInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrappedInfo);
        }
        void Render() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Render"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendRPC(::BNM::Structures::Mono::String* rpcName, bool targetOthers, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"rpcName", "targetOthers", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcName, targetOthers, data);
        }
        void SendRPC(::BNM::Structures::Mono::String* rpcName, ::GlobalNamespace::NetPlayer* targetPlayer, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"rpcName", "targetPlayer", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcName, targetPlayer, data);
        }
        template <typename TP0 = void*>
        void set_data(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Spawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidOnSerialize(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo& info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidOnSerialize"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, &info);
        }
    };
}
