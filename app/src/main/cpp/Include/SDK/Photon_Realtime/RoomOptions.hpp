#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct RoomOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "RoomOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBroadcastPropsChangeToAll() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_BroadcastPropsChangeToAll"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBroadcastPropsChangeToAll(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BroadcastPropsChangeToAll"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCleanupCacheOnLeave() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CleanupCacheOnLeave"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCleanupCacheOnLeave(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CleanupCacheOnLeave"));
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
        bool GetBroadcastPropsChangeToAll_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("broadcastPropsChangeToAll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCleanupCacheOnLeave_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cleanupCacheOnLeave"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::Hashtable* GetCustomRoomProperties() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("CustomRoomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetCustomRoomPropertiesForLobby() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("CustomRoomPropertiesForLobby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmptyRoomTtl() {
            static BNM::Field<int> _field = GetClass().GetField(O("EmptyRoomTtl"));
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
        uint8_t GetMaxPlayers() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("MaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerTtl() {
            static BNM::Field<int> _field = GetClass().GetField(O("PlayerTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPlugins() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Plugins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBroadcastPropsChangeToAll_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("broadcastPropsChangeToAll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCleanupCacheOnLeave_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cleanupCacheOnLeave"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomRoomProperties(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("CustomRoomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomRoomPropertiesForLobby(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("CustomRoomPropertiesForLobby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyRoomTtl(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("EmptyRoomTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOpen_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsVisible_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPlayers(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("MaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTtl(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PlayerTtl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlugins(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Plugins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_BroadcastPropsChangeToAll() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_BroadcastPropsChangeToAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CleanupCacheOnLeave() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CleanupCacheOnLeave"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DeleteNullProperties() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DeleteNullProperties"));
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
        void set_BroadcastPropsChangeToAll(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BroadcastPropsChangeToAll"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CleanupCacheOnLeave(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CleanupCacheOnLeave"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DeleteNullProperties(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DeleteNullProperties"), {"value"});
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
    };
}
