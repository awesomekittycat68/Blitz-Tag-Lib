#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BetterDayNightManager_WeatherType.hpp"

namespace GlobalNamespace {
    struct TimeOfDayDependentAudio : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TimeOfDayDependentAudio");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::AudioSource*>* GetAudioSources() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("audioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDependentStuff() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dependentStuff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIncludesAudio() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includesAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsModified() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isModified"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMyEmissionModule() {
            static BNM::Field<void*> _field = GetClass().GetField(O("myEmissionModule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetMyParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("myParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager_WeatherType GetMyWeather() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_WeatherType> _field = GetClass().GetField(O("myWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNewCurve() {
            static BNM::Field<void*> _field = GetClass().GetField(O("newCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNewRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("newRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("positionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionMultiplierSet() {
            static BNM::Field<float> _field = GetClass().GetField(O("positionMultiplierSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingEmissionRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingEmissionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStepTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stepTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTimeOfDayDependent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("timeOfDayDependent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetVolumes() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("volumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSources(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("audioSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDependentStuff(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dependentStuff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludesAudio(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includesAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsModified(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isModified"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyEmissionModule(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("myEmissionModule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("myParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyWeather(::GlobalNamespace::BetterDayNightManager_WeatherType value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_WeatherType> _field = GetClass().GetField(O("myWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewCurve(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("newCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("newRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("positionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionMultiplierSet(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("positionMultiplierSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingEmissionRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingEmissionRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStepTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stepTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOfDayDependent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("timeOfDayDependent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumes(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("volumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTimeOfDay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTimeOfDay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
