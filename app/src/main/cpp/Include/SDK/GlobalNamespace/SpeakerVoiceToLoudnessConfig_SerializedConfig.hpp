#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SpeakerVoiceToLoudnessConfig_SerializedConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpeakerVoiceToLoudnessConfig").GetInnerClass("SerializedConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetEnableLoudnessLimit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableLoudnessLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoudnessLimitThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("LoudnessLimitThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnableLoudnessLimit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableLoudnessLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudnessLimitThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LoudnessLimitThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
