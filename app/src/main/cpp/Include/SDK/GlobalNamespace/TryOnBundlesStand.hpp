#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TryOnBundlesStand : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TryOnBundlesStand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetSelectedBundlePlayFabID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_SelectedBundlePlayFabID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetBError() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetBundleIcons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("BundleIcons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComputerAlreadyOwnTextTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerAlreadyOwnTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComputerAlreadyOwnTextTitleDataValue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerAlreadyOwnTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComputerDefaultTextTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerDefaultTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComputerDefaultTextTitleDataValue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerDefaultTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComputerScreeErrorText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("computerScreeErrorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetComputerScreenText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("computerScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCreatorCodeProvider() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("creatorCodeProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TryOnPurchaseButton* GetPurchaseButton() {
            static BNM::Field<::GlobalNamespace::TryOnPurchaseButton*> _field = GetClass().GetField(O("purchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonAlreadyOwnTextTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonAlreadyOwnTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonAlreadyOwnTextTitleDataValue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonAlreadyOwnTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonDefaultTextTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonDefaultTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonDefaultTextTitleDataValue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonDefaultTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSelectedBundleImage() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("selectedBundleImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedButtonIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("SelectedButtonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>* GetStoreBundles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("storeBundles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TryOnBundleButton*>* GetTryOnBundleButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TryOnBundleButton*>*> _field = GetClass().GetField(O("TryOnBundleButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBError(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBundleIcons(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("BundleIcons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerAlreadyOwnTextTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerAlreadyOwnTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerAlreadyOwnTextTitleDataValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerAlreadyOwnTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerDefaultTextTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerDefaultTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerDefaultTextTitleDataValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ComputerDefaultTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerScreeErrorText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("computerScreeErrorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerScreenText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("computerScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatorCodeProvider(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("creatorCodeProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButton(::GlobalNamespace::TryOnPurchaseButton* value) {
            static BNM::Field<::GlobalNamespace::TryOnPurchaseButton*> _field = GetClass().GetField(O("purchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonAlreadyOwnTextTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonAlreadyOwnTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonAlreadyOwnTextTitleDataValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonAlreadyOwnTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonDefaultTextTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonDefaultTextTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonDefaultTextTitleDataValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PurchaseButtonDefaultTextTitleDataValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedBundleImage(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("selectedBundleImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedButtonIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SelectedButtonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreBundles(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreBundle*>*> _field = GetClass().GetField(O("storeBundles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnBundleButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::TryOnBundleButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TryOnBundleButton*>*> _field = GetClass().GetField(O("TryOnBundleButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AlreadyOwnCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AlreadyOwnCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* CleanUpTitleDataValues(::BNM::Structures::Mono::String* titleDataResult) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("CleanUpTitleDataValues"), {"titleDataResult"});
            return _m.Call(titleDataResult);
        }
        void ClearSelectedBundle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSelectedBundle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ErrorCompleting() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ErrorCompleting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_SelectedBundlePlayFabID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_SelectedBundlePlayFabID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetBundleComputerText(::BNM::Structures::Mono::String* PlayFabID) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetBundleComputerText"), {"PlayFabID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(PlayFabID);
        }
        ::BNM::Structures::Mono::String* GetComputerScreenText_1(::BNM::Structures::Mono::String* playfabBundleID) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetComputerScreenText"), {"playfabBundleID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playfabBundleID);
        }
        ::BNM::Structures::Mono::String* GetPurchaseButtonText(::BNM::Structures::Mono::String* playfabBundleID) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPurchaseButtonText"), {"playfabBundleID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playfabBundleID);
        }
        void GetTryOnButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTryOnButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitalizeButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitalizeButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnComputerAlreadyOwnTextTitleDataFailure(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnComputerAlreadyOwnTextTitleDataFailure"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnComputerAlreadyOwnTextTitleDataSuccess(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnComputerAlreadyOwnTextTitleDataSuccess"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnComputerDefaultTextTitleDataFailure(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnComputerDefaultTextTitleDataFailure"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnComputerDefaultTextTitleDataSuccess(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnComputerDefaultTextTitleDataSuccess"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPurchaseButtonAlreadyOwnTextTitleDataFailure(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseButtonAlreadyOwnTextTitleDataFailure"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnPurchaseButtonAlreadyOwnTextTitleDataSuccess(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseButtonAlreadyOwnTextTitleDataSuccess"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnPurchaseButtonDefaultTextTitleDataFailure(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseButtonDefaultTextTitleDataFailure"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnPurchaseButtonDefaultTextTitleDataSuccess(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseButtonDefaultTextTitleDataSuccess"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void PressTryOnBundleButton(::GlobalNamespace::TryOnBundleButton* pressedTryOnBundleButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressTryOnBundleButton"), {"pressedTryOnBundleButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedTryOnBundleButton, isLeftHand);
        }
        void PurchaseButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveBundle(::BNM::Structures::Mono::String* BundleID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveBundle"), {"BundleID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(BundleID);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryOnBundle(::BNM::Structures::Mono::String* BundleID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryOnBundle"), {"BundleID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(BundleID);
        }
        void UpdateBundles(::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreBundleData*>* Bundles) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBundles"), {"Bundles"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(Bundles);
        }
    };
}
