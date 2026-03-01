#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RaceVisual : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RaceVisual");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetRaceId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_raceId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRaceId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_raceId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RaceCheckpointManager* GetCheckpoints() {
            static BNM::Field<::GlobalNamespace::RaceCheckpointManager*> _field = GetClass().GetField(O("checkpoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCountdownSoundGoTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("countdownSoundGoTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetCountdownSoundPlayer() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("countdownSoundPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetCountdownText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("countdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetFinishLineText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("finishLineText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRaceEndSoundEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRaceEndSoundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastDisplayedCountdown() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastDisplayedCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextVisualRefreshTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextVisualRefreshTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RaceConsoleVisual* GetRaceConsoleVisual() {
            static BNM::Field<::GlobalNamespace::RaceConsoleVisual*> _field = GetClass().GetField(O("raceConsoleVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRaceEndSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("raceEndSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::RacingScoreboard*>* GetRaceScoreboards() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RacingScoreboard*>*> _field = GetClass().GetField(O("raceScoreboards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RacingScoreboard* GetRaceStartScoreboard() {
            static BNM::Field<::GlobalNamespace::RacingScoreboard*> _field = GetClass().GetField(O("raceStartScoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStartingWall() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startingWall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCheckpoints(::GlobalNamespace::RaceCheckpointManager* value) {
            static BNM::Field<::GlobalNamespace::RaceCheckpointManager*> _field = GetClass().GetField(O("checkpoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownSoundGoTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("countdownSoundGoTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownSoundPlayer(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("countdownSoundPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("countdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinishLineText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("finishLineText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRaceEndSoundEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRaceEndSoundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDisplayedCountdown(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastDisplayedCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextVisualRefreshTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextVisualRefreshTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceConsoleVisual(::GlobalNamespace::RaceConsoleVisual* value) {
            static BNM::Field<::GlobalNamespace::RaceConsoleVisual*> _field = GetClass().GetField(O("raceConsoleVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceEndSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("raceEndSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceScoreboards(::BNM::Structures::Mono::Array<::GlobalNamespace::RacingScoreboard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RacingScoreboard*>*> _field = GetClass().GetField(O("raceScoreboards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceStartScoreboard(::GlobalNamespace::RacingScoreboard* value) {
            static BNM::Field<::GlobalNamespace::RacingScoreboard*> _field = GetClass().GetField(O("raceStartScoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingWall(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startingWall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateStartingWall(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateStartingWall"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Button_StartRace(int laps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Button_StartRace"), {"laps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(laps);
        }
        void EnableRaceEndSound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableRaceEndSound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_raceId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_raceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPlayerNearCheckpoint(::GlobalNamespace::VRRig* player, int checkpoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerNearCheckpoint"), {"player", "checkpoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, checkpoint);
        }
        void OnCheckpointPassed(int index, ::GlobalNamespace::SoundBankPlayer* checkpointSound) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCheckpointPassed"), {"index", "checkpointSound"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, checkpointSound);
        }
        void OnCountdownStart(int laps, float goAfterInterval) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCountdownStart"), {"laps", "goAfterInterval"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(laps, goAfterInterval);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRaceEnded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRaceEnded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRaceReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRaceReset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRaceStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRaceStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_raceId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_raceId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRaceStartScoreboardText(::BNM::Structures::Mono::String* mainText, ::BNM::Structures::Mono::String* timesText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRaceStartScoreboardText"), {"mainText", "timesText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mainText, timesText);
        }
        void SetScoreboardText(::BNM::Structures::Mono::String* mainText, ::BNM::Structures::Mono::String* timesText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScoreboardText"), {"mainText", "timesText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mainText, timesText);
        }
        void ShowFinishLineText(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowFinishLineText"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
        void UpdateCountdown(int timeRemaining) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCountdown"), {"timeRemaining"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeRemaining);
        }
    };
}
