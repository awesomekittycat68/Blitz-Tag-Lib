#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeSet.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct SIUpgradeBasedGenericEntry$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIUpgradeBasedGenericEntry`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* GetActiveRequirements() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("activeRequirements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* GetInactiveRequirements() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("inactiveRequirements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T GetValue() {
            static BNM::Field<T> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveRequirements(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("activeRequirements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInactiveRequirements(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("inactiveRequirements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValue(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool IsActive(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsActive"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(withUpgrades);
        }
    };
}
