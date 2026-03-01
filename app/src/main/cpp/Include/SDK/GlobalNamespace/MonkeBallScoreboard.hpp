#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeBallScoreboard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBallScoreboard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeBallGame* GetGame() {
            static BNM::Field<::GlobalNamespace::MonkeBallGame*> _field = GetClass().GetField(O("game"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGameEndSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gameEndSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameEndVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("gameEndVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGameStartSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gameStartSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameStartVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("gameStartVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPlayerJoinSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerJoinSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPlayerLeaveSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerLeaveSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetScoreSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("scoreSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScoreSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("scoreSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>* GetTeamDisplays() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>*> _field = GetClass().GetField(O("teamDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTimeRemainingLabel() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timeRemainingLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGame(::GlobalNamespace::MonkeBallGame* value) {
            static BNM::Field<::GlobalNamespace::MonkeBallGame*> _field = GetClass().GetField(O("game"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEndSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gameEndSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEndVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gameEndVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameStartSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gameStartSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameStartVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gameStartVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerJoinSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerJoinSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLeaveSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerLeaveSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("scoreSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scoreSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamDisplays(::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>*> _field = GetClass().GetField(O("teamDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeRemainingLabel(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timeRemainingLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PlayFX(::AudioClip* clip, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFX"), {"clip", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, volume);
        }
        void PlayGameEndFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayGameEndFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayGameStartFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayGameStartFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayPlayerJoinFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayPlayerJoinFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayPlayerLeaveFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayPlayerLeaveFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayScoreFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayScoreFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshScore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshTeamPlayers(int teamId, int numPlayers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTeamPlayers"), {"teamId", "numPlayers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, numPlayers);
        }
        void RefreshTime(::BNM::Structures::Mono::String* timeString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTime"), {"timeString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeString);
        }
        void Setup(::GlobalNamespace::MonkeBallGame* game) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"game"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(game);
        }
    };
}
