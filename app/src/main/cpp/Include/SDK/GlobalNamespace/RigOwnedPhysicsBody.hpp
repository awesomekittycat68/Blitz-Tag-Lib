#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RigOwnedPhysicsBody : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RigOwnedPhysicsBody");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDetachTransform() {
            static BNM::Field<bool> _field = GetClass().GetField(O("detachTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasRig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasRigidbodyView() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRigidbodyView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTransformView() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTransformView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Photon_Pun::MonoBehaviourPun*>* GetOtherComponents() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun::MonoBehaviourPun*>*> _field = GetClass().GetField(O("otherComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::RigOwnedRigidbodyView* GetRigidbodyView() {
            static BNM::Field<::Photon_Pun::RigOwnedRigidbodyView*> _field = GetClass().GetField(O("rigidbodyView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::RigOwnedTransformView* GetTransformView() {
            static BNM::Field<::Photon_Pun::RigOwnedTransformView*> _field = GetClass().GetField(O("transformView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDetachTransform(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("detachTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasRig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasRigidbodyView(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRigidbodyView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTransformView(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTransformView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOtherComponents(::BNM::Structures::Mono::Array<::Photon_Pun::MonoBehaviourPun*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun::MonoBehaviourPun*>*> _field = GetClass().GetField(O("otherComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidbodyView(::Photon_Pun::RigOwnedRigidbodyView* value) {
            static BNM::Field<::Photon_Pun::RigOwnedRigidbodyView*> _field = GetClass().GetField(O("rigidbodyView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformView(::Photon_Pun::RigOwnedTransformView* value) {
            static BNM::Field<::Photon_Pun::RigOwnedTransformView*> _field = GetClass().GetField(O("transformView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        void OnNetConnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNetConnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnNetDisconnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNetDisconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
