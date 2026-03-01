#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HttpRequestState.hpp"

namespace PlayFab_Internal {
    struct CallRequestContainer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "CallRequestContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetApiEndpoint() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ApiEndpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_SharedModels::PlayFabRequestCommon* GetApiRequest() {
            static BNM::Field<::PlayFab_SharedModels::PlayFabRequestCommon*> _field = GetClass().GetField(O("ApiRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_SharedModels::PlayFabResultCommon* GetApiResult() {
            static BNM::Field<::PlayFab_SharedModels::PlayFabResultCommon*> _field = GetClass().GetField(O("ApiResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabAuthenticationContext* GetContext() {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCustomData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CustomData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetDeserializeResultJson() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("DeserializeResultJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabError* GetError() {
            static BNM::Field<::PlayFab::PlayFabError*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* GetErrorCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>*> _field = GetClass().GetField(O("ErrorCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFullUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FullUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHttpRequest() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("HttpRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_Internal::HttpRequestState GetHttpState() {
            static BNM::Field<::PlayFab_Internal::HttpRequestState> _field = GetClass().GetField(O("HttpState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInstanceApi() {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceApi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetInvokeSuccessCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("InvokeSuccessCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetJsonResponse() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("JsonResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetPayload() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("Payload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetRequestHeaders() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("RequestHeaders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabApiSettings* GetSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApiEndpoint(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ApiEndpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApiRequest(::PlayFab_SharedModels::PlayFabRequestCommon* value) {
            static BNM::Field<::PlayFab_SharedModels::PlayFabRequestCommon*> _field = GetClass().GetField(O("ApiRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApiResult(::PlayFab_SharedModels::PlayFabResultCommon* value) {
            static BNM::Field<::PlayFab_SharedModels::PlayFabResultCommon*> _field = GetClass().GetField(O("ApiResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContext(::PlayFab::PlayFabAuthenticationContext* value) {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CustomData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeserializeResultJson(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("DeserializeResultJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetError(::PlayFab::PlayFabError* value) {
            static BNM::Field<::PlayFab::PlayFabError*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorCallback(::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>*> _field = GetClass().GetField(O("ErrorCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FullUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHttpRequest(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("HttpRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHttpState(::PlayFab_Internal::HttpRequestState value) {
            static BNM::Field<::PlayFab_Internal::HttpRequestState> _field = GetClass().GetField(O("HttpState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceApi(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceApi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvokeSuccessCallback(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("InvokeSuccessCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJsonResponse(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("JsonResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPayload(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("Payload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestHeaders(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("RequestHeaders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::PlayFab::PlayFabApiSettings* value) {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
