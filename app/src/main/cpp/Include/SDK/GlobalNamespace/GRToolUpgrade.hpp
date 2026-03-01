#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolUpgrade_ToolUpgradeLevel.hpp"

namespace GlobalNamespace {
    struct GRToolUpgrade : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolUpgrade");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDescription() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUpgradeId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("upgradeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>* GetUpgradeLevels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>*> _field = GetClass().GetField(O("upgradeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUpgradeName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("upgradeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDescription(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("upgradeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeLevels(::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>*> _field = GetClass().GetField(O("upgradeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("upgradeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
