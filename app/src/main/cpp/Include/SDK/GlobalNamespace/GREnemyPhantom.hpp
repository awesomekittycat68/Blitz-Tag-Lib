#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GREnemyPhantom_Behavior.hpp"
#include "GREnemyPhantom_BodyState.hpp"

namespace GlobalNamespace {
    struct GREnemyPhantom : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyPhantom");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAbilityWatch* GetAbilityAlert() {
            static BNM::Field<::GlobalNamespace::GRAbilityWatch*> _field = GetClass().GetField(O("abilityAlert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityAttackLatchOn* GetAbilityAttack() {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackLatchOn*> _field = GetClass().GetField(O("abilityAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityChase* GetAbilityChase() {
            static BNM::Field<::GlobalNamespace::GRAbilityChase*> _field = GetClass().GetField(O("abilityChase"));
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
        ::GlobalNamespace::GRAbilityIdle* GetAbilityMine() {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityMine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityWatch* GetAbilityRage() {
            static BNM::Field<::GlobalNamespace::GRAbilityWatch*> _field = GetClass().GetField(O("abilityRage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityMoveToTarget* GetAbilityReturn() {
            static BNM::Field<::GlobalNamespace::GRAbilityMoveToTarget*> _field = GetClass().GetField(O("abilityReturn"));
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
        ::GlobalNamespace::GameLight* GetAttackLight() {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("attackLight"));
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
        double GetBehaviorEndTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetBehaviorStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetBones() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
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
        ::GlobalNamespace::GREnemyPhantom_Behavior GetCurrBehavior() {
            static BNM::Field<::GlobalNamespace::GREnemyPhantom_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GREnemyPhantom_BodyState GetCurrBodyState() {
            static BNM::Field<::GlobalNamespace::GREnemyPhantom_BodyState> _field = GetClass().GetField(O("currBodyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
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
        int GetHp() {
            static BNM::Field<int> _field = GetClass().GetField(O("hp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetIdleLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("idleLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInvestigateLocation() {
            static BNM::Field<void*> _field = GetClass().GetField(O("investigateLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastStateChange() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNavAgent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameLight* GetNegativeLight() {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("negativeLight"));
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
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetRigsNearby() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigsNearby"));
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
        ::GlobalNamespace::AbilitySound* GetSoundAlert() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundAlert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundAttack() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundChase() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundChase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundMine() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundMine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundRage() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundRage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundReturn() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        void SetAbilityAlert(::GlobalNamespace::GRAbilityWatch* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityWatch*> _field = GetClass().GetField(O("abilityAlert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityAttack(::GlobalNamespace::GRAbilityAttackLatchOn* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackLatchOn*> _field = GetClass().GetField(O("abilityAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityChase(::GlobalNamespace::GRAbilityChase* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityChase*> _field = GetClass().GetField(O("abilityChase"));
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
        void SetAbilityMine(::GlobalNamespace::GRAbilityIdle* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityIdle*> _field = GetClass().GetField(O("abilityMine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityRage(::GlobalNamespace::GRAbilityWatch* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityWatch*> _field = GetClass().GetField(O("abilityRage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAbilityReturn(::GlobalNamespace::GRAbilityMoveToTarget* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityMoveToTarget*> _field = GetClass().GetField(O("abilityReturn"));
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
        void SetAttackLight(::GlobalNamespace::GameLight* value) {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("attackLight"));
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
        void SetBehaviorEndTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehaviorStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBones(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("bones"));
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
        void SetCurrBehavior(::GlobalNamespace::GREnemyPhantom_Behavior value) {
            static BNM::Field<::GlobalNamespace::GREnemyPhantom_Behavior> _field = GetClass().GetField(O("currBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrBodyState(::GlobalNamespace::GREnemyPhantom_BodyState value) {
            static BNM::Field<::GlobalNamespace::GREnemyPhantom_BodyState> _field = GetClass().GetField(O("currBodyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
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
        void SetHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("idleLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvestigateLocation(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("investigateLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStateChange(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNavAgent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNegativeLight(::GlobalNamespace::GameLight* value) {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("negativeLight"));
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
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigsNearby(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigsNearby"));
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
        void SetSoundAlert(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundAlert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundAttack(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundChase(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundChase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundMine(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundMine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundRage(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundRage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundReturn(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void SetBehavior(::GlobalNamespace::GREnemyPhantom_Behavior newBehavior, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBehavior"), {"newBehavior", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBehavior, force);
        }
        void SetBodyState(::GlobalNamespace::GREnemyPhantom_BodyState newBodyState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBodyState"), {"newBodyState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBodyState, force);
        }
        void SetHP(int hp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHP"), {"hp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hp);
        }
        void SetNextPatrolNode_1(int nextPatrolNode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNextPatrolNode"), {"nextPatrolNode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextPatrolNode);
        }
        void SetPatrolPath_1(int64_t createData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPatrolPath"), {"createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(createData);
        }
        void Setup(int64_t createData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(createData);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateAlert(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAlert"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
