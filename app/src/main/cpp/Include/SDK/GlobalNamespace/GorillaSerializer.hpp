#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaSerializer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
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
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
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
        bool OnInstantiateSetup(::Photon_Pun::PhotonMessageInfo info, ::GameObject*& outTargetObject, ::BNM::MonoType*& outTargetType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnInstantiateSetup"), {"info", "outTargetObject", "outTargetType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info, &outTargetObject, &outTargetType);
        }
        void OnPhotonInstantiate(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonInstantiate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void OnSuccessfullInstantiate(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfullInstantiate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void SendRPC(::BNM::Structures::Mono::String* rpcName, bool targetOthers, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"rpcName", "targetOthers", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcName, targetOthers, data);
        }
        void SendRPC(::BNM::Structures::Mono::String* rpcName, ::Photon_Realtime::Player* targetPlayer, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"rpcName", "targetPlayer", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcName, targetPlayer, data);
        }
        bool ValidOnSerialize(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo& info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidOnSerialize"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, &info);
        }
    };
}
