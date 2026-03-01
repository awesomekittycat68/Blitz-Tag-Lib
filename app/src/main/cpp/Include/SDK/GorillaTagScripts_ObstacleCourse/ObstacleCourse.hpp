#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ObstacleCourse_RaceState.hpp"

namespace GorillaTagScripts_ObstacleCourse {
    struct ObstacleCourse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ObstacleCourse", "ObstacleCourse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetWinnerActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_winnerActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWinnerActorNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_winnerActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetBannerRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("bannerRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetConfettiParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("confettiParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_ObstacleCourse::ObstacleCourse_RaceState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleCourse_RaceState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftGate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftGate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumPlayersOnCourse() {
            static BNM::Field<int> _field = GetClass().GetField(O("numPlayersOnCourse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightGate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightGate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_ObstacleCourse::WinnerScoreboard* GetScoreboard() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::WinnerScoreboard*> _field = GetClass().GetField(O("scoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_ObstacleCourse::TappableBell* GetTappableBell() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::TappableBell*> _field = GetClass().GetField(O("TappableBell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetWinnerRig() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("winnerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger*>* GetZoneTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger*>*> _field = GetClass().GetField(O("zoneTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBannerRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("bannerRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfettiParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("confettiParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts_ObstacleCourse::ObstacleCourse_RaceState value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleCourse_RaceState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftGate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftGate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumPlayersOnCourse(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numPlayersOnCourse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightGate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreboard(::GorillaTagScripts_ObstacleCourse::WinnerScoreboard* value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::WinnerScoreboard*> _field = GetClass().GetField(O("scoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTappableBell(::GorillaTagScripts_ObstacleCourse::TappableBell* value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::TappableBell*> _field = GetClass().GetField(O("TappableBell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWinnerRig(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("winnerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneTriggers(::BNM::Structures::Mono::Array<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger*>*> _field = GetClass().GetField(O("zoneTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Deserialize(int _winnerActorNumber, ::GorillaTagScripts_ObstacleCourse::ObstacleCourse_RaceState _currentState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deserialize"), {"_winnerActorNumber", "_currentState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_winnerActorNumber, _currentState);
        }
        void EndRace() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndRace"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_winnerActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_winnerActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InvokeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEndLineTrigger(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEndLineTrigger"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void OnPlayerEnterZone(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnterZone"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnPlayerExitZone(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerExitZone"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void PlayWinningEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayWinningEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestartTimer(bool playFx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartTimer"), {"playFx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFx);
        }
        void set_winnerActorNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_winnerActorNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStartingGate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStartingGate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState(::GorillaTagScripts_ObstacleCourse::ObstacleCourse_RaceState state, bool playFX) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"state", "playFX"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, playFX);
        }
    };
}
