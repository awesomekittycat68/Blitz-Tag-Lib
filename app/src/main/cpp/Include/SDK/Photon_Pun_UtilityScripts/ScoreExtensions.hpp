#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct ScoreExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "ScoreExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void AddScore(::Photon_Realtime::Player* player, int scoreToAddToCurrent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddScore"), {"player", "scoreToAddToCurrent"});
            _m.Call(player, scoreToAddToCurrent);
        }
        static int GetScore(::Photon_Realtime::Player* player) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetScore"), {"player"});
            return _m.Call(player);
        }
        static void SetScore(::Photon_Realtime::Player* player, int newScore) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScore"), {"player", "newScore"});
            _m.Call(player, newScore);
        }
    };
}
