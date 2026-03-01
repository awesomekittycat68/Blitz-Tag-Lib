#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct OfferEntitlementChanges : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OfferEntitlementChanges");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::StringIntMap* GetPrice() {
            static BNM::Method<::GlobalNamespace::StringIntMap*> _method = GetClass().GetMethod(O("get_Price"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrice(::GlobalNamespace::StringIntMap* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Price"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetQuantityChange() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_QuantityChange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetQuantityChange(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_QuantityChange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::String* GetPriceName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Price_name"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetQuantitychangeName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Quantitychange_name"));
            return _field.Get();
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
        ::GlobalNamespace::StringIntMap* get_Price() {
            static BNM::Method<::GlobalNamespace::StringIntMap*> _m = GetClass().GetMethod(O("get_Price"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_QuantityChange() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_QuantityChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::OfferEntitlementChanges* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t* object_) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromJson"), {"object_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(object_);
        }
        void set_Price(::GlobalNamespace::StringIntMap* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Price"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_QuantityChange(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_QuantityChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::OfferEntitlementChanges* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value* offerEntitlementChangesObject, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document* body) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ToJson"), {"offerEntitlementChangesObject", "body"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(offerEntitlementChangesObject, body);
        }
    };
}
