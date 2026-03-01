#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRDistillery : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRDistillery");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* grDistilleryCorePrefsKey = "_grDistilleryCore";
        static constexpr const char* grDistilleryStartTimePrefsKey = "_grDistilleryStartTime";
        ::GlobalNamespace::ApplyMaterialProperty* GetApplyMaterialCurrentResearch() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialCurrentResearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ApplyMaterialProperty* GetApplyMaterialgauge1() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ApplyMaterialProperty* GetApplyMaterialgauge2() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ApplyMaterialProperty* GetApplyMaterialgauge3() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ApplyMaterialProperty* GetApplyMaterialgauge4() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBFillingGauge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bFillingGauge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBProcessing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bProcessing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCores() {
            static BNM::Field<int> _field = GetClass().GetField(O("cores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentGaugeCore() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentGaugeCore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentGaugeFillAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentGaugeFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetCurrentResearchPoints() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("currentResearchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDepositClosePosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositClosePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDepositDoor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("depositDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDepositDoorCloseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("depositDoorCloseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDepositOpenPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositOpenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetFeedbackSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("feedbackSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFillTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fillTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGaugeDrainTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("gaugeDrainTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGaugeEmptyFillAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("gaugeEmptyFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGaugeFullFillAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("gaugeFullFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetGaugesFill() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("gaugesFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxCores() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetRemaingTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("remaingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResearchGaugeEmptyFillAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("researchGaugeEmptyFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResearchGaugeFill() {
            static BNM::Field<float> _field = GetClass().GetField(O("researchGaugeFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResearchGaugeFullFillAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("researchGaugeFullFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSecondsToResearchACore() {
            static BNM::Field<int> _field = GetClass().GetField(O("secondsToResearchACore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRCurrencyDepositor* GetSentientCoreDeposit() {
            static BNM::Field<::GlobalNamespace::GRCurrencyDepositor*> _field = GetClass().GetField(O("sentientCoreDeposit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStartTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyMaterialCurrentResearch(::GlobalNamespace::ApplyMaterialProperty* value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialCurrentResearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyMaterialgauge1(::GlobalNamespace::ApplyMaterialProperty* value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyMaterialgauge2(::GlobalNamespace::ApplyMaterialProperty* value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyMaterialgauge3(::GlobalNamespace::ApplyMaterialProperty* value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyMaterialgauge4(::GlobalNamespace::ApplyMaterialProperty* value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterialgauge4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBFillingGauge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bFillingGauge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBProcessing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bProcessing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCores(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGaugeCore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentGaugeCore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGaugeFillAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentGaugeFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentResearchPoints(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("currentResearchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositClosePosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositClosePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositDoor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("depositDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositDoorCloseSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("depositDoorCloseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositOpenPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositOpenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeedbackSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("feedbackSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFillTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fillTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGaugeDrainTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gaugeDrainTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGaugeEmptyFillAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gaugeEmptyFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGaugeFullFillAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gaugeFullFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGaugesFill(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("gaugesFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCores(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemaingTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("remaingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchGaugeEmptyFillAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("researchGaugeEmptyFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchGaugeFill(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("researchGaugeFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchGaugeFullFillAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("researchGaugeFullFillAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsToResearchACore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("secondsToResearchACore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentientCoreDeposit(::GlobalNamespace::GRCurrencyDepositor* value) {
            static BNM::Field<::GlobalNamespace::GRCurrencyDepositor*> _field = GetClass().GetField(O("sentientCoreDeposit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        double CalculateRemaining() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("CalculateRemaining"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CompleteResearchingCore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompleteResearchingCore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugFinishDistill() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugFinishDistill"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DepositCore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DepositCore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FirstUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FirstUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        void InitializeGauges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeGauges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestoreStartTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreStartTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SaveStartTime(TP0 time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveStartTime"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void StartResearch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartResearch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDoorPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDoorPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateGauges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGauges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
