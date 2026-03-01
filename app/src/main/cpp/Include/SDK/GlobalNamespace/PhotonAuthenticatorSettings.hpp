#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PhotonAuthenticatorSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonAuthenticatorSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetFusionAppId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FusionAppId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPunAppId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PunAppId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetVoiceAppId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VoiceAppId"));
            return _field.Get();
        }
        static void SetFusionAppId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FusionAppId"));
            _field.Set(value);
        }
        static void SetPunAppId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PunAppId"));
            _field.Set(value);
        }
        static void SetVoiceAppId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VoiceAppId"));
            _field.Set(value);
        }
        static void Load(::BNM::Structures::Mono::String* path) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Load"), {"path"});
            _m.Call(path);
        }
    };
}
