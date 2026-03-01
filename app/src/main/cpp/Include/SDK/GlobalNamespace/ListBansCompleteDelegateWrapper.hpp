#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipRequestCompleteDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct ListBansCompleteDelegateWrapper : ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ListBansCompleteDelegateWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ListBansCompleteDelegateWrapper* GetSelfInstance() {
            static BNM::Field<::GlobalNamespace::ListBansCompleteDelegateWrapper*> _field = GetClass().GetField(O("selfInstance"));
            return _field.Get();
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ListBansCompleteDelegateWrapper_SwigDelegateListBansCompleteDelegateWrapper_0* GetSwigDelegate0() {
            static BNM::Field<::GlobalNamespace::ListBansCompleteDelegateWrapper_SwigDelegateListBansCompleteDelegateWrapper_0*> _field = GetClass().GetField(O("swigDelegate0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetSwigMethodTypes0() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes0"));
            return _field.Get();
        }
        static void SetSelfInstance(::GlobalNamespace::ListBansCompleteDelegateWrapper* value) {
            static BNM::Field<::GlobalNamespace::ListBansCompleteDelegateWrapper*> _field = GetClass().GetField(O("selfInstance"));
            _field.Set(value);
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigDelegate0(::GlobalNamespace::ListBansCompleteDelegateWrapper_SwigDelegateListBansCompleteDelegateWrapper_0* value) {
            static BNM::Field<::GlobalNamespace::ListBansCompleteDelegateWrapper_SwigDelegateListBansCompleteDelegateWrapper_0*> _field = GetClass().GetField(O("swigDelegate0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSwigMethodTypes0(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes0"));
            _field.Set(value);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        static void* getCPtr(::GlobalNamespace::ListBansCompleteDelegateWrapper* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool SwigDerivedClassHasMethod(::BNM::Structures::Mono::String* methodName, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* methodTypes) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SwigDerivedClassHasMethod"), {"methodName", "methodTypes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(methodName, methodTypes);
        }
        void SwigDirectorConnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorConnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void SwigDirectorMethodOnCompleteCallback(::BNM::Types::nint response, bool wasSuccess, ::BNM::Types::nint error, ::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorMethodOnCompleteCallback"), {"response", "wasSuccess", "error", "userData"});
            _m.Call(response, wasSuccess, error, userData);
        }
        static void* swigRelease(::GlobalNamespace::ListBansCompleteDelegateWrapper* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
