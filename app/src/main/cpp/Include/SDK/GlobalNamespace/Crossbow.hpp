#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimHashId.hpp"
#include "ProjectileWeapon.hpp"

namespace GlobalNamespace {
    struct Crossbow : ::GlobalNamespace::ProjectileWeapon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Crossbow");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>* GetCranks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>*> _field = GetClass().GetField(O("cranks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankSoundContinueDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankSoundContinueDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankSoundDegrees() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankSoundDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankSoundDegreesThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankSoundDegreesThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankTotalDegreesToReload() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankTotalDegreesToReload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetDummyProjectile() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("dummyProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimHashId GetFireHashID() {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("FireHashID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLaunchPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoadFraction() {
            static BNM::Field<float> _field = GetClass().GetField(O("loadFraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayingCrankSoundUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("playingCrankSoundUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetReloadAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("reloadAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetReloadCompleteAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("reloadComplete_audioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimHashId GetReloadFractionHashID() {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("ReloadFractionHashID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalCrankDegrees() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalCrankDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasPressingTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPressingTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCranks(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>*> _field = GetClass().GetField(O("cranks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankSoundContinueDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankSoundContinueDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankSoundDegrees(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankSoundDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankSoundDegreesThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankSoundDegreesThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankTotalDegreesToReload(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankTotalDegreesToReload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummyProjectile(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("dummyProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireHashID(::GlobalNamespace::AnimHashId value) {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("FireHashID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadFraction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loadFraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayingCrankSoundUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playingCrankSoundUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReloadAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("reloadAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReloadCompleteAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("reloadComplete_audioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReloadFractionHashID(::GlobalNamespace::AnimHashId value) {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("ReloadFractionHashID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalCrankDegrees(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalCrankDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasPressingTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPressingTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchPosition_1() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLaunchPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLaunchVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateReplicated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCrank(float degrees) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCrank"), {"degrees"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(degrees);
        }
        void SetReloadFraction(float newFraction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetReloadFraction"), {"newFraction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newFraction);
        }
    };
}
