#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderSetManager_BuilderSetStoreItem.hpp"
#include "../GorillaNetworking/CosmeticsController_PurchaseItemStages.hpp"

namespace GlobalNamespace {
    struct BuilderKiosk : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderKiosk");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CONFIRM_KEY = "MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CONFIRM";
        static constexpr const char* MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CANCEL_KEY = "MONKE_BLOCKS_PURCHASE_BUTTON_WANT_TO_BUY_CANCEL";
        static constexpr const char* MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CONFIRM_KEY = "MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CONFIRM";
        static constexpr const char* MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CANCEL_KEY = "MONKE_BLOCKS_PURCHASE_BUTTON_CONFIRMATION_CANCEL";
        ::BNM::IL2CPP::Il2CppObject* GetCurrencyBalanceVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_currencyBalanceVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFinalLineVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_finalLineVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetItemCostVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_itemCostVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetItemNameVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_itemNameVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LocalizedText* GetPuchaseTextLoc() {
            static BNM::Field<::GlobalNamespace::LocalizedText*> _field = GetClass().GetField(O("_puchaseTextLoc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPuchaseTextLocStr() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_puchaseTextLocStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnimating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("animating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetAvailableItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("availableItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCountdownOverride() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("countdownOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::CountdownText* GetCountdownText() {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("countdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCurrentDiorama() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentDiorama"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_PurchaseItemStages GetCurrentPurchaseItemStage() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_PurchaseItemStages> _field = GetClass().GetField(O("currentPurchaseItemStage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet* GetCurrentSet() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet*> _field = GetClass().GetField(O("currentSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEmptyDisplay() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("emptyDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFinalLine() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("finalLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasInitFromPlayfab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInitFromPlayfab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLastHandTouchedLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLastHandTouchedLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMiniKiosk() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMiniKiosk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetItemDisplayAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("itemDisplayAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetItemDisplayPos() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("itemDisplayPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GetItemToBuy() {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("itemToBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetLeftPurchaseButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("leftPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNextDiorama() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nextDiorama"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNextItemDisplayPos() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("nextItemDisplayPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetNextPageButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("nextPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GetNullItem() {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("nullItem"));
            return _field.Get();
        }
        int GetPageIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("pageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet* GetPieceSetForSale() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet*> _field = GetClass().GetField(O("pieceSetForSale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetPreviousPageButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("previousPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPurchaseParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("purchaseParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPurchaseSetAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("purchaseSetAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPurchaseText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetRightPurchaseButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("rightPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* GetSetButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("setButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSetsPerPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("setsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalPages() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseTitleCountDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useTitleCountDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrencyBalanceVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_currencyBalanceVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalLineVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_finalLineVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemCostVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_itemCostVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemNameVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_itemNameVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPuchaseTextLoc(::GlobalNamespace::LocalizedText* value) {
            static BNM::Field<::GlobalNamespace::LocalizedText*> _field = GetClass().GetField(O("_puchaseTextLoc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPuchaseTextLocStr(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_puchaseTextLocStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("animating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvailableItems(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("availableItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownOverride(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("countdownOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownText(::GameObjectScheduling::CountdownText* value) {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("countdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDiorama(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentDiorama"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPurchaseItemStage(::GorillaNetworking::CosmeticsController_PurchaseItemStages value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_PurchaseItemStages> _field = GetClass().GetField(O("currentPurchaseItemStage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSet(::GlobalNamespace::BuilderPieceSet* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet*> _field = GetClass().GetField(O("currentSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyDisplay(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("emptyDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalLine(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("finalLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasInitFromPlayfab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInitFromPlayfab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLastHandTouchedLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLastHandTouchedLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMiniKiosk(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMiniKiosk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemDisplayAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("itemDisplayAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemDisplayPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("itemDisplayPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemToBuy(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem value) {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("itemToBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPurchaseButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("leftPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextDiorama(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nextDiorama"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextItemDisplayPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("nextItemDisplayPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPageButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("nextPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNullItem(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem value) {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("nullItem"));
            _field.Set(value);
        }
        void SetPageIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceSetForSale(::GlobalNamespace::BuilderPieceSet* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet*> _field = GetClass().GetField(O("pieceSetForSale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousPageButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("previousPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("purchaseParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseSetAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("purchaseSetAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPurchaseButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("rightPurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("setButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetsPerPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("setsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalPages(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseTitleCountDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useTitleCountDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCheckout() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCheckout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FormattedPurchaseText(int finalLineVar) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FormattedPurchaseText"), {"finalLineVar"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(finalLineVar);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnNextPageClicked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNextPageClicked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOwnedSetsUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnedSetsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPreviousPageClicked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreviousPageClicked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSetButtonPressed(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetButtonPressed"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void OnUpdateCurrencyBalance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateCurrencyBalance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* PlaySwapAnimation() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlaySwapAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PressLeftPurchaseItemButton(::GlobalNamespace::GorillaPressableButton* pressedPurchaseItemButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressLeftPurchaseItemButton"), {"pressedPurchaseItemButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedPurchaseItemButton, isLeftHand);
        }
        void PressRightPurchaseItemButton(::GlobalNamespace::GorillaPressableButton* pressedPurchaseItemButton, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressRightPurchaseItemButton"), {"pressedPurchaseItemButton", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedPurchaseItemButton, isLeftHand);
        }
        void ProcessPurchaseItemState(::BNM::Structures::Mono::String* buttonSide, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessPurchaseItemState"), {"buttonSide", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonSide, isLeftHand);
        }
        void PurchaseItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetupSetButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupSetButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCountdown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCountdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDiorama() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDiorama"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLabels() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLabels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
