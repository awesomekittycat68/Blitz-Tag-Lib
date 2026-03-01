#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VRRigCollection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigCollection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::RigContainer*>* GetRigs() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RigContainer*>*> _method = GetClass().GetMethod(O("get_Rigs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CompositeTriggerEvents* GetCollisionTriggerEvents() {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("collisionTriggerEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RigContainer*>* GetContainedRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("containedRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* GetPlayerEnteredCollection() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("playerEnteredCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* GetPlayerLeftCollection() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("playerLeftCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollisionTriggerEvents(::GlobalNamespace::CompositeTriggerEvents* value) {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("collisionTriggerEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerEnteredCollection(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("playerEnteredCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLeftCollection(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("playerLeftCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RigContainer*>* get_Rigs() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RigContainer*>*> _m = GetClass().GetMethod(O("get_Rigs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasRig(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig);
        }
        bool HasRig(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasRig"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
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
        void OnRigTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRigTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnRigTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRigTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void RigDisabled(::GlobalNamespace::RigContainer* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RigDisabled"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
    };
}
