#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "crittersAttractorStruct.hpp"

namespace GlobalNamespace {
    struct CritterTemplate : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CritterTemplate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetHapticsBlurb() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_HapticsBlurb"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>* GetAfraidOfList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>*> _field = GetClass().GetField(O("afraidOfList"));
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
        ::GlobalNamespace::CrittersAnim* GetAttractionAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("attractionAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttractionLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("attractionLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetAttractionOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("attractionOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetAttractionStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("attractionStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAwakeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("awakeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCalmThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("calmThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetCapturedAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("capturedAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCapturedOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("capturedOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCapturedStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("capturedStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchableThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchableThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetDespawningAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("despawningAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDespawningOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("despawningOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDespawningStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("despawningStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetEatingAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("eatingAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEatingOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("eatingOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEatingStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("eatingStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEscapeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("escapeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetFearAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("fearAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFearLostPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("fearLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFearOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fearOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFearStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fearStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetGrabbedAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("grabbedAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGrabbedOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGrabbedStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGrabbedStopFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedStopFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGrabbedStruggleHaptics() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedStruggleHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabbedStruggleHapticsStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedStruggleHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHatChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("hatChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetHats() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("hats"));
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
        ::GlobalNamespace::CrittersAnim* GetHungryAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("hungryAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHungryOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hungryOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHungryStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hungryStartFX"));
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
        float GetLifeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
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
        float GetMaxSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSize"));
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
        float GetMinSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetModifiedValues() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("modifiedValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterTemplate* GetParent() {
            static BNM::Field<::GlobalNamespace::CritterTemplate*> _field = GetClass().GetField(O("parent"));
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
        ::GlobalNamespace::CrittersAnim* GetSleepAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("sleepAnim"));
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
        ::GameObject* GetSleepOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sleepOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSleepStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sleepStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetSpawningAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("spawningAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpawningOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spawningOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpawningStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spawningStartFX"));
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
        ::GlobalNamespace::CrittersAnim* GetStunnedAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("stunnedAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStunnedOngoingFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stunnedOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStunnedStartFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stunnedStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTemperament() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("temperament"));
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
        void SetAfraidOfList(::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::crittersAttractorStruct>*> _field = GetClass().GetField(O("afraidOfList"));
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
        void SetAttractionAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("attractionAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attractionLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("attractionOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("attractionStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAwakeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("awakeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCalmThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("calmThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCapturedAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("capturedAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCapturedOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("capturedOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCapturedStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("capturedStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchableThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchableThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawningAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("despawningAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawningOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("despawningOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawningStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("despawningStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEatingAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("eatingAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEatingOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("eatingOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEatingStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("eatingStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEscapeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("escapeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("fearAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearLostPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fearLostPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fearOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fearStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("grabbedAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedStopFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedStopFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedStruggleHaptics(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedStruggleHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedStruggleHapticsStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedStruggleHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHatChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hatChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHats(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("hats"));
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
        void SetHungryAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("hungryAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHungryOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hungryOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHungryStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hungryStartFX"));
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
        void SetLifeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
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
        void SetMaxSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSize"));
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
        void SetMinSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModifiedValues(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("modifiedValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParent(::GlobalNamespace::CritterTemplate* value) {
            static BNM::Field<::GlobalNamespace::CritterTemplate*> _field = GetClass().GetField(O("parent"));
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
        void SetSleepAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("sleepAnim"));
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
        void SetSleepOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sleepOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSleepStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sleepStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawningAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("spawningAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawningOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spawningOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawningStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spawningStartFX"));
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
        void SetStunnedAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("stunnedAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStunnedOngoingFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stunnedOngoingFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStunnedStartFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("stunnedStartFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemperament(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("temperament"));
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
        void ApplyBehaviour(::GlobalNamespace::CrittersPawn* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyBehaviour"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void ApplyBehaviourFX(::GlobalNamespace::CrittersPawn* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyBehaviourFX"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void ApplyToCritter(::GlobalNamespace::CrittersPawn* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyToCritter"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        ::BNM::Structures::Mono::String* get_HapticsBlurb() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_HapticsBlurb"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        T GetParentValue(::BNM::Structures::Mono::String* valueName) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetParentValue"), {"valueName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(valueName);
        }
        template <typename T>
        T GetTemplateValue(::BNM::Structures::Mono::String* valueName) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetTemplateValue"), {"valueName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(valueName);
        }
        bool IsValueModified(::BNM::Structures::Mono::String* valueName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValueModified"), {"valueName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(valueName);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterModifiedBehaviour() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterModifiedBehaviour"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterModifiedVisual() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterModifiedVisual"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMaxStrength(float maxStrength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaxStrength"), {"maxStrength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maxStrength);
        }
        void SetMeanStrength(float meanStrength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMeanStrength"), {"meanStrength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(meanStrength);
        }
    };
}
