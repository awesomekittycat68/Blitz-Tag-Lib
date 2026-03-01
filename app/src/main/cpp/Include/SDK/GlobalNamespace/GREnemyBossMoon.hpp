#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GameHitData.hpp"
#include "GREnemyBossMoon_Behavior.hpp"
#include "GREnemyBossMoon_BodyState.hpp"
#include "../GorillaTagScripts_GhostReactor/GREnemyType.hpp"

namespace GlobalNamespace {
    struct GREnemyBossMoon : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyBossMoon");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBossHasRevealed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_BossHasRevealed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBossHasRevealed(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BossHasRevealed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GRAbilityBase* GetCurrAbility() {
            static BNM::Method<::GlobalNamespace::GRAbilityBase*> _method = GetClass().GetMethod(O("get_CurrAbility"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GRAbilityBase*>* GetAbilities() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRAbilityBase*>*> _field = GetClass().GetField(O("abilities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityAgent* GetAbilityAgent() {
            static BNM::Field<::GlobalNamespace::GRAbilityAgent*> _field = GetClass().GetField(O("abilityAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackQuickTentacle00() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackQuickTentacle01() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackQuickTentacle02() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackQuickTentacle03() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTentacle00() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTentacle01() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTentacle02() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTentacle03() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTentacle04() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle04"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTentacle05() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle05"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTongue01() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTongue01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBossMoonTentacleAttack* GetAbilityAttackTongueSwipe01() {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTongueSwipe01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityDie* GetAbilityDie() {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityDie* GetAbilityDieIdle() {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDieIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityExposed() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityExposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityExposedIdle() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityExposedIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityHiddenIdle() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityHiddenIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityIdle() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityNextPhase() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityNextPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityRetreatEnd() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityRetreatEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityRetreatIdle() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityRetreatIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityRetreatStart() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityRetreatStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityReveal() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityDie* GetAbilityRunaway() {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityRunaway"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilitySummon* GetAbilitySummon01() {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilitySummon* GetAbilitySummon02() {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilitySummon* GetAbilitySummon03() {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilitySummon* GetAbilitySummon04() {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon04"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilitySummonEnd() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilitySummonEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilitySummonStart() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilitySummonStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAdaptiveMusicController* GetAdaptiveMusicController() {
            static BNM::Field<::GlobalNamespace::GRAdaptiveMusicController*> _field = GetClass().GetField(O("adaptiveMusicController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgent* GetAgent() {
            static BNM::Field<::GlobalNamespace::GameAgent*> _field = GetClass().GetField(O("agent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetAlways() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("always"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnim() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("anim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttacksAfterSummon() {
            static BNM::Field<int> _field = GetClass().GetField(O("attacksAfterSummon"));
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
        ::Renderer* GetBodyRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("bodyRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetBones() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CameraShakeDispatcher* GetCameraShaker() {
            static BNM::Field<::GlobalNamespace::CameraShakeDispatcher*> _field = GetClass().GetField(O("cameraShaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanChaseJump() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canChaseJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChaseJumpDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("chaseJumpDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChaseJumpMinInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("chaseJumpMinInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetConsecutiveCombos() {
            static BNM::Field<int> _field = GetClass().GetField(O("consecutiveCombos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityBase* GetCurrAbility_f() {
            static BNM::Field<::GlobalNamespace::GRAbilityBase*> _field = GetClass().GetField(O("currAbility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyBossMoon_Behavior GetCurrBehavior() {
            static BNM::Field<::GlobalNamespace::GREnemyBossMoon_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyBossMoon_BodyState GetCurrBodyState() {
            static BNM::Field<::GlobalNamespace::GREnemyBossMoon_BodyState> _field = GetClass().GetField(O("currBodyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCurrentGravActivator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentGravActivator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilitySummon* GetCurrSummon() {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("currSummon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDamagedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("damagedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDamagedSoundIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("damagedSoundIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetDamagedSounds() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("damagedSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamagedSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("damagedSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetDefaultBodyMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("defaultBodyMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemy* GetEnemy() {
            static BNM::Field<::GlobalNamespace::GREnemy*> _field = GetClass().GetField(O("enemy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonEye*>* GetEyes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonEye*>*> _field = GetClass().GetField(O("eyes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_GhostReactor::GRSpherePushVolume* GetEyesPushVolume() {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GRSpherePushVolume*> _field = GetClass().GetField(O("eyesPushVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstTimeReveal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstTimeReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFxDamaged() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxDamaged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetGravActivators() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gravActivators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHeadTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("headTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHearingRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("hearingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHittable* GetHittable() {
            static BNM::Field<::GlobalNamespace::GameHittable*> _field = GetClass().GetField(O("hittable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHp() {
            static BNM::Field<int> _field = GetClass().GetField(O("hp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInternalPhaseIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("internalPhaseIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetKnockbackImpulse() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackImpulse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetKnockbackTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("knockbackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyBossMoon_Behavior GetLastBehavior() {
            static BNM::Field<::GlobalNamespace::GREnemyBossMoon_Behavior> _field = GetClass().GetField(O("lastBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHitPlayerTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHitPlayerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastJumpEndtime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastJumpEndtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastSeenTargetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSeenTargetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastSeenTargetTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastSeenTargetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastStaggerTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStaggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_LootPhase*>* GetLootPhases() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*> _field = GetClass().GetField(O("lootPhases"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinChaseJumpDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("minChaseJumpDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinTimeBetweenHits() {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>* GetPhases() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*> _field = GetClass().GetField(O("phases"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestAfterAttack() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restAfterAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSearchPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("searchPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSenseLineOfSight* GetSenseLineOfSight() {
            static BNM::Field<::GlobalNamespace::GRSenseLineOfSight*> _field = GetClass().GetField(O("senseLineOfSight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSenseNearby* GetSenseNearby() {
            static BNM::Field<::GlobalNamespace::GRSenseNearby*> _field = GetClass().GetField(O("senseNearby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonColliderHelper*>* GetShockColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonColliderHelper*>*> _field = GetClass().GetField(O("shockColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetShockedBodyMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("shockedBodyMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_GhostReactor::GRSquishVolume*>* GetSquishVolumes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_GhostReactor::GRSquishVolume*>*> _field = GetClass().GetField(O("squishVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStaggerImmuneTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("staggerImmuneTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTargetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* GetTempPotentialAttacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("tempPotentialAttacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetTrackedEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trackedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetTrackedGameEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("trackedGameEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerNextMusicTransition() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerNextMusicTransition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTryHitPlayerCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tryHitPlayerCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTryShockPlayerCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tryShockPlayerCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitInRetreat() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitInRetreat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAbilities(::BNM::Structures::Mono::Array<::GlobalNamespace::GRAbilityBase*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRAbilityBase*>*> _field = GetClass().GetField(O("abilities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAgent(::GlobalNamespace::GRAbilityAgent* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAgent*> _field = GetClass().GetField(O("abilityAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackQuickTentacle00(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackQuickTentacle01(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackQuickTentacle02(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackQuickTentacle03(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackQuickTentacle03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTentacle00(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTentacle01(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTentacle02(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTentacle03(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTentacle04(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle04"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTentacle05(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTentacle05"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTongue01(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTongue01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackTongueSwipe01(::GlobalNamespace::GRBossMoonTentacleAttack* value) {
            static BNM::Field<::GlobalNamespace::GRBossMoonTentacleAttack*> _field = GetClass().GetField(O("abilityAttackTongueSwipe01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityDie(::GlobalNamespace::GRAbilityDie* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityDieIdle(::GlobalNamespace::GRAbilityDie* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDieIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityExposed(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityExposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityExposedIdle(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityExposedIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityHiddenIdle(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityHiddenIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityIdle(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityNextPhase(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityNextPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityRetreatEnd(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityRetreatEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityRetreatIdle(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityRetreatIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityRetreatStart(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityRetreatStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityReveal(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityRunaway(::GlobalNamespace::GRAbilityDie* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityRunaway"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySummon01(::GlobalNamespace::GRAbilitySummon* value) {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySummon02(::GlobalNamespace::GRAbilitySummon* value) {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySummon03(::GlobalNamespace::GRAbilitySummon* value) {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySummon04(::GlobalNamespace::GRAbilitySummon* value) {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("abilitySummon04"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySummonEnd(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilitySummonEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySummonStart(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilitySummonStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdaptiveMusicController(::GlobalNamespace::GRAdaptiveMusicController* value) {
            static BNM::Field<::GlobalNamespace::GRAdaptiveMusicController*> _field = GetClass().GetField(O("adaptiveMusicController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgent(::GlobalNamespace::GameAgent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent*> _field = GetClass().GetField(O("agent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlways(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("always"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnim(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("anim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttacksAfterSummon(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attacksAfterSummon"));
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
        void SetBodyRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("bodyRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBones(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraShaker(::GlobalNamespace::CameraShakeDispatcher* value) {
            static BNM::Field<::GlobalNamespace::CameraShakeDispatcher*> _field = GetClass().GetField(O("cameraShaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanChaseJump(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canChaseJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaseJumpDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chaseJumpDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaseJumpMinInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chaseJumpMinInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsecutiveCombos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("consecutiveCombos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrAbility(::GlobalNamespace::GRAbilityBase* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityBase*> _field = GetClass().GetField(O("currAbility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior value) {
            static BNM::Field<::GlobalNamespace::GREnemyBossMoon_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrBodyState(::GlobalNamespace::GREnemyBossMoon_BodyState value) {
            static BNM::Field<::GlobalNamespace::GREnemyBossMoon_BodyState> _field = GetClass().GetField(O("currBodyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGravActivator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentGravActivator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrSummon(::GlobalNamespace::GRAbilitySummon* value) {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon*> _field = GetClass().GetField(O("currSummon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamagedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("damagedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamagedSoundIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("damagedSoundIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamagedSounds(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("damagedSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamagedSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damagedSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultBodyMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("defaultBodyMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnemy(::GlobalNamespace::GREnemy* value) {
            static BNM::Field<::GlobalNamespace::GREnemy*> _field = GetClass().GetField(O("enemy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyes(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonEye*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonEye*>*> _field = GetClass().GetField(O("eyes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyesPushVolume(::GorillaTagScripts_GhostReactor::GRSpherePushVolume* value) {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GRSpherePushVolume*> _field = GetClass().GetField(O("eyesPushVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstTimeReveal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstTimeReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxDamaged(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxDamaged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravActivators(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gravActivators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("headTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHearingRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hearingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHittable(::GlobalNamespace::GameHittable* value) {
            static BNM::Field<::GlobalNamespace::GameHittable*> _field = GetClass().GetField(O("hittable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternalPhaseIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("internalPhaseIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackImpulse(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackImpulse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("knockbackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior value) {
            static BNM::Field<::GlobalNamespace::GREnemyBossMoon_Behavior> _field = GetClass().GetField(O("lastBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHitPlayerTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHitPlayerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastJumpEndtime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastJumpEndtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSeenTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSeenTargetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSeenTargetTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastSeenTargetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStaggerTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStaggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLootPhases(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_LootPhase*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*> _field = GetClass().GetField(O("lootPhases"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinChaseJumpDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minChaseJumpDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeBetweenHits(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhases(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*> _field = GetClass().GetField(O("phases"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestAfterAttack(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restAfterAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("searchPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSenseLineOfSight(::GlobalNamespace::GRSenseLineOfSight* value) {
            static BNM::Field<::GlobalNamespace::GRSenseLineOfSight*> _field = GetClass().GetField(O("senseLineOfSight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSenseNearby(::GlobalNamespace::GRSenseNearby* value) {
            static BNM::Field<::GlobalNamespace::GRSenseNearby*> _field = GetClass().GetField(O("senseNearby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShockColliders(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonColliderHelper*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoonColliderHelper*>*> _field = GetClass().GetField(O("shockColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShockedBodyMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("shockedBodyMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSquishVolumes(::BNM::Structures::Mono::List<::GorillaTagScripts_GhostReactor::GRSquishVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_GhostReactor::GRSquishVolume*>*> _field = GetClass().GetField(O("squishVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaggerImmuneTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("staggerImmuneTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempPotentialAttacks(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("tempPotentialAttacks"));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        void SetTrackedEntities(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trackedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackedGameEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("trackedGameEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerNextMusicTransition(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerNextMusicTransition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryHitPlayerCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tryHitPlayerCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryShockPlayerCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tryShockPlayerCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitInRetreat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitInRetreat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _GroundSlam(::Transform* slamCenter, float duration, float distance, float hitVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_GroundSlam"), {"slamCenter", "duration", "distance", "hitVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slamCenter, duration, distance, hitVelocity);
        }
        void AddTrackedEntity(::GlobalNamespace::GameEntity* entityToTrack) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTrackedEntity"), {"entityToTrack"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityToTrack);
        }
        void AdjustAttackAnimSpeed(float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdjustAttackAnimSpeed"), {"speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed);
        }
        void AdjustByPhaseIndex(int phase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdjustByPhaseIndex"), {"phase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(phase);
        }
        bool AreAllEyesClosed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreAllEyesClosed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int CalcMaxHP() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalcMaxHP"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CatchUpPhase(int phase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CatchUpPhase"), {"phase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(phase);
        }
        ::GlobalNamespace::GREnemyBossMoon_Behavior ChooseAttackForPhase() {
            static BNM::Method<::GlobalNamespace::GREnemyBossMoon_Behavior> _m = GetClass().GetMethod(O("ChooseAttackForPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ChooseNewBehavior(bool forceAttack) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChooseNewBehavior"), {"forceAttack"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forceAttack);
        }
        ::GlobalNamespace::GREnemyBossMoon_Behavior ChooseRandomBehavior(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* behaviors) {
            static BNM::Method<::GlobalNamespace::GREnemyBossMoon_Behavior> _m = GetClass().GetMethod(O("ChooseRandomBehavior"), {"behaviors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(behaviors);
        }
        ::GlobalNamespace::GREnemyBossMoon_Behavior ChooseSummonForPhase() {
            static BNM::Method<::GlobalNamespace::GREnemyBossMoon_Behavior> _m = GetClass().GetMethod(O("ChooseSummonForPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DebugHitPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugHitPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_BossHasRevealed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_BossHasRevealed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRAbilityBase* get_CurrAbility() {
            static BNM::Method<::GlobalNamespace::GRAbilityBase*> _m = GetClass().GetMethod(O("get_CurrAbility"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRAbilityBase* GetAssociatedAbilityForBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior behavior) {
            static BNM::Method<::GlobalNamespace::GRAbilityBase*> _m = GetClass().GetMethod(O("GetAssociatedAbilityForBehavior"), {"behavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(behavior);
        }
        ::GlobalNamespace::GREnemyBossMoon_PhaseDef* GetCurrPhase() {
            static BNM::Method<::GlobalNamespace::GREnemyBossMoon_PhaseDef*> _m = GetClass().GetMethod(O("GetCurrPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCurrPhaseIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrPhaseIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetDebugTextLines(::BNM::IL2CPP::Il2CppObject*& strings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDebugTextLines"), {"strings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&strings);
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetLootTableForType(::GorillaTagScripts_GhostReactor::GREnemyType enemyType) {
            static BNM::Method<::GlobalNamespace::GRBreakableItemSpawnConfig*> _m = GetClass().GetMethod(O("GetLootTableForType"), {"enemyType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enemyType);
        }
        void GoBackPhase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoBackPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GotoDyingIdle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GotoDyingIdle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GoToNextPhase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToNextPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GroundSlam(::Transform* slamCenter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GroundSlam"), {"slamCenter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slamCenter);
        }
        void GroundSlamWeak(::Transform* slamCenter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GroundSlamWeak"), {"slamCenter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slamCenter);
        }
        void HitPlayer(::GlobalNamespace::GRPlayer* player, bool useImpulse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitPlayer"), {"player", "useImpulse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, useImpulse);
        }
        void HurtBoss(int hitAmount, ::GlobalNamespace::GameEntityId hitByEntityId, ::BNM::Structures::Unity::Vector3 toolPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HurtBoss"), {"hitAmount", "hitByEntityId", "toolPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitAmount, hitByEntityId, toolPosition);
        }
        void HurtBossHP() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HurtBossHP"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void IncrementBossPhase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementBossPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsAnySummonBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior behavior) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnySummonBehavior"), {"behavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(behavior);
        }
        bool IsAttackBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior behavior) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAttackBehavior"), {"behavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(behavior);
        }
        bool IsHitValid(::GlobalNamespace::GameHitData hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHitValid"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hit);
        }
        bool IsSummon(::GlobalNamespace::GREnemyBossMoon_Behavior behavior) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSummon"), {"behavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(behavior);
        }
        void KillAllEyes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KillAllEyes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void KillAllSummoned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KillAllSummoned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void KillAllSummoned(bool ignoreMonkeye, bool killAllEnemies) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KillAllSummoned"), {"ignoreMonkeye", "killAllEnemies"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ignoreMonkeye, killAllEnemies);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnEntityThink(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityThink"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnGameEntityDeserialize(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEntityDeserialize"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader);
        }
        void OnGameEntitySerialize(::BNM::IL2CPP::Il2CppObject* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEntitySerialize"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
        void OnHit(::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHit"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hit);
        }
        void OnHitByClub(::GlobalNamespace::GRTool* tool, ::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHitByClub"), {"tool", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool, hit);
        }
        void OnHitByFlash(::GlobalNamespace::GRTool* grTool, ::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHitByFlash"), {"grTool", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grTool, hit);
        }
        void OnHitByShield(::GlobalNamespace::GRTool* tool, ::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHitByShield"), {"tool", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool, hit);
        }
        void OnNetworkBehaviorStateChange(uint8_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNetworkBehaviorStateChange"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void OnNetworkBodyStateChange(uint8_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNetworkBodyStateChange"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void OnSummonedEntityDestroy(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSummonedEntityDestroy"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void OnSummonedEntityInit(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSummonedEntityInit"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
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
        void RefreshBody() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshBody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveTrackedEntity(::GlobalNamespace::GameEntity* entityToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTrackedEntity"), {"entityToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityToRemove);
        }
        void ReportDeathStat() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportDeathStat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestoreFullHealth() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreFullHealth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_BossHasRevealed(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BossHasRevealed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior newBehavior, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBehavior"), {"newBehavior", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBehavior, force);
        }
        void SetBodyState(::GlobalNamespace::GREnemyBossMoon_BodyState newBodyState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBodyState"), {"newBodyState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBodyState, force);
        }
        void SetHP(int hp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHP"), {"hp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hp);
        }
        void SetSquishVolumeState(bool squishEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSquishVolumeState"), {"squishEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(squishEnabled);
        }
        void Setup(int64_t entityCreateData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"entityCreateData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityCreateData);
        }
        void SetupAbility(::GlobalNamespace::GREnemyBossMoon_Behavior behavior, ::GlobalNamespace::GRAbilityBase* ability, ::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupAbility"), {"behavior", "ability", "agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behavior, ability, agent, anim, audioSource, root, head, lineOfSight);
        }
        void ShockPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShockPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SyncPhase(int phase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncPhase"), {"phase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(phase);
        }
        void ToggleShockColliders(bool toggle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleShockColliders"), {"toggle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggle);
        }
        ::GlobalNamespace::GREnemyBossMoon_Behavior TryChooseAttackBehavior() {
            static BNM::Method<::GlobalNamespace::GREnemyBossMoon_Behavior> _m = GetClass().GetMethod(O("TryChooseAttackBehavior"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* TryHitPlayer(::GlobalNamespace::GRPlayer* player, bool useImpulse) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TryHitPlayer"), {"player", "useImpulse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, useImpulse);
        }
        bool TrySetBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior newBehavior) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySetBehavior"), {"newBehavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newBehavior);
        }
        ::BNM::Coroutine::IEnumerator* TryShockPlayer() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TryShockPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TurnOffGrav() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnOffGrav"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TurnOnGrav() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnOnGrav"));
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
