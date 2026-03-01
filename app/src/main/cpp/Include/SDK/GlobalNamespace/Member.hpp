#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Member : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Member");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetLogoImage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_logoImage"));
            return _method.Call();
        }
        void SetLogoImage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_logoImage"));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_name"));
            return _method.Call();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_name"));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetProfileImage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_profileImage"));
            return _method.Call();
        }
        void SetProfileImage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_profileImage"));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* get_logoImage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_logoImage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_profileImage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_profileImage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_logoImage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_logoImage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_name(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_name"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_profileImage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_profileImage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
