#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugHudStats_State.hpp"
#include "GroupJoinZoneAB.hpp"

namespace GlobalNamespace {
    struct DebugHudStats : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DebugHudStats");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::DebugHudStats* get_Instance() {
            static BNM::Method<::GlobalNamespace::DebugHudStats*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::DebugHudStats* GetInstance() {
            static BNM::Field<::GlobalNamespace::DebugHudStats*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::DebugHudStats* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::DebugHudStats*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::DebugHudStats* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::DebugHudStats*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetAveragedVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averagedVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("builder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButton1Down() {
            static BNM::Field<bool> _field = GetClass().GetField(O("button1Down"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButton2Down() {
            static BNM::Field<bool> _field = GetClass().GetField(O("button2Down"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButton3Down() {
            static BNM::Field<bool> _field = GetClass().GetField(O("button3Down"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButtonDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCenterHeadPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("centerHeadPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DebugHudStats_State GetCurrentState() {
            static BNM::Field<::GlobalNamespace::DebugHudStats_State> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelayUpdateRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("delayUpdateRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceMoved() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceMoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceSwam() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceSwam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDrawCallsRecorder() {
            static BNM::Field<void*> _field = GetClass().GetField(O("drawCallsRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFirstAwake() {
            static BNM::Field<float> _field = GetClass().GetField(O("firstAwake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetFPSTHRESHOLD() {
            static BNM::Field<int> _field = GetClass().GetField(O("FPS_THRESHOLD"));
            return _field.Get();
        }
        ::TMP_Text* GetFpsWarning() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("fpsWarning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGroundVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("groundVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLast30SecondsTrackingLost() {
            static BNM::Field<float> _field = GetClass().GetField(O("last30SecondsTrackingLost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GroupJoinZoneAB GetLastGroupJoinZone() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneAB> _field = GetClass().GetField(O("lastGroupJoinZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftHandTracked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandTracked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLogError() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("logError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLogMessage() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("logMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowFps() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowFps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPLog() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightHandTracked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandTracked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSessionAnytrackingLost() {
            static BNM::Field<float> _field = GetClass().GetField(O("sessionAnytrackingLost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowLog() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTrisRecorder() {
            static BNM::Field<void*> _field = GetClass().GetField(O("trisRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpdateTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("updateTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetZones() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::DebugHudStats* value) {
            static BNM::Field<::GlobalNamespace::DebugHudStats*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetAveragedVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averagedVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("builder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton1Down(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("button1Down"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton2Down(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("button2Down"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton3Down(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("button3Down"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterHeadPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("centerHeadPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::DebugHudStats_State value) {
            static BNM::Field<::GlobalNamespace::DebugHudStats_State> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayUpdateRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delayUpdateRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceMoved(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceMoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceSwam(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceSwam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawCallsRecorder(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("drawCallsRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstAwake(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firstAwake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetFPSTHRESHOLD(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("FPS_THRESHOLD"));
            _field.Set(value);
        }
        void SetFpsWarning(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("fpsWarning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("groundVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLast30SecondsTrackingLost(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("last30SecondsTrackingLost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGroupJoinZone(::GlobalNamespace::GroupJoinZoneAB value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneAB> _field = GetClass().GetField(O("lastGroupJoinZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandTracked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandTracked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogError(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("logError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogMessage(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("logMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowFps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowFps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPLog(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTracked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandTracked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSessionAnytrackingLost(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sessionAnytrackingLost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowLog(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrisRecorder(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("trisRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("updateTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZones(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* colorFromState(::GlobalNamespace::DebugHudStats_State s) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("colorFromState"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s);
        }
        static ::GlobalNamespace::DebugHudStats* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::DebugHudStats*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::String* getColorStringFromLogType(TP0 type) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("getColorStringFromLogType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP2 = void*>
        void LogMessageReceived(::BNM::Structures::Mono::String* condition, ::BNM::Structures::Mono::String* stackTrace, TP2 type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogMessageReceived"), {"condition", "stackTrace", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(condition, stackTrace, type);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerMoved(float distance, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerMoved"), {"distance", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(distance, speed);
        }
        void OnPlayerSwam(float distance, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerSwam"), {"distance", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(distance, speed);
        }
        void OnZoneChanged(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>* zoneData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"), {"zoneData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneData);
        }
    };
}
