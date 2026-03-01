#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RequestableOwnershipGaurdHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RequestableOwnershipGaurdHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::RequestableOwnershipGaurdHandler* GetCallbackInstance() {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGaurdHandler*> _field = GetClass().GetField(O("callbackInstance"));
            return _field.Get();
        }
        static void* GetGaurdedViews() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gaurdedViews"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkView*, ::GlobalNamespace::RequestableOwnershipGuard*>* GetGuardingLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkView*, ::GlobalNamespace::RequestableOwnershipGuard*>*> _field = GetClass().GetField(O("guardingLookup"));
            return _field.Get();
        }
        static void SetGaurdedViews(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gaurdedViews"));
            _field.Set(value);
        }
        static void SetGuardingLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkView*, ::GlobalNamespace::RequestableOwnershipGuard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkView*, ::GlobalNamespace::RequestableOwnershipGuard*>*> _field = GetClass().GetField(O("guardingLookup"));
            _field.Set(value);
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
        template <typename TP1 = void*>
        void OnDisconnectedFromServer(::BNM::IL2CPP::Il2CppObject* runner, TP1 reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectedFromServer"), {"runner", "reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, reason);
        }
        void OnHostChangedShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHostChangedShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnPlayerEnteredRoom(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
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
        void OnPlayerLeftRoom(::Photon_Realtime::Player* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnPlayerPropertiesUpdate(::Photon_Realtime::Player* targetPlayer, ::ExitGames_Client_Photon::Hashtable* changedProps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerPropertiesUpdate"), {"targetPlayer", "changedProps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer, changedProps);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void OnReliableDataProgress(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataProgress"), {"runner", "player", "key", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, progress);
        }
        template <typename TP1 = void*, typename TP2 = void*, typename TP3 = void*>
        void OnReliableDataReceived(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, TP3 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataReceived"), {"runner", "player", "key", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, data);
        }
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
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
        static void RegisterView(::GlobalNamespace::NetworkView* view, ::GlobalNamespace::RequestableOwnershipGuard* guard) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterView"), {"view", "guard"});
            _m.Call(view, guard);
        }
        static void RegisterViews(::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkView*>* views, ::GlobalNamespace::RequestableOwnershipGuard* guard) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterViews"), {"views", "guard"});
            _m.Call(views, guard);
        }
        static void RemoveView(::GlobalNamespace::NetworkView* view) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveView"), {"view"});
            _m.Call(view);
        }
        static void RemoveViews(::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkView*>* views, ::GlobalNamespace::RequestableOwnershipGuard* guard) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveViews"), {"views", "guard"});
            _m.Call(views, guard);
        }
    };
}
