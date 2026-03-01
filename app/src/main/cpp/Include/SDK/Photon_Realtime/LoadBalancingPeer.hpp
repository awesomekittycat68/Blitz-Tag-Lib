#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/ConnectionProtocol.hpp"
#include "../ExitGames_Client_Photon/PhotonPeer.hpp"
#include "../ExitGames_Client_Photon/SendOptions.hpp"
#include "EncryptionMode.hpp"

namespace Photon_Realtime {
    struct LoadBalancingPeer : ::ExitGames_Client_Photon::PhotonPeer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "LoadBalancingPeer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::MonoType* GetPingImplementation() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_PingImplementation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPingImplementation(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PingImplementation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::EnterRoomParams* GetEnterRoomParams() {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("enterRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnterRoomParams(::Photon_Realtime::EnterRoomParams* value) {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("enterRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ConfigUnitySockets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfigUnitySockets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::MonoType* get_PingImplementation() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_PingImplementation"));
            return _m.Call();
        }
        bool OpAuthenticate(::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* appVersion, ::Photon_Realtime::AuthenticationValues* authValues, ::BNM::Structures::Mono::String* regionCode, bool getLobbyStatistics) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpAuthenticate"), {"appId", "appVersion", "authValues", "regionCode", "getLobbyStatistics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(appId, appVersion, authValues, regionCode, getLobbyStatistics);
        }
        bool OpAuthenticateOnce(::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* appVersion, ::Photon_Realtime::AuthenticationValues* authValues, ::BNM::Structures::Mono::String* regionCode, ::Photon_Realtime::EncryptionMode encryptionMode, ::ExitGames_Client_Photon::ConnectionProtocol expectedProtocol) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpAuthenticateOnce"), {"appId", "appVersion", "authValues", "regionCode", "encryptionMode", "expectedProtocol"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(appId, appVersion, authValues, regionCode, encryptionMode, expectedProtocol);
        }
        bool OpChangeGroups(::BNM::Structures::Mono::Array<uint8_t>* groupsToRemove, ::BNM::Structures::Mono::Array<uint8_t>* groupsToAdd) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpChangeGroups"), {"groupsToRemove", "groupsToAdd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(groupsToRemove, groupsToAdd);
        }
        bool OpCreateRoom(::Photon_Realtime::EnterRoomParams* opParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpCreateRoom"), {"opParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opParams);
        }
        bool OpFindFriends(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* friendsToFind, ::Photon_Realtime::FindFriendsOptions* options) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpFindFriends"), {"friendsToFind", "options"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(friendsToFind, options);
        }
        bool OpGetGameList(::Photon_Realtime::TypedLobby* lobby, ::BNM::Structures::Mono::String* queryData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpGetGameList"), {"lobby", "queryData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lobby, queryData);
        }
        bool OpGetRegions(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpGetRegions"), {"appId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(appId);
        }
        bool OpJoinLobby(::Photon_Realtime::TypedLobby* lobby) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinLobby"), {"lobby"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lobby);
        }
        bool OpJoinRandomOrCreateRoom(::Photon_Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon_Realtime::EnterRoomParams* createRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinRandomOrCreateRoom"), {"opJoinRandomRoomParams", "createRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opJoinRandomRoomParams, createRoomParams);
        }
        bool OpJoinRandomRoom(::Photon_Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinRandomRoom"), {"opJoinRandomRoomParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opJoinRandomRoomParams);
        }
        bool OpJoinRoom(::Photon_Realtime::EnterRoomParams* opParams) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpJoinRoom"), {"opParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opParams);
        }
        bool OpLeaveLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpLeaveLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpLeaveRoom"), {"becomeInactive", "sendAuthCookie"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(becomeInactive, sendAuthCookie);
        }
        template <typename TP1 = void*>
        bool OpRaiseEvent(uint8_t eventCode, TP1 customEventContent, ::Photon_Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames_Client_Photon::SendOptions sendOptions) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpRaiseEvent"), {"eventCode", "customEventContent", "raiseEventOptions", "sendOptions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(eventCode, customEventContent, raiseEventOptions, sendOptions);
        }
        bool OpSetCustomPropertiesOfActor(int actorNr, ::ExitGames_Client_Photon::Hashtable* actorProperties) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetCustomPropertiesOfActor"), {"actorNr", "actorProperties"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNr, actorProperties);
        }
        bool OpSetCustomPropertiesOfRoom(::ExitGames_Client_Photon::Hashtable* gameProperties) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetCustomPropertiesOfRoom"), {"gameProperties"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameProperties);
        }
        bool OpSetPropertiesOfActor(int actorNr, ::ExitGames_Client_Photon::Hashtable* actorProperties, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webflags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetPropertiesOfActor"), {"actorNr", "actorProperties", "expectedProperties", "webflags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNr, actorProperties, expectedProperties, webflags);
        }
        bool OpSetPropertiesOfRoom(::ExitGames_Client_Photon::Hashtable* gameProperties, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webflags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetPropertiesOfRoom"), {"gameProperties", "expectedProperties", "webflags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameProperties, expectedProperties, webflags);
        }
        template <typename TP1 = void*>
        bool OpSetPropertyOfRoom(uint8_t propCode, TP1 value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSetPropertyOfRoom"), {"propCode", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(propCode, value);
        }
        bool OpSettings(bool receiveLobbyStats) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpSettings"), {"receiveLobbyStats"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(receiveLobbyStats);
        }
        void RoomOptionsToOpParameters(::BNM::Structures::Mono::Dictionary<uint8_t, void*>* op, ::Photon_Realtime::RoomOptions* roomOptions, bool usePropertiesKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RoomOptionsToOpParameters"), {"op", "roomOptions", "usePropertiesKey"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(op, roomOptions, usePropertiesKey);
        }
        static void set_PingImplementation(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PingImplementation"), {"value"});
            _m.Call(value);
        }
    };
}
