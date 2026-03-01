#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipWebSocketRetryQueue : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWebSocketRetryQueue");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MAX_RETRY_SECONDS = 120.0f;
        static constexpr float INITIAL_RETRY_SECONDS = 5.0f;
        ::BNM::Structures::Mono::List<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>* GetWebsockets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*>*> _field = GetClass().GetField(O("_websockets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void AddSocket(::GlobalNamespace::ActiveWebSocket* socket) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSocket"), {"socket"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(socket);
        }
        void ClearSockets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSockets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket* GetRetryingSocket(::GlobalNamespace::ActiveWebSocket* socket) {
            static BNM::Method<::GlobalNamespace::MothershipWebSocketRetryQueue_RetryingWebSocket*> _m = GetClass().GetMethod(O("GetRetryingSocket"), {"socket"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(socket);
        }
        void RemoveSocket(::GlobalNamespace::ActiveWebSocket* socket) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSocket"), {"socket"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(socket);
        }
        void ResetSocket(::GlobalNamespace::ActiveWebSocket* socket) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSocket"), {"socket"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(socket);
        }
        void RetrySocket(::GlobalNamespace::ActiveWebSocket* socket) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RetrySocket"), {"socket"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(socket);
        }
        void Tick(float deltaSeconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"), {"deltaSeconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaSeconds);
        }
    };
}
