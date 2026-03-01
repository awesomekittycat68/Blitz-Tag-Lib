#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/VoiceComponent.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct MicAmplifier : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "MicAmplifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAmplificationFactor() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_AmplificationFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAmplificationFactor(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AmplificationFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBoostValue() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BoostValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBoostValue(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BoostValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetAmplificationFactor_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("amplificationFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBoostValue_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("boostValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity_UtilityScripts::MicAmplifierFloat* GetFloatProcessor() {
            static BNM::Field<::Photon_Voice_Unity_UtilityScripts::MicAmplifierFloat*> _field = GetClass().GetField(O("floatProcessor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity_UtilityScripts::MicAmplifierShort* GetShortProcessor() {
            static BNM::Field<::Photon_Voice_Unity_UtilityScripts::MicAmplifierShort*> _field = GetClass().GetField(O("shortProcessor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAmplificationFactor_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("amplificationFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoostValue_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("boostValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloatProcessor(::Photon_Voice_Unity_UtilityScripts::MicAmplifierFloat* value) {
            static BNM::Field<::Photon_Voice_Unity_UtilityScripts::MicAmplifierFloat*> _field = GetClass().GetField(O("floatProcessor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShortProcessor(::Photon_Voice_Unity_UtilityScripts::MicAmplifierShort* value) {
            static BNM::Field<::Photon_Voice_Unity_UtilityScripts::MicAmplifierShort*> _field = GetClass().GetField(O("shortProcessor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_AmplificationFactor() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_AmplificationFactor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BoostValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BoostValue"));
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
        void PhotonVoiceCreated(::Photon_Voice_Unity::PhotonVoiceCreatedParams* p) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonVoiceCreated"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p);
        }
        void set_AmplificationFactor(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AmplificationFactor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BoostValue(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BoostValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
