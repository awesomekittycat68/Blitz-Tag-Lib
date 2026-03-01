#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProximityReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProximityReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDistance() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_distance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetDistanceLinear() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_distanceLinear"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetProximityRange() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_proximityRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetDistance_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceLinear_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_distanceLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("from"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnAboveMaxProximity() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onAboveMaxProximity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnBelowMinProximity() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onBelowMinProximity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnProximityChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onProximityChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnProximityChangedLinear() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onProximityChangedLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProximityMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProximityMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTo() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("to"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceLinear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_distanceLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("from"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAboveMaxProximity(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onAboveMaxProximity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBelowMinProximity(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onBelowMinProximity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProximityChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onProximityChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProximityChangedLinear(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onProximityChangedLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTo(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("to"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_distance() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_distance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_distanceLinear() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_distanceLinear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_proximityRange() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_proximityRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetRigFrom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigFrom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetRigTo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigTo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetTransformFrom(::Transform* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransformFrom"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
        void SetTransformTo(::Transform* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransformTo"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
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
