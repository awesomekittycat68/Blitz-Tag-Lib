#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipWebSocketDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct MothershipWebSocketWrapper : ::GlobalNamespace::MothershipWebSocketDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWebSocketWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipClientApiClient* GetClient() {
            static BNM::Field<::GlobalNamespace::MothershipClientApiClient*> _field = GetClass().GetField(O("_client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MothershipWebSocketRetryQueue* GetRetryQueue() {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketRetryQueue*> _field = GetClass().GetField(O("_retryQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::ActiveWebSocket*>* GetWebsockets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ActiveWebSocket*>*> _field = GetClass().GetField(O("_websockets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool CloseConnection(::GlobalNamespace::MothershipCloseWebSocketEventArgs* request) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CloseConnection"), {"request"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request);
        }
        void CloseConnections() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseConnections"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* CloseConnectionsAsync() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CloseConnectionsAsync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CreateConnection(::GlobalNamespace::MothershipOpenWebSocketEventArgs* request) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CreateConnection"), {"request"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request);
        }
        void RefreshClientTokenHeaders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshClientTokenHeaders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TickWebSockets(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TickWebSockets"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
    };
}
