#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"

namespace CosmeticRoom {
    struct ItemCheckout : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CosmeticRoom", "ItemCheckout");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAddOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("addOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CheckoutCartButton*>* GetCheckoutCartButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CheckoutCartButton*>*> _field = GetClass().GetField(O("checkoutCartButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCheckoutCounterMesh() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("checkoutCounterMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeadModel* GetCheckoutHeadModel() {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("checkoutHeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCheckoutTryOnArea() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("checkoutTryOnArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIterator() {
            static BNM::Field<int> _field = GetClass().GetField(O("iterator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PurchaseItemButton* GetLeftPurchaseButton() {
            static BNM::Field<::GlobalNamespace::PurchaseItemButton*> _field = GetClass().GetField(O("leftPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOriginalScene() {
            static BNM::Field<void*> _field = GetClass().GetField(O("originalScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPurchaseScreenMesh() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseScreenMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetPurchaseText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("purchaseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPurchaseTextTMP() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PurchaseItemButton* GetRightPurchaseButton() {
            static BNM::Field<::GlobalNamespace::PurchaseItemButton*> _field = GetClass().GetField(O("rightPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAddOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("addOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckoutCartButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::CheckoutCartButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CheckoutCartButton*>*> _field = GetClass().GetField(O("checkoutCartButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckoutCounterMesh(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("checkoutCounterMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckoutHeadModel(::GlobalNamespace::HeadModel* value) {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("checkoutHeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckoutTryOnArea(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("checkoutTryOnArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIterator(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iterator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPurchaseButton(::GlobalNamespace::PurchaseItemButton* value) {
            static BNM::Field<::GlobalNamespace::PurchaseItemButton*> _field = GetClass().GetField(O("leftPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalScene(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("originalScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseScreenMesh(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("purchaseScreenMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("purchaseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseTextTMP(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPurchaseButton(::GlobalNamespace::PurchaseItemButton* value) {
            static BNM::Field<::GlobalNamespace::PurchaseItemButton*> _field = GetClass().GetField(O("rightPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void InitializeForCustomMap(::GlobalNamespace::CompositeTriggerEvents* customMapTryOnArea, TP1 customMapScene, bool useCustomCounterMesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeForCustomMap"), {"customMapTryOnArea", "customMapScene", "useCustomCounterMesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(customMapTryOnArea, customMapScene, useCustomCounterMesh);
        }
        template <typename TP0 = void*>
        bool IsFromScene(TP0 unloadingScene) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFromScene"), {"unloadingScene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(unloadingScene);
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
        void RemoveFromCustomMap(::GlobalNamespace::CompositeTriggerEvents* customMapTryOnArea) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFromCustomMap"), {"customMapTryOnArea"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(customMapTryOnArea);
        }
        void UpdateFromCart(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* currentCart, ::GorillaNetworking::CosmeticsController_CosmeticItem itemToBuy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFromCart"), {"currentCart", "itemToBuy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentCart, itemToBuy);
        }
        void UpdatePurchaseText(::BNM::Structures::Mono::String* newText, ::BNM::Structures::Mono::String* leftPurchaseButtonText, ::BNM::Structures::Mono::String* rightPurchaseButtonText, bool leftButtonOn, bool rightButtonOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePurchaseText"), {"newText", "leftPurchaseButtonText", "rightPurchaseButtonText", "leftButtonOn", "rightButtonOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newText, leftPurchaseButtonText, rightPurchaseButtonText, leftButtonOn, rightButtonOn);
        }
    };
}
