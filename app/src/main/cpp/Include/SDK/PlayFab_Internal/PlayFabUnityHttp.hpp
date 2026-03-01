#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    struct PlayFabUnityHttp : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabUnityHttp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsInitialized_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPendingWwwMessages() {
            static BNM::Field<int> _field = GetClass().GetField(O("_pendingWwwMessages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void OnError(::BNM::Structures::Mono::String* error, ::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnError"), {"error", "reqContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, reqContainer);
        }
        void OnResponse(::BNM::Structures::Mono::String* response, ::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnResponse"), {"response", "reqContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, reqContainer);
        }
        ::BNM::Coroutine::IEnumerator* Post(::PlayFab_Internal::CallRequestContainer* reqContainer) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Post"), {"reqContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reqContainer);
        }
        static ::BNM::Coroutine::IEnumerator* SimpleCallCoroutine(::BNM::Structures::Mono::String* method, ::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Array<uint8_t>* payload, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SimpleCallCoroutine"), {"method", "fullUrl", "payload", "successCallback", "errorCallback"});
            return _m.Call(method, fullUrl, payload, successCallback, errorCallback);
        }
        void SimpleGetCall(::BNM::Structures::Mono::String* fullUrl, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<uint8_t>*>* successCallback, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimpleGetCall"), {"fullUrl", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fullUrl, successCallback, errorCallback);
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
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
