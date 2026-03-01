#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveManager_GameState.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveRoundBuzzer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveRoundBuzzer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveManager_GameState GetLastState() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastStateRemainingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStateRemainingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetNeedMorePlayerClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("needMorePlayerClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRoundCountdownClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundCountdownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRoundEndClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundEndClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRoundEndCountdownDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("roundEndCountdownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRoundEndingCountdownClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundEndingCountdownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRoundStartClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundStartClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStateRemainingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStateRemainingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeedMorePlayerClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("needMorePlayerClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundCountdownClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundCountdownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundEndClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundEndClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundEndCountdownDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("roundEndCountdownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundEndingCountdownClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundEndingCountdownClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundStartClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("roundStartClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void OnStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void OnUpdateRemainingTime(float remainingTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemainingTime"), {"remainingTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remainingTime);
        }
        void PlaySFX(::AudioClip* clip) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySFX"), {"clip"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip);
        }
        void PlaySFX(::AudioClip* clip, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySFX"), {"clip", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, volume);
        }
    };
}
