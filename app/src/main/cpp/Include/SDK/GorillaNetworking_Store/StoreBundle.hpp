#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreBundle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreBundle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBundleDescriptionText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_bundleDescriptionText"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Sprite* GetBundleImage() {
            static BNM::Method<::Sprite*> _method = GetClass().GetMethod(O("get_bundleImage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBundleName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_bundleName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBundleSKU() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_bundleSKU"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasPrice() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasPrice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NexusCreatorCode* GetNexusCreatorCode() {
            static BNM::Method<::GlobalNamespace::NexusCreatorCode*> _method = GetClass().GetMethod(O("get_nexusCreatorCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetPlayfabBundleID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_playfabBundleID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetPrice() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_price"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBundleName_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_bundleName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPrice_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_price"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetStoreBundleDataReference() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("_storeBundleDataReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleStand*>* GetBundleStands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleStand*>*> _field = GetClass().GetField(O("bundleStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetDefaultCurrencySymbol() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultCurrencySymbol"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetDefaultPrice() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultPrice"));
            return _field.Get();
        }
        bool GetIsOwned() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOwned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonStringFormat() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("purchaseButtonStringFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("purchaseButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBundleName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_bundleName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrice(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_price"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreBundleDataReference(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("_storeBundleDataReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundleStands(::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleStand*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleStand*>*> _field = GetClass().GetField(O("bundleStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOwned(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOwned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonStringFormat(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("purchaseButtonStringFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("purchaseButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* get_bundleDescriptionText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_bundleDescriptionText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Sprite* get_bundleImage() {
            static BNM::Method<::Sprite*> _m = GetClass().GetMethod(O("get_bundleImage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_bundleName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_bundleName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_bundleSKU() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_bundleSKU"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasPrice() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasPrice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NexusCreatorCode* get_nexusCreatorCode() {
            static BNM::Method<::GlobalNamespace::NexusCreatorCode*> _m = GetClass().GetMethod(O("get_nexusCreatorCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_playfabBundleID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_playfabBundleID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_price() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_price"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializebundleStands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializebundleStands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryUpdatePrice(uint32_t bundlePrice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryUpdatePrice"), {"bundlePrice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bundlePrice);
        }
        void TryUpdatePrice(::BNM::Structures::Mono::String* bundlePrice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryUpdatePrice"), {"bundlePrice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bundlePrice);
        }
        void UpdatePurchaseButtonText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePurchaseButtonText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateBundleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateBundleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
