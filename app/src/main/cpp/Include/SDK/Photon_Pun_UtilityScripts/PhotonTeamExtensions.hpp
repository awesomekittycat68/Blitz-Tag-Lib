#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PhotonTeamExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PhotonTeamExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Pun_UtilityScripts::PhotonTeam* GetPhotonTeam(::Photon_Realtime::Player* player) {
            static BNM::Method<::Photon_Pun_UtilityScripts::PhotonTeam*> _m = GetClass().GetMethod(O("GetPhotonTeam"), {"player"});
            return _m.Call(player);
        }
        static bool JoinTeam(::Photon_Realtime::Player* player, ::Photon_Pun_UtilityScripts::PhotonTeam* team) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinTeam"), {"player", "team"});
            return _m.Call(player, team);
        }
        static bool JoinTeam(::Photon_Realtime::Player* player, uint8_t teamCode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinTeam"), {"player", "teamCode"});
            return _m.Call(player, teamCode);
        }
        static bool JoinTeam(::Photon_Realtime::Player* player, ::BNM::Structures::Mono::String* teamName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("JoinTeam"), {"player", "teamName"});
            return _m.Call(player, teamName);
        }
        static bool LeaveCurrentTeam(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LeaveCurrentTeam"), {"player"});
            return _m.Call(player);
        }
        static bool SwitchTeam(::Photon_Realtime::Player* player, ::Photon_Pun_UtilityScripts::PhotonTeam* team) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SwitchTeam"), {"player", "team"});
            return _m.Call(player, team);
        }
        static bool SwitchTeam(::Photon_Realtime::Player* player, uint8_t teamCode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SwitchTeam"), {"player", "teamCode"});
            return _m.Call(player, teamCode);
        }
        static bool SwitchTeam(::Photon_Realtime::Player* player, ::BNM::Structures::Mono::String* teamName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SwitchTeam"), {"player", "teamName"});
            return _m.Call(player, teamName);
        }
        static bool TryGetTeamMates(::Photon_Realtime::Player* player, ::Photon_Realtime::Player*& teamMates) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTeamMates"), {"player", "teamMates"});
            return _m.Call(player, &teamMates);
        }
    };
}
