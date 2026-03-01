#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRToolUpgradePurchaseStationShelf : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolUpgradePurchaseStationShelf");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>* GetGRPurchaseSlots() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*> _field = GetClass().GetField(O("gRPurchaseSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShelfName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ShelfName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Material*>*>* GetSlotOriginalMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Material*>*>*> _field = GetClass().GetField(O("slotOriginalMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Renderer*>*>* GetSlotRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Renderer*>*>*> _field = GetClass().GetField(O("slotRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGRPurchaseSlots(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*> _field = GetClass().GetField(O("gRPurchaseSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ShelfName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlotOriginalMaterials(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Material*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Material*>*>*> _field = GetClass().GetField(O("slotOriginalMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlotRenderers(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Renderer*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Array<::Renderer*>*>*> _field = GetClass().GetField(O("slotRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBacklightStateAndMaterial(int slotID, bool isEnabled, ::Material* materialOverride) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBacklightStateAndMaterial"), {"slotID", "isEnabled", "materialOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slotID, isEnabled, materialOverride);
        }
        void SetMaterialOverride(int slotID, ::Material* overrideMaterial) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaterialOverride"), {"slotID", "overrideMaterial"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slotID, overrideMaterial);
        }
    };
}
