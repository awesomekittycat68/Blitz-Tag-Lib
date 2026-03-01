#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/AccountAgeCategory.hpp"

namespace GlobalNamespace {
    struct KIDAgeGate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDAgeGate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* LEARN_MORE_URL = "https://whyagegate.com/";
        static constexpr const char* DEFAULT_AGE_VALUE_STRING = "SET AGE";
        static constexpr int MINIMUM_PLATFORM_AGE = 0;
        static constexpr const char* strBlockAccessTitle = "UNDER AGE";
        static constexpr const char* strBlockAccessMessage = "Your VR platform requires a certain minimum age to play Gorilla Tag. Unfortunately, due to those age requirements, we cannot allow you to play Gorilla Tag at this time.

If you incorrectly submitted your age, please appeal.";
        static constexpr const char* strBlockAccessConfirm = "Hold any face button to appeal";
        static constexpr const char* strVerifyAgeTitle = "VERIFY AGE";
        static constexpr const char* strVerifyAgeMessage = "GETTING ONE TIME PASSCODE. PLEASE WAIT.

GIVE IT TO A PARENT/GUARDIAN TO ENTER IT AT: k-id.com/code";
        static constexpr const char* strDiscrepancyMessage = "You entered {0} for your age,
but your Meta account says you should be {1}. You could be logged into the wrong Meta account on this device.

We will use the lowest age ({2})
if you Continue.";
        bool GetDisplayedScreen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DisplayedScreen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisplayedScreen(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DisplayedScreen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetUserAge() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_UserAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::KIDAgeGate* GetActiveReference() {
            static BNM::Field<::GlobalNamespace::KIDAgeGate*> _field = GetClass().GetField(O("_activeReference"));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_AgeDiscrepancyScreen* GetAgeDiscrepancyScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen*> _field = GetClass().GetField(O("_ageDiscrepancyScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GetRequirementsData* GetAgeGateConfig() {
            static BNM::Field<::GlobalNamespace::GetRequirementsData*> _field = GetClass().GetField(O("_ageGateConfig"));
            return _field.Get();
        }
        ::GlobalNamespace::AgeSliderWithProgressBar* GetAgeSlider() {
            static BNM::Field<::GlobalNamespace::AgeSliderWithProgressBar*> _field = GetClass().GetField(O("_ageSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetAgeValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ageValue"));
            return _field.Get();
        }
        ::TMP_Text* GetConfirmationAgeText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_confirmationAgeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetConfirmationUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_confirmationUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDAgeGateConfirmation* GetConfirmationUIManager() {
            static BNM::Field<::GlobalNamespace::KIDAgeGateConfirmation*> _field = GetClass().GetField(O("_confirmationUIManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasChosenAge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasChosenAge"));
            return _field.Get();
        }
        bool GetMetricsLearnMorePressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_metrics_LearnMorePressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PreGameMessage* GetPregameMessageReference() {
            static BNM::Field<::GlobalNamespace::PreGameMessage*> _field = GetClass().GetField(O("_pregameMessageReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUiParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_uiParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWhyAgeGateScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_whyAgeGateScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRequestCancellationSource() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("requestCancellationSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetActiveReference(::GlobalNamespace::KIDAgeGate* value) {
            static BNM::Field<::GlobalNamespace::KIDAgeGate*> _field = GetClass().GetField(O("_activeReference"));
            _field.Set(value);
        }
        void SetAgeDiscrepancyScreen(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen*> _field = GetClass().GetField(O("_ageDiscrepancyScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAgeGateConfig(::GlobalNamespace::GetRequirementsData* value) {
            static BNM::Field<::GlobalNamespace::GetRequirementsData*> _field = GetClass().GetField(O("_ageGateConfig"));
            _field.Set(value);
        }
        void SetAgeSlider(::GlobalNamespace::AgeSliderWithProgressBar* value) {
            static BNM::Field<::GlobalNamespace::AgeSliderWithProgressBar*> _field = GetClass().GetField(O("_ageSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAgeValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ageValue"));
            _field.Set(value);
        }
        void SetConfirmationAgeText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_confirmationAgeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmationUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_confirmationUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmationUIManager(::GlobalNamespace::KIDAgeGateConfirmation* value) {
            static BNM::Field<::GlobalNamespace::KIDAgeGateConfirmation*> _field = GetClass().GetField(O("_confirmationUIManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasChosenAge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasChosenAge"));
            _field.Set(value);
        }
        void SetMetricsLearnMorePressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_metrics_LearnMorePressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPregameMessageReference(::GlobalNamespace::PreGameMessage* value) {
            static BNM::Field<::GlobalNamespace::PreGameMessage*> _field = GetClass().GetField(O("_pregameMessageReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_uiParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhyAgeGateScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_whyAgeGateScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestCancellationSource(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("requestCancellationSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AppealAge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AppealAge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AppealRejected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AppealRejected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* BeginAgeGate() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("BeginAgeGate"));
            return _m.Call();
        }
        void FinaliseAgeGateAndContinue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinaliseAgeGateAndContinue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool get_DisplayedScreen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisplayedScreen"));
            return _m.Call();
        }
        static int get_UserAge() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_UserAge"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetAgeCategoryString(::Oculus_Platform::AccountAgeCategory category) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAgeCategoryString"), {"category"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(category);
        }
        ::Oculus_Platform::AccountAgeCategory GetExpectedAgeCategoryFromAge(int age) {
            static BNM::Method<::Oculus_Platform::AccountAgeCategory> _m = GetClass().GetMethod(O("GetExpectedAgeCategoryFromAge"), {"age"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(age);
        }
        ::BNM::IL2CPP::Il2CppObject* InitialiseAgeGate() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("InitialiseAgeGate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnAgeGateCompleted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAgeGateCompleted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnConfirmAgePressed(int currentAge) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConfirmAgePressed"), {"currentAge"});
            _m.Call(currentAge);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLearnMoreAboutKIDPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLearnMoreAboutKIDPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnWhyAgeGateButtonBackPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWhyAgeGateButtonBackPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnWhyAgeGateButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWhyAgeGateButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* ProcessAgeGate() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ProcessAgeGate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* ProcessAgeGateConfirmation() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ProcessAgeGateConfirmation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void QuitGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuitGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshChallengeStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshChallengeStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void set_DisplayedScreen(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisplayedScreen"), {"value"});
            _m.Call(value);
        }
        static void SetAgeGateConfig_1(::GlobalNamespace::GetRequirementsData* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAgeGateConfig"), {"response"});
            _m.Call(response);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* StartAgeGate() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartAgeGate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UseMetaPlatformAge(::Oculus_Platform::AccountAgeCategory category) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UseMetaPlatformAge"), {"category"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(category);
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForAgeChoice() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForAgeChoice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
