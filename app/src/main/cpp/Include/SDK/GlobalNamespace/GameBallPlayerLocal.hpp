#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameBallId.hpp"
#include "GameBallPlayerLocal_HandData.hpp"

namespace GlobalNamespace {
    struct GameBallPlayerLocal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameBallPlayerLocal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GameBallPlayerLocal* GetInstance() {
            static BNM::Field<::GlobalNamespace::GameBallPlayerLocal*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int MAX_INPUT_HISTORY = 32;
        ::GlobalNamespace::GameBallPlayer* GetGamePlayer() {
            static BNM::Field<::GlobalNamespace::GameBallPlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_HandData>* GetHands() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_InputData*>* GetInputData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_InputData*>*> _field = GetClass().GetField(O("inputData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GameBallPlayerLocal* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GameBallPlayerLocal*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void SetGamePlayer(::GlobalNamespace::GameBallPlayer* value) {
            static BNM::Field<::GlobalNamespace::GameBallPlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHands(::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_HandData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputData(::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_InputData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameBallPlayerLocal_InputData*>*> _field = GetClass().GetField(O("inputData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GameBallPlayerLocal* value) {
            static BNM::Field<::GlobalNamespace::GameBallPlayerLocal*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void _OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnApplicationQuit"));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        static int GetHandIndex(bool leftHand) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHandIndex"), {"leftHand"});
            return _m.Call(leftHand);
        }
        ::Transform* GetHandTransform(int handIndex) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetHandTransform"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        void* GetXRNode(int handIndex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetXRNode"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        static bool IsLeftHand(int handIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLeftHand"), {"handIndex"});
            return _m.Call(handIndex);
        }
        void OnApplicationPause(bool pause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationPause"), {"pause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pause);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateInteract() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateInteract"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayCatchFx(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayCatchFx"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void PlayThrowFx(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayThrowFx"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void SetGrabbed(::GlobalNamespace::GameBallId gameBallId, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGrabbed"), {"gameBallId", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, handIndex);
        }
        void UpdateHand(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHand"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void UpdateHandEmpty(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandEmpty"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void UpdateHandHolding(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandHolding"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void UpdateInput(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateInput"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void UpdateStuckState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStuckState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
