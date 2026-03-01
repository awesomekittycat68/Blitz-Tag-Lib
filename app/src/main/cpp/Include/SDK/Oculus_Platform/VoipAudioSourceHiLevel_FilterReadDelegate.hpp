#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct VoipAudioSourceHiLevel_FilterReadDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "VoipAudioSourceHiLevel").GetInnerClass("FilterReadDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::VoipAudioSourceHiLevel* GetParent() {
            static BNM::Field<::Oculus_Platform::VoipAudioSourceHiLevel*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetScratchBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("scratchBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetParent(::Oculus_Platform::VoipAudioSourceHiLevel* value) {
            static BNM::Field<::Oculus_Platform::VoipAudioSourceHiLevel*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScratchBuffer(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("scratchBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnAudioFilterRead(::BNM::Structures::Mono::Array<float>* data, int channels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioFilterRead"), {"data", "channels"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, channels);
        }
    };
}
