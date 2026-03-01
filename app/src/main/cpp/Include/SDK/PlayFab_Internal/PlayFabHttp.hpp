#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ApiProcessingEventType.hpp"
#include "AuthType.hpp"
#include "SingletonMonoBehaviour$1.hpp"

namespace PlayFab_Internal {
    struct PlayFabHttp : ::PlayFab_Internal::SingletonMonoBehaviour$1<::PlayFab_Internal::PlayFabHttp*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabHttp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float delayBetweenBatches = 5.0f;
        void add_ApiProcessingErrorEventHandler(::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ApiProcessingErrorEventHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ApiProcessingErrorEventHandler(::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ApiProcessingErrorEventHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::BNM::Structures::Mono::List<::PlayFab_Internal::CallRequestContainer*>* GetApiCallQueue() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_Internal::CallRequestContainer*>*> _field = GetClass().GetField(O("_apiCallQueue"));
            return _field.Get();
        }
        void* GetInjectedAction() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_injectedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInjectedCoroutines() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_injectedCoroutines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetLogger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_logger"));
            return _field.Get();
        }
        static ::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent* GetApiProcessingErrorEventHandler() {
            static BNM::Field<::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent*> _field = GetClass().GetField(O("ApiProcessingErrorEventHandler"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetGlobalHeaderInjection() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("GlobalHeaderInjection"));
            return _field.Get();
        }
        static void* GetScreenTimeTracker() {
            static BNM::Field<void*> _field = GetClass().GetField(O("screenTimeTracker"));
            return _field.Get();
        }
        static void SetApiCallQueue(::BNM::Structures::Mono::List<::PlayFab_Internal::CallRequestContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_Internal::CallRequestContainer*>*> _field = GetClass().GetField(O("_apiCallQueue"));
            _field.Set(value);
        }
        static void SetLogger(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_logger"));
            _field.Set(value);
        }
        static void SetApiProcessingErrorEventHandler(::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent* value) {
            static BNM::Field<::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent*> _field = GetClass().GetField(O("ApiProcessingErrorEventHandler"));
            _field.Set(value);
        }
        static void SetScreenTimeTracker(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("screenTimeTracker"));
            _field.Set(value);
        }
        template <typename TResult, typename TP6 = void*, typename TP11 = void*>
        static void _MakeApiCall(::BNM::Structures::Mono::String* apiEndpoint, ::BNM::Structures::Mono::String* fullUrl, ::PlayFab_SharedModels::PlayFabRequestCommon* request, ::PlayFab_Internal::AuthType authType, ::BNM::Structures::Mono::Action<TResult>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP6 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders, bool allowQueueing, ::PlayFab::PlayFabAuthenticationContext* authenticationContext, ::PlayFab::PlayFabApiSettings* apiSettings, TP11 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_MakeApiCall"), {"apiEndpoint", "fullUrl", "request", "authType", "resultCallback", "errorCallback", "customData", "extraHeaders", "allowQueueing", "authenticationContext", "apiSettings", "instanceApi"});
            _m.Call(apiEndpoint, fullUrl, request, authType, resultCallback, errorCallback, customData, extraHeaders, allowQueueing, authenticationContext, apiSettings, instanceApi);
        }
        static void add_ApiProcessingErrorEventHandler_1(::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ApiProcessingErrorEventHandler"), {"value"});
            _m.Call(value);
        }
        static void ClearAllEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllEvents"));
            _m.Call();
        }
        template <typename TP2 = void*>
        static ::PlayFab::PlayFabError* GeneratePlayFabError(::BNM::Structures::Mono::String* apiEndpoint, ::BNM::Structures::Mono::String* json, TP2 customData) {
            static BNM::Method<::PlayFab::PlayFabError*> _m = GetClass().GetMethod(O("GeneratePlayFabError"), {"apiEndpoint", "json", "customData"});
            return _m.Call(apiEndpoint, json, customData);
        }
        static int GetPendingMessages() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPendingMessages"));
            return _m.Call();
        }
        static void InitializeHttp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeHttp"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void InitializeLogger(TP0 setLogger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeLogger"), {"setLogger"});
            _m.Call(setLogger);
        }
        static void InitializeScreenTimeTracker(::BNM::Structures::Mono::String* entityId, ::BNM::Structures::Mono::String* entityType, ::BNM::Structures::Mono::String* playFabUserId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeScreenTimeTracker"), {"entityId", "entityType", "playFabUserId"});
            _m.Call(entityId, entityType, playFabUserId);
        }
        void InjectInUnityThread(::BNM::Coroutine::IEnumerator* x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectInUnityThread"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(x);
        }
        void InjectInUnityThread(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectInUnityThread"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        template <typename TResult, typename TP5 = void*, typename TP9 = void*>
        static void MakeApiCall(::BNM::Structures::Mono::String* apiEndpoint, ::PlayFab_SharedModels::PlayFabRequestCommon* request, ::PlayFab_Internal::AuthType authType, ::BNM::Structures::Mono::Action<TResult>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP5 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders, ::PlayFab::PlayFabAuthenticationContext* authenticationContext, ::PlayFab::PlayFabApiSettings* apiSettings, TP9 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MakeApiCall"), {"apiEndpoint", "request", "authType", "resultCallback", "errorCallback", "customData", "extraHeaders", "authenticationContext", "apiSettings", "instanceApi"});
            _m.Call(apiEndpoint, request, authType, resultCallback, errorCallback, customData, extraHeaders, authenticationContext, apiSettings, instanceApi);
        }
        template <typename TResult, typename TP5 = void*, typename TP9 = void*>
        static void MakeApiCallWithFullUri(::BNM::Structures::Mono::String* fullUri, ::PlayFab_SharedModels::PlayFabRequestCommon* request, ::PlayFab_Internal::AuthType authType, ::BNM::Structures::Mono::Action<TResult>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP5 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders, ::PlayFab::PlayFabAuthenticationContext* authenticationContext, ::PlayFab::PlayFabApiSettings* apiSettings, TP9 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MakeApiCallWithFullUri"), {"fullUri", "request", "authType", "resultCallback", "errorCallback", "customData", "extraHeaders", "authenticationContext", "apiSettings", "instanceApi"});
            _m.Call(fullUri, request, authType, resultCallback, errorCallback, customData, extraHeaders, authenticationContext, apiSettings, instanceApi);
        }
        void OnApplicationFocus(bool isFocused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationFocus"), {"isFocused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isFocused);
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnPlayFabApiResult(::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabApiResult"), {"reqContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reqContainer);
        }
        static void remove_ApiProcessingErrorEventHandler_1(::PlayFab_Internal::PlayFabHttp_ApiProcessErrorEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ApiProcessingErrorEventHandler"), {"value"});
            _m.Call(value);
        }
        static void SendErrorEvent(::PlayFab_SharedModels::PlayFabRequestCommon* request, ::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendErrorEvent"), {"request", "error"});
            _m.Call(request, error);
        }
        static void SendEvent(::BNM::Structures::Mono::String* apiEndpoint, ::PlayFab_SharedModels::PlayFabRequestCommon* request, ::PlayFab_SharedModels::PlayFabResultCommon* result, ::PlayFab_Internal::ApiProcessingEventType eventType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendEvent"), {"apiEndpoint", "request", "result", "eventType"});
            _m.Call(apiEndpoint, request, result, eventType);
        }
        static ::BNM::Coroutine::IEnumerator* SendScreenTimeEvents(float secondsBetweenBatches) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendScreenTimeEvents"), {"secondsBetweenBatches"});
            return _m.Call(secondsBetweenBatches);
        }
        static void SimpleGetCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimpleGetCall"), {"fullUrl", "successCallback", "errorCallback"});
            _m.Call(fullUrl, successCallback, errorCallback);
        }
        static void SimplePostCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Array<uint8_t>* payload, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimplePostCall"), {"fullUrl", "payload", "successCallback", "errorCallback"});
            _m.Call(fullUrl, payload, successCallback, errorCallback);
        }
        static void SimplePutCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Array<uint8_t>* payload, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimplePutCall"), {"fullUrl", "payload", "successCallback", "errorCallback"});
            _m.Call(fullUrl, payload, successCallback, errorCallback);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
