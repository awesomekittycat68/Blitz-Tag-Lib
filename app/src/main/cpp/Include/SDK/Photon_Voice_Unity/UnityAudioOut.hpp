#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice/AudioOutDelayControl$1.hpp"

namespace Photon_Voice_Unity {
    struct UnityAudioOut : ::Photon_Voice::AudioOutDelayControl$1<float> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "UnityAudioOut");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetOutPos() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OutPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioClip* GetClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("clip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("clip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_OutPos() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OutPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OutCreate(int frequency, int channels, int bufferSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutCreate"), {"frequency", "channels", "bufferSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frequency, channels, bufferSamples);
        }
        void OutStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OutWrite(::BNM::Structures::Mono::Array<float>* data, int offsetSamples) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OutWrite"), {"data", "offsetSamples"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, offsetSamples);
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleAudioSource(bool toggle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleAudioSource"), {"toggle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggle);
        }
    };
}
