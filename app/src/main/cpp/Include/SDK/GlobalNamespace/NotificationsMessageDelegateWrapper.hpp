#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipWebSocketMessageDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct NotificationsMessageDelegateWrapper : ::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NotificationsMessageDelegateWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::NotificationsMessageDelegateWrapper* GetSelfInstance() {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper*> _field = GetClass().GetField(O("selfInstance"));
            return _field.Get();
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0* GetSwigDelegate0() {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*> _field = GetClass().GetField(O("swigDelegate0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1* GetSwigDelegate1() {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*> _field = GetClass().GetField(O("swigDelegate1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2* GetSwigDelegate2() {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*> _field = GetClass().GetField(O("swigDelegate2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3* GetSwigDelegate3() {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*> _field = GetClass().GetField(O("swigDelegate3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetSwigMethodTypes0() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes0"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetSwigMethodTypes1() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes1"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetSwigMethodTypes2() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes2"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetSwigMethodTypes3() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes3"));
            return _field.Get();
        }
        static void SetSelfInstance(::GlobalNamespace::NotificationsMessageDelegateWrapper* value) {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper*> _field = GetClass().GetField(O("selfInstance"));
            _field.Set(value);
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigDelegate0(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0* value) {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*> _field = GetClass().GetField(O("swigDelegate0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigDelegate1(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1* value) {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*> _field = GetClass().GetField(O("swigDelegate1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigDelegate2(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2* value) {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*> _field = GetClass().GetField(O("swigDelegate2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigDelegate3(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3* value) {
            static BNM::Field<::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*> _field = GetClass().GetField(O("swigDelegate3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSwigMethodTypes0(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes0"));
            _field.Set(value);
        }
        static void SetSwigMethodTypes1(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes1"));
            _field.Set(value);
        }
        static void SetSwigMethodTypes2(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes2"));
            _field.Set(value);
        }
        static void SetSwigMethodTypes3(::BNM::Structures::Mono::Array<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("swigMethodTypes3"));
            _field.Set(value);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        static void* getCPtr(::GlobalNamespace::NotificationsMessageDelegateWrapper* obj) {
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
        static void SwigDirectorMethodOnCloseCallback(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorMethodOnCloseCallback"), {"userData"});
            _m.Call(userData);
        }
        static void SwigDirectorMethodOnErrorCallback(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorMethodOnErrorCallback"), {"userData"});
            _m.Call(userData);
        }
        static void SwigDirectorMethodOnMessageCallback(::BNM::Types::nint message, ::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorMethodOnMessageCallback"), {"message", "userData"});
            _m.Call(message, userData);
        }
        static void SwigDirectorMethodOnOpenCallback(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwigDirectorMethodOnOpenCallback"), {"userData"});
            _m.Call(userData);
        }
        static void* swigRelease(::GlobalNamespace::NotificationsMessageDelegateWrapper* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
