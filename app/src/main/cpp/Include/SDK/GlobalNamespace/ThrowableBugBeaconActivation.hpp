#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ThrowableBugBeaconActivation_ActivationMode.hpp"

namespace GlobalNamespace {
    struct ThrowableBugBeaconActivation : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThrowableBugBeaconActivation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMaxCallTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCallTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinCallTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("minCallTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode GetMode() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetSignalCount() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("signalCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThrowableBugBeacon* GetTbb() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon*> _field = GetClass().GetField(O("tbb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxCallTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCallTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinCallTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minCallTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSignalCount(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("signalCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTbb(::GlobalNamespace::ThrowableBugBeacon* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon*> _field = GetClass().GetField(O("tbb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        ::BNM::Coroutine::IEnumerator* SendSignals() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendSignals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
