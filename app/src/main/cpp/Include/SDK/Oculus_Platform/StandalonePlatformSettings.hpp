#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct StandalonePlatformSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "StandalonePlatformSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetOculusPlatformTestUserAccessToken() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_OculusPlatformTestUserAccessToken"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOculusPlatformTestUserAccessToken(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OculusPlatformTestUserAccessToken"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetOculusPlatformTestUserEmail() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_OculusPlatformTestUserEmail"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOculusPlatformTestUserEmail(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OculusPlatformTestUserEmail"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetOculusPlatformTestUserPassword() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_OculusPlatformTestUserPassword"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOculusPlatformTestUserPassword(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OculusPlatformTestUserPassword"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::String* get_OculusPlatformTestUserAccessToken() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_OculusPlatformTestUserAccessToken"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_OculusPlatformTestUserEmail() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_OculusPlatformTestUserEmail"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_OculusPlatformTestUserPassword() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_OculusPlatformTestUserPassword"));
            return _m.Call();
        }
        static void set_OculusPlatformTestUserAccessToken(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OculusPlatformTestUserAccessToken"), {"value"});
            _m.Call(value);
        }
        static void set_OculusPlatformTestUserEmail(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OculusPlatformTestUserEmail"), {"value"});
            _m.Call(value);
        }
        static void set_OculusPlatformTestUserPassword(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OculusPlatformTestUserPassword"), {"value"});
            _m.Call(value);
        }
    };
}
