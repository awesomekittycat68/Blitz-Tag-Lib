#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRFirstTimeUserExperience_TransitionState.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct GRFirstTimeUserExperience : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRFirstTimeUserExperience");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DisableGameObjectDelayed*>* GetDelayObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DisableGameObjectDelayed*>*> _field = GetClass().GetField(O("delayObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetFlickerAudio() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("flickerAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFlickerAudioCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("flickerAudioCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlickerDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flickerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFlickerLightWasOff() {
            static BNM::Field<bool> _field = GetClass().GetField(O("flickerLightWasOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFlickerSphere() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flickerSphere"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFlickerSphereOrigParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("flickerSphereOrigParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFlickerTimeline() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("flickerTimeline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetJoinRoomTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinRoomTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLogoDisplayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("logoDisplayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLogoQuad() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("logoQuad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameLight* GetPlayerLight() {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("playerLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRootObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rootObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTeleportLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("teleportLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTeleportSettleTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportSettleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetTeleportZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("teleportZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTransitionDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("transitionDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState GetTransitionState() {
            static BNM::Field<::GlobalNamespace::GRFirstTimeUserExperience_TransitionState> _field = GetClass().GetField(O("transitionState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayObjects(::BNM::Structures::Mono::List<::GlobalNamespace::DisableGameObjectDelayed*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DisableGameObjectDelayed*>*> _field = GetClass().GetField(O("delayObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerAudio(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("flickerAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerAudioCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("flickerAudioCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flickerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerLightWasOff(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("flickerLightWasOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerSphere(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flickerSphere"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerSphereOrigParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("flickerSphereOrigParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerTimeline(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("flickerTimeline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinRoomTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinRoomTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogoDisplayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("logoDisplayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogoQuad(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("logoQuad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLight(::GlobalNamespace::GameLight* value) {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("playerLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRootObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rootObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("teleportLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportSettleTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportSettleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("teleportZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransitionDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("transitionDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransitionState(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState value) {
            static BNM::Field<::GlobalNamespace::GRFirstTimeUserExperience_TransitionState> _field = GetClass().GetField(O("transitionState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ChangeState(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void InterruptWaitingTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InterruptWaitingTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnZoneLoadComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneLoadComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemovePlayerPref() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayerPref"));
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
