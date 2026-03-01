#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct NativeAndroidMicrophoneSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "NativeAndroidMicrophoneSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAcousticEchoCancellation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AcousticEchoCancellation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutomaticGainControl() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutomaticGainControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNoiseSuppression() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NoiseSuppression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAcousticEchoCancellation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AcousticEchoCancellation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutomaticGainControl(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutomaticGainControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoiseSuppression(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("NoiseSuppression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
