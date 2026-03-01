#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RoomInfo.hpp"

namespace Photon_Realtime {
    struct Room : ::Photon_Realtime::RoomInfo {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "Room");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAutoCleanUp() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AutoCleanUp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetBroadcastPropertiesChangeToAll() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_BroadcastPropertiesChangeToAll"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBroadcastPropertiesChangeToAll(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BroadcastPropertiesChangeToAll"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDeleteNullProperties() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DeleteNullProperties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDeleteNullProperties(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DeleteNullProperties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetEmptyRoomTtl() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_EmptyRoomTtl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEmptyRoomTtl(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EmptyRoomTtl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetExpectedUsers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_ExpectedUsers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsOffline() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOffline"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsOffline(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsOffline"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsOpen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOpen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsOpen(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsOpen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsVisible(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::LoadBalancingClient* GetLoadBalancingClient() {
            static BNM::Method<::Photon_Realtime::LoadBalancingClient*> _method = GetClass().GetMethod(O("get_LoadBalancingClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLoadBalancingClient(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LoadBalancingClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMasterClientId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MasterClientId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint8_t GetMaxPlayers() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_MaxPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxPlayers(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetPlayerCount() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_PlayerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>* GetPlayers() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>*> _method = GetClass().GetMethod(O("get_Players"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayers(::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Players"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPlayerTtl() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayerTtl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerTtl(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerTtl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPropertiesListedInLobby() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_PropertiesListedInLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPropertiesListedInLobby(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PropertiesListedInLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPublishUserId() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PublishUserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPublishUserId(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PublishUserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSuppressPlayerInfo() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SuppressPlayerInfo"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSuppressPlayerInfo(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SuppressPlayerInfo"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSuppressRoomEvents() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SuppressRoomEvents"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSuppressRoomEvents(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SuppressRoomEvents"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsOffline_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOffline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>* GetPlayers_f() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("players"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsOffline_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOffline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayers_fs(::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("players"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AddPlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AddPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool ClearExpectedUsers() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ClearExpectedUsers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AutoCleanUp() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AutoCleanUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_BroadcastPropertiesChangeToAll() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_BroadcastPropertiesChangeToAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DeleteNullProperties() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DeleteNullProperties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_EmptyRoomTtl() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_EmptyRoomTtl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_ExpectedUsers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_ExpectedUsers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsOffline() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsOffline"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsOpen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsOpen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::LoadBalancingClient* get_LoadBalancingClient() {
            static BNM::Method<::Photon_Realtime::LoadBalancingClient*> _m = GetClass().GetMethod(O("get_LoadBalancingClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MasterClientId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MasterClientId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_MaxPlayers() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_MaxPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_PlayerCount() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_PlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>* get_Players() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>*> _m = GetClass().GetMethod(O("get_Players"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayerTtl() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayerTtl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_PropertiesListedInLobby() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_PropertiesListedInLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PublishUserId() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PublishUserId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SuppressPlayerInfo() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SuppressPlayerInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SuppressRoomEvents() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SuppressRoomEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* GetPlayer(int id, bool findMaster) {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("GetPlayer"), {"id", "findMaster"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id, findMaster);
        }
        void InternalCacheProperties(::ExitGames_Client_Photon::Hashtable* propertiesToCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InternalCacheProperties"), {"propertiesToCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesToCache);
        }
        void InternalCacheRoomFlags(int roomFlags) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InternalCacheRoomFlags"), {"roomFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomFlags);
        }
        void RemovePlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void RemovePlayer(int id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayer"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void set_BroadcastPropertiesChangeToAll(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BroadcastPropertiesChangeToAll"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DeleteNullProperties(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DeleteNullProperties"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EmptyRoomTtl(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EmptyRoomTtl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsOffline(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsOffline"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsOpen(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsOpen"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsVisible(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsVisible"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LoadBalancingClient(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LoadBalancingClient"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxPlayers(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxPlayers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Name(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Name"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Players(::BNM::Structures::Mono::Dictionary<int, ::Photon_Realtime::Player*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Players"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayerTtl(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerTtl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PropertiesListedInLobby(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PropertiesListedInLobby"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PublishUserId(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PublishUserId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SuppressPlayerInfo(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SuppressPlayerInfo"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SuppressRoomEvents(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SuppressRoomEvents"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool SetCustomProperties(::ExitGames_Client_Photon::Hashtable* propertiesToSet, ::ExitGames_Client_Photon::Hashtable* expectedProperties, ::Photon_Realtime::WebFlags* webFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetCustomProperties"), {"propertiesToSet", "expectedProperties", "webFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(propertiesToSet, expectedProperties, webFlags);
        }
        bool SetExpectedUsers(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* newExpectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetExpectedUsers"), {"newExpectedUsers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newExpectedUsers);
        }
        bool SetExpectedUsers(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* newExpectedUsers, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* oldExpectedUsers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetExpectedUsers"), {"newExpectedUsers", "oldExpectedUsers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newExpectedUsers, oldExpectedUsers);
        }
        bool SetMasterClient(::Photon_Realtime::Player* masterClientPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetMasterClient"), {"masterClientPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(masterClientPlayer);
        }
        bool SetPropertiesListedInLobby_1(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* lobbyProps) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetPropertiesListedInLobby"), {"lobbyProps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lobbyProps);
        }
        ::Photon_Realtime::Player* StorePlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("StorePlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToStringFull() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
