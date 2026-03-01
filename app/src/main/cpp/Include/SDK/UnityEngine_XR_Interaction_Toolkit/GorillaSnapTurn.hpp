#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSnapTurn_InputAxes.hpp"

namespace UnityEngine_XR_Interaction_Toolkit {
    struct GorillaSnapTurn : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UnityEngine.XR.Interaction.Toolkit", "GorillaSnapTurn");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetCachedSnapTurnRef() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_CachedSnapTurnRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetControllers() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_controllers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetControllers(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_controllers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetDeadZone() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_deadZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDeadZone(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_deadZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetDebounceTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_debounceTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDebounceTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_debounceTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        float GetTurnAmount() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_turnAmount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTurnAmount(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_turnAmount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTurnFactor() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_turnFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTurnFactor(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_turnFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTurnType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_turnType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTurnType(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_turnType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes GetTurnUsage() {
            static BNM::Method<::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes> _method = GetClass().GetMethod(O("get_turnUsage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTurnUsage(::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_turnUsage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetCachedReference() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cachedReference"));
            return _field.Get();
        }
        static int GetCachedTurnFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_cachedTurnFactor"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetCachedTurnType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_cachedTurnType"));
            return _field.Get();
        }
        bool GetMAxisReset() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_AxisReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetMControllers() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("m_Controllers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<bool>* GetMControllersWereActive() {
            static BNM::Field<::BNM::Structures::Mono::List<bool>*> _field = GetClass().GetField(O("m_ControllersWereActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMCurrentTurnAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_CurrentTurnAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMDeadZone() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_DeadZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMDebounceTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_DebounceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMTimeStarted() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_TimeStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMTurnAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_TurnAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMTurnFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_TurnFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMTurnType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_TurnType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes GetMTurnUsage() {
            static BNM::Field<::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes> _field = GetClass().GetField(O("m_TurnUsage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetMVec2UsageList() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("m_Vec2UsageList"));
            return _field.Get();
        }
        void* GetTurningOverriders() {
            static BNM::Field<void*> _field = GetClass().GetField(O("turningOverriders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetXrOrigin() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("xrOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetCachedReference(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cachedReference"));
            _field.Set(value);
        }
        static void SetCachedTurnFactor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_cachedTurnFactor"));
            _field.Set(value);
        }
        static void SetCachedTurnType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_cachedTurnType"));
            _field.Set(value);
        }
        void SetMAxisReset(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_AxisReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMControllers(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("m_Controllers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMControllersWereActive(::BNM::Structures::Mono::List<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<bool>*> _field = GetClass().GetField(O("m_ControllersWereActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCurrentTurnAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_CurrentTurnAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMDeadZone(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_DeadZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMDebounceTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_DebounceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTimeStarted(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_TimeStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTurnAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_TurnAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTurnFactor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_TurnFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTurnType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_TurnType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTurnUsage(::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes value) {
            static BNM::Field<::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes> _field = GetClass().GetField(O("m_TurnUsage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurningOverriders(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("turningOverriders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXrOrigin(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("xrOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeTurnMode(::BNM::Structures::Mono::String* turnMode, int turnSpeedFactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeTurnMode"), {"turnMode", "turnSpeedFactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(turnMode, turnSpeedFactor);
        }
        float ConvertedTurnFactor(float newTurnSpeed) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ConvertedTurnFactor"), {"newTurnSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newTurnSpeed);
        }
        static void DisableSnapTurn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableSnapTurn"));
            _m.Call();
        }
        void EnsureControllerDataListSize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureControllerDataListSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FakeStartTurn(bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FakeStartTurn"), {"isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft);
        }
        static ::BNM::IL2CPP::Il2CppObject* get_CachedSnapTurnRef() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_CachedSnapTurnRef"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* get_controllers() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_controllers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_deadZone() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_deadZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_debounceTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_debounceTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_turnAmount() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_turnAmount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_turnFactor() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_turnFactor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_turnType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_turnType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes get_turnUsage() {
            static BNM::Method<::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes> _m = GetClass().GetMethod(O("get_turnUsage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void LoadSettingsFromCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSettingsFromCache"));
            _m.Call();
        }
        static void LoadSettingsFromPlayerPrefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSettingsFromPlayerPrefs"));
            _m.Call();
        }
        void set_controllers(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_controllers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_deadZone(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_deadZone"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_debounceTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_debounceTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_turnAmount(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_turnAmount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_turnFactor(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_turnFactor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_turnType(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_turnType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_turnUsage(::UnityEngine_XR_Interaction_Toolkit::GorillaSnapTurn_InputAxes value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_turnUsage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void SetTurningOverride(TP0 caller) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTurningOverride"), {"caller"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(caller);
        }
        void StartTurn(float amount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartTurn"), {"amount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void UnsetTurningOverride(TP0 caller) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsetTurningOverride"), {"caller"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(caller);
        }
        static void UpdateAndSaveTurnFactor(int factor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAndSaveTurnFactor"), {"factor"});
            _m.Call(factor);
        }
        static void UpdateAndSaveTurnType(::BNM::Structures::Mono::String* mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAndSaveTurnType"), {"mode"});
            _m.Call(mode);
        }
        void ValidateTurningOverriders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateTurningOverriders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
