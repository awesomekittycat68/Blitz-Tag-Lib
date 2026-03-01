#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipResponse.hpp"

namespace GlobalNamespace {
    struct GetSingleProgressionTreeBindingResponse : ::GlobalNamespace::MothershipResponse {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GetSingleProgressionTreeBindingResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionTreeBindingResponse* GetResults() {
            static BNM::Method<::GlobalNamespace::ProgressionTreeBindingResponse*> _method = GetClass().GetMethod(O("get_Results"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetResults(::GlobalNamespace::ProgressionTreeBindingResponse* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Results"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::String* GetResultsName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Results_name"));
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
        static ::GlobalNamespace::GetSingleProgressionTreeBindingResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse* response) {
            static BNM::Method<::GlobalNamespace::GetSingleProgressionTreeBindingResponse*> _m = GetClass().GetMethod(O("FromMothershipResponse"), {"response"});
            return _m.Call(response);
        }
        ::GlobalNamespace::ProgressionTreeBindingResponse* get_Results() {
            static BNM::Method<::GlobalNamespace::ProgressionTreeBindingResponse*> _m = GetClass().GetMethod(O("get_Results"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::GetSingleProgressionTreeBindingResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromResponseString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromResponseString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_Results(::GlobalNamespace::ProgressionTreeBindingResponse* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Results"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::GetSingleProgressionTreeBindingResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
