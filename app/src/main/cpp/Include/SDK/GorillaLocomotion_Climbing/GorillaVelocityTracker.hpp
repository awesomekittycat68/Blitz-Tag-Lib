#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Climbing {
    struct GorillaVelocityTracker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Climbing", "GorillaVelocityTracker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        int GetCurrentDataPointIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentDataPointIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRelativeTo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRelativeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastLocalSpacePos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastLocalSpacePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastTickedFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastTickedFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastWorldSpacePos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastWorldSpacePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLatestVelocityThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("latestVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>* GetLocalSpaceData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>*> _field = GetClass().GetField(O("localSpaceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxDataPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDataPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnLatestAboveThreshold() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLatestAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnLatestBelowThreshold() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLatestBelowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRelativeTo() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("relativeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTrans() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("trans"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseVelocityEvents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useVelocityEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseWorldSpaceForEvents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useWorldSpaceForEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasAboveThreshold() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>* GetWorldSpaceData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>*> _field = GetClass().GetField(O("worldSpaceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentDataPointIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentDataPointIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRelativeTo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRelativeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLocalSpacePos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastLocalSpacePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTickedFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastTickedFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWorldSpacePos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastWorldSpacePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestVelocityThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("latestVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalSpaceData(::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>*> _field = GetClass().GetField(O("localSpaceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDataPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDataPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLatestAboveThreshold(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLatestAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLatestBelowThreshold(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLatestBelowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRelativeTo(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("relativeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrans(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("trans"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseVelocityEvents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useVelocityEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseWorldSpaceForEvents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useWorldSpaceForEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasAboveThreshold(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldSpaceData(::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint*>*> _field = GetClass().GetField(O("worldSpaceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddToQueue(::BNM::IL2CPP::Il2CppObject*& dataPoints, ::GorillaLocomotion_Climbing::GorillaVelocityTracker_VelocityDataPoint* newData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToQueue"), {"dataPoints", "newData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&dataPoints, newData);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetAverageSpeedChangeMagnitudeInDirection(::BNM::Structures::Unity::Vector3 dir, bool worldSpace, float maxTimeFromPast) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAverageSpeedChangeMagnitudeInDirection"), {"dir", "worldSpace", "maxTimeFromPast"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dir, worldSpace, maxTimeFromPast);
        }
        ::BNM::Structures::Unity::Vector3 GetAverageVelocity(bool worldSpace, float maxTimeFromPast, bool doMagnitudeCheck) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetAverageVelocity"), {"worldSpace", "maxTimeFromPast", "doMagnitudeCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldSpace, maxTimeFromPast, doMagnitudeCheck);
        }
        ::BNM::Structures::Unity::Vector3 GetLatestVelocity(bool worldSpace) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLatestVelocity"), {"worldSpace"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldSpace);
        }
        ::BNM::Structures::Unity::Vector3 GetPosition(bool worldSpace) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPosition"), {"worldSpace"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldSpace);
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
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRelativeTo_1(::Transform* tf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRelativeTo"), {"tf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tf);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
