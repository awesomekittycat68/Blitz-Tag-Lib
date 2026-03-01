#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAttributes_GRAttributePair.hpp"
#include "GRAttributeType.hpp"

namespace GlobalNamespace {
    struct GRAttributes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAttributes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRBonusSystem* GetBonusSystem() {
            static BNM::Field<::GlobalNamespace::GRBonusSystem*> _field = GetClass().GetField(O("bonusSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, int>* GetDefaultAttributes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, int>*> _field = GetClass().GetField(O("defaultAttributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRAttributes_GRAttributePair>* GetStartingAttributes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRAttributes_GRAttributePair>*> _field = GetClass().GetField(O("startingAttributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBonusSystem(::GlobalNamespace::GRBonusSystem* value) {
            static BNM::Field<::GlobalNamespace::GRBonusSystem*> _field = GetClass().GetField(O("bonusSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultAttributes(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, int>*> _field = GetClass().GetField(O("defaultAttributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingAttributes(::BNM::Structures::Mono::List<::GlobalNamespace::GRAttributes_GRAttributePair>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRAttributes_GRAttributePair>*> _field = GetClass().GetField(O("startingAttributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddAttribute(::GlobalNamespace::GRAttributeType type, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddAttribute"), {"type", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, value);
        }
        void AddBonus(::GlobalNamespace::GRBonusEntry* entry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddBonus"), {"entry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entry);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float CalculateFinalFloatValueForAttribute(::GlobalNamespace::GRAttributeType attributeType) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CalculateFinalFloatValueForAttribute"), {"attributeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType);
        }
        int CalculateFinalValueForAttribute(::GlobalNamespace::GRAttributeType attributeType) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculateFinalValueForAttribute"), {"attributeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType);
        }
        bool HasBeenInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasBeenInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasValueForAttribute(::GlobalNamespace::GRAttributeType attributeType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasValueForAttribute"), {"attributeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType);
        }
        void RemoveBonus(::GlobalNamespace::GRBonusEntry* entry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveBonus"), {"entry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entry);
        }
    };
}
