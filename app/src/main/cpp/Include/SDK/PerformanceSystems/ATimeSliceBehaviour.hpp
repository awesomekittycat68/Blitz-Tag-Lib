#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PerformanceSystems {
    struct ATimeSliceBehaviour : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PerformanceSystems", "ATimeSliceBehaviour");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLastUpdateTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PerformanceSystems::TimeSliceControllerAsset* GetTimeSliceControllerAsset() {
            static BNM::Field<::PerformanceSystems::TimeSliceControllerAsset*> _field = GetClass().GetField(O("_timeSliceControllerAsset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdateIfDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_updateIfDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastUpdateTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSliceControllerAsset(::PerformanceSystems::TimeSliceControllerAsset* value) {
            static BNM::Field<::PerformanceSystems::TimeSliceControllerAsset*> _field = GetClass().GetField(O("_timeSliceControllerAsset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateIfDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_updateIfDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
        void SliceUpdateAlways(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdateAlways"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
    };
}
