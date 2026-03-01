#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaSpeakerLoudness : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSpeakerLoudness");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFloatValue() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_floatValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMicEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMicEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSpeaking() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpeaking"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLoudness() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Loudness"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLoudnessNormalized() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LoudnessNormalized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetSmoothedLoudness() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_SmoothedLoudness"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMicEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMicEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSpeaking_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSpeaking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastLoudness() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoudness_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoudnessBlendStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("loudnessBlendStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoudnessUpdateCheckRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("loudnessUpdateCheckRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMicConnected() {
            static BNM::Field<bool> _field = GetClass().GetField(O("micConnected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNormalizedMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("normalizedMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetOfflineMic() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("offlineMic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPermission() {
            static BNM::Field<bool> _field = GetClass().GetField(O("permission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetRecorder() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetRigContainer() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmoothedLoudness_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("smoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Speaker* GetSpeaker() {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SpeakerVoiceToLoudness* GetSpeakerVoiceToLoudness() {
            static BNM::Field<::GlobalNamespace::SpeakerVoiceToLoudness*> _field = GetClass().GetField(O("speakerVoiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastUpdated() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSinceLoudnessChange() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceLoudnessChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetVoiceSampleBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("voiceSampleBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Audio::VoiceToLoudness* GetVoiceToLoudness() {
            static BNM::Field<::GorillaTag_Audio::VoiceToLoudness*> _field = GetClass().GetField(O("voiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMicEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMicEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSpeaking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSpeaking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudnessBlendStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loudnessBlendStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudnessUpdateCheckRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loudnessUpdateCheckRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicConnected(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("micConnected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalizedMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("normalizedMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfflineMic(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("offlineMic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermission(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("permission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigContainer(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothedLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeaker(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerVoiceToLoudness(::GlobalNamespace::SpeakerVoiceToLoudness* value) {
            static BNM::Field<::GlobalNamespace::SpeakerVoiceToLoudness*> _field = GetClass().GetField(O("speakerVoiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastUpdated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSinceLoudnessChange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceLoudnessChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceSampleBuffer(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("voiceSampleBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceToLoudness(::GorillaTag_Audio::VoiceToLoudness* value) {
            static BNM::Field<::GorillaTag_Audio::VoiceToLoudness*> _field = GetClass().GetField(O("voiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckMicConnection() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckMicConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_floatValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_floatValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMicEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMicEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpeaking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpeaking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Loudness() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Loudness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LoudnessNormalized() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LoudnessNormalized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_SmoothedLoudness() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_SmoothedLoudness"));
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
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLoudness() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLoudness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMicEnabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMicEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSmoothedLoudness() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSmoothedLoudness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
