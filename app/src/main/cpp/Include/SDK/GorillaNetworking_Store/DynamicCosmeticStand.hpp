#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"
#include "HeadModel_CosmeticStand_BustType.hpp"

namespace GorillaNetworking_Store {
    struct DynamicCosmeticStand : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "DynamicCosmeticStand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetThisCosmeticName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_thisCosmeticName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetThisCosmeticName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_thisCosmeticName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetThisCosmeticName_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_thisCosmeticName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetAddToCartButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("AddToCartButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetAddToCartText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("addToCartText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetAddToCartTextTMP() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("addToCartTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCustomMapScene() {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::HeadModel_CosmeticStand* GetDisplayHeadModel() {
            static BNM::Field<::GorillaNetworking_Store::HeadModel_CosmeticStand*> _field = GetClass().GetField(O("DisplayHeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGorillaHeadModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaHeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGorillaMannequinModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaMannequinModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGorillaTorsoModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaTorsoModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGorillaTorsoPostModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaTorsoPostModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuitarStandModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GuitarStandModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuitarStandMount() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GuitarStandMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetJeweleryBoxModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("JeweleryBoxModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetJeweleryBoxMount() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("JeweleryBoxMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreDepartment* GetParentDepartment() {
            static BNM::Field<::GorillaNetworking_Store::StoreDepartment*> _field = GetClass().GetField(O("parentDepartment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreDisplay* GetParentDisplay() {
            static BNM::Field<::GorillaNetworking_Store::StoreDisplay*> _field = GetClass().GetField(O("parentDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPinDisplayMount() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PinDisplayMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("root"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSearchIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("searchIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetSlotPriceText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("slotPriceText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetSlotPriceTextTMP() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("slotPriceTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStandName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StandName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTableMount() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("TableMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTageEffectDisplayModel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("TageEffectDisplayModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTagEffectDisplayMount() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("TagEffectDisplayMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetThisCosmeticItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("thisCosmeticItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetThisCosmeticName_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_thisCosmeticName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddToCartButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("AddToCartButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddToCartText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("addToCartText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddToCartTextTMP(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("addToCartTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapScene(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayHeadModel(::GorillaNetworking_Store::HeadModel_CosmeticStand* value) {
            static BNM::Field<::GorillaNetworking_Store::HeadModel_CosmeticStand*> _field = GetClass().GetField(O("DisplayHeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaHeadModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaHeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaMannequinModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaMannequinModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaTorsoModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaTorsoModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaTorsoPostModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GorillaTorsoPostModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuitarStandModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GuitarStandModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuitarStandMount(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("GuitarStandMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJeweleryBoxModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("JeweleryBoxModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJeweleryBoxMount(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("JeweleryBoxMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentDepartment(::GorillaNetworking_Store::StoreDepartment* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreDepartment*> _field = GetClass().GetField(O("parentDepartment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentDisplay(::GorillaNetworking_Store::StoreDisplay* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreDisplay*> _field = GetClass().GetField(O("parentDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPinDisplayMount(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("PinDisplayMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("root"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("searchIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlotPriceText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("slotPriceText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlotPriceTextTMP(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("slotPriceTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StandName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableMount(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("TableMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTageEffectDisplayModel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("TageEffectDisplayModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagEffectDisplayMount(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("TagEffectDisplayMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThisCosmeticItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("thisCosmeticItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _AddStandToStoreController() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_AddStandToStoreController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AddStandToStoreController() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddStandToStoreController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AsyncAddStandToStoreController() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AsyncAddStandToStoreController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ConnectToStoreController() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ConnectToStoreController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CopyChildsName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyChildsName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_thisCosmeticName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_thisCosmeticName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeCosmetic() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeCosmetic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void InitializeForCustomMapCosmeticItem(TP0 cosmeticItemSlot, TP1 scene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeForCustomMapCosmeticItem"), {"cosmeticItemSlot", "scene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticItemSlot, scene);
        }
        template <typename TP0 = void*>
        bool IsFromCustomMapScene(TP0 scene) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFromCustomMapScene"), {"scene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(scene);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressCosmeticStandButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressCosmeticStandButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveStandFromStoreController() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveStandFromStoreController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_thisCosmeticName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_thisCosmeticName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetForBaking() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetForBaking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetForGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetForGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetStandType(::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType newBustType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStandType"), {"newBustType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBustType);
        }
        void SetStandTypeString(::BNM::Structures::Mono::String* bustTypeString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStandTypeString"), {"bustTypeString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bustTypeString);
        }
        void SpawnItemOntoStand(::BNM::Structures::Mono::String* PlayFabID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnItemOntoStand"), {"PlayFabID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(PlayFabID);
        }
        void UpdateCosmeticsMountPositions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCosmeticsMountPositions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
