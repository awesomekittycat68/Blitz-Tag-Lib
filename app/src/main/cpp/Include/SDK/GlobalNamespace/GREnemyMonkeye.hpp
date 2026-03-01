#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameHitData.hpp"
#include "GREnemyMonkeye_Behavior.hpp"
#include "GREnemyMonkeye_BodyState.hpp"

namespace GlobalNamespace {
    struct GREnemyMonkeye : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyMonkeye");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAbilityAttackSimpleWander* GetAbilityAttackDiscoWander() {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackSimpleWander*> _field = GetClass().GetField(O("abilityAttackDiscoWander"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityAttackLaser* GetAbilityAttackLaser() {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackLaser*> _field = GetClass().GetField(O("abilityAttackLaser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityAttackSimple* GetAbilityAttackSlamdown() {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackSimple*> _field = GetClass().GetField(O("abilityAttackSlamdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityChase* GetAbilityChase() {
            static BNM::Field<::GlobalNamespace::GRAbilityChase*> _field = GetClass().GetField(O("abilityChase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityDie* GetAbilityDie() {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilityIdle() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityIdle"));
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
        ::GlobalNamespace::GRAbilityPatrol* GetAbilityPatrol() {
            static BNM::Field<::GlobalNamespace::GRAbilityPatrol*> _field = GetClass().GetField(O("abilityPatrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityIdle* GetAbilitySearch() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilitySearch"));
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
        bool GetAllowStagger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowStagger"));
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
        float GetAttackRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackRange"));
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
        ::BNM::Structures::Mono::List<::Renderer*>* GetBones() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
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
        ::GlobalNamespace::GREnemyMonkeye_Behavior GetCurrBehavior() {
            static BNM::Field<::GlobalNamespace::GREnemyMonkeye_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyMonkeye_BodyState GetCurrBodyState() {
            static BNM::Field<::GlobalNamespace::GREnemyMonkeye_BodyState> _field = GetClass().GetField(O("currBodyState"));
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
        ::BNM::IL2CPP::Il2CppObject* GetNavAgent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath() {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
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
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTryHitPlayerCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tryHitPlayerCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAbilityAttackDiscoWander(::GlobalNamespace::GRAbilityAttackSimpleWander* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackSimpleWander*> _field = GetClass().GetField(O("abilityAttackDiscoWander"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackLaser(::GlobalNamespace::GRAbilityAttackLaser* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackLaser*> _field = GetClass().GetField(O("abilityAttackLaser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttackSlamdown(::GlobalNamespace::GRAbilityAttackSimple* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackSimple*> _field = GetClass().GetField(O("abilityAttackSlamdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityChase(::GlobalNamespace::GRAbilityChase* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityChase*> _field = GetClass().GetField(O("abilityChase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityDie(::GlobalNamespace::GRAbilityDie* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityDie*> _field = GetClass().GetField(O("abilityDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityIdle(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityIdle"));
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
        void SetAbilityPatrol(::GlobalNamespace::GRAbilityPatrol* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityPatrol*> _field = GetClass().GetField(O("abilityPatrol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilitySearch(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilitySearch"));
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
        void SetAllowStagger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowStagger"));
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
        void SetAttackRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackRange"));
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
        void SetBones(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
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
        void SetCurrBehavior(::GlobalNamespace::GREnemyMonkeye_Behavior value) {
            static BNM::Field<::GlobalNamespace::GREnemyMonkeye_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrBodyState(::GlobalNamespace::GREnemyMonkeye_BodyState value) {
            static BNM::Field<::GlobalNamespace::GREnemyMonkeye_BodyState> _field = GetClass().GetField(O("currBodyState"));
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
        void SetNavAgent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolPath(::GlobalNamespace::GRPatrolPath* value) {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
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
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        void SetTryHitPlayerCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tryHitPlayerCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void ChooseNewBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChooseNewBehavior"));
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
        void SetBehavior(::GlobalNamespace::GREnemyMonkeye_Behavior newBehavior, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBehavior"), {"newBehavior", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBehavior, force);
        }
        void SetBodyState(::GlobalNamespace::GREnemyMonkeye_BodyState newBodyState, bool force) {
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
        bool TryChooseAttackBehavior(float toPlayerDistSq) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryChooseAttackBehavior"), {"toPlayerDistSq"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(toPlayerDistSq);
        }
        ::BNM::Coroutine::IEnumerator* TryHitPlayer(::GlobalNamespace::GRPlayer* player) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TryHitPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool TrySetBehavior(::GlobalNamespace::GREnemyMonkeye_Behavior newBehavior) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySetBehavior"), {"newBehavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newBehavior);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
