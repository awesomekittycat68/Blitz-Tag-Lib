#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipClientContext : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipClientContext");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetMothershipId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetToken() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Token"));
            return _field.Get();
        }
        static void SetMothershipId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipId"));
            _field.Set(value);
        }
        static void SetToken(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Token"));
            _field.Set(value);
        }
        static void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.Call();
        }
        static bool IsClientLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsClientLoggedIn"));
            return _m.Call();
        }
    };
}
