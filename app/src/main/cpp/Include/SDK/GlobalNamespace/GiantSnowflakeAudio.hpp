#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GiantSnowflakeAudio_SnowflakeScaleOverride.hpp"

namespace GlobalNamespace {
    struct GiantSnowflakeAudio : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GiantSnowflakeAudio");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>* GetAudioOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*> _field = GetClass().GetField(O("audioOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*> _field = GetClass().GetField(O("audioOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
