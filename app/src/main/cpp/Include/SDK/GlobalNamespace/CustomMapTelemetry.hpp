#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapTelemetry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapTelemetry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CustomMapTelemetry* GetInstance() {
            static BNM::Field<::GlobalNamespace::CustomMapTelemetry*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int minimumPlaytimeForTracking = 30;
        bool GetIsActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int GetAverageDrawCalls() {
            static BNM::Field<int> _field = GetClass().GetField(O("AverageDrawCalls"));
            return _field.Get();
        }
        static int GetAverageFPS() {
            static BNM::Field<int> _field = GetClass().GetField(O("AverageFPS"));
            return _field.Get();
        }
        static int GetAveragePlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("AveragePlayerCount"));
            return _field.Get();
        }
        static void* GetDrawCallsRecorder() {
            static BNM::Field<void*> _field = GetClass().GetField(O("drawCallsRecorder"));
            return _field.Get();
        }
        static int GetFrameCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("frameCounter"));
            return _field.Get();
        }
        static int GetHighestFPS() {
            static BNM::Field<int> _field = GetClass().GetField(O("HighestFPS"));
            return _field.Get();
        }
        static int GetHighestFPSDrawCalls() {
            static BNM::Field<int> _field = GetClass().GetField(O("HighestFPSDrawCalls"));
            return _field.Get();
        }
        static int GetHighestFPSPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("HighestFPSPlayerCount"));
            return _field.Get();
        }
        static bool GetInPrivateRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inPrivateRoom"));
            return _field.Get();
        }
        static ::GlobalNamespace::CustomMapTelemetry* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CustomMapTelemetry*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static int GetLowestFPS() {
            static BNM::Field<int> _field = GetClass().GetField(O("LowestFPS"));
            return _field.Get();
        }
        static int GetLowestFPSDrawCalls() {
            static BNM::Field<int> _field = GetClass().GetField(O("LowestFPSDrawCalls"));
            return _field.Get();
        }
        static int GetLowestFPSPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("LowestFPSPlayerCount"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetMapCreatorUsername() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapCreatorUsername"));
            return _field.Get();
        }
        static float GetMapEnterTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("mapEnterTime"));
            return _field.Get();
        }
        static int64_t GetMapModId() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("mapModId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetMapName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapName"));
            return _field.Get();
        }
        static int GetMaxPlayersInMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlayersInMap"));
            return _field.Get();
        }
        static bool GetMetricsCaptureStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("metricsCaptureStarted"));
            return _field.Get();
        }
        static int GetMinPlayersInMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("minPlayersInMap"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPerfCaptureCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("perfCaptureCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetPerfCaptureStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("perfCaptureStarted"));
            return _field.Get();
        }
        static int GetRunningPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("runningPlayerCount"));
            return _field.Get();
        }
        static int GetTotalDrawCalls() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalDrawCalls"));
            return _field.Get();
        }
        static int GetTotalFPS() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalFPS"));
            return _field.Get();
        }
        static int GetTotalPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPlayerCount"));
            return _field.Get();
        }
        static void SetAverageDrawCalls(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("AverageDrawCalls"));
            _field.Set(value);
        }
        static void SetAverageFPS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("AverageFPS"));
            _field.Set(value);
        }
        static void SetAveragePlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("AveragePlayerCount"));
            _field.Set(value);
        }
        static void SetDrawCallsRecorder(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("drawCallsRecorder"));
            _field.Set(value);
        }
        static void SetFrameCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frameCounter"));
            _field.Set(value);
        }
        static void SetHighestFPS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("HighestFPS"));
            _field.Set(value);
        }
        static void SetHighestFPSDrawCalls(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("HighestFPSDrawCalls"));
            _field.Set(value);
        }
        static void SetHighestFPSPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("HighestFPSPlayerCount"));
            _field.Set(value);
        }
        static void SetInPrivateRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inPrivateRoom"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CustomMapTelemetry* value) {
            static BNM::Field<::GlobalNamespace::CustomMapTelemetry*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetLowestFPS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LowestFPS"));
            _field.Set(value);
        }
        static void SetLowestFPSDrawCalls(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LowestFPSDrawCalls"));
            _field.Set(value);
        }
        static void SetLowestFPSPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LowestFPSPlayerCount"));
            _field.Set(value);
        }
        static void SetMapCreatorUsername(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapCreatorUsername"));
            _field.Set(value);
        }
        static void SetMapEnterTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("mapEnterTime"));
            _field.Set(value);
        }
        static void SetMapModId(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("mapModId"));
            _field.Set(value);
        }
        static void SetMapName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapName"));
            _field.Set(value);
        }
        static void SetMaxPlayersInMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlayersInMap"));
            _field.Set(value);
        }
        static void SetMetricsCaptureStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("metricsCaptureStarted"));
            _field.Set(value);
        }
        static void SetMinPlayersInMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minPlayersInMap"));
            _field.Set(value);
        }
        void SetPerfCaptureCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("perfCaptureCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPerfCaptureStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("perfCaptureStarted"));
            _field.Set(value);
        }
        static void SetRunningPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("runningPlayerCount"));
            _field.Set(value);
        }
        static void SetTotalDrawCalls(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalDrawCalls"));
            _field.Set(value);
        }
        static void SetTotalFPS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalFPS"));
            _field.Set(value);
        }
        static void SetTotalPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPlayerCount"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CaptureMapPerformance() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CaptureMapPerformance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void EndMapTracking() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndMapTracking"));
            _m.Call();
        }
        static void EndMetricsCapture() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndMetricsCapture"));
            _m.Call();
        }
        static void EndPerfCapture() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndPerfCapture"));
            _m.Call();
        }
        static bool get_IsActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsActive"));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoinedRoom"), {"obj"});
            _m.Call(obj);
        }
        static void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"obj"});
            _m.Call(obj);
        }
        static void StartMapTracking() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartMapTracking"));
            _m.Call();
        }
        static void StartMetricsCapture() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartMetricsCapture"));
            _m.Call();
        }
        static void StartPerfCapture() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPerfCapture"));
            _m.Call();
        }
    };
}
