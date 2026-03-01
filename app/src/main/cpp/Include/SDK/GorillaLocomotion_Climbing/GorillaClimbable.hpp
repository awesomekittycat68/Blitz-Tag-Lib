#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Climbing {
    struct GorillaClimbable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Climbing", "GorillaClimbable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetClimbOnlyWhileSmall() {
            static BNM::Field<bool> _field = GetClass().GetField(O("climbOnlyWhileSmall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("clip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetClipOnFullRelease() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("clipOnFullRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetColliderCache() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("colliderCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBeingClimbed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBeingClimbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPlayerAttached() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPlayerAttached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistanceSnap() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistanceSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GorillaLocomotion_Climbing::GorillaHandClimber*, ::GorillaLocomotion_Climbing::GorillaClimbableRef*>* GetOnBeforeClimb() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaLocomotion_Climbing::GorillaHandClimber*, ::GorillaLocomotion_Climbing::GorillaClimbableRef*>*> _field = GetClass().GetField(O("onBeforeClimb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSnapX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSnapY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSnapZ() {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClimbOnlyWhileSmall(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("climbOnlyWhileSmall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("clip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClipOnFullRelease(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("clipOnFullRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderCache(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("colliderCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBeingClimbed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBeingClimbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPlayerAttached(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPlayerAttached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistanceSnap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistanceSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBeforeClimb(::BNM::Structures::Mono::Action<::GorillaLocomotion_Climbing::GorillaHandClimber*, ::GorillaLocomotion_Climbing::GorillaClimbableRef*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaLocomotion_Climbing::GorillaHandClimber*, ::GorillaLocomotion_Climbing::GorillaClimbableRef*>*> _field = GetClass().GetField(O("onBeforeClimb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapZ(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
