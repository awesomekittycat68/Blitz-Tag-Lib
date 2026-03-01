#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRToolUnlock : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolUnlock");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetToolId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toolId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetToolName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toolName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade*>* GetToolUpgrades() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade*>*> _field = GetClass().GetField(O("toolUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnlockCost() {
            static BNM::Field<int> _field = GetClass().GetField(O("unlockCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnlockLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("unlockLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetToolId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toolId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toolName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolUpgrades(::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRToolUpgrade*>*> _field = GetClass().GetField(O("toolUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockCost(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("unlockCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("unlockLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
