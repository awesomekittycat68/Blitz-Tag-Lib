#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipRequest.hpp"

namespace GlobalNamespace {
    struct BulkGetSubscriptionsRequest : ::GlobalNamespace::MothershipRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BulkGetSubscriptionsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::StringVector* GetCatalogIds() {
            static BNM::Method<::GlobalNamespace::StringVector*> _method = GetClass().GetMethod(O("get_CatalogIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCatalogIds(::GlobalNamespace::StringVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CatalogIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::PlatformAndSkuVector* GetPlatformSkus() {
            static BNM::Method<::GlobalNamespace::PlatformAndSkuVector*> _method = GetClass().GetMethod(O("get_PlatformSkus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlatformSkus(::GlobalNamespace::PlatformAndSkuVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlatformSkus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::StringVector* GetPlayerIds() {
            static BNM::Method<::GlobalNamespace::StringVector*> _method = GetClass().GetMethod(O("get_PlayerIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerIds(::GlobalNamespace::StringVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        ::GlobalNamespace::StringVector* get_CatalogIds() {
            static BNM::Method<::GlobalNamespace::StringVector*> _m = GetClass().GetMethod(O("get_CatalogIds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::PlatformAndSkuVector* get_PlatformSkus() {
            static BNM::Method<::GlobalNamespace::PlatformAndSkuVector*> _m = GetClass().GetMethod(O("get_PlatformSkus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::StringVector* get_PlayerIds() {
            static BNM::Method<::GlobalNamespace::StringVector*> _m = GetClass().GetMethod(O("get_PlayerIds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::BulkGetSubscriptionsRequest* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        void set_CatalogIds(::GlobalNamespace::StringVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CatalogIds"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlatformSkus(::GlobalNamespace::PlatformAndSkuVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlatformSkus"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayerIds(::GlobalNamespace::StringVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerIds"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::BulkGetSubscriptionsRequest* obj) {
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
