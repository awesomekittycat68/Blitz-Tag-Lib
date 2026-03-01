#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Flower_FlowerState.hpp"

namespace GorillaTagScripts {
    struct Flower : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "Flower");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsWatered() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsWatered"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsWatered(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsWatered"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Animator* GetAnim() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("anim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::Flower_FlowerState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts::Flower_FlowerState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetHealthyToMiddle() {
            static BNM::Field<int> _field = GetClass().GetField(O("healthy_to_middle"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::Flower_FlowerState GetLastState() {
            static BNM::Field<::GorillaTagScripts::Flower_FlowerState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetMeshRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("meshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMeshStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("meshStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMeshStatesGameObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("meshStatesGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetMiddleToHealthy() {
            static BNM::Field<int> _field = GetClass().GetField(O("middle_to_healthy"));
            return _field.Get();
        }
        static int GetMiddleToWilted() {
            static BNM::Field<int> _field = GetClass().GetField(O("middle_to_wilted"));
            return _field.Get();
        }
        ::GlobalNamespace::BeePerchPoint* GetPerchPoint() {
            static BNM::Field<::GlobalNamespace::BeePerchPoint*> _field = GetClass().GetField(O("perchPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldUpdateVisuals() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldUpdateVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSparkleFx() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("sparkleFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaTimer* GetTimer() {
            static BNM::Field<::GorillaTagScripts::GorillaTimer*> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetWateredFx() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("wateredFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetWiltedToMiddle() {
            static BNM::Field<int> _field = GetClass().GetField(O("wilted_to_middle"));
            return _field.Get();
        }
        void SetAnim(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("anim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts::Flower_FlowerState value) {
            static BNM::Field<::GorillaTagScripts::Flower_FlowerState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GorillaTagScripts::Flower_FlowerState value) {
            static BNM::Field<::GorillaTagScripts::Flower_FlowerState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("meshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshStates(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("meshStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshStatesGameObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("meshStatesGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerchPoint(::GlobalNamespace::BeePerchPoint* value) {
            static BNM::Field<::GlobalNamespace::BeePerchPoint*> _field = GetClass().GetField(O("perchPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldUpdateVisuals(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldUpdateVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSparkleFx(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("sparkleFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimer(::GorillaTagScripts::GorillaTimer* value) {
            static BNM::Field<::GorillaTagScripts::GorillaTimer*> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWateredFx(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("wateredFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AnimCatch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnimCatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeState(::GorillaTagScripts::Flower_FlowerState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        bool get_IsWatered() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsWatered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::Flower_FlowerState GetCurrentState_1() {
            static BNM::Method<::GorillaTagScripts::Flower_FlowerState> _m = GetClass().GetMethod(O("GetCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleOnFlowerTimerEnded(::GorillaTagScripts::GorillaTimer* _timer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnFlowerTimerEnded"), {"_timer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_timer);
        }
        void LocalUpdateFlowers(::GorillaTagScripts::Flower_FlowerState state, bool isWatered) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalUpdateFlowers"), {"state", "isWatered"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, isWatered);
        }
        void OnAnimationIsDone(int state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAnimationIsDone"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_IsWatered(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsWatered"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateFlowerState(::GorillaTagScripts::Flower_FlowerState newState, bool isWatered, bool updateVisual) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFlowerState"), {"newState", "isWatered", "updateVisual"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, isWatered, updateVisual);
        }
        void UpdateVisuals(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisuals"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void WaterFlower(bool isWatered) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WaterFlower"), {"isWatered"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isWatered);
        }
    };
}
