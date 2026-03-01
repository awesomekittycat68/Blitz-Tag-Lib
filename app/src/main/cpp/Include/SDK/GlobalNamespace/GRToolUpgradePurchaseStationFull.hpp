#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"
#include "GRToolUpgradePurchaseStationFull_ShelfMovementState.hpp"

namespace GlobalNamespace {
    struct GRToolUpgradePurchaseStationFull : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolUpgradePurchaseStationFull");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int ShelfIndex_None = -1;
        int GetSelectedItem() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SelectedItem"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSelectedShelf() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SelectedShelf"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetAngleOfLastHandleBroadcast() {
            static BNM::Field<float> _field = GetClass().GetField(O("angleOfLastHandleBroadcast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSourceClang() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSourceClang"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSourceLooping() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSourceLooping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAudioSourceLoopingVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("audioSourceLoopingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBacklightLocked() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("backlightLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBacklightPurchase() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("backlightPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBacklightResearch() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("backlightResearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBGripLeftLastFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bGripLeftLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBGripRightLastFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bGripRightLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBIsGrippingLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bIsGrippingLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBIsGrippingRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bIsGrippingRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>* GetCachedRequiredPartsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>*> _field = GetClass().GetField(O("cachedRequiredPartsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorCanBuyCredits() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorCanBuyJuice() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorCantBuy() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCantBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorPurchaseButtonCanAfford() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorPurchaseButtonCanAfford"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorSelectedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorSelectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorUnresearchedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorUnselectedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorUnselectedUnresearchedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentActivePlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentActivePlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCurrentlyShowingText() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyShowingText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetCurrentMagnetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("currentMagnetEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentMagnetEntityTypeId() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentMagnetEntityTypeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentVisibleShelfIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentVisibleShelfIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDesiredMagnetEntityTypeId() {
            static BNM::Field<int> _field = GetClass().GetField(O("desiredMagnetEntityTypeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisablePurchaseButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disablePurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSpringMovement* GetFrontBackShelfMovement() {
            static BNM::Field<::GlobalNamespace::GRSpringMovement*> _field = GetClass().GetField(O("frontBackShelfMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>* GetGameShelves() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>*> _field = GetClass().GetField(O("gameShelves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGrManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetInteractAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("interactAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetItemDescription() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("itemDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetItemDescriptionAnnotation() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("itemDescriptionAnnotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetItemDescriptionName() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("itemDescriptionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHandleAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHandleAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastKnownLocalPlayerCredits() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastKnownLocalPlayerCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastKnownLocalPlayerJuice() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastKnownLocalPlayerJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRequestedActivePlayerTokenTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRequestedActivePlayerTokenTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMagnet() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("magnet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSpringMovement* GetMagnetMovement() {
            static BNM::Field<::GlobalNamespace::GRSpringMovement*> _field = GetClass().GetField(O("magnetMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHandleRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHandleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxMagnetDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxMagnetDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNeedsUIRefresh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("needsUIRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextVisibleShelfIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextVisibleShelfIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPageSelectionHandle() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pageSelectionHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPageSelectionLever() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pageSelectionLever"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSelectionWheel* GetPageSelectionWheel() {
            static BNM::Field<::GlobalNamespace::GRSelectionWheel*> _field = GetClass().GetField(O("pageSelectionWheel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerInfo() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerQueueTimeLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerQueueTimeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPrefabMagnetHeightOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("prefabMagnetHeightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPurchaseButtonCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("purchaseButtonCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPurchaseButtonPressed() {
            static BNM::Field<float> _field = GetClass().GetField(O("purchaseButtonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPurchaseButtonText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchaseFailed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("purchaseFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPurchaseSucceded() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("purchaseSucceded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetQuantMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("quantMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSpringMovement* GetRaiseLowerShelfMovement() {
            static BNM::Field<::GlobalNamespace::GRSpringMovement*> _field = GetClass().GetField(O("raiseLowerShelfMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequestActivePlayerTokenThrottleTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("requestActivePlayerTokenThrottleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRopeEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ropeEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRopeTop() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ropeTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner* GetScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPhysicalButton* GetSelect1() {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPhysicalButton* GetSelect2() {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPhysicalButton* GetSelect3() {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPhysicalButton* GetSelect4() {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedItem_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedShelf_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSelectionWheelAngleOfLastBroadcast() {
            static BNM::Field<float> _field = GetClass().GetField(O("selectionWheelAngleOfLastBroadcast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShelfBackTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfBackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShelfLowerTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfLowerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState GetShelfMovementState() {
            static BNM::Field<::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState> _field = GetClass().GetField(O("shelfMovementState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShelfRootTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfRootTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetShelfSelectionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shelfSelectionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSinceLastHandleBroadcast() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceLastHandleBroadcast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetToolProgressionManager() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetUnresearchedItemMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unresearchedItemMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngleOfLastHandleBroadcast(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angleOfLastHandleBroadcast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSourceClang(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSourceClang"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSourceLooping(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSourceLooping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSourceLoopingVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("audioSourceLoopingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBacklightLocked(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("backlightLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBacklightPurchase(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("backlightPurchase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBacklightResearch(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("backlightResearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBGripLeftLastFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bGripLeftLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBGripRightLastFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bGripRightLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBIsGrippingLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bIsGrippingLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBIsGrippingRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bIsGrippingRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedRequiredPartsList(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>*> _field = GetClass().GetField(O("cachedRequiredPartsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCanBuyCredits(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCanBuyJuice(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCantBuy(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCantBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorPurchaseButtonCanAfford(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorPurchaseButtonCanAfford"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorSelectedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorSelectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUnresearchedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUnselectedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUnselectedUnresearchedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentActivePlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentActivePlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlyShowingText(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyShowingText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMagnetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("currentMagnetEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMagnetEntityTypeId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentMagnetEntityTypeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentVisibleShelfIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentVisibleShelfIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesiredMagnetEntityTypeId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("desiredMagnetEntityTypeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisablePurchaseButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disablePurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrontBackShelfMovement(::GlobalNamespace::GRSpringMovement* value) {
            static BNM::Field<::GlobalNamespace::GRSpringMovement*> _field = GetClass().GetField(O("frontBackShelfMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameShelves(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>*> _field = GetClass().GetField(O("gameShelves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("interactAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemDescription(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("itemDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemDescriptionAnnotation(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("itemDescriptionAnnotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemDescriptionName(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("itemDescriptionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHandleAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHandleAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastKnownLocalPlayerCredits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastKnownLocalPlayerCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastKnownLocalPlayerJuice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastKnownLocalPlayerJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRequestedActivePlayerTokenTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRequestedActivePlayerTokenTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMagnet(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("magnet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMagnetMovement(::GlobalNamespace::GRSpringMovement* value) {
            static BNM::Field<::GlobalNamespace::GRSpringMovement*> _field = GetClass().GetField(O("magnetMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHandleRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHandleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxMagnetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxMagnetDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeedsUIRefresh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("needsUIRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextVisibleShelfIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextVisibleShelfIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageSelectionHandle(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pageSelectionHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageSelectionLever(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pageSelectionLever"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageSelectionWheel(::GlobalNamespace::GRSelectionWheel* value) {
            static BNM::Field<::GlobalNamespace::GRSelectionWheel*> _field = GetClass().GetField(O("pageSelectionWheel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerInfo(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerQueueTimeLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerQueueTimeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabMagnetHeightOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("prefabMagnetHeightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("purchaseButtonCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonPressed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("purchaseButtonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseButtonText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseFailed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("purchaseFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseSucceded(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("purchaseSucceded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuantMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("quantMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaiseLowerShelfMovement(::GlobalNamespace::GRSpringMovement* value) {
            static BNM::Field<::GlobalNamespace::GRSpringMovement*> _field = GetClass().GetField(O("raiseLowerShelfMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestActivePlayerTokenThrottleTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requestActivePlayerTokenThrottleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ropeEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeTop(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ropeTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelect1(::GlobalNamespace::GorillaPhysicalButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelect2(::GlobalNamespace::GorillaPhysicalButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelect3(::GlobalNamespace::GorillaPhysicalButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelect4(::GlobalNamespace::GorillaPhysicalButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPhysicalButton*> _field = GetClass().GetField(O("select4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedItem(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedShelf(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionWheelAngleOfLastBroadcast(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("selectionWheelAngleOfLastBroadcast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfBackTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfBackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfLowerTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfLowerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfMovementState(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState value) {
            static BNM::Field<::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState> _field = GetClass().GetField(O("shelfMovementState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfRootTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfRootTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfSelectionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shelfSelectionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSinceLastHandleBroadcast(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceLastHandleBroadcast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolProgressionManager(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnresearchedItemMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unresearchedItemMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void AttachEntityToMagnet_DockGoesToLocation(::Transform* magnet, ::Transform* entity, ::Transform* dock, ::BNM::Structures::Unity::Vector3 magnetDockOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachEntityToMagnet_DockGoesToLocation"), {"magnet", "entity", "dock", "magnetDockOffset"});
            _m.Call(magnet, entity, dock, magnetDockOffset);
        }
        bool CanLocalPlayerPurchaseItem(int shelf, int slotID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanLocalPlayerPurchaseItem"), {"shelf", "slotID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shelf, slotID);
        }
        void CardSwiped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CardSwiped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeShelfMovementState(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeShelfMovementState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        bool CheckActivePlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckActivePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Unity::Color ColorFromRGB32(int r, int g, int b) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("ColorFromRGB32"), {"r", "g", "b"});
            return _m.Call(r, g, b);
        }
        void DEBUGSetHackToolStation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DEBUGSetHackToolStation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DecomposeTRS(::BNM::Structures::Unity::Matrix4x4 m, ::BNM::Structures::Unity::Vector3& pos, ::BNM::Structures::Unity::Quaternion& rot, ::BNM::Structures::Unity::Vector3& scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecomposeTRS"), {"m", "pos", "rot", "scale"});
            _m.Call(m, &pos, &rot, &scale);
        }
        static ::BNM::Structures::Unity::Vector3 ExtractLossyScale(::BNM::Structures::Unity::Matrix4x4 m) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ExtractLossyScale"), {"m"});
            return _m.Call(m);
        }
        int get_SelectedItem() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SelectedItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SelectedShelf() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SelectedShelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HideOrShowTextBasedOnLocalPlayerDistance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideOrShowTextBasedOnLocalPlayerDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init(::GlobalNamespace::GRToolProgressionManager* progression, ::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"progression", "reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(progression, reactor);
        }
        void InitLinkedEntity(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitLinkedEntity"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void InitPageSelectionWheel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitPageSelectionWheel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsValidShelfItemIndex(int shelf, int idx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidShelfItemIndex"), {"shelf", "idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shelf, idx);
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
        void OnLocalSelectionButtonPressed(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalSelectionButtonPressed"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void OnLocalSelectionPageChange(int delta) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalSelectionPageChange"), {"delta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delta);
        }
        void OnShiftCreditChanged(::BNM::Structures::Mono::String* targetMothershipId, int newShiftCredits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShiftCreditChanged"), {"targetMothershipId", "newShiftCredits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetMothershipId, newShiftCredits);
        }
        void ProgressionUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProgressionUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PurchaseButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestActivePlayerToken() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestActivePlayerToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestPurchaseItem(int shelf, int item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPurchaseItem"), {"shelf", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelf, item);
        }
        void SelectOption1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectOption1"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectOption2() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectOption2"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectOption3() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectOption3"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectOption4() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectOption4"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectPageDown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectPageDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectPageUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectPageUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetActivePlayer(int actorNum) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActivePlayer"), {"actorNum"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNum);
        }
        void SetCurrentShelf(int idx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCurrentShelf"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx);
        }
        void SetHandleAndSelectionWheelPositionRemote(int handlePos, int wheelPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHandleAndSelectionWheelPositionRemote"), {"handlePos", "wheelPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handlePos, wheelPos);
        }
        void SetNextShelf(int idx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNextShelf"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx);
        }
        void SetSelectedShelfAndItem(int shelf, int item, bool fromNetworkRPC) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSelectedShelfAndItem"), {"shelf", "item", "fromNetworkRPC"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelf, item, fromNetworkRPC);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToolPurchaseResponseLocal(::GlobalNamespace::GRPlayer* player, int shelf, int item, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToolPurchaseResponseLocal"), {"player", "shelf", "item", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, shelf, item, success);
        }
        void* TryPurchaseAuthority(::GlobalNamespace::GRPlayer* player, int shelf, int item) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryPurchaseAuthority"), {"player", "shelf", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, shelf, item);
        }
        void UpdateActivePlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActivePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMagnet() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMagnet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerCurrencyUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerCurrencyUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePurchaseButtonText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePurchaseButtonText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSelectionLever() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSelectionLever"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShelf() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShelfDisplayElements(int shelfID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShelfDisplayElements"), {"shelfID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfID);
        }
        void UpdateShelfItemDisplayElements(int shelf, int slotID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShelfItemDisplayElements"), {"shelf", "slotID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelf, slotID);
        }
        void UpdateShelfVisibility(int shelfID, bool isVisible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShelfVisibility"), {"shelfID", "isVisible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfID, isVisible);
        }
        void UpdateSoundsForMovement(::GlobalNamespace::GRSpringMovement* movement) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSoundsForMovement"), {"movement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(movement);
        }
    };
}
