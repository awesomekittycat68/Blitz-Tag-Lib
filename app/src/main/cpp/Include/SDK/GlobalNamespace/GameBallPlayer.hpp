#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameBallId.hpp"
#include "GameBallPlayer_HandData.hpp"

namespace GlobalNamespace {
    struct GameBallPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameBallPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_HANDS = 2;
        static constexpr int LEFT_HAND = 0;
        static constexpr int RIGHT_HAND = 1;
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayer_HandData>* GetHands() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayer_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInGoalZone() {
            static BNM::Field<int> _field = GetClass().GetField(O("inGoalZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTeamId() {
            static BNM::Field<int> _field = GetClass().GetField(O("teamId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHands(::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayer_HandData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayer_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInGoalZone(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("inGoalZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("teamId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CleanupPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearAllGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearGrabbed(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGrabbed"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void ClearGrabbedIfHeld(::GlobalNamespace::GameBallId gameBallId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGrabbedIfHeld"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId);
        }
        int FindHandIndex(::GlobalNamespace::GameBallId gameBallId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindHandIndex"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameBallId);
        }
        ::GlobalNamespace::GameBallId GetGameBallId() {
            static BNM::Method<::GlobalNamespace::GameBallId> _m = GetClass().GetMethod(O("GetGameBallId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameBallId GetGameBallId(int handIndex) {
            static BNM::Method<::GlobalNamespace::GameBallId> _m = GetClass().GetMethod(O("GetGameBallId"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        static ::GlobalNamespace::GameBallPlayer* GetGamePlayer(int actorNumber) {
            static BNM::Method<::GlobalNamespace::GameBallPlayer*> _m = GetClass().GetMethod(O("GetGamePlayer"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        static ::GlobalNamespace::GameBallPlayer* GetGamePlayer(::Collider* collider, bool bodyOnly) {
            static BNM::Method<::GlobalNamespace::GameBallPlayer*> _m = GetClass().GetMethod(O("GetGamePlayer"), {"collider", "bodyOnly"});
            return _m.Call(collider, bodyOnly);
        }
        static int GetHandIndex(bool leftHand) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHandIndex"), {"leftHand"});
            return _m.Call(leftHand);
        }
        static ::GlobalNamespace::VRRig* GetRig_1(int actorNumber) {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("GetRig"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        bool IsHoldingBall() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldingBall"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsLeftHand(int handIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLeftHand"), {"handIndex"});
            return _m.Call(handIndex);
        }
        bool IsLocalPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetGrabbed(::GlobalNamespace::GameBallId gameBallId, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGrabbed"), {"gameBallId", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, handIndex);
        }
        void SetInGoalZone_1(bool inZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInGoalZone"), {"inZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inZone);
        }
    };
}
