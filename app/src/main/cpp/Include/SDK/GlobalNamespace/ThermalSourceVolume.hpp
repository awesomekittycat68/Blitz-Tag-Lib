#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ThermalSourceVolume : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThermalSourceVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCelsius() {
            static BNM::Field<float> _field = GetClass().GetField(O("celsius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::ThermalReceiver*>* GetExclusionReceivers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ThermalReceiver*>*> _field = GetClass().GetField(O("exclusionReceivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInnerRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("innerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOuterRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("outerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCelsius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("celsius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExclusionReceivers(::BNM::Structures::Mono::List<::GlobalNamespace::ThermalReceiver*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ThermalReceiver*>*> _field = GetClass().GetField(O("exclusionReceivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("innerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOuterRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("outerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
    };
}
