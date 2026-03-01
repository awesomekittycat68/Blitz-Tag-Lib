#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MetaAuthenticator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MetaAuthenticator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetAppEntitlementCheckAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("appEntitlementCheckAttempts"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetAppEntitlementErrorMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("appEntitlementErrorMessage"));
            return _field.Get();
        }
        int GetMaxAppEntitlementCheckAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxAppEntitlementCheckAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxGetDeviceAttestationTokenAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxGetDeviceAttestationTokenAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxGetUserNonceAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxGetUserNonceAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnAppEntitlementCheckFailure() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnAppEntitlementCheckFailure"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnAppEntitlementCheckSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnAppEntitlementCheckSuccess"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnPlatformSdkInitializationFailure() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnPlatformSdkInitializationFailure"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPlatformSdkInitializationSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlatformSdkInitializationSuccess"));
            return _field.Get();
        }
        static void* GetUserId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("userId"));
            return _field.Get();
        }
        static void SetAppEntitlementCheckAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("appEntitlementCheckAttempts"));
            _field.Set(value);
        }
        static void SetAppEntitlementErrorMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("appEntitlementErrorMessage"));
            _field.Set(value);
        }
        void SetMaxAppEntitlementCheckAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxAppEntitlementCheckAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxGetDeviceAttestationTokenAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxGetDeviceAttestationTokenAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxGetUserNonceAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxGetUserNonceAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnAppEntitlementCheckFailure(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnAppEntitlementCheckFailure"));
            _field.Set(value);
        }
        static void SetOnAppEntitlementCheckSuccess(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnAppEntitlementCheckSuccess"));
            _field.Set(value);
        }
        static void SetOnPlatformSdkInitializationFailure(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnPlatformSdkInitializationFailure"));
            _field.Set(value);
        }
        static void SetOnPlatformSdkInitializationSuccess(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlatformSdkInitializationSuccess"));
            _field.Set(value);
        }
        static void SetUserId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("userId"));
            _field.Set(value);
        }
        void AppEntitlementCallback(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AppEntitlementCallback"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        static void* get_UserId() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_UserId"));
            return _m.Call();
        }
        void GetDeviceAttestationToken(::BNM::Structures::Mono::String* nonce, ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext* context) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDeviceAttestationToken"), {"nonce", "context"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nonce, context);
        }
        void GetDeviceAttestationToken(::BNM::Structures::Mono::Action<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*>* getNonceCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* failureCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDeviceAttestationToken"), {"getNonceCallback", "successCallback", "failureCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(getNonceCallback, successCallback, failureCallback);
        }
        void GetUserNonce(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* failureCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserNonce"), {"successCallback", "failureCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(successCallback, failureCallback);
        }
        void GetUserNonce(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* failureCallback, int attempts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetUserNonce"), {"successCallback", "failureCallback", "attempts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(successCallback, failureCallback, attempts);
        }
        ::BNM::Coroutine::IEnumerator* RetryAppEntitlementCheck(float waitTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RetryAppEntitlementCheck"), {"waitTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(waitTime);
        }
        ::BNM::Coroutine::IEnumerator* RetryGetDeviceAttestationToken(float waitTime, ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext* context) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RetryGetDeviceAttestationToken"), {"waitTime", "context"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(waitTime, context);
        }
        ::BNM::Coroutine::IEnumerator* RetryGetUserNonce(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* failureCallback, int attempts, float waitTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RetryGetUserNonce"), {"successCallback", "failureCallback", "attempts", "waitTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(successCallback, failureCallback, attempts, waitTime);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* WaitToGetDeviceAttestationToken(::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext* context) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("WaitToGetDeviceAttestationToken"), {"context"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(context);
        }
        ::BNM::Coroutine::IEnumerator* WaitToGetUserNonce(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* failureCallback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("WaitToGetUserNonce"), {"successCallback", "failureCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(successCallback, failureCallback);
        }
    };
}
