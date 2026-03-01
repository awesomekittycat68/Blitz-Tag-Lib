#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    struct PlayFabWebRequest : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabWebRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void SetCustomCertValidationHook(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CustomCertValidationHook"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int GetActiveCallCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_activeCallCount"));
            return _field.Get();
        }
        static bool GetIsApplicationPlaying() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isApplicationPlaying"));
            return _field.Get();
        }
        bool GetIsInitialized_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetRequestQueueThread() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_requestQueueThread"));
            return _field.Get();
        }
        static void* GetThreadKillTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_threadKillTime"));
            return _field.Get();
        }
        static void* GetThreadLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ThreadLock"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetUnityVersion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_unityVersion"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::PlayFab_Internal::CallRequestContainer*>* GetActiveRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_Internal::CallRequestContainer*>*> _field = GetClass().GetField(O("ActiveRequests"));
            return _field.Get();
        }
        static bool GetCertValidationSet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("certValidationSet"));
            return _field.Get();
        }
        static void* GetResultQueueMainThread() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ResultQueueMainThread"));
            return _field.Get();
        }
        static void* GetResultQueueTransferThread() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ResultQueueTransferThread"));
            return _field.Get();
        }
        static void* GetThreadKillTimeout() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ThreadKillTimeout"));
            return _field.Get();
        }
        static void SetActiveCallCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_activeCallCount"));
            _field.Set(value);
        }
        static void SetIsApplicationPlaying(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isApplicationPlaying"));
            _field.Set(value);
        }
        void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRequestQueueThread(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_requestQueueThread"));
            _field.Set(value);
        }
        static void SetThreadKillTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_threadKillTime"));
            _field.Set(value);
        }
        static void SetUnityVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_unityVersion"));
            _field.Set(value);
        }
        static void SetCertValidationSet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("certValidationSet"));
            _field.Set(value);
        }
        template <typename TP0 = void*, typename TP3 = void*>
        static bool AcceptAllCertifications(TP0 sender, ::BNM::IL2CPP::Il2CppObject* certificate, ::BNM::IL2CPP::Il2CppObject* chain, TP3 sslPolicyErrors) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AcceptAllCertifications"), {"sender", "certificate", "chain", "sslPolicyErrors"});
            return _m.Call(sender, certificate, chain, sslPolicyErrors);
        }
        static void ActivateThreadWorker() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateThreadWorker"));
            _m.Call();
        }
        bool get_IsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPendingMessages() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPendingMessages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void MakeApiCall(TP0 reqContainerObj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MakeApiCall"), {"reqContainerObj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reqContainerObj);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Post(::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Post"), {"reqContainer"});
            _m.Call(reqContainer);
        }
        static void ProcessHttpResponse(::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessHttpResponse"), {"reqContainer"});
            _m.Call(reqContainer);
        }
        static void ProcessJsonResponse(::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessJsonResponse"), {"reqContainer"});
            _m.Call(reqContainer);
        }
        static void QueueRequestError(::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueRequestError"), {"reqContainer"});
            _m.Call(reqContainer);
        }
        static ::BNM::Structures::Mono::String* ResponseToString(::BNM::IL2CPP::Il2CppObject* webResponse) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ResponseToString"), {"webResponse"});
            return _m.Call(webResponse);
        }
        static void set_CustomCertValidationHook(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CustomCertValidationHook"), {"value"});
            _m.Call(value);
        }
        void SetupCertificates() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupCertificates"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SimpleGetCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimpleGetCall"), {"fullUrl", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fullUrl, successCallback, errorCallback);
        }
        void SimpleHttpsWorker(::BNM::Structures::Mono::String* httpMethod, ::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Array<uint8_t>* payload, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimpleHttpsWorker"), {"httpMethod", "fullUrl", "payload", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(httpMethod, fullUrl, payload, successCallback, errorCallback);
        }
        void SimplePostCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Array<uint8_t>* payload, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimplePostCall"), {"fullUrl", "payload", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fullUrl, payload, successCallback, errorCallback);
        }
        void SimplePutCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Array<uint8_t>* payload, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimplePutCall"), {"fullUrl", "payload", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fullUrl, payload, successCallback, errorCallback);
        }
        static void SkipCertificateValidation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SkipCertificateValidation"));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void WorkerThreadMainLoop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WorkerThreadMainLoop"));
            _m.Call();
        }
    };
}
