#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct RoomInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "RoomInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ExitGames_Client_Photon::Hashtable* GetCustomProperties() {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _method = GetClass().GetMethod(O("get_CustomProperties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsOpen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOpen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint8_t GetMaxPlayers() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_MaxPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPlayerCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAutoCleanUp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoCleanUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::Hashtable* GetCustomProperties_f() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("customProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmptyRoomTtl() {
            static BNM::Field<int> _field = GetClass().GetField(O("emptyRoomTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetExpectedUsers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("expectedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOpen_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsVisible_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMasterClientId() {
            static BNM::Field<int> _field = GetClass().GetField(O("masterClientId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetMaxPlayers_f() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("maxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerTtl() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPropertiesListedInLobby() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("propertiesListedInLobby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRemovedFromList() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RemovedFromList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoCleanUp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoCleanUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomProperties(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("customProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyRoomTtl(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("emptyRoomTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpectedUsers(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("expectedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOpen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsVisible(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMasterClientId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("masterClientId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPlayers(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("maxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTtl(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropertiesListedInLobby(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("propertiesListedInLobby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemovedFromList(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RemovedFromList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        ::ExitGames_Client_Photon::Hashtable* get_CustomProperties() {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _m = GetClass().GetMethod(O("get_CustomProperties"));
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
        int get_PlayerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InternalCacheProperties(::ExitGames_Client_Photon::Hashtable* propertiesToCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InternalCacheProperties"), {"propertiesToCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesToCache);
        }
        void set_PlayerCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
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
