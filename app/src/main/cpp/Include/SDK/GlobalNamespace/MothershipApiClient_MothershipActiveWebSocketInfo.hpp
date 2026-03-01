#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipApiClient_WebSocketStatus.hpp"

namespace GlobalNamespace {
    struct MothershipApiClient_MothershipActiveWebSocketInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApiClient").GetInnerClass("MothershipActiveWebSocketInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* GetCallbackWrapper() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*> _method = GetClass().GetMethod(O("get_CallbackWrapper"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCallbackWrapper(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CallbackWrapper"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* GetInitialRequest() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*> _method = GetClass().GetMethod(O("get_InitialRequest"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InitialRequest"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::MothershipApiClient_WebSocketStatus GetStatus() {
            static BNM::Method<::GlobalNamespace::MothershipApiClient_WebSocketStatus> _method = GetClass().GetMethod(O("get_Status"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStatus(::GlobalNamespace::MothershipApiClient_WebSocketStatus value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Status"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
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
        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* get_CallbackWrapper() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*> _m = GetClass().GetMethod(O("get_CallbackWrapper"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* get_InitialRequest() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*> _m = GetClass().GetMethod(O("get_InitialRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MothershipApiClient_WebSocketStatus get_Status() {
            static BNM::Method<::GlobalNamespace::MothershipApiClient_WebSocketStatus> _m = GetClass().GetMethod(O("get_Status"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        void set_CallbackWrapper(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CallbackWrapper"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_InitialRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InitialRequest"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Status(::GlobalNamespace::MothershipApiClient_WebSocketStatus value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Status"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
