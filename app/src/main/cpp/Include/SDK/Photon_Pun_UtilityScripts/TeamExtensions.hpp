#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PunTeams_Team.hpp"

namespace Photon_Pun_UtilityScripts {
    struct TeamExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "TeamExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Pun_UtilityScripts::PunTeams_Team GetTeam(::Photon_Realtime::Player* player) {
            static BNM::Method<::Photon_Pun_UtilityScripts::PunTeams_Team> _m = GetClass().GetMethod(O("GetTeam"), {"player"});
            return _m.Call(player);
        }
        static void SetTeam(::Photon_Realtime::Player* player, ::Photon_Pun_UtilityScripts::PunTeams_Team team) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTeam"), {"player", "team"});
            _m.Call(player, team);
        }
    };
}
