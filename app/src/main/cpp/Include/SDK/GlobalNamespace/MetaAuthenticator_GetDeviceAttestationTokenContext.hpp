#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MetaAuthenticator_GetDeviceAttestationTokenContext : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MetaAuthenticator").GetInnerClass("GetDeviceAttestationTokenContext");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::MonoType* GetEqualityContract() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_EqualityContract"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetFailureCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("failureCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>* GetGetNonceCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>*> _field = GetClass().GetField(O("getNonceCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>* GetGotNonceCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>*> _field = GetClass().GetField(O("gotNonceCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetSuccessCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("successCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailureCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("failureCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetNonceCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>*> _field = GetClass().GetField(O("getNonceCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGotNonceCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>*> _field = GetClass().GetField(O("gotNonceCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("successCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool Equals_1(::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        ::BNM::MonoType* get_EqualityContract() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_EqualityContract"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool PrintMembers(::BNM::IL2CPP::Il2CppObject* builder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PrintMembers"), {"builder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(builder);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
