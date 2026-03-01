#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipLogLevel.hpp"

namespace GlobalNamespace {
    struct MothershipApiClient : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApiClient");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetSwigCMemOwn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("swigCMemOwn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCMemOwn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("swigCMemOwn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::MothershipApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        void Log(::GlobalNamespace::MothershipLogLevel level, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"level", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(level, message);
        }
        void ReceiveHttpResponse(::GlobalNamespace::MothershipHTTPResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveHttpResponse"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void ReceiveWebsocketMessage(::GlobalNamespace::MothershipWebSocketResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveWebsocketMessage"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void SetHttpRequestDelegate(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper* inSendRequestDelegate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHttpRequestDelegate"), {"inSendRequestDelegate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inSendRequestDelegate);
        }
        void SetLogDelegate(::GlobalNamespace::MothershipLogDelegateWrapper* logDelegate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLogDelegate"), {"logDelegate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(logDelegate);
        }
        void SetWebSocketDelegate(::GlobalNamespace::MothershipWebSocketDelegateWrapper* inWebsocketDelegate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWebSocketDelegate"), {"inWebsocketDelegate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inWebsocketDelegate);
        }
        static void* swigRelease(::GlobalNamespace::MothershipApiClient* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        void TickRetryQueue(float deltaTimeInSeconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TickRetryQueue"), {"deltaTimeInSeconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTimeInSeconds);
        }
    };
}
