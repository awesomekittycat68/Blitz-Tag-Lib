#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveManager_GameState.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveTimerDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveTimerDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ParticleSystem* GetBronzeCelebration() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("bronzeCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetCelebrationAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("celebrationAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCurrentBackground() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveManager_GameState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetGoldCelebration() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("goldCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlayingBackground() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playingBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPostRoundBackground() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("postRoundBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TextMeshPro*>* GetPostRoundTimerText() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TextMeshPro*>*> _field = GetClass().GetField(O("postRoundTimerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("prevTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetResultsDisplay() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("resultsDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSilverCelebration() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("silverCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStartCountdownBackground() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startCountdownBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetTimerColorPlaying() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("timerColorPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetTimerColorPostRound() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("timerColorPostRound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetTimerColorStart() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("timerColorStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTimerDisplay() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timerDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTimerDisplay2() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timerDisplay2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetTintableCelebration() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("tintableCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaitingForPlayersBackground() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForPlayersBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBronzeCelebration(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("bronzeCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCelebrationAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("celebrationAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBackground(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoldCelebration(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("goldCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayingBackground(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playingBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostRoundBackground(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("postRoundBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostRoundTimerText(::BNM::Structures::Mono::Array<::TextMeshPro*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TextMeshPro*>*> _field = GetClass().GetField(O("postRoundTimerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prevTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultsDisplay(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("resultsDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSilverCelebration(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("silverCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartCountdownBackground(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startCountdownBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerColorPlaying(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("timerColorPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerColorPostRound(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("timerColorPostRound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerColorStart(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("timerColorStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerDisplay(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timerDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerDisplay2(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timerDisplay2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTintableCelebration(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("tintableCelebration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForPlayersBackground(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForPlayersBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisplayStandardTimer(bool bShow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisplayStandardTimer"), {"bShow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bShow);
        }
        void DoPostRoundShow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoPostRoundShow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Color GetTextColor(::GlobalNamespace::GorillaTagCompetitiveManager_GameState newState) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("GetTextColor"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newState);
        }
        void HandleOnGameStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnGameStateChanged"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void HandleOnTimeChanged(float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnTimeChanged"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
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
        ::GameObject* SelectBackground(::GlobalNamespace::GorillaTagCompetitiveManager_GameState newState) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("SelectBackground"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newState);
        }
        void SetNewBackground(::GlobalNamespace::GorillaTagCompetitiveManager_GameState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNewBackground"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
    };
}
