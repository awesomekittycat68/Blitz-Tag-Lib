#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BufferedAudioStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BufferedAudioStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr bool VerboseLogging = false;
        static constexpr float bufferLengthSeconds = 0.25f;
        static constexpr int sampleRate = 48000;
        static constexpr int bufferSize = 12000;
        static constexpr float playbackDelayTimeSeconds = 0.05f;
        ::AudioSource* GetAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetAudioBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("audioBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlaybackDelayRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("playbackDelayRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingBufferTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingBufferTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWritePos() {
            static BNM::Field<int> _field = GetClass().GetField(O("writePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioBuffer(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("audioBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaybackDelayRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playbackDelayRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingBufferTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingBufferTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWritePos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("writePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddData(::BNM::Structures::Mono::Array<float>* samples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddData"), {"samples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(samples);
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
