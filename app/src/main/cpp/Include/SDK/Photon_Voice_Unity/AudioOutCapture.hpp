#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct AudioOutCapture : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "AudioOutCapture");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnAudioFrame(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAudioFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnAudioFrame(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAudioFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>* GetOnAudioFrame() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>*> _field = GetClass().GetField(O("OnAudioFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnAudioFrame(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>*> _field = GetClass().GetField(O("OnAudioFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnAudioFrame_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAudioFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnAudioFilterRead(::BNM::Structures::Mono::Array<float>* frame, int channels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioFilterRead"), {"frame", "channels"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frame, channels);
        }
        void remove_OnAudioFrame_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<float>*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAudioFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
