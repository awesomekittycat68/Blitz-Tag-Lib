#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipResponse.hpp"

namespace GlobalNamespace {
    struct CreateEntitlementCatalogItemResponse : ::GlobalNamespace::MothershipResponse {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CreateEntitlementCatalogItemResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipEntitlementCatalogItem* GetCatalogItem() {
            static BNM::Method<::GlobalNamespace::MothershipEntitlementCatalogItem*> _method = GetClass().GetMethod(O("get_catalogItem"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCatalogItem(::GlobalNamespace::MothershipEntitlementCatalogItem* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_catalogItem"));
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
        static ::GlobalNamespace::CreateEntitlementCatalogItemResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse* response) {
            static BNM::Method<::GlobalNamespace::CreateEntitlementCatalogItemResponse*> _m = GetClass().GetMethod(O("FromMothershipResponse"), {"response"});
            return _m.Call(response);
        }
        ::GlobalNamespace::MothershipEntitlementCatalogItem* get_catalogItem() {
            static BNM::Method<::GlobalNamespace::MothershipEntitlementCatalogItem*> _m = GetClass().GetMethod(O("get_catalogItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::CreateEntitlementCatalogItemResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromResponseString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromResponseString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_catalogItem(::GlobalNamespace::MothershipEntitlementCatalogItem* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_catalogItem"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::CreateEntitlementCatalogItemResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
