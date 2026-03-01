#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ThermalReceiver : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThermalReceiver");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFarenheit() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Farenheit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetFloatValue() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_floatValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCelsius() {
            static BNM::Field<float> _field = GetClass().GetField(O("celsius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetConductivity() {
            static BNM::Field<float> _field = GetClass().GetField(O("conductivity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultCelsius() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultCelsius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::ThermalSourceVolume*>* GetExclusionSources() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ThermalSourceVolume*>*> _field = GetClass().GetField(O("exclusionSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnAboveThreshold() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnBelowThreshold() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnBelowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTemperatureThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("temperatureThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasAboveThreshold() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCelsius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("celsius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConductivity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("conductivity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultCelsius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultCelsius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExclusionSources(::BNM::Structures::Mono::List<::GlobalNamespace::ThermalSourceVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ThermalSourceVolume*>*> _field = GetClass().GetField(O("exclusionSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAboveThreshold(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBelowThreshold(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnBelowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemperatureThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("temperatureThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasAboveThreshold(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_Farenheit() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Farenheit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_floatValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_floatValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void ResetToDefaultState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToDefaultState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
