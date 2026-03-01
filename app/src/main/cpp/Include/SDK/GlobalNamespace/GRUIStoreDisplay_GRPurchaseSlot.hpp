#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"
#include "ProgressionManager_DrillUpgradeLevel.hpp"

namespace GlobalNamespace {
    struct GRUIStoreDisplay_GRPurchaseSlot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIStoreDisplay").GetInnerClass("GRPurchaseSlot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCanAfford() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canAfford"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetDescription() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("Description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel GetDrillUpgradeLevel() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel> _field = GetClass().GetField(O("drillUpgradeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetName() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetOverrideMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("overrideMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPrice() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("Price"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolParts GetPurchaseID() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("PurchaseID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("purchaseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCanAfford(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canAfford"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescription(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("Description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrillUpgradeLevel(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel> _field = GetClass().GetField(O("drillUpgradeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("overrideMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrice(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("Price"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseID(::GlobalNamespace::GRToolProgressionManager_ToolParts value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("PurchaseID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("purchaseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
