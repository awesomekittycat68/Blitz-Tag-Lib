#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "PunTeams_Team.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PunTeams : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PunTeams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* TeamPlayerProp = "team";
        static ::BNM::Structures::Mono::Dictionary<::Photon_Pun_UtilityScripts::PunTeams_Team, ::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*>* GetPlayersPerTeam() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Photon_Pun_UtilityScripts::PunTeams_Team, ::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*>*> _field = GetClass().GetField(O("PlayersPerTeam"));
            return _field.Get();
        }
        static void SetPlayersPerTeam(::BNM::Structures::Mono::Dictionary<::Photon_Pun_UtilityScripts::PunTeams_Team, ::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Photon_Pun_UtilityScripts::PunTeams_Team, ::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*>*> _field = GetClass().GetField(O("PlayersPerTeam"));
            _field.Set(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
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
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTeams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTeams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
