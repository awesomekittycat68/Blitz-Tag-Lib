#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "Tappable.hpp"
#include "TappableGuardianIdol_IdolActivationSound.hpp"
#include "TappableGuardianIdol_StageActivatedObject.hpp"

namespace GlobalNamespace {
    struct TappableGuardianIdol : ::GlobalNamespace::Tappable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TappableGuardianIdol");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsChangingPositions() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isChangingPositions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsChangingPositions(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isChangingPositions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetActivateSound() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_activateSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetActivationRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_activationRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>* GetActivationStageSounds() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>*> _field = GetClass().GetField(O("_activationStageSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivationState() {
            static BNM::Field<int> _field = GetClass().GetField(O("_activationState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_audio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBaseLookRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_baseLookRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetColliderBaseRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("_colliderBaseRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetDescentSound() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_descentSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lookInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLookRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_lookRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLookRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lookRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRandomLookChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_randomLookChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>* GetStageActivatedObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>*> _field = GetClass().GetField(O("_stageActivatedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetZoneIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_zoneIsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetActivatedFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("activatedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActiveHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("activeHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBulgeCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bulgeCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBulgeScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("bulgeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetExplodeFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("explodeFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFallDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("fallDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFallStartOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fallStartOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFinalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("finalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFloatDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("floatDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetIdolMeshRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("idolMeshRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetIdolVisualRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("idolVisualRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInactiveDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("inactiveDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActivationReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActivationReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetKnockbackOnActivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetKnockbackOnLand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnLand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetKnockbackOnTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLandedFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("landedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequiredTapDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredTapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStartFallFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startFallFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SphereCollider* GetTapCollision() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("tapCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetTapFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("tapFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetTrailFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("trailFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTransitionPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("transitionPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaGuardianZoneManager* GetZoneManager() {
            static BNM::Field<::GlobalNamespace::GorillaGuardianZoneManager*> _field = GetClass().GetField(O("zoneManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivateSound(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_activateSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_activationRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationStageSounds(::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>*> _field = GetClass().GetField(O("_activationStageSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_activationState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_audio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseLookRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_baseLookRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderBaseRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_colliderBaseRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescentSound(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_descentSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lookInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_lookRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lookRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomLookChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_randomLookChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStageActivatedObjects(::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>*> _field = GetClass().GetField(O("_stageActivatedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_zoneIsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivatedFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("activatedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activeHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBulgeCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bulgeCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBulgeScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bulgeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExplodeFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("explodeFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fallDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallStartOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fallStartOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("finalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloatDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("floatDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolMeshRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("idolMeshRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolVisualRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("idolVisualRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInactiveDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inactiveDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActivationReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActivationReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackOnActivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackOnLand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnLand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackOnTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandedFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("landedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredTapDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredTapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartFallFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startFallFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapCollision(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("tapCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("tapFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("trailFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransitionPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("transitionPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneManager(::GlobalNamespace::GorillaGuardianZoneManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaGuardianZoneManager*> _field = GetClass().GetField(O("zoneManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* DoLookingAround() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoLookingAround"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float EaseInOut(float input) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("EaseInOut"), {"input"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input);
        }
        bool get_isChangingPositions() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isChangingPositions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MovePositions(::BNM::Structures::Unity::Vector3 finalPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MovePositions"), {"finalPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(finalPosition);
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
        void OnTapLocal(float tapStrength, float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"tapStrength", "tapTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength, tapTime, info);
        }
        void OnZoneActiveStateChanged(bool zoneActive) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneActiveStateChanged"), {"zoneActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneActive);
        }
        void set_isChangingPositions(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isChangingPositions"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetPosition(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPosition"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position);
        }
        ::BNM::Coroutine::IEnumerator* ShowActivationEffect() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ShowActivationEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void StartLookingAround() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartLookingAround"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopLookingAround() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopLookingAround"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* TransitionToNextIdol() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TransitionToNextIdol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateActivationProgress(float rawProgress, bool progressing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActivationProgress"), {"rawProgress", "progressing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rawProgress, progressing);
        }
        void UpdateStageActivatedObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStageActivatedObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
