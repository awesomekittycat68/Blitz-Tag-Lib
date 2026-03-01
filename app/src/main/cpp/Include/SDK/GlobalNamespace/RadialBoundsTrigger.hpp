#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Id32.hpp"

namespace GlobalNamespace {
    struct RadialBoundsTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RadialBoundsTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetOverlapping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_overlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRaiseEvents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_raiseEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOverlapStarted() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOverlapStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOverlapStopped() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOverlapStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSpentInOverlap() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeSpentInOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Id32 GetTriggerID() {
            static BNM::Field<::GlobalNamespace::Id32> _field = GetClass().GetField(O("_triggerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHysteresis() {
            static BNM::Field<float> _field = GetClass().GetField(O("hysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RadialBounds* GetObject1() {
            static BNM::Field<::GlobalNamespace::RadialBounds*> _field = GetClass().GetField(O("object1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RadialBounds* GetObject2() {
            static BNM::Field<::GlobalNamespace::RadialBounds*> _field = GetClass().GetField(O("object2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOverlapping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_overlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaiseEvents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_raiseEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOverlapStarted(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOverlapStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOverlapStopped(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOverlapStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSpentInOverlap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeSpentInOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerID(::GlobalNamespace::Id32 value) {
            static BNM::Field<::GlobalNamespace::Id32> _field = GetClass().GetField(O("_triggerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHysteresis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObject1(::GlobalNamespace::RadialBounds* value) {
            static BNM::Field<::GlobalNamespace::RadialBounds*> _field = GetClass().GetField(O("object1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObject2(::GlobalNamespace::RadialBounds* value) {
            static BNM::Field<::GlobalNamespace::RadialBounds*> _field = GetClass().GetField(O("object2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestOverlap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestOverlap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestOverlap(bool raiseEvents) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestOverlap"), {"raiseEvents"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raiseEvents);
        }
    };
}
