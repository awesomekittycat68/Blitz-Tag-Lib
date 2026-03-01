#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolFlash_State.hpp"
#include "GRToolFlash_UpgradeTypes.hpp"

namespace GlobalNamespace {
    struct GRToolFlash : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolFlash");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActivatedLocally() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activatedLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetChargeSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chargeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownMinimum() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownMinimum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEnemyLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("enemyLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFlash() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlashDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flashDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFlashSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("flashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlashSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("flashSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitter* GetGameHitter() {
            static BNM::Field<::GlobalNamespace::GameHitter*> _field = GetClass().GetField(O("gameHitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetItem() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShootFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shootFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolFlash_State GetState() {
            static BNM::Field<::GlobalNamespace::GRToolFlash_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStunDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("stunDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetTempHitResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("tempHitResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastFlashed() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastFlashed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool* GetTool() {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUpgrade1FlashCone() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("upgrade1FlashCone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade1FlashSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade1FlashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUpgrade2FlashCone() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("upgrade2FlashCone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade2FlashSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade2FlashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUpgrade3FlashCone() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("upgrade3FlashCone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade3FlashSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade3FlashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolFlash_UpgradeTypes GetUpgradesApplied() {
            static BNM::Field<::GlobalNamespace::GRToolFlash_UpgradeTypes> _field = GetClass().GetField(O("upgradesApplied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivatedLocally(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activatedLocally"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chargeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownMinimum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownMinimum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnemyLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("enemyLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlash(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flashDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("flashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flashSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameHitter(::GlobalNamespace::GameHitter* value) {
            static BNM::Field<::GlobalNamespace::GameHitter*> _field = GetClass().GetField(O("gameHitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItem(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shootFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRToolFlash_State value) {
            static BNM::Field<::GlobalNamespace::GRToolFlash_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStunDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stunDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempHitResults(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("tempHitResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastFlashed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastFlashed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTool(::GlobalNamespace::GRTool* value) {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade1FlashCone(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("upgrade1FlashCone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade1FlashSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade1FlashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade2FlashCone(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("upgrade2FlashCone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade2FlashSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade2FlashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade3FlashCone(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("upgrade3FlashCone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade3FlashSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade3FlashSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradesApplied(::GlobalNamespace::GRToolFlash_UpgradeTypes value) {
            static BNM::Field<::GlobalNamespace::GRToolFlash_UpgradeTypes> _field = GetClass().GetField(O("upgradesApplied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeState"), {"newStateIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newStateIndex);
        }
        void GetDebugTextLines(::BNM::IL2CPP::Il2CppObject*& strings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDebugTextLines"), {"strings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&strings);
        }
        bool IsButtonHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsButtonHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHeldLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnToolUpgraded(::GlobalNamespace::GRTool* tool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToolUpgraded"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool);
        }
        void OnUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void PlayVibration(float strength, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVibration"), {"strength", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strength, duration);
        }
        void SetState_1(::GlobalNamespace::GRToolFlash_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateAuthority(::GlobalNamespace::GRToolFlash_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void StartCharge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartCharge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartFlash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFlash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopFlash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopFlash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
