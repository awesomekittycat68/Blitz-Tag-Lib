#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipRequest : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsShared() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isShared"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsShared(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isShared"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t* GetPrincipal() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t*> _method = GetClass().GetMethod(O("get_principal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrincipal(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_principal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Types::nint GetUserData() {
            static BNM::Method<::BNM::Types::nint> _method = GetClass().GetMethod(O("get_userData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUserData(::BNM::Types::nint value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_userData"));
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
        bool get_isShared() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t* get_principal() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t*> _m = GetClass().GetMethod(O("get_principal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Types::nint get_userData() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("get_userData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::MothershipRequest* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        void ProcessResponse(::GlobalNamespace::MothershipHTTPResponse* response, ::GlobalNamespace::MothershipResponse* responseInstance, ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper* delegate_) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessResponse"), {"response", "responseInstance", "delegate_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, responseInstance, delegate_);
        }
        void set_isShared(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isShared"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_principal(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_principal"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_userData(::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_userData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::MothershipRequest* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() {
            static BNM::Method<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*> _m = GetClass().GetMethod(O("ToHttpRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
