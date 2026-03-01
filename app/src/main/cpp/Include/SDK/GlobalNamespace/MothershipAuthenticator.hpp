#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipAuthenticator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipAuthenticator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MothershipAuthenticator* GetInstance() {
            static BNM::Field<::GlobalNamespace::MothershipAuthenticator*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        int GetMaxMetaLoginAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxMetaLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MetaAuthenticator* GetMetaAuthenticator() {
            static BNM::Field<::GlobalNamespace::MetaAuthenticator*> _field = GetClass().GetField(O("MetaAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMetaLoginAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("metaLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int>* GetOnLoginAttemptFailure() {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnLoginAttemptFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetOnLoginFailure() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnLoginFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnLoginSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnLoginSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SteamAuthenticator* GetSteamAuthenticator() {
            static BNM::Field<::GlobalNamespace::SteamAuthenticator*> _field = GetClass().GetField(O("SteamAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTestAccountId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TestAccountId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTestNickname() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TestNickname"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseConstantTestAccountId() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseConstantTestAccountId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::MothershipAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::MothershipAuthenticator*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetMaxMetaLoginAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxMetaLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetaAuthenticator(::GlobalNamespace::MetaAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::MetaAuthenticator*> _field = GetClass().GetField(O("MetaAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetaLoginAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("metaLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLoginAttemptFailure(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnLoginAttemptFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLoginFailure(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnLoginFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLoginSuccess(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnLoginSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSteamAuthenticator(::GlobalNamespace::SteamAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::SteamAuthenticator*> _field = GetClass().GetField(O("SteamAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestAccountId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TestAccountId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestNickname(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TestNickname"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseConstantTestAccountId(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseConstantTestAccountId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BeginLoginFlow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginLoginFlow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CompleteLogInWithMeta(::BNM::Structures::Mono::String* attestationToken, ::BNM::Structures::Mono::String* nonce) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompleteLogInWithMeta"), {"attestationToken", "nonce"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(attestationToken, nonce);
        }
        static void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.Call();
        }
        void LogInWithInsecure() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogInWithInsecure"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MetaFatalLoginFail(::BNM::Structures::Mono::String* errorMessage, ::BNM::Structures::Mono::String* errorCode, ::BNM::Structures::Mono::String* traceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MetaFatalLoginFail"), {"errorMessage", "errorCode", "traceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorMessage, errorCode, traceId);
        }
        void MetaLoginFail(::BNM::Structures::Mono::String* errorMessage, ::BNM::Structures::Mono::String* errorCode, ::BNM::Structures::Mono::String* traceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MetaLoginFail"), {"errorMessage", "errorCode", "traceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorMessage, errorCode, traceId);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartLogInWithMeta() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartLogInWithMeta"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
