#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsAttackBehaviour_State.hpp"
#include "CustomMapsBehaviourBase.hpp"

namespace GlobalNamespace {
    struct CustomMapsAttackBehaviour : ::GlobalNamespace::CustomMapsBehaviourBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsAttackBehaviour");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAnimBlendTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("animBlendTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAttackAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("attackAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttackDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttackDistSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAttackType() {
            static BNM::Field<void*> _field = GetClass().GetField(O("attackType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsAIBehaviourController* GetController() {
            static BNM::Field<::GlobalNamespace::CustomMapsAIBehaviourController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamageAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("damageAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamageDelayAfterPlayingAnimation() {
            static BNM::Field<float> _field = GetClass().GetField(O("damageDelayAfterPlayingAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAttackTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAttackTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightFOV() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightMinDot() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightMinDot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSightOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsAttackBehaviour_State GetState() {
            static BNM::Field<::GlobalNamespace::CustomMapsAttackBehaviour_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStopMovingToAttack() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stopMovingToAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeBetweenAttacks() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenAttacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseColliders() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimBlendTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("animBlendTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackAnimName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("attackAnimName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackDistSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackType(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("attackType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetController(::GlobalNamespace::CustomMapsAIBehaviourController* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsAIBehaviourController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damageAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageDelayAfterPlayingAnimation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damageDelayAfterPlayingAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAttackTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAttackTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightFOV(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightMinDot(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightMinDot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::CustomMapsAttackBehaviour_State value) {
            static BNM::Field<::GlobalNamespace::CustomMapsAttackBehaviour_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopMovingToAttack(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stopMovingToAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeBetweenAttacks(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenAttacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseColliders(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanContinueExecuting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanContinueExecuting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanExecute() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Execute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FaceTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FaceTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsTargetInAttackRange(::GlobalNamespace::GRPlayer* target) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetInAttackRange"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(target);
        }
        bool IsTargetVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void NetExecute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* otherCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"otherCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherCollider);
        }
        void ResetBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetBehavior"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerAttack(::GlobalNamespace::GRPlayer* targetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerAttack"), {"targetPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer);
        }
    };
}
