#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/UnityAudioOut.hpp"

namespace GlobalNamespace {
    struct SpeakerVoiceLoudnessAudioOut : ::Photon_Voice_Unity::UnityAudioOut {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpeakerVoiceLoudnessAudioOut");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SpeakerVoiceToLoudness* GetVoiceToLoudness() {
            static BNM::Field<::GlobalNamespace::SpeakerVoiceToLoudness*> _field = GetClass().GetField(O("voiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVoiceToLoudness(::GlobalNamespace::SpeakerVoiceToLoudness* value) {
            static BNM::Field<::GlobalNamespace::SpeakerVoiceToLoudness*> _field = GetClass().GetField(O("voiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OutWrite(::BNM::Structures::Mono::Array<float>* data, int offsetSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutWrite"), {"data", "offsetSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, offsetSamples);
        }
    };
}
