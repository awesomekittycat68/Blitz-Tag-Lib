#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FusionCallbackHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FusionCallbackHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::NetworkSystemFusion* GetParent() {
            static BNM::Field<::GlobalNamespace::NetworkSystemFusion*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetParent(::GlobalNamespace::NetworkSystemFusion* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystemFusion*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP2 = void*>
        static bool CanRecieveEvent(::BNM::IL2CPP::Il2CppObject* runner, ::GlobalNamespace::NetEventOptions* opts, TP2 info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanRecieveEvent"), {"runner", "opts", "info"});
            return _m.Call(runner, opts, info);
        }
        void OnConnectedToServer(::BNM::IL2CPP::Il2CppObject* runner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectedToServer"), {"runner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void OnConnectFailed(::BNM::IL2CPP::Il2CppObject* runner, TP1 remoteAddress, TP2 reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectFailed"), {"runner", "remoteAddress", "reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, remoteAddress, reason);
        }
        void OnConnectRequest(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* request, ::BNM::Structures::Mono::Array<uint8_t>* token) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectRequest"), {"runner", "request", "token"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, request, token);
        }
        void OnCustomAuthenticationResponse(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomAuthenticationResponse"), {"runner", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, data);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnectedFromServer(::BNM::IL2CPP::Il2CppObject* runner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectedFromServer"), {"runner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner);
        }
        template <typename TP1 = void*>
        void OnDisconnectedFromServer(::BNM::IL2CPP::Il2CppObject* runner, TP1 reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectedFromServer"), {"runner", "reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, reason);
        }
        void OnHostMigration(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* hostMigrationToken) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHostMigration"), {"runner", "hostMigrationToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, hostMigrationToken);
        }
        template <typename TP1 = void*>
        void OnInput(::BNM::IL2CPP::Il2CppObject* runner, TP1 input) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInput"), {"runner", "input"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, input);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void OnInputMissing(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 input) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInputMissing"), {"runner", "player", "input"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, input);
        }
        template <typename TP2 = void*>
        void OnObjectEnterAOI(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* obj, TP2 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectEnterAOI"), {"runner", "obj", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, obj, player);
        }
        template <typename TP2 = void*>
        void OnObjectExitAOI(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* obj, TP2 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectExitAOI"), {"runner", "obj", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, obj, player);
        }
        template <typename TP1 = void*>
        void OnPlayerJoined(::BNM::IL2CPP::Il2CppObject* runner, TP1 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoined"), {"runner", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player);
        }
        template <typename TP1 = void*>
        void OnPlayerLeft(::BNM::IL2CPP::Il2CppObject* runner, TP1 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeft"), {"runner", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void OnReliableDataProgress(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataProgress"), {"runner", "player", "key", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, progress);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void OnReliableDataReceived(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataReceived"), {"runner", "player", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, data);
        }
        template <typename TP1 = void*, typename TP2 = void*, typename TP3 = void*>
        void OnReliableDataReceived(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, TP3 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataReceived"), {"runner", "player", "key", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, data);
        }
        void OnSceneLoadDone(::BNM::IL2CPP::Il2CppObject* runner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneLoadDone"), {"runner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner);
        }
        void OnSceneLoadStart(::BNM::IL2CPP::Il2CppObject* runner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneLoadStart"), {"runner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner);
        }
        void OnSessionListUpdated(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* sessionList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSessionListUpdated"), {"runner", "sessionList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, sessionList);
        }
        template <typename TP1 = void*>
        void OnShutdown(::BNM::IL2CPP::Il2CppObject* runner, TP1 shutdownReason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShutdown"), {"runner", "shutdownReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, shutdownReason);
        }
        template <typename TP1 = void*>
        void OnUserSimulationMessage(::BNM::IL2CPP::Il2CppObject* runner, TP1 message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUserSimulationMessage"), {"runner", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, message);
        }
        void RemoveCallbacks() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbacks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP5 = void*>
        static void RPC_OnEventRaisedReliable(::BNM::IL2CPP::Il2CppObject* runner, uint8_t eventCode, ::BNM::Structures::Mono::Array<uint8_t>* byteData, bool hasOps, ::BNM::Structures::Mono::Array<uint8_t>* netOptsData, TP5 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_OnEventRaisedReliable"), {"runner", "eventCode", "byteData", "hasOps", "netOptsData", "info"});
            _m.Call(runner, eventCode, byteData, hasOps, netOptsData, info);
        }
        static void RPC_OnEventRaisedReliable$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_OnEventRaisedReliable@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP5 = void*>
        static void RPC_OnEventRaisedUnreliable(::BNM::IL2CPP::Il2CppObject* runner, uint8_t eventCode, ::BNM::Structures::Mono::Array<uint8_t>* byteData, bool hasOps, ::BNM::Structures::Mono::Array<uint8_t>* netOptsData, TP5 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_OnEventRaisedUnreliable"), {"runner", "eventCode", "byteData", "hasOps", "netOptsData", "info"});
            _m.Call(runner, eventCode, byteData, hasOps, netOptsData, info);
        }
        static void RPC_OnEventRaisedUnreliable$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_OnEventRaisedUnreliable@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        void Setup(::GlobalNamespace::NetworkSystemFusion* parentController) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"parentController"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parentController);
        }
    };
}
