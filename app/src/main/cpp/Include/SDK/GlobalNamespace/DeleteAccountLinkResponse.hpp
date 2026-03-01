#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipResponse.hpp"

namespace GlobalNamespace {
    struct DeleteAccountLinkResponse : ::GlobalNamespace::MothershipResponse {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DeleteAccountLinkResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::AccountLinksVector* GetLinks() {
            static BNM::Method<::GlobalNamespace::AccountLinksVector*> _method = GetClass().GetMethod(O("get_Links"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLinks(::GlobalNamespace::AccountLinksVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Links"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::String* GetLinksName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("links_name"));
            return _field.Get();
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        static ::GlobalNamespace::DeleteAccountLinkResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse* response) {
            static BNM::Method<::GlobalNamespace::DeleteAccountLinkResponse*> _m = GetClass().GetMethod(O("FromMothershipResponse"), {"response"});
            return _m.Call(response);
        }
        ::GlobalNamespace::AccountLinksVector* get_Links() {
            static BNM::Method<::GlobalNamespace::AccountLinksVector*> _m = GetClass().GetMethod(O("get_Links"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::DeleteAccountLinkResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromResponseString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromResponseString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_Links(::GlobalNamespace::AccountLinksVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Links"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::DeleteAccountLinkResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
