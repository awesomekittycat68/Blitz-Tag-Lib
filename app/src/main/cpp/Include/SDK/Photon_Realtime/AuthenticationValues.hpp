#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomAuthenticationType.hpp"

namespace Photon_Realtime {
    struct AuthenticationValues : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "AuthenticationValues");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAuthGetParameters() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AuthGetParameters"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAuthGetParameters(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AuthGetParameters"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::CustomAuthenticationType GetAuthType() {
            static BNM::Method<::Photon_Realtime::CustomAuthenticationType> _method = GetClass().GetMethod(O("get_AuthType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAuthType(::Photon_Realtime::CustomAuthenticationType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AuthType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_UserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUserId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::CustomAuthenticationType GetAuthType_f() {
            static BNM::Field<::Photon_Realtime::CustomAuthenticationType> _field = GetClass().GetField(O("authType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAuthType_fs(::Photon_Realtime::CustomAuthenticationType value) {
            static BNM::Field<::Photon_Realtime::CustomAuthenticationType> _field = GetClass().GetField(O("authType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddAuthParameter(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddAuthParameter"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        ::Photon_Realtime::AuthenticationValues* CopyTo(::Photon_Realtime::AuthenticationValues* copy) {
            static BNM::Method<::Photon_Realtime::AuthenticationValues*> _m = GetClass().GetMethod(O("CopyTo"), {"copy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(copy);
        }
        ::BNM::Structures::Mono::String* get_AuthGetParameters() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AuthGetParameters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_AuthPostData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_AuthPostData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::CustomAuthenticationType get_AuthType() {
            static BNM::Method<::Photon_Realtime::CustomAuthenticationType> _m = GetClass().GetMethod(O("get_AuthType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Token() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Token"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_UserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_UserId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_AuthGetParameters(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AuthGetParameters"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_AuthPostData(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AuthPostData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AuthType(::Photon_Realtime::CustomAuthenticationType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AuthType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_Token(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Token"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UserId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UserId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAuthPostData(::BNM::Structures::Mono::String* stringData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthPostData"), {"stringData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stringData);
        }
        void SetAuthPostData(::BNM::Structures::Mono::Array<uint8_t>* byteData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthPostData"), {"byteData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(byteData);
        }
        void SetAuthPostData(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* dictData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthPostData"), {"dictData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dictData);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
