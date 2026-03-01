#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_ResourceType.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SIProgression_SINode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIProgression").GetInnerClass("SINode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* GetCosts() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("costs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIProgression_SINode>* GetParents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIProgression_SINode>*> _field = GetClass().GetField(O("parents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUnlocked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("unlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeType GetUpgradeType() {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosts(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("costs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParents(::BNM::Structures::Mono::List<::GlobalNamespace::SIProgression_SINode>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIProgression_SINode>*> _field = GetClass().GetField(O("parents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("unlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeType(::GlobalNamespace::SIUpgradeType value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
