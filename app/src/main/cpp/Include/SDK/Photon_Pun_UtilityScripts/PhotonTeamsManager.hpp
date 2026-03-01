#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PhotonTeamsManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PhotonTeamsManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Pun_UtilityScripts::PhotonTeamsManager* get_Instance() {
            static BNM::Method<::Photon_Pun_UtilityScripts::PhotonTeamsManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::Photon_Pun_UtilityScripts::PhotonTeamsManager* GetInstance() {
            static BNM::Field<::Photon_Pun_UtilityScripts::PhotonTeamsManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* TeamPlayerProp = "_pt";
        ::Photon_Pun_UtilityScripts::PhotonTeamsManager* GetInstance_pg() {
            static BNM::Method<::Photon_Pun_UtilityScripts::PhotonTeamsManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_PlayerJoinedTeam(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_PlayerJoinedTeam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_PlayerJoinedTeam(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_PlayerJoinedTeam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_PlayerLeftTeam(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_PlayerLeftTeam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_PlayerLeftTeam(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_PlayerLeftTeam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::Photon_Pun_UtilityScripts::PhotonTeamsManager* GetInstance_f() {
            static BNM::Field<::Photon_Pun_UtilityScripts::PhotonTeamsManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* GetPlayerJoinedTeam() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("PlayerJoinedTeam"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* GetPlayerLeftTeam() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("PlayerLeftTeam"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* GetPlayersPerTeam() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, void*>*> _field = GetClass().GetField(O("playersPerTeam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Pun_UtilityScripts::PhotonTeam*>* GetTeamsByCode() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("teamsByCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* GetTeamsByName() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("teamsByName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::PhotonTeam*>* GetTeamsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("teamsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::Photon_Pun_UtilityScripts::PhotonTeamsManager* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::PhotonTeamsManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetPlayerJoinedTeam(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("PlayerJoinedTeam"));
            _field.Set(value);
        }
        static void SetPlayerLeftTeam(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("PlayerLeftTeam"));
            _field.Set(value);
        }
        void SetPlayersPerTeam(::BNM::Structures::Mono::Dictionary<uint8_t, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, void*>*> _field = GetClass().GetField(O("playersPerTeam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamsByCode(::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("teamsByCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamsByName(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("teamsByName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamsList(::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::PhotonTeam*>*> _field = GetClass().GetField(O("teamsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_PlayerJoinedTeam_1(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_PlayerJoinedTeam"), {"value"});
            _m.Call(value);
        }
        static void add_PlayerLeftTeam_1(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_PlayerLeftTeam"), {"value"});
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearTeams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearTeams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::Photon_Pun_UtilityScripts::PhotonTeamsManager* get_Instance_1() {
            static BNM::Method<::Photon_Pun_UtilityScripts::PhotonTeamsManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::Photon_Pun_UtilityScripts::PhotonTeam*>* GetAvailableTeams() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Pun_UtilityScripts::PhotonTeam*>*> _m = GetClass().GetMethod(O("GetAvailableTeams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTeamMembersCount(uint8_t code) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTeamMembersCount"), {"code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(code);
        }
        int GetTeamMembersCount(::BNM::Structures::Mono::String* name) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTeamMembersCount"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name);
        }
        int GetTeamMembersCount(::Photon_Pun_UtilityScripts::PhotonTeam* team) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTeamMembersCount"), {"team"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(team);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_PlayerJoinedTeam_1(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_PlayerJoinedTeam"), {"value"});
            _m.Call(value);
        }
        static void remove_PlayerLeftTeam_1(::BNM::Structures::Mono::Action<::Photon_Realtime::Player*, ::Photon_Pun_UtilityScripts::PhotonTeam*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_PlayerLeftTeam"), {"value"});
            _m.Call(value);
        }
        bool TryGetTeamByCode(uint8_t code, ::Photon_Pun_UtilityScripts::PhotonTeam*& team) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamByCode"), {"code", "team"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(code, &team);
        }
        bool TryGetTeamByName(::BNM::Structures::Mono::String* teamName, ::Photon_Pun_UtilityScripts::PhotonTeam*& team) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamByName"), {"teamName", "team"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(teamName, &team);
        }
        bool TryGetTeamMatesOfPlayer(::Photon_Realtime::Player* player, ::Photon_Realtime::Player*& teamMates) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamMatesOfPlayer"), {"player", "teamMates"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, &teamMates);
        }
        bool TryGetTeamMembers(uint8_t code, ::Photon_Realtime::Player*& members) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamMembers"), {"code", "members"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(code, &members);
        }
        bool TryGetTeamMembers(::BNM::Structures::Mono::String* teamName, ::Photon_Realtime::Player*& members) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamMembers"), {"teamName", "members"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(teamName, &members);
        }
        bool TryGetTeamMembers(::Photon_Pun_UtilityScripts::PhotonTeam* team, ::Photon_Realtime::Player*& members) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamMembers"), {"team", "members"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(team, &members);
        }
        void UpdateTeams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTeams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
