#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"

namespace GlobalNamespace {
    struct GRToolUpgradePurchaseStationShelf_GRPurchaseSlot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolUpgradePurchaseStationShelf").GetInnerClass("GRPurchaseSlot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::MeshRenderer* GetBacklightRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("BacklightRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanAfford() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canAfford"));
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
        float GetRopePitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("RopePitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRopeYaw() {
            static BNM::Field<float> _field = GetClass().GetField(O("RopeYaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSlotPivot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("SlotPivot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetToolEntityPrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("ToolEntityPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBacklightRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("BacklightRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanAfford(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canAfford"));
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
        void SetRopePitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RopePitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeYaw(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RopeYaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlotPivot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("SlotPivot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolEntityPrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("ToolEntityPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
