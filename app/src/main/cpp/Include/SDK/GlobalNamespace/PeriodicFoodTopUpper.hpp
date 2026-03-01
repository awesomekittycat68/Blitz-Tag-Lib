#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PeriodicFoodTopUpper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PeriodicFoodTopUpper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CrittersFood* GetFood() {
            static BNM::Field<::GlobalNamespace::CrittersFood*> _field = GetClass().GetField(O("food"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFoodObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("foodObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeFoodEmpty() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeFoodEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingToRefill() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingToRefill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitToRefill() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitToRefill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFood(::GlobalNamespace::CrittersFood* value) {
            static BNM::Field<::GlobalNamespace::CrittersFood*> _field = GetClass().GetField(O("food"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoodObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("foodObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeFoodEmpty(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeFoodEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingToRefill(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingToRefill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitToRefill(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitToRefill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
