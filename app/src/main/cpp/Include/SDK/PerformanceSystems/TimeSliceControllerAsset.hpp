#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PerformanceSystems {
    struct TimeSliceControllerAsset : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PerformanceSystems", "TimeSliceControllerAsset");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetReferenceTransform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_ReferenceTransform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCurrentSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetCurrentTimeSliceBehaviours() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_currentTimeSliceBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReferenceTransform_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSliceSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_sliceSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTimeSliceBehavioursToAdd() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_timeSliceBehavioursToAdd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTimeSliceBehavioursToRemove() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_timeSliceBehavioursToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeSlices() {
            static BNM::Field<int> _field = GetClass().GetField(O("_timeSlices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSliceSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_sliceSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSlices(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_timeSlices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddPendingObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPendingObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void AddTimeSliceBehaviour(TP0 timeSlice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTimeSliceBehaviour"), {"timeSlice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeSlice);
        }
        void ClearAsset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAsset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Transform* get_ReferenceTransform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_ReferenceTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeReferenceTransformWithMainCam() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeReferenceTransformWithMainCam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemovePendingObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePendingObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void RemoveTimeSliceBehaviour(TP0 timeSlice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTimeSliceBehaviour"), {"timeSlice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeSlice);
        }
        void SetRefTransform(::Transform* refTransform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRefTransform"), {"refTransform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(refTransform);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCurrentSliceObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCurrentSliceObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
