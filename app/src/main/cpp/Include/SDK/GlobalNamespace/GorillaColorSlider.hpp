#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaColorSlider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaColorSlider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaTriggerBox* GetGorilla() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerBox*> _field = GetClass().GetField(O("gorilla"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetRandomly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setRandomly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartingLocation() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingZ() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetValueImReporting() {
            static BNM::Field<float> _field = GetClass().GetField(O("valueImReporting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetValueIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("valueIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetZRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("zRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGorilla(::GlobalNamespace::GorillaTriggerBox* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerBox*> _field = GetClass().GetField(O("gorilla"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetRandomly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setRandomly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingLocation(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingZ(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValueImReporting(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("valueImReporting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValueIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("valueIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("zRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float InterpolateValue(float value) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("InterpolateValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        void OnSliderRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSliderRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetPosition(float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPosition"), {"speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
