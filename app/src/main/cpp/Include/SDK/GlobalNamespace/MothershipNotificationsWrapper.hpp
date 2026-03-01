#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NotificationsMessageDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct MothershipNotificationsWrapper : ::GlobalNamespace::NotificationsMessageDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipNotificationsWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::BNM::Types::nint>* GetOnClose() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("_onClose"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Types::nint>* GetOnError() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("_onError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>* GetOnMessage() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NotificationsMessageResponse*, ::BNM::Types::nint>*> _field = GetClass().GetField(O("_onMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Types::nint>* GetOnOpen() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Types::nint>*> _field = GetClass().GetField(O("_onOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetState() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetState(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_SocketState() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_SocketState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCloseCallback(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCloseCallback"), {"userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userData);
        }
        void OnErrorCallback(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnErrorCallback"), {"userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userData);
        }
        void OnMessageCallback(::GlobalNamespace::MothershipWebSocketMessage* message, ::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMessageCallback"), {"message", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message, userData);
        }
        void OnOpenCallback(::BNM::Types::nint userData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOpenCallback"), {"userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userData);
        }
    };
}
