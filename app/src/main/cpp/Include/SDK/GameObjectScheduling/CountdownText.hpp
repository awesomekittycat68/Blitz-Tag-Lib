#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CountdownText_TimeChunk.hpp"

namespace GameObjectScheduling {
    struct CountdownText : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GameObjectScheduling", "CountdownText");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObjectScheduling::CountdownTextDate* GetCountdown() {
            static BNM::Method<::GameObjectScheduling::CountdownTextDate*> _method = GetClass().GetMethod(O("get_Countdown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCountdown(::GameObjectScheduling::CountdownTextDate* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Countdown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetShouldLocalize() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShouldLocalize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCountdownLocStr() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_countdownLocStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetIsValidVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_isValidVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LocalizedText* GetLocTextComp() {
            static BNM::Field<::GlobalNamespace::LocalizedText*> _field = GetClass().GetField(O("_locTextComp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTimeCountdownVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_timeCountdownVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTimescaleCountdownVar() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_timescaleCountdownVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCountdownTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("countdownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::CountdownTextDate* GetCountdownTo() {
            static BNM::Field<::GameObjectScheduling::CountdownTextDate*> _field = GetClass().GetField(O("CountdownTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDisplayRefresh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("displayRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetDisplayText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("displayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisplayTextFormat() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayTextFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMonitor() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("monitor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldLocalize_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldLocalize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTargetTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdateDisplay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseExternalTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useExternalTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCountdownLocStr(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_countdownLocStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsValidVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_isValidVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocTextComp(::GlobalNamespace::LocalizedText* value) {
            static BNM::Field<::GlobalNamespace::LocalizedText*> _field = GetClass().GetField(O("_locTextComp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeCountdownVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_timeCountdownVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimescaleCountdownVar(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_timescaleCountdownVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("countdownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownTo(::GameObjectScheduling::CountdownTextDate* value) {
            static BNM::Field<::GameObjectScheduling::CountdownTextDate*> _field = GetClass().GetField(O("CountdownTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayRefresh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("displayRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("displayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayTextFormat(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayTextFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonitor(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("monitor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldLocalize(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldLocalize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateDisplay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseExternalTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useExternalTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GameObjectScheduling::CountdownTextDate* get_Countdown() {
            static BNM::Method<::GameObjectScheduling::CountdownTextDate*> _m = GetClass().GetMethod(O("get_Countdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShouldLocalize() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShouldLocalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* getTimeChunkString(::GameObjectScheduling::CountdownText_TimeChunk chunk, int n) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("getTimeChunkString"), {"chunk", "n"});
            return _m.Call(chunk, n);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* GetTimeDisplay(TP0 ts, ::BNM::Structures::Mono::String* format) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTimeDisplay"), {"ts", "format"});
            return _m.Call(ts, format);
        }
        template <typename TP0 = void*>
        static void* GetTimeDisplay(TP0 ts, ::BNM::Structures::Mono::String* format, int maxDaysToDisplay, ::BNM::Structures::Mono::String* elapsedString, ::BNM::Structures::Mono::String* overMaxString) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetTimeDisplay"), {"ts", "format", "maxDaysToDisplay", "elapsedString", "overMaxString"});
            return _m.Call(ts, format, maxDaysToDisplay, elapsedString, overMaxString);
        }
        template <typename TP0 = void*>
        ::BNM::Coroutine::IEnumerator* MonitorExternalTime(TP0 countdown) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("MonitorExternalTime"), {"countdown"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(countdown);
        }
        ::BNM::Coroutine::IEnumerator* MonitorTime() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("MonitorTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void RefreshDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Countdown(::GameObjectScheduling::CountdownTextDate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Countdown"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void SetCountdownTime_1(TP0 countdown) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCountdownTime"), {"countdown"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(countdown);
        }
        void SetFixedText(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFixedText"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
        void StartDisplayRefresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartDisplayRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopDisplayRefresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopDisplayRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopMonitorTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopMonitorTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* TryParseDateTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryParseDateTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* WaitForDisplayRefresh() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("WaitForDisplayRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
