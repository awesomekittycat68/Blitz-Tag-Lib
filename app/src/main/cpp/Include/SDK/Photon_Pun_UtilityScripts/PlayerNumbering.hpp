#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PlayerNumbering : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PlayerNumbering");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Pun_UtilityScripts::PlayerNumbering* GetInstance() {
            static BNM::Field<::Photon_Pun_UtilityScripts::PlayerNumbering*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* RoomPlayerIndexedProp = "pNr";
        void add_OnPlayerNumberingChanged(::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerNumberingChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerNumberingChanged(::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerNumberingChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetDontDestroyOnLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dontDestroyOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Pun_UtilityScripts::PlayerNumbering* GetInstance_f() {
            static BNM::Field<::Photon_Pun_UtilityScripts::PlayerNumbering*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged* GetOnPlayerNumberingChanged() {
            static BNM::Field<::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged*> _field = GetClass().GetField(O("OnPlayerNumberingChanged"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* GetSortedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("SortedPlayers"));
            return _field.Get();
        }
        void SetDontDestroyOnLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dontDestroyOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::Photon_Pun_UtilityScripts::PlayerNumbering* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::PlayerNumbering*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetOnPlayerNumberingChanged(::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged*> _field = GetClass().GetField(O("OnPlayerNumberingChanged"));
            _field.Set(value);
        }
        static void SetSortedPlayers(::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("SortedPlayers"));
            _field.Set(value);
        }
        static void add_OnPlayerNumberingChanged_1(::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerNumberingChanged"), {"value"});
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerEnteredRoom(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
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
        void RefreshData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_OnPlayerNumberingChanged_1(::Photon_Pun_UtilityScripts::PlayerNumbering_PlayerNumberingChanged* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerNumberingChanged"), {"value"});
            _m.Call(value);
        }
    };
}
