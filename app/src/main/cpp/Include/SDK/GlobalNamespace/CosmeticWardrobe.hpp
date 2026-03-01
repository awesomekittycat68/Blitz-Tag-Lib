#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticCategory.hpp"

namespace GlobalNamespace {
    struct CosmeticWardrobe : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticWardrobe");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetUseTemporarySet() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseTemporarySet"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseTemporarySet(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseTemporarySet"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>* GetCosmeticCategoryButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>*> _field = GetClass().GetField(O("cosmeticCategoryButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>* GetCosmeticCollectionDisplays() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>*> _field = GetClass().GetField(O("cosmeticCollectionDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeadModel* GetCurrentEquippedDisplay() {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("currentEquippedDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMUseTemporarySet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_useTemporarySet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticButton* GetNextOutfit() {
            static BNM::Field<::GlobalNamespace::CosmeticButton*> _field = GetClass().GetField(O("nextOutfit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetNextSelection() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("nextSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnWardrobeUpdateCategories() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnWardrobeUpdateCategories"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnWardrobeUpdateDisplays() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnWardrobeUpdateDisplays"));
            return _field.Get();
        }
        ::TMP_Text* GetOutfitText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("outfitText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetOutfitTextOutline() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("outfitTextOutline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticButton* GetPreviousOutfit() {
            static BNM::Field<::GlobalNamespace::CosmeticButton*> _field = GetClass().GetField(O("previousOutfit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetPrevSelection() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("prevSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::CosmeticsController_CosmeticCategory GetSelectedCategory() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticCategory> _field = GetClass().GetField(O("selectedCategory"));
            return _field.Get();
        }
        static int GetSelectedCategoryIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedCategoryIndex"));
            return _field.Get();
        }
        static int GetSelectedOutfitIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedOutfitIndex"));
            return _field.Get();
        }
        static int GetStartingDisplayIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("startingDisplayIndex"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartingHeadSize() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingHeadSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmeticCategoryButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>*> _field = GetClass().GetField(O("cosmeticCategoryButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticCollectionDisplays(::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>*> _field = GetClass().GetField(O("cosmeticCollectionDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentEquippedDisplay(::GlobalNamespace::HeadModel* value) {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("currentEquippedDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMUseTemporarySet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_useTemporarySet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextOutfit(::GlobalNamespace::CosmeticButton* value) {
            static BNM::Field<::GlobalNamespace::CosmeticButton*> _field = GetClass().GetField(O("nextOutfit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSelection(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("nextSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnWardrobeUpdateCategories(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnWardrobeUpdateCategories"));
            _field.Set(value);
        }
        static void SetOnWardrobeUpdateDisplays(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnWardrobeUpdateDisplays"));
            _field.Set(value);
        }
        void SetOutfitText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("outfitText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutfitTextOutline(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("outfitTextOutline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousOutfit(::GlobalNamespace::CosmeticButton* value) {
            static BNM::Field<::GlobalNamespace::CosmeticButton*> _field = GetClass().GetField(O("previousOutfit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevSelection(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("prevSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSelectedCategory(::GorillaNetworking::CosmeticsController_CosmeticCategory value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticCategory> _field = GetClass().GetField(O("selectedCategory"));
            _field.Set(value);
        }
        static void SetSelectedCategoryIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedCategoryIndex"));
            _field.Set(value);
        }
        static void SetSelectedOutfitIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedOutfitIndex"));
            _field.Set(value);
        }
        static void SetStartingDisplayIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startingDisplayIndex"));
            _field.Set(value);
        }
        void SetStartingHeadSize(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingHeadSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_UseTemporarySet() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseTemporarySet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleChangeCategory(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleChangeCategory"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void HandleCosmeticsUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleCosmeticsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleLocalColorChanged(::BNM::Structures::Unity::Color newColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleLocalColorChanged"), {"newColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newColor);
        }
        void HandlePressedNextOutfitButton(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePressedNextOutfitButton"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void HandlePressedNextSelection(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePressedNextSelection"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void HandlePressedPrevOutfitButton(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePressedPrevOutfitButton"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void HandlePressedPrevSelection(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePressedPrevSelection"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void HandlePressedSelectCosmeticButton(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePressedSelectCosmeticButton"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_UseTemporarySet(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseTemporarySet"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCategoryButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCategoryButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCosmeticDisplays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCosmeticDisplays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateOutfitButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateOutfitButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool WardrobeButtonsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WardrobeButtonsInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
