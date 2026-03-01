#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PerformanceSystems {
    struct TimeSliceControllerBehaviour : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PerformanceSystems", "TimeSliceControllerBehaviour");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PerformanceSystems::TimeSliceControllerAsset* GetTimeSliceControllerAsset() {
            static BNM::Field<::PerformanceSystems::TimeSliceControllerAsset*> _field = GetClass().GetField(O("_timeSliceControllerAsset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTimeSliceControllerAsset(::PerformanceSystems::TimeSliceControllerAsset* value) {
            static BNM::Field<::PerformanceSystems::TimeSliceControllerAsset*> _field = GetClass().GetField(O("_timeSliceControllerAsset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
