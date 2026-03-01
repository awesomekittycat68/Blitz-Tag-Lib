#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GamePlayerLocal_HandData.hpp"

namespace GlobalNamespace {
    struct GamePlayerLocal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GamePlayerLocal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GamePlayerLocal* GetInstance() {
            static BNM::Field<::GlobalNamespace::GamePlayerLocal*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int MAX_INPUT_HISTORY = 32;
        ::GlobalNamespace::GameEntityManager* GetCurrGameEntityManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("currGameEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GamePlayer* GetGamePlayer() {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_HandData>* GetHands() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_InputData*>* GetInputData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_InputData*>*> _field = GetClass().GetField(O("inputData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GamePlayerLocal* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GamePlayerLocal*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void SetCurrGameEntityManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("currGameEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGamePlayer(::GlobalNamespace::GamePlayer* value) {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHands(::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_HandData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_HandData>*> _field = GetClass().GetField(O("hands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputData(::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_InputData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GamePlayerLocal_InputData*>*> _field = GetClass().GetField(O("inputData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GamePlayerLocal* value) {
            static BNM::Field<::GlobalNamespace::GamePlayerLocal*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearGrabbed(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGrabbed"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void ClearGrabbedIfHeld(::GlobalNamespace::GameEntityId gameBallId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGrabbedIfHeld"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId);
        }
        void ClearTriggerInteractables(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearTriggerInteractables"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        ::Transform* GetFingerTransform(int handIndex) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetFingerTransform"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        ::BNM::Structures::Unity::Vector3 GetHandAngularVelocity(int handIndex) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetHandAngularVelocity"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        static int GetHandIndex(bool leftHand) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHandIndex"), {"leftHand"});
            return _m.Call(leftHand);
        }
        float GetHandSpeed(int handIndex) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetHandSpeed"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        ::Transform* GetHandTransform(int handIndex) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetHandTransform"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        ::BNM::Structures::Unity::Vector3 GetHandVelocity(int handIndex) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetHandVelocity"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        void* GetXRNode(int handIndex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetXRNode"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handIndex);
        }
        static bool IsHandHolding(int handIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHandHolding"), {"handIndex"});
            return _m.Call(handIndex);
        }
        template <typename TP0 = void*>
        static bool IsHandHolding(TP0 xrNode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHandHolding"), {"xrNode"});
            return _m.Call(xrNode);
        }
        static bool IsLeftHand(int handIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLeftHand"), {"handIndex"});
            return _m.Call(handIndex);
        }
        void MigrateToEntityManager(::GlobalNamespace::GameEntityManager* newEntityManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MigrateToEntityManager"), {"newEntityManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newEntityManager);
        }
        void OnJoinRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRoom"));
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
        void SetGrabbed(::GlobalNamespace::GameEntityId gameBallId, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGrabbed"), {"gameBallId", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, handIndex);
        }
        void UpdateHand(::GlobalNamespace::GameEntityManager* emptyHandManager, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHand"), {"emptyHandManager", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(emptyHandManager, handIndex);
        }
        void UpdateHandEmpty(::GlobalNamespace::GameEntityManager* gameEntityManager, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandEmpty"), {"gameEntityManager", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityManager, handIndex);
        }
        void UpdateHandHolding(::GlobalNamespace::GameEntityManager* gameEntityManager, int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandHolding"), {"gameEntityManager", "handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntityManager, handIndex);
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
