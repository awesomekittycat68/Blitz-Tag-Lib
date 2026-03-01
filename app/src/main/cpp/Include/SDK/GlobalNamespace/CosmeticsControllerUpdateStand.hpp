#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"

namespace GlobalNamespace {
    struct CosmeticsControllerUpdateStand : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticsControllerUpdateStand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAttemptToConsumeEntitlement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AttemptToConsumeEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController* GetCosmeticsController() {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> _field = GetClass().GetField(O("cosmeticsController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEntitlementSuccessfullyConsumed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EntitlementSuccessfullyConsumed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFailEntitlement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("FailEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHeadModelsPrefabPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("headModelsPrefabPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::HeadModel*>* GetInventoryHeadModels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HeadModel*>*> _field = GetClass().GetField(O("inventoryHeadModels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetItemNotGrantedYet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ItemNotGrantedYet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetItemSuccessfullyGranted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ItemSuccessfullyGranted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLockSuccessfullyCleared() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockSuccessfullyCleared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetOutItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("outItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerUnlocked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PlayerUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunDebug() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RunDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTextParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("textParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttemptToConsumeEntitlement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AttemptToConsumeEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsController(::GorillaNetworking::CosmeticsController* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> _field = GetClass().GetField(O("cosmeticsController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntitlementSuccessfullyConsumed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EntitlementSuccessfullyConsumed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailEntitlement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("FailEntitlement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadModelsPrefabPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("headModelsPrefabPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInventoryHeadModels(::BNM::Structures::Mono::Array<::GlobalNamespace::HeadModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HeadModel*>*> _field = GetClass().GetField(O("inventoryHeadModels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemNotGrantedYet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ItemNotGrantedYet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemSuccessfullyGranted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ItemSuccessfullyGranted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockSuccessfullyCleared(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockSuccessfullyCleared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("outItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerUnlocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PlayerUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunDebug(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RunDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("textParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CallGetIAPPurchases() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallGetIAPPurchases"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GameObject* ReturnChildWithCosmeticNameMatch(::Transform* parentTransform) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("ReturnChildWithCosmeticNameMatch"), {"parentTransform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(parentTransform);
        }
    };
}
