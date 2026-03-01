#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActorSettings.hpp"

namespace GlobalNamespace {
    struct CrittersFoodSettings : ::GlobalNamespace::CrittersActorSettings {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersFoodSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentFood() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableWhenEmpty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disableWhenEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFood() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_food"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxFood() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_startingSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentFood(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableWhenEmpty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disableWhenEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFood(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_food"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxFood(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_startingSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void UpdateActorSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActorSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
