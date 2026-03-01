#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsBehaviourBase.hpp"

namespace GlobalNamespace {
    struct CustomMapsSearchBehaviour : ::GlobalNamespace::CustomMapsBehaviourBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsSearchBehaviour");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float SEARCH_COOLDOWN = 0.1f;
        ::GlobalNamespace::CustomMapsAIBehaviourController* GetController() {
            static BNM::Field<::GlobalNamespace::CustomMapsAIBehaviourController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastSearchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastSearchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightDistSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDistSq"));
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
        void SetController(::GlobalNamespace::CustomMapsAIBehaviourController* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsAIBehaviourController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSearchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastSearchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightDistSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDistSq"));
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
