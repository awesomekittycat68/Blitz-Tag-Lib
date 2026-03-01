#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/PlaybackDelaySettings.hpp"

namespace GlobalNamespace {
    struct SpeakerVoiceToLoudness : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpeakerVoiceToLoudness");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLoudness() {
            static BNM::Field<float> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::PlaybackDelaySettings GetPlaybackDelaySettings() {
            static BNM::Field<::Photon_Voice_Unity::PlaybackDelaySettings> _field = GetClass().GetField(O("playbackDelaySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaybackDelaySettings(::Photon_Voice_Unity::PlaybackDelaySettings value) {
            static BNM::Field<::Photon_Voice_Unity::PlaybackDelaySettings> _field = GetClass().GetField(O("playbackDelaySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Func<void*>* GetVolumeTracking(::Photon_Voice_Unity::Speaker* speaker) {
            static BNM::Method<::BNM::Structures::Mono::Func<void*>*> _m = GetClass().GetMethod(O("GetVolumeTracking"), {"speaker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(speaker);
        }
    };
}
