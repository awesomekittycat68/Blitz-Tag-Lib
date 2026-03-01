#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RoomConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* Room_GameModePropKey = "gameMode";
        static constexpr const char* Room_PlatformPropKey = "platform";
        bool GetIsJoiningWithFriends() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsJoiningWithFriends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCreateIfMissing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("createIfMissing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::Hashtable* GetCustomProps() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("CustomProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsJoinable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isJoinable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPublic() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPublic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetJoinFriendIDs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("joinFriendIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetMaxPlayers() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("MaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCreateIfMissing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("createIfMissing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomProps(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("CustomProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsJoinable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isJoinable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPublic(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPublic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinFriendIDs(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("joinFriendIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPlayers(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("MaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::RoomConfig* AnyPublicConfig() {
            static BNM::Method<::GlobalNamespace::RoomConfig*> _m = GetClass().GetMethod(O("AnyPublicConfig"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* AutoCustomLobbyProps() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("AutoCustomLobbyProps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ClearExpectedUsers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearExpectedUsers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsJoiningWithFriends() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsJoiningWithFriends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetFriendIDs(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* friendIDs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFriendIDs"), {"friendIDs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendIDs);
        }
        void SetFusionOpts(::BNM::IL2CPP::Il2CppObject* runnerInst) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFusionOpts"), {"runnerInst"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runnerInst);
        }
        static ::GlobalNamespace::RoomConfig* SPConfig() {
            static BNM::Method<::GlobalNamespace::RoomConfig*> _m = GetClass().GetMethod(O("SPConfig"));
            return _m.Call();
        }
        ::Photon_Realtime::RoomOptions* ToPUNOpts() {
            static BNM::Method<::Photon_Realtime::RoomOptions*> _m = GetClass().GetMethod(O("ToPUNOpts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
