#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PlayerNumberingExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PlayerNumberingExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetPlayerNumber(::Photon_Realtime::Player* player) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPlayerNumber"), {"player"});
            return _m.Call(player);
        }
        static void SetPlayerNumber(::Photon_Realtime::Player* player, int playerNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerNumber"), {"player", "playerNumber"});
            _m.Call(player, playerNumber);
        }
    };
}
