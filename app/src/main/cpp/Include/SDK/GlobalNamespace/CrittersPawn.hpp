#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"
#include "CrittersActor_CrittersActorType.hpp"
#include "crittersAttractorStruct.hpp"
#include "CrittersPawn_CreatureState.hpp"
#include "KeyValueStringPair.hpp"

namespace GlobalNamespace {
    struct CrittersPawn : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersPawn");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnDataChange(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDataChange(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetDespawnAnimationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_despawnAnimationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDespawnAnimTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("_despawnAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextDespawnCheck() {
            static BNM::Field<double> _field = GetClass().GetField(O("_nextDespawnCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextStuckCheck() {
            static BNM::Field<double> _field = GetClass().GetField(O("_nextStuckCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnAnimationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_spawnAnimationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpawnAnimTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("_spawnAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActorIdTarget() {
            static BNM::Field<int> _field = GetClass().GetField(O("actorIdTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>* GetAfraidOfList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>*> _field = GetClass().GetField(O("afraidOfList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>* GetAfraidOfTypes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>*> _field = GetClass().GetField(O("afraidOfTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetAnimTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("animTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttractedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("attractedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>* GetAttractedToList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>*> _field = GetClass().GetField(O("attractedToList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>* GetAttractedToTypes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>*> _field = GetClass().GetField(O("attractedToTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttractionLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("attractionLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetAttractionTarget() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("attractionTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoSeeFoodDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoSeeFoodDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAwakeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("awakeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetBodyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersCage* GetCageTarget() {
            static BNM::Field<::GlobalNamespace::CrittersCage*> _field = GetClass().GetField(O("cageTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCalmThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("calmThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanJump() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchableThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchableThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterConfiguration* GetCreatureConfiguration() {
            static BNM::Field<::GlobalNamespace::CritterConfiguration*> _field = GetClass().GetField(O("creatureConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetCurrentAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("currentAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentAnimTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentAttraction() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAttraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentFear() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentHunger() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentHunger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCurrentOngoingStateFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentOngoingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentSleepiness() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentSleepiness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersPawn_CreatureState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::CrittersPawn_CreatureState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentStruggle() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentStruggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorAttracted() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorAttracted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorCaged() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorCaged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorCaught() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorCaught"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorEating() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorEating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorIdle() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorScared() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorScared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorSeekingFood() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorSeekingFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorSleeping() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorSleeping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDebugColorStunned() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorStunned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetDebugStateIndicator() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("debugStateIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDespawnInHeighMovement() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("despawnInHeighMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDespawnStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("despawnStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEatingRadiusMaxSquared() {
            static BNM::Field<float> _field = GetClass().GetField(O("eatingRadiusMaxSquared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersFood* GetEatingTarget() {
            static BNM::Field<::GlobalNamespace::CrittersFood*> _field = GetClass().GetField(O("eatingTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEscapeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("escapeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* GetEyeScanData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _field = GetClass().GetField(O("eyeScanData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFearLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("fearLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetFearTarget() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("fearTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFudge() {
            static BNM::Field<float> _field = GetClass().GetField(O("fudge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGrabbedHaptics() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabbedHapticsStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersGrabber* GetGrabbedTarget() {
            static BNM::Field<::GlobalNamespace::CrittersGrabber*> _field = GetClass().GetField(O("grabbedTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHat() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHungerGainedPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("hungerGainedPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHungerLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("hungerLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHungryThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("hungryThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJumpCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJumpVariabilityTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpVariabilityTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetKillHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("killHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastSeenAttractionPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSeenAttractionPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastSeenFearPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSeenFearPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastTemplateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("LastTemplateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLifeTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLifeTimeStart() {
            static BNM::Field<double> _field = GetClass().GetField(O("lifeTimeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxAttraction() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxAttraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxFear() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHunger() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHunger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxJumpVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxJumpVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSleepiness() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSleepiness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxStruggle() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxStruggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMyRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("myRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetObstacleSeeDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("obstacleSeeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnDataChange() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDataChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>* GetOngoingStateFX() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>*> _field = GetClass().GetField(O("OngoingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOnReleasedFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("OnReleasedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRaycastHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRB() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRegionId() {
            static BNM::Field<int> _field = GetClass().GetField(O("regionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingSlowedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingSlowedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingStunnedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingStunnedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSatiatedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("satiatedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaredJumpCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaredJumpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaredThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaredThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSensoryRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("sensoryRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSleepinessGainedPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepinessGainedPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSleepinessLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepinessLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowSpeedMod() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowSpeedMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>* GetSoundsHeard() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("soundsHeard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpawningStartingPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawningStartingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSpawnInHeighMovement() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spawnInHeighMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpawnStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("spawnStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>* GetStartStateFX() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>*> _field = GetClass().GetField(O("StartStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GlobalNamespace::CrittersAnim*>* GetStateAnim() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GlobalNamespace::CrittersAnim*>*> _field = GetClass().GetField(O("stateAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStruggleGainedPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("struggleGainedPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStruggleLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("struggleLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTemplateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("TemplateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiredThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("tiredThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnattractedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("unattractedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVisionConeAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("visionConeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterVisuals* GetVisuals() {
            static BNM::Field<::GlobalNamespace::CritterVisuals*> _field = GetClass().GetField(O("visuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasSomethingInTheWay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSomethingInTheWay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWithinEatingRadius() {
            static BNM::Field<bool> _field = GetClass().GetField(O("withinEatingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDespawnAnimationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_despawnAnimationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnAnimTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_despawnAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextDespawnCheck(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_nextDespawnCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextStuckCheck(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_nextStuckCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnAnimationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_spawnAnimationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnAnimTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_spawnAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorIdTarget(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actorIdTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAfraidOfList(::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>*> _field = GetClass().GetField(O("afraidOfList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAfraidOfTypes(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>*> _field = GetClass().GetField(O("afraidOfTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("animTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attractedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractedToList(::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>*> _field = GetClass().GetField(O("attractedToList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractedToTypes(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersActor_CrittersActorType, float>*> _field = GetClass().GetField(O("attractedToTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attractionLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionTarget(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("attractionTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoSeeFoodDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoSeeFoodDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAwakeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("awakeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCageTarget(::GlobalNamespace::CrittersCage* value) {
            static BNM::Field<::GlobalNamespace::CrittersCage*> _field = GetClass().GetField(O("cageTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCalmThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("calmThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanJump(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchableThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchableThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatureConfiguration(::GlobalNamespace::CritterConfiguration* value) {
            static BNM::Field<::GlobalNamespace::CritterConfiguration*> _field = GetClass().GetField(O("creatureConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("currentAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAnimTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAttraction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAttraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentFear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentHunger(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentHunger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentOngoingStateFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentOngoingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSleepiness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentSleepiness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::CrittersPawn_CreatureState value) {
            static BNM::Field<::GlobalNamespace::CrittersPawn_CreatureState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStruggle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentStruggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorAttracted(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorAttracted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorCaged(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorCaged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorCaught(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorCaught"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorEating(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorEating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorIdle(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorScared(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorScared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorSeekingFood(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorSeekingFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorSleeping(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorSleeping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugColorStunned(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("debugColorStunned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugStateIndicator(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("debugStateIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnInHeighMovement(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("despawnInHeighMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("despawnStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEatingRadiusMaxSquared(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("eatingRadiusMaxSquared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEatingTarget(::GlobalNamespace::CrittersFood* value) {
            static BNM::Field<::GlobalNamespace::CrittersFood*> _field = GetClass().GetField(O("eatingTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEscapeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("escapeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeScanData(::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _field = GetClass().GetField(O("eyeScanData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fearLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearTarget(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("fearTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFudge(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fudge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedHaptics(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedHapticsStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedTarget(::GlobalNamespace::CrittersGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersGrabber*> _field = GetClass().GetField(O("grabbedTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHat(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHungerGainedPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hungerGainedPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHungerLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hungerLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHungryThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hungryThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumpCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumpVariabilityTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpVariabilityTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKillHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("killHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSeenAttractionPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSeenAttractionPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSeenFearPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSeenFearPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTemplateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LastTemplateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifeTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifeTimeStart(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lifeTimeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxAttraction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxAttraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxFear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHunger(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHunger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxJumpVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxJumpVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSleepiness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSleepiness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxStruggle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxStruggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("myRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObstacleSeeDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("obstacleSeeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDataChange(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDataChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOngoingStateFX(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>*> _field = GetClass().GetField(O("OngoingStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleasedFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("OnReleasedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRB(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("regionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingSlowedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingSlowedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingStunnedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingStunnedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSatiatedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("satiatedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaredJumpCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaredJumpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaredThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaredThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSensoryRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sensoryRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSleepinessGainedPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepinessGainedPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSleepinessLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepinessLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowSpeedMod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowSpeedMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundsHeard(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("soundsHeard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawningStartingPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawningStartingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnInHeighMovement(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spawnInHeighMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("spawnStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartStateFX(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GameObject*>*> _field = GetClass().GetField(O("StartStateFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateAnim(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GlobalNamespace::CrittersAnim*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersPawn_CreatureState, ::GlobalNamespace::CrittersAnim*>*> _field = GetClass().GetField(O("stateAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStruggleGainedPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("struggleGainedPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStruggleLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("struggleLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemplateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TemplateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiredThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tiredThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnattractedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("unattractedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisionConeAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("visionConeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisuals(::GlobalNamespace::CritterVisuals* value) {
            static BNM::Field<::GlobalNamespace::CritterVisuals*> _field = GetClass().GetField(O("visuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasSomethingInTheWay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSomethingInTheWay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWithinEatingRadius(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("withinEatingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AboveAttractedThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AboveAttractedThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool AboveFearThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AboveFearThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool AboveHungryThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AboveHungryThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool AboveSleepyThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AboveSleepyThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void add_OnDataChange_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDataChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        int AddActorDataToList(::BNM::IL2CPP::Il2CppObject*& objList) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddActorDataToList"), {"objList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&objList);
        }
        void AttractedStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttractedStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool AwareOfActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AwareOfActor"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actor);
        }
        bool BelowNotAfraidThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BelowNotAfraidThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool BelowNotHungryThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BelowNotHungryThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool BelowNotSleepyThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BelowNotSleepyThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool BelowUnAttractedThreshold() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BelowUnAttractedThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* BuildEyeScannerData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BuildEyeScannerData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanBeGrabbed(::GlobalNamespace::CrittersActor* grabbedBy) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanBeGrabbed"), {"grabbedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabbedBy);
        }
        bool CanJump() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanJump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanSeeActor(::BNM::Structures::Unity::Vector3 actorPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSeeActor"), {"actorPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorPosition);
        }
        void CapturedStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CapturedStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearOngoingStateFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearOngoingStateFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DespawnCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DespawningStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawningStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EatingStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EatingStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float GetAdditiveJumpDelay() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAdditiveJumpDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetCurrentStateName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentStateName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor, bool positionOverride, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset, bool disableGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedBy"), {"grabbingActor", "positionOverride", "localRotation", "localOffset", "disableGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
        }
        void GrabbedStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleRemoteReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRemoteReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void IdleStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IdleStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void IncreaseAttraction(float attractionAmount, ::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncreaseAttraction"), {"attractionAmount", "actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(attractionAmount, actor);
        }
        void IncreaseFear(float fearAmount, ::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncreaseFear"), {"fearAmount", "actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fearAmount, actor);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeAttractors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeAttractors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeTemplateValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeTemplateValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsGrabPossible(::GlobalNamespace::CrittersGrabber* actor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGrabPossible"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actor);
        }
        void JumpAwayFrom(::BNM::Structures::Unity::Vector3 targetPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JumpAwayFrom"), {"targetPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPos);
        }
        void JumpTowards(::BNM::Structures::Unity::Vector3 targetPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JumpTowards"), {"targetPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPos);
        }
        float JumpVelocityForDistanceAtAngle(float horizontalDistance, float angle) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("JumpVelocityForDistanceAtAngle"), {"horizontalDistance", "angle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(horizontalDistance, angle);
        }
        void LocalJump(float maxVel, float jumpAngle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalJump"), {"maxVel", "jumpAngle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maxVel, jumpAngle);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnCollisionExit(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionExit"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ProcessLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ProcessRemote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRemote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RandomJump() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RandomJump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Released(bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 impulse, ::BNM::Structures::Unity::Vector3 impulseRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Released"), {"keepWorldPosition", "rotation", "position", "impulse", "impulseRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keepWorldPosition, rotation, position, impulse, impulseRotation);
        }
        void RemoteGrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteGrabbedBy"), {"grabbingActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor);
        }
        void remove_OnDataChange_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDataChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RunningStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunningStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SeekingFoodStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SeekingFoodStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendDataByCrittersActorType(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDataByCrittersActorType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SetConfiguration(::GlobalNamespace::CritterConfiguration* getRandomConfiguration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetConfiguration"), {"getRandomConfiguration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(getRandomConfiguration);
        }
        void SetSpawnData(::BNM::Structures::Mono::Array<void*>* spawnData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSpawnData"), {"spawnData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawnData);
        }
        void SetState(::GlobalNamespace::CrittersPawn_CreatureState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetTemplate(int templateIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTemplate"), {"templateIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(templateIndex);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 linearVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"linearVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(linearVelocity);
        }
        void SleepingStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SleepingStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SomethingInTheWay(::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SomethingInTheWay"), {"direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(direction);
        }
        void SpawningStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawningStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartOngoingStateFX(::GlobalNamespace::CrittersPawn_CreatureState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartOngoingStateFX"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void StuckCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StuckCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Stunned(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stunned"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        void StunnedStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StunnedStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int TotalActorDataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TotalActorDataLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateCaged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCaged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFearAndAttraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFearAndAttraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int UpdateFromRPC(::BNM::Structures::Mono::Array<void*>* data, int startingIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdateFromRPC"), {"data", "startingIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, startingIndex);
        }
        void UpdateGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateHunger() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHunger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMoodSourceData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMoodSourceData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSleepiness() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSleepiness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSlowed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSlowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool UpdateSpecificActor(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSpecificActor"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        void UpdateStateAnim() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateAnim"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateColor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStruggle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStruggle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTemplate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTemplate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WaitingToDespawnStateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WaitingToDespawnStateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool WithinCaptureDistance(::GlobalNamespace::CrittersCage* actor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WithinCaptureDistance"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actor);
        }
    };
}
