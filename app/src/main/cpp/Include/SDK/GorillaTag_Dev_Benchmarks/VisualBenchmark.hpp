#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VisualBenchmark_EState.hpp"
#include "VisualBenchmark_StatInfo.hpp"

namespace GorillaTag_Dev_Benchmarks {
    struct VisualBenchmark : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Dev.Benchmarks", "VisualBenchmark");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_Dev_Benchmarks::VisualBenchmark_StatInfo>* GetAvailableRenderStats() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Dev_Benchmarks::VisualBenchmark_StatInfo>*> _field = GetClass().GetField(O("availableRenderStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetBenchmarkLocations() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("benchmarkLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetCam() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("cam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollectGarbageDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("collectGarbageDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentLocationIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLocationIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetIsQuitting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQuitting"));
            return _field.Get();
        }
        float GetLastTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRecordStatsDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("recordStatsDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetRenderStatsRecorders() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("renderStatsRecorders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSb() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Dev_Benchmarks::VisualBenchmark_EState GetState() {
            static BNM::Field<::GorillaTag_Dev_Benchmarks::VisualBenchmark_EState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAvailableRenderStats(::BNM::Structures::Mono::Array<::GorillaTag_Dev_Benchmarks::VisualBenchmark_StatInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Dev_Benchmarks::VisualBenchmark_StatInfo>*> _field = GetClass().GetField(O("availableRenderStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBenchmarkLocations(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("benchmarkLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCam(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("cam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectGarbageDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collectGarbageDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLocationIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLocationIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetIsQuitting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQuitting"));
            _field.Set(value);
        }
        void SetLastTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecordStatsDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("recordStatsDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderStatsRecorders(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("renderStatsRecorders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GorillaTag_Dev_Benchmarks::VisualBenchmark_EState value) {
            static BNM::Field<::GorillaTag_Dev_Benchmarks::VisualBenchmark_EState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void RecordLocationStats(::Transform* xform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecordLocationStats"), {"xform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(xform);
        }
    };
}
