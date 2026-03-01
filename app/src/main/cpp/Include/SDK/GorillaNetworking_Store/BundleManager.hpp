#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct BundleManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "BundleManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking_Store::BundleManager* GetInstance() {
            static BNM::Field<::GorillaNetworking_Store::BundleManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundleData*>* GetBundleScriptableObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundleData*>*> _field = GetClass().GetField(O("_bundleScriptableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::SpawnedBundle*>* GetSpawnedBundleStands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::SpawnedBundle*>*> _field = GetClass().GetField(O("_spawnedBundleStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>* GetStoreBundles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("_storeBundles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TryOnBundlesStand* GetTryOnBundlesStand() {
            static BNM::Field<::GlobalNamespace::TryOnBundlesStand*> _field = GetClass().GetField(O("_tryOnBundlesStand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleManager_BundleStandSpawn*>* GetBundleStands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleManager_BundleStandSpawn*>*> _field = GetClass().GetField(O("BundleStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking_Store::BundleManager* GetInstance_f() {
            static BNM::Field<::GorillaNetworking_Store::BundleManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetNullBundleData() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("nullBundleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>* GetStoreBundlesById() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("storeBundlesById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>* GetStoreBundlesBySKU() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("storeBundlesBySKU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetTryOnBundleButton1() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetTryOnBundleButton2() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetTryOnBundleButton3() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetTryOnBundleButton4() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreBundleData* GetTryOnBundleButton5() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBundleScriptableObjects(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundleData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundleData*>*> _field = GetClass().GetField(O("_bundleScriptableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedBundleStands(::BNM::Structures::Mono::List<::GorillaNetworking_Store::SpawnedBundle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::SpawnedBundle*>*> _field = GetClass().GetField(O("_spawnedBundleStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreBundles(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("_storeBundles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundlesStand(::GlobalNamespace::TryOnBundlesStand* value) {
            static BNM::Field<::GlobalNamespace::TryOnBundlesStand*> _field = GetClass().GetField(O("_tryOnBundlesStand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundleStands(::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleManager_BundleStandSpawn*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::BundleManager_BundleStandSpawn*>*> _field = GetClass().GetField(O("BundleStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking_Store::BundleManager* value) {
            static BNM::Field<::GorillaNetworking_Store::BundleManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetNullBundleData(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("nullBundleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreBundlesById(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("storeBundlesById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreBundlesBySKU(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("storeBundlesBySKU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundleButton1(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundleButton2(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundleButton3(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundleButton4(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundleButton5(::GorillaNetworking_Store::StoreBundleData* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundleData*> _field = GetClass().GetField(O("tryOnBundleButton5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddNewBundleStand(::GorillaNetworking_Store::BundleStand* bundleStand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddNewBundleStand"), {"bundleStand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bundleStand);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void BundlePurchaseButtonPressed(::BNM::Structures::Mono::String* playFabItemName, TP1 ccp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BundlePurchaseButtonPressed"), {"playFabItemName", "ccp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabItemName, ccp);
        }
        void CheckForNoPriceBundlesAndDefaultPrice() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForNoPriceBundlesAndDefaultPrice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckIfBundlesOwned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckIfBundlesOwned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearEverything() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearEverything"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixBundles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixBundles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateAllStoreBundleReferences() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateAllStoreBundleReferences"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateBundleDictionaries() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateBundleDictionaries"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStoreBundles_1() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetStoreBundles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetTitleDataForBundles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleDataForBundles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreBundleData*>* GetTryOnButtons() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreBundleData*>*> _m = GetClass().GetMethod(O("GetTryOnButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MarkBundleOwnedByPlayFabID(::BNM::Structures::Mono::String* ItemId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MarkBundleOwnedByPlayFabID"), {"ItemId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ItemId);
        }
        void MarkBundleOwnedBySKU(::BNM::Structures::Mono::String* SKU) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MarkBundleOwnedBySKU"), {"SKU"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(SKU);
        }
        void NotifyBundleOfErrorByPlayFabID(::BNM::Structures::Mono::String* ItemId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyBundleOfErrorByPlayFabID"), {"ItemId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ItemId);
        }
        void NotifyBundleOfErrorBySKU(::BNM::Structures::Mono::String* ItemSKU) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyBundleOfErrorBySKU"), {"ItemSKU"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ItemSKU);
        }
        void PressPurchaseTryOnBundleButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressPurchaseTryOnBundleButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressTryOnBundleButton(::GlobalNamespace::TryOnBundleButton* pressedTryOnBundleButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressTryOnBundleButton"), {"pressedTryOnBundleButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedTryOnBundleButton, isLeftHand);
        }
        void SpawnBundleStands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnBundleStands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateBundlePrice(::BNM::Structures::Mono::String* productSku, ::BNM::Structures::Mono::String* productFormattedPrice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBundlePrice"), {"productSku", "productFormattedPrice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(productSku, productFormattedPrice);
        }
        void ValidateBundleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateBundleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
