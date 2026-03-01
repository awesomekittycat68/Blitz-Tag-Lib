#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadgetGrenade.hpp"
#include "SIGadgetGrenadeGravity_State.hpp"

namespace GlobalNamespace {
    struct SIGadgetGrenadeGravity : ::GlobalNamespace::SIGadgetGrenade {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetGrenadeGravity");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Material* GetActivatedMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("activatedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttractorStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("attractorStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCounterDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("counterDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFreezePositionOnTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("freezePositionOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGravityField() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gravityField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetIdleMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("idleMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocalPlayerInEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocalPlayerInEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMesh() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("mesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStandardGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("standardGravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetGrenadeGravity_State GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetGrenadeGravity_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateRemainingDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateRemainingDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTriggeredMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("triggeredMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivatedMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("activatedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractorStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attractorStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCounterDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("counterDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreezePositionOnTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("freezePositionOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityField(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gravityField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("idleMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocalPlayerInEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocalPlayerInEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMesh(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("mesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandardGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("standardGravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetGrenadeGravity_State value) {
            static BNM::Field<::GlobalNamespace::SIGadgetGrenadeGravity_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateRemainingDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateRemainingDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggeredMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("triggeredMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateGravityEffect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateGravityEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeState"), {"newStateIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newStateIndex);
        }
        void CheckReenabledFreezePosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckReenabledFreezePosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeactivateGravityEffect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateGravityEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GravityOverrideFunction(::GorillaLocomotion::GTPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GravityOverrideFunction"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void HandleActivated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleHitSurface() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHitSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleThrown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleThrown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnTriggerExit(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetState_1(::GlobalNamespace::SIGadgetGrenadeGravity_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeGravity_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
    };
}
