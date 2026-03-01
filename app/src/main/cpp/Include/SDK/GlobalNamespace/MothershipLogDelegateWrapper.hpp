#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipLogLevel.hpp"

namespace GlobalNamespace {
    struct MothershipLogDelegateWrapper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipLogDelegateWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MothershipLogDelegateWrapper* GetSelfInstance() {
            static BNM::Field<::GlobalNamespace::MothershipLogDelegateWrapper*> _field = GetClass().GetField(O("selfInstance"));
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
        ::GlobalNamespace::MothershipLogDelegateWrapper_SwigDelegateMothershipLogDelegateWrapper_0* GetSwigDelegate0() {
            static BNM::Field<::GlobalNamespace::MothershipLogDelegateWrapper_SwigDelegateMothershipLogDelegateWrapper_0*> _field = GetClass().GetField(O("swigDelegate0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetSwigMethodTypes0() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes0"));
            return _field.Get();
        }
        static void SetSelfInstance(::GlobalNamespace::MothershipLogDelegateWrapper* value) {
            static BNM::Field<::GlobalNamespace::MothershipLogDelegateWrapper*> _field = GetClass().GetField(O("selfInstance"));
            _field.Set(value);
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
        void SetSwigDelegate0(::GlobalNamespace::MothershipLogDelegateWrapper_SwigDelegateMothershipLogDelegateWrapper_0* value) {
            static BNM::Field<::GlobalNamespace::MothershipLogDelegateWrapper_SwigDelegateMothershipLogDelegateWrapper_0*> _field = GetClass().GetField(O("swigDelegate0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSwigMethodTypes0(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes0"));
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
        static void* getCPtr(::GlobalNamespace::MothershipLogDelegateWrapper* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        void OnLogCallback(::GlobalNamespace::MothershipLogLevel level, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLogCallback"), {"level", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(level, message);
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
        static void SwigDirectorMethodOnLogCallback(int level, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorMethodOnLogCallback"), {"level", "message"});
            _m.Call(level, message);
        }
        static void* swigRelease(::GlobalNamespace::MothershipLogDelegateWrapper* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
