#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct TurnExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "TurnExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetFinishedTurnPropKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FinishedTurnPropKey"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetTurnPropKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TurnPropKey"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetTurnStartPropKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TurnStartPropKey"));
            return _field.Get();
        }
        static int GetFinishedTurn(::Photon_Realtime::Player* player) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetFinishedTurn"), {"player"});
            return _m.Call(player);
        }
        static int GetTurn(::Photon_Realtime::RoomInfo* room) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTurn"), {"room"});
            return _m.Call(room);
        }
        static int GetTurnStart(::Photon_Realtime::RoomInfo* room) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTurnStart"), {"room"});
            return _m.Call(room);
        }
        static void SetFinishedTurn(::Photon_Realtime::Player* player, int turn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFinishedTurn"), {"player", "turn"});
            _m.Call(player, turn);
        }
        static void SetTurn(::Photon_Realtime::Room* room, int turn, bool setStartTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTurn"), {"room", "turn", "setStartTime"});
            _m.Call(room, turn, setStartTime);
        }
    };
}
