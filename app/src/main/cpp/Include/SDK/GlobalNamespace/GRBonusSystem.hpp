#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAttributeType.hpp"

namespace GlobalNamespace {
    struct GRBonusSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRBonusSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>* GetCurrentAdditiveBonuses() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>*> _field = GetClass().GetField(O("currentAdditiveBonuses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>* GetCurrentMultiplicativeBonuses() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>*> _field = GetClass().GetField(O("currentMultiplicativeBonuses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributes* GetDefaultAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("defaultAttributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentAdditiveBonuses(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>*> _field = GetClass().GetField(O("currentAdditiveBonuses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMultiplicativeBonuses(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRAttributeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*>*> _field = GetClass().GetField(O("currentMultiplicativeBonuses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("defaultAttributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddBonus(::GlobalNamespace::GRBonusEntry* entry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddBonus"), {"entry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entry);
        }
        int CalculateFinalValueForAttribute(::GlobalNamespace::GRAttributeType attributeType) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculateFinalValueForAttribute"), {"attributeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType);
        }
        ::GlobalNamespace::GRAttributes* GetDefaultAttributes_1() {
            static BNM::Method<::GlobalNamespace::GRAttributes*> _m = GetClass().GetMethod(O("GetDefaultAttributes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasValueForAttribute(::GlobalNamespace::GRAttributeType attributeType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasValueForAttribute"), {"attributeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType);
        }
        void Init(::GlobalNamespace::GRAttributes* attributes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"attributes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(attributes);
        }
        void RemoveBonus(::GlobalNamespace::GRBonusEntry* entry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveBonus"), {"entry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entry);
        }
    };
}
