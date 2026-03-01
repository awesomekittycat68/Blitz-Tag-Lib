#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct ProcessVoiceDataToLoudness : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "ProcessVoiceDataToLoudness");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_Audio::VoiceToLoudness* GetVoiceToLoudness() {
            static BNM::Field<::GorillaTag_Audio::VoiceToLoudness*> _field = GetClass().GetField(O("_voiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVoiceToLoudness(::GorillaTag_Audio::VoiceToLoudness* value) {
            static BNM::Field<::GorillaTag_Audio::VoiceToLoudness*> _field = GetClass().GetField(O("_voiceToLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<float>* Process(::BNM::Structures::Mono::Array<float>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
    };
}
