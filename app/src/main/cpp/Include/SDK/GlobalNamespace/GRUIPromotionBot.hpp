#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRUIPromotionBot_PromotionBotState.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GRUIPromotionBot : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIPromotionBot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* newLine = "
";
        ::BNM::Structures::Mono::String* GetButtonReturnText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buttonReturnText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCachedStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedStringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentPlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRUIPromotionBot_PromotionBotState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::GRUIPromotionBot_PromotionBotState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetDescriptionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("descriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceForAutoLogout() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceForAutoLogout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetEVENTPROMOTED() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EVENT_PROMOTED"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInertButtonText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("inertButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLevelUpSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("levelUpSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMenuText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("menuText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetNoText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("noText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetParticlesGO() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("particlesGO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetPopSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("popSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPromotionTextStr1() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("promotionTextStr1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPromotionTextStr2() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("promotionTextStr2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPromotionTextStr3() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("promotionTextStr3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPurchaseSuccessText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseSuccessText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRequestPromotionText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("requestPromotionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner* GetScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetStartScreenText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("startScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeBetweenDistanceChecks() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenDistanceChecks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastDistanceCheck() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastDistanceCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOutTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOutTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetUserInfo() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("userInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetYesText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("yesText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonReturnText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buttonReturnText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedStringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::GRUIPromotionBot_PromotionBotState value) {
            static BNM::Field<::GlobalNamespace::GRUIPromotionBot_PromotionBotState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescriptionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("descriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceForAutoLogout(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceForAutoLogout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetEVENTPROMOTED(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EVENT_PROMOTED"));
            _field.Set(value);
        }
        void SetInertButtonText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("inertButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelUpSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("levelUpSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMenuText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("menuText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("noText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticlesGO(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("particlesGO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("popSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPromotionTextStr1(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("promotionTextStr1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPromotionTextStr2(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("promotionTextStr2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPromotionTextStr3(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("promotionTextStr3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseSuccessText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("purchaseSuccessText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestPromotionText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("requestPromotionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartScreenText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("startScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeBetweenDistanceChecks(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenDistanceChecks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastDistanceCheck(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastDistanceCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOutTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOutTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserInfo(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("userInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYesText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("yesText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ActivePlayerEligibleForPromotion() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ActivePlayerEligibleForPromotion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void AttemptPromotion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptPromotion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttemptPurchaseShiftCreditIncrease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptPurchaseShiftCreditIncrease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttemptPurchaseShiftCreditRefillToMax() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptPurchaseShiftCreditRefillToMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CelebratePromotion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CelebratePromotion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckIsActivePlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsActivePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DownPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DownPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* FormattedUserInfo() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormattedUserInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCurrentPlayerActorNumber_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentPlayerActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPurchaseToCreditCapAmount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPurchaseToCreditCapAmount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GlobalNamespace::GhostReactor* _reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"_reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_reactor);
        }
        void NoPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NoPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetShiftCredit(::BNM::Structures::Mono::String* mothershipId, int credit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetShiftCredit"), {"mothershipId", "credit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mothershipId, credit);
        }
        void OnGetShiftCreditCapData(::BNM::Structures::Mono::String* mothershipId, int creditCap, int creditCapMax) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetShiftCreditCapData"), {"mothershipId", "creditCap", "creditCapMax"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mothershipId, creditCap, creditCapMax);
        }
        void OnJuiceUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJuiceUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPurchaseCallback(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseCallback"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnShinyRocksUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShinyRocksUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayerSwipedID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerSwipedID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshActivePlayerBadge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshActivePlayerBadge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshPlayerData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshPlayerData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetActivePlayerStateChange(int actorNumber, int state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActivePlayerStateChange"), {"actorNumber", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber, state);
        }
        void SetMenuText_1(::GlobalNamespace::GRUIPromotionBot_PromotionBotState menuState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMenuText"), {"menuState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(menuState);
        }
        void SetScreenVisibility() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScreenVisibility"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState(::GlobalNamespace::GRUIPromotionBot_PromotionBotState newState, bool fromRPC) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"), {"newState", "fromRPC"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, fromRPC);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void YesPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("YesPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
