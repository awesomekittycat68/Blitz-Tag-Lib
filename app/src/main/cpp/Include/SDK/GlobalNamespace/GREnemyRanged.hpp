#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameHitData.hpp"
#include "GREnemyRanged_Behavior.hpp"
#include "GREnemyRanged_BodyState.hpp"

namespace GlobalNamespace {
    struct GREnemyRanged : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyRanged");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAbilityDie* GetAbilityDie() {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityFlashed* GetAbilityFlashed() {
            static BNM::Field<::GlobalNamespace::GRAbilityFlashed*> _field = GetClass().GetField(O("abilityFlashed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityMoveToTarget* GetAbilityInvestigate() {
            static BNM::Field<::GlobalNamespace::GRAbilityMoveToTarget*> _field = GetClass().GetField(O("abilityInvestigate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityJump* GetAbilityJump() {
            static BNM::Field<::GlobalNamespace::GRAbilityJump*> _field = GetClass().GetField(O("abilityJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityKeepDistance* GetAbilityKeepDistance() {
            static BNM::Field<::GlobalNamespace::GRAbilityKeepDistance*> _field = GetClass().GetField(O("abilityKeepDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityPatrol* GetAbilityPatrol() {
            static BNM::Field<::GlobalNamespace::GRAbilityPatrol*> _field = GetClass().GetField(O("abilityPatrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityStagger* GetAbilityStagger() {
            static BNM::Field<::GlobalNamespace::GRAbilityStagger*> _field = GetClass().GetField(O("abilityStagger"));
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
        ::GlobalNamespace::GRArmorEnemy* GetArmor() {
            static BNM::Field<::GlobalNamespace::GRArmorEnemy*> _field = GetClass().GetField(O("armor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAttackAbilitySound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("attackAbilitySound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSecondarySource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSecondarySource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetBehaviorEndTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetBestTargetNetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("bestTargetNetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayer* GetBestTargetPlayer() {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("bestTargetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetBones() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetChaseAbilitySound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("chaseAbilitySound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetChaseColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("chaseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCoreMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("coreMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRCollectible* GetCorePrefab() {
            static BNM::Field<::GlobalNamespace::GRCollectible*> _field = GetClass().GetField(O("corePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyRanged_Behavior GetCurrBehavior() {
            static BNM::Field<::GlobalNamespace::GREnemyRanged_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyRanged_BodyState GetCurrBodyState() {
            static BNM::Field<::GlobalNamespace::GREnemyRanged_BodyState> _field = GetClass().GetField(O("currBodyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDamagedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("damagedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamagedSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("damagedSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugLog() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDefaultColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("defaultColor"));
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
        ::GameObject* GetFxDamaged() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxDamaged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeadLightReset() {
            static BNM::Field<bool> _field = GetClass().GetField(O("headLightReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadRemovalFrame() {
            static BNM::Field<float> _field = GetClass().GetField(O("headRemovalFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetHeadRemovaltime() {
            static BNM::Field<double> _field = GetClass().GetField(O("headRemovaltime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeadRemoved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("headRemoved"));
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
        void* GetInvestigateLocation() {
            static BNM::Field<void*> _field = GetClass().GetField(O("investigateLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHitPlayerTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHitPlayerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastMoving"));
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
        float GetLoseSightDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("loseSightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinTimeBetweenHits() {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNavAgent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextPatrolNode() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPatrolNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath() {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProjectileHasImpacted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("projectileHasImpacted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectileHitRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileHitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetProjectileImpactTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("projectileImpactTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectileSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetQueuedFiringPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("queuedFiringPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetQueuedFiringTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("queuedFiringTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetQueuedTargetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("queuedTargetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRangedAttackChargeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackChargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRangedAttackDistMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackDistMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRangedAttackDistMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackDistMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRangedAttackQueued() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rangedAttackQueued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRangedAttackRecoverTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackRecoverTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRangedFiringPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rangedFiringPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRangedProjectileFirePoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rangedProjectileFirePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRangedProjectileInstance() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rangedProjectileInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRangedProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rangedProjectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRangedTargetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rangedTargetPosition"));
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
        float GetSearchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("searchTime"));
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
        float GetSightDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightFOV() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightLostFollowStopTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightLostFollowStopTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpitterHeadInHand() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadInHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpitterHeadInHandLight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadInHandLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpitterHeadInHandVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadInHandVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpitterHeadOnShoulders() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadOnShoulders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpitterHeadOnShouldersLight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadOnShouldersLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpitterHeadOnShouldersVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadOnShouldersVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpitterLightTurnOffDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("spitterLightTurnOffDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpitterLightTurnOffTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("spitterLightTurnOffTime"));
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
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        float GetTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVisibilityLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibilityLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAbilityDie(::GlobalNamespace::GRAbilityDie* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityFlashed(::GlobalNamespace::GRAbilityFlashed* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityFlashed*> _field = GetClass().GetField(O("abilityFlashed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityMoveToTarget*> _field = GetClass().GetField(O("abilityInvestigate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityJump(::GlobalNamespace::GRAbilityJump* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityJump*> _field = GetClass().GetField(O("abilityJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityKeepDistance(::GlobalNamespace::GRAbilityKeepDistance* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityKeepDistance*> _field = GetClass().GetField(O("abilityKeepDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityPatrol(::GlobalNamespace::GRAbilityPatrol* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityPatrol*> _field = GetClass().GetField(O("abilityPatrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityStagger(::GlobalNamespace::GRAbilityStagger* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityStagger*> _field = GetClass().GetField(O("abilityStagger"));
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
        void SetArmor(::GlobalNamespace::GRArmorEnemy* value) {
            static BNM::Field<::GlobalNamespace::GRArmorEnemy*> _field = GetClass().GetField(O("armor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackAbilitySound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("attackAbilitySound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSecondarySource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSecondarySource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehaviorEndTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestTargetNetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("bestTargetNetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestTargetPlayer(::GlobalNamespace::GRPlayer* value) {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("bestTargetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBones(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaseAbilitySound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("chaseAbilitySound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaseColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("chaseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoreMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("coreMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCorePrefab(::GlobalNamespace::GRCollectible* value) {
            static BNM::Field<::GlobalNamespace::GRCollectible*> _field = GetClass().GetField(O("corePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrBehavior(::GlobalNamespace::GREnemyRanged_Behavior value) {
            static BNM::Field<::GlobalNamespace::GREnemyRanged_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrBodyState(::GlobalNamespace::GREnemyRanged_BodyState value) {
            static BNM::Field<::GlobalNamespace::GREnemyRanged_BodyState> _field = GetClass().GetField(O("currBodyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamagedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("damagedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamagedSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damagedSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugLog(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("defaultColor"));
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
        void SetFxDamaged(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxDamaged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadLightReset(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("headLightReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRemovalFrame(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headRemovalFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRemovaltime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("headRemovaltime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRemoved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("headRemoved"));
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
        void SetInvestigateLocation(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("investigateLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHitPlayerTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHitPlayerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastMoving"));
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
        void SetLoseSightDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loseSightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeBetweenHits(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNavAgent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPatrolNode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPatrolNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolPath(::GlobalNamespace::GRPatrolPath* value) {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileHasImpacted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("projectileHasImpacted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileHitRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileHitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileImpactTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("projectileImpactTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedFiringPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("queuedFiringPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedFiringTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("queuedFiringTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("queuedTargetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedAttackChargeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackChargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedAttackDistMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackDistMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedAttackDistMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackDistMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedAttackQueued(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rangedAttackQueued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedAttackRecoverTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rangedAttackRecoverTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedFiringPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rangedFiringPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedProjectileFirePoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rangedProjectileFirePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedProjectileInstance(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rangedProjectileInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rangedProjectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangedTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rangedTargetPosition"));
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
        void SetSearchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("searchTime"));
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
        void SetSightDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightFOV(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightLostFollowStopTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightLostFollowStopTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterHeadInHand(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadInHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterHeadInHandLight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadInHandLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterHeadInHandVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadInHandVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterHeadOnShoulders(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadOnShoulders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterHeadOnShouldersLight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadOnShouldersLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterHeadOnShouldersVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spitterHeadOnShouldersVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterLightTurnOffDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("spitterLightTurnOffDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpitterLightTurnOffTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("spitterLightTurnOffTime"));
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
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        void SetTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibilityLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibilityLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool CalculateLaunchDirection(::BNM::Structures::Unity::Vector3 startPos, ::BNM::Structures::Unity::Vector3 targetPos, float speed, ::BNM::Structures::Unity::Vector3& direction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CalculateLaunchDirection"), {"startPos", "targetPos", "speed", "direction"});
            return _m.Call(startPos, targetPos, speed, &direction);
        }
        void ChooseNewBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChooseNewBehavior"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableHeadInHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableHeadInHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableHeadOnShoulderAndHeadInHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableHeadOnShoulderAndHeadInHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableVFXForHeadInHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableVFXForHeadInHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableVFXForShoulderHead() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableVFXForShoulderHead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FireRangedAttack(::BNM::Structures::Unity::Vector3 launchPosition, ::BNM::Structures::Unity::Vector3 targetPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireRangedAttack"), {"launchPosition", "targetPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(launchPosition, targetPosition);
        }
        void ForceHeadToDeadState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceHeadToDeadState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ForceResetThrowableHead() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceResetThrowableHead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetDebugTextLines(::BNM::IL2CPP::Il2CppObject*& strings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDebugTextLines"), {"strings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&strings);
        }
        void InstantDeath() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InstantDeath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsHitValid(::GlobalNamespace::GameHitData hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHitValid"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hit);
        }
        bool IsMoving() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMoving"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnAgentJumpRequested(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAgentJumpRequested"), {"start", "end", "heightScale", "speedScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(start, end, heightScale, speedScale);
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
        void OnHitByFlash(::GlobalNamespace::GRTool* tool, ::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHitByFlash"), {"tool", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool, hit);
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
        void OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileInit"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
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
        void PlayAnim(::BNM::Structures::Mono::String* animName, float blendTime, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayAnim"), {"animName", "blendTime", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animName, blendTime, speed);
        }
        void RefreshBody() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshBody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestRangedAttack(::BNM::Structures::Unity::Vector3 firingPosition, ::BNM::Structures::Unity::Vector3 targetPosition, double fireTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRangedAttack"), {"firingPosition", "targetPosition", "fireTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(firingPosition, targetPosition, fireTime);
        }
        void SetBehavior(::GlobalNamespace::GREnemyRanged_Behavior newBehavior, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBehavior"), {"newBehavior", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBehavior, force);
        }
        void SetBodyState(::GlobalNamespace::GREnemyRanged_BodyState newBodyState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBodyState"), {"newBodyState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBodyState, force);
        }
        void SetHP(int hp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHP"), {"hp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hp);
        }
        void SetPatrolPath_1(int64_t entityCreateData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPatrolPath"), {"entityCreateData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityCreateData);
        }
        void Setup(int64_t entityCreateData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"entityCreateData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityCreateData);
        }
        void SoftResetThrowableHead() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SoftResetThrowableHead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TrySetBehavior(::GlobalNamespace::GREnemyRanged_Behavior newBehavior) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySetBehavior"), {"newBehavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newBehavior);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSearch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSearch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
