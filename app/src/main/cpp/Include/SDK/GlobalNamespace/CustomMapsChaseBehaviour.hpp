#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsBehaviourBase.hpp"

namespace GlobalNamespace {
    struct CustomMapsChaseBehaviour : ::GlobalNamespace::CustomMapsBehaviourBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsChaseBehaviour");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CustomMapsAIBehaviourController* GetController() {
            static BNM::Field<::GlobalNamespace::CustomMapsAIBehaviourController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsChasing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isChasing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoseSightDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("loseSightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoseSightDistSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("loseSightDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNavMeshAgent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navMeshAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRememberLoseSightPos() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rememberLoseSightPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSightOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStopDistSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("stopDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetController(::GlobalNamespace::CustomMapsAIBehaviourController* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsAIBehaviourController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsChasing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isChasing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoseSightDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loseSightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoseSightDistSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loseSightDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNavMeshAgent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navMeshAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRememberLoseSightPos(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rememberLoseSightPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopDistSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stopDistSq"));
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
        bool IsTargetInChaseRange(bool& withinStopDist) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetInChaseRange"), {"withinStopDist"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&withinStopDist);
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
    };
}
