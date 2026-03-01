#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FingerFlexEvent2_FlexEvent_FingerType.hpp"
#include "FingerFlexEvent2_FlexEvent_HandType.hpp"
#include "FingerFlexEvent2_FlexEvent_RangeState.hpp"
#include "FingerFlexEvent2_FlexEvent_TriggerType.hpp"

namespace GorillaTag_Cosmetics {
    struct FingerFlexEvent2_FlexEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "FingerFlexEvent2").GetInnerClass("FlexEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* ADVANCED = "Advanced Properties";
        bool GetHasValidLink() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasValidLink"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFlexTrigger() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFlexTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLinked() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLinked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReleaseTrigger() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReleaseTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShowFlexThreshold() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowFlexThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShowMainProperties() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowMainProperties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShowReleaseThreshold() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowReleaseThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetUsesTransferrable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UsesTransferrable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState GetCurrentState() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_FingerType GetFingerType() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_FingerType> _field = GetClass().GetField(O("fingerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlexThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("flexThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_HandType GetHandType() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_HandType> _field = GetClass().GetField(O("handType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState GetLastState() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastThresholdTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastThresholdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLinkIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("linkIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMarginError() {
            static BNM::Field<bool> _field = GetClass().GetField(O("marginError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNetworked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("networked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReleaseThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_TriggerType GetTriggerType() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_TriggerType> _field = GetClass().GetField(O("triggerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTryLink() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUnityEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("unityEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerType(::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_FingerType value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_FingerType> _field = GetClass().GetField(O("fingerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlexThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flexThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandType(::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_HandType value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_HandType> _field = GetClass().GetField(O("handType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_RangeState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastThresholdTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastThresholdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("linkIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMarginError(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("marginError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("networked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerType(::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_TriggerType value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent2_FlexEvent_TriggerType> _field = GetClass().GetField(O("triggerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryLink(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnityEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("unityEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_HasValidLink() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasValidLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFlexTrigger() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFlexTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLinked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLinked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsReleaseTrigger() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReleaseTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowFlexThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowFlexThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowMainProperties() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowMainProperties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowReleaseThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowReleaseThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UsesTransferrable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UsesTransferrable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ProcessState(bool leftHand, float flexValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessState"), {"leftHand", "flexValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand, flexValue);
        }
    };
}
