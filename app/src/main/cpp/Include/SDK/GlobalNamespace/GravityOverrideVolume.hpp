#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GravityOverrideVolume_GravityType.hpp"

namespace GlobalNamespace {
    struct GravityOverrideVolume : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GravityOverrideVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GravityOverrideVolume_GravityType GetGravityType() {
            static BNM::Field<::GlobalNamespace::GravityOverrideVolume_GravityType> _field = GetClass().GetField(O("gravityType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReferenceTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("strength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CompositeTriggerEvents* GetTriggerEvents() {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("triggerEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGravityType(::GlobalNamespace::GravityOverrideVolume_GravityType value) {
            static BNM::Field<::GlobalNamespace::GravityOverrideVolume_GravityType> _field = GetClass().GetField(O("gravityType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("strength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerEvents(::GlobalNamespace::CompositeTriggerEvents* value) {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("triggerEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GravityOverrideFunction(::GorillaLocomotion::GTPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GravityOverrideFunction"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnColliderEnteredVolume(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderEnteredVolume"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnColliderExitedVolume(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderExitedVolume"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
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
    };
}
