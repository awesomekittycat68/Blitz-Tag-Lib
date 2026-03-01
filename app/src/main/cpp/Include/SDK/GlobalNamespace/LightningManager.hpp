#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct LightningManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LightningManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetCurrentHourlySeed() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("currentHourlySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlashFadeInDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flashFadeInDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlashFadeOutDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flashFadeOutDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlashHoldDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flashHoldDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLightMapIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lightMapIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLightningAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("lightningAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLightningRunner() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lightningRunner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetLightningTimestampsRealtime() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("lightningTimestampsRealtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTimeBetweenFlashes() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTimeBetweenFlashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinTimeBetweenFlashes() {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenFlashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetMuffledLightning() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("muffledLightning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextLightningTimestampIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLightningTimestampIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRegularLightning() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("regularLightning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SRand GetRng() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rng"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentHourlySeed(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("currentHourlySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashFadeInDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flashFadeInDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashFadeOutDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flashFadeOutDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashHoldDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flashHoldDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightMapIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lightMapIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightningAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("lightningAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightningRunner(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lightningRunner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightningTimestampsRealtime(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("lightningTimestampsRealtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTimeBetweenFlashes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTimeBetweenFlashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeBetweenFlashes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenFlashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMuffledLightning(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("muffledLightning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextLightningTimestampIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLightningTimestampIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegularLightning(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("regularLightning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRng(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rng"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DoLightningStrike() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoLightningStrike"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetHourStart(int64_t& seed, float& timestampRealtime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetHourStart"), {"seed", "timestampRealtime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&seed, &timestampRealtime);
        }
        void InitializeRng() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeRng"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* LightningEffectRunner() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LightningEffectRunner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnTimeChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
