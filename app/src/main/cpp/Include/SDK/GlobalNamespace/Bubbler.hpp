#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct Bubbler : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bubbler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetWorksInWater() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_worksInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllBubblesPopped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allBubblesPopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Behaviour*>* GetBehavioursToEnableWhenTriggerPressed() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Behaviour*>*> _field = GetClass().GetField(O("behavioursToEnableWhenTriggerPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetBubbleParticleArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("bubbleParticleArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetBubbleParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("bubbleParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetBubblerAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("bubblerAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<uint32_t>* GetCurrentParticles() {
            static BNM::Field<::BNM::Structures::Mono::List<uint32_t>*> _field = GetClass().GetField(O("currentParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableActivation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableDeactivation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableDeactivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFan() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFanYaxisinstead() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fanYaxisinstead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGameObjectActiveOnlyWhileTriggerDown() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gameObjectActiveOnlyWhileTriggerDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasActiveOnlyComponent() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasActiveOnlyComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBubblerAudio() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBubblerAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasFan() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasParticleSystem() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPopBubbleAudio() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPopBubbleAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialTriggerDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialTriggerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialTriggerPull() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialTriggerPull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOngoingStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("ongoingStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOutPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("outPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<uint32_t, ::BNM::Structures::Unity::Vector3>* GetParticleInfoDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint32_t, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("particleInfoDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetPopBubbleAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("popBubbleAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetWorksInWater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_worksInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllBubblesPopped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allBubblesPopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehavioursToEnableWhenTriggerPressed(::BNM::Structures::Mono::Array<::Behaviour*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Behaviour*>*> _field = GetClass().GetField(O("behavioursToEnableWhenTriggerPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleParticleArray(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("bubbleParticleArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("bubbleParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubblerAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("bubblerAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentParticles(::BNM::Structures::Mono::List<uint32_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<uint32_t>*> _field = GetClass().GetField(O("currentParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableActivation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableDeactivation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableDeactivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFan(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFanYaxisinstead(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fanYaxisinstead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameObjectActiveOnlyWhileTriggerDown(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gameObjectActiveOnlyWhileTriggerDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasActiveOnlyComponent(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasActiveOnlyComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBubblerAudio(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBubblerAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasFan(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasParticleSystem(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPopBubbleAudio(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPopBubbleAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialTriggerDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialTriggerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialTriggerPull(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialTriggerPull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOngoingStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ongoingStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("outPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleInfoDict(::BNM::Structures::Mono::Dictionary<uint32_t, ::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint32_t, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("particleInfoDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopBubbleAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("popBubbleAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanActivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanDeactivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitToDefault() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitToDefault"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void ResetToDefaultState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToDefaultState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
