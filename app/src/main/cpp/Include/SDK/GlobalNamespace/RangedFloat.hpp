#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RangedFloat : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RangedFloat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetCurve() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_Curve"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurved() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_curved"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetMax() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Max"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMax(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Max"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetMin() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Min"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMin(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Min"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetNormalized() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_normalized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNormalized(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_normalized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetRange() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Range"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurve_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_curve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMax_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMin_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_curve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMax_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float Get() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Get"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_Curve() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_Curve"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_curved() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_curved"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Max() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Max"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Min() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Min"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_normalized() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_normalized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Range() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Range"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Set(float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(f);
        }
        void set_Max(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Max"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Min(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Min"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_normalized(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_normalized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
