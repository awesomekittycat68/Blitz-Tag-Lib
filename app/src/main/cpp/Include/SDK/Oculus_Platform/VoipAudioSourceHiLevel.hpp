#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoipSampleRate.hpp"

namespace Oculus_Platform {
    struct VoipAudioSourceHiLevel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "VoipAudioSourceHiLevel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void SetSenderID(uint64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_senderID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetAudioSystemPlaybackFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("audioSystemPlaybackFrequency"));
            return _field.Get();
        }
        int GetInitialPlaybackDelayMS() {
            static BNM::Field<int> _field = GetClass().GetField(O("initialPlaybackDelayMS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPcmSource() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pcmSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPeakAmplitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("peakAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetVerboseLogging() {
            static BNM::Field<bool> _field = GetClass().GetField(O("verboseLogging"));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAudioSystemPlaybackFrequency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("audioSystemPlaybackFrequency"));
            _field.Set(value);
        }
        void SetInitialPlaybackDelayMS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("initialPlaybackDelayMS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPcmSource(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pcmSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeakAmplitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("peakAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetVerboseLogging(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("verboseLogging"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatePCMSource() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePCMSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int MSToElements(int ms) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MSToElements"), {"ms"});
            return _m.Call(ms);
        }
        ::Oculus_Platform::VoipSampleRate SampleRateToEnum(int rate) {
            static BNM::Method<::Oculus_Platform::VoipSampleRate> _m = GetClass().GetMethod(O("SampleRateToEnum"), {"rate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rate);
        }
        void set_senderID(uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_senderID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
