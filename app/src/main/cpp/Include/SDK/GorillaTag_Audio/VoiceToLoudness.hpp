#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct VoiceToLoudness : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "VoiceToLoudness");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCheckVoice() {
            static BNM::Field<float> _field = GetClass().GetField(O("_checkVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhotonVoiceCreated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_photonVoiceCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetRecorder() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("_recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoudness() {
            static BNM::Field<float> _field = GetClass().GetField(O("Loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCheckVoice(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_checkVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonVoiceCreated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_photonVoiceCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("_recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateProcessVoiceData(::Photon_Voice::LocalVoice* voice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateProcessVoiceData"), {"voice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voice);
        }
        void PhotonVoiceCreated(::Photon_Voice_Unity::PhotonVoiceCreatedParams* photonVoiceCreatedParams) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonVoiceCreated"), {"photonVoiceCreatedParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(photonVoiceCreatedParams);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
