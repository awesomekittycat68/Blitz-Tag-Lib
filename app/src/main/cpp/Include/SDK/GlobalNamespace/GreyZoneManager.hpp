#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GreyZoneManager : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GreyZoneManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetGravityFactorSelection() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GravityFactorSelection"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetGreyZoneActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_GreyZoneActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetGreyZoneAvailable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_GreyZoneAvailable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetSummoningProgress() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_SummoningProgress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::GlobalNamespace::ShaderHashId GetGreyZoneActive_f() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GreyZoneActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTickRunning_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_tickRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GreyZoneSummoner*>* GetActiveSummoners() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GreyZoneSummoner*>*> _field = GetClass().GetField(O("activeSummoners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAmbienceFadeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("ambienceFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAudioFadeCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("audioFadeCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceTimeOfDayToNight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceTimeOfDayToNight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetGravityFactorOptions() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("gravityFactorOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGravityFactorOptionSelection() {
            static BNM::Field<int> _field = GetClass().GetField(O("gravityFactorOptionSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGravityOverrideSet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gravityOverrideSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityReductionAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityReductionAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetGreyZoneActivationTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("greyZoneActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGreyZoneActive_f_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("greyZoneActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGreyZoneActiveDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("greyZoneActiveDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGreyZoneAmbience() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("greyZoneAmbience"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGreyZoneAmbienceVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("greyZoneAmbienceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGreyZoneAvailableDayOfYear() {
            static BNM::Field<int> _field = GetClass().GetField(O("greyZoneAvailableDayOfYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetGreyZoneParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("greyZoneParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GreyZoneManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GreyZoneManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        void* GetInvalidSummoners() {
            static BNM::Field<void*> _field = GetClass().GetField(O("invalidSummoners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MoonController* GetMoonController() {
            static BNM::Field<::GlobalNamespace::MoonController*> _field = GetClass().GetField(O("moonController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnGreyZoneActivated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGreyZoneActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnGreyZoneDeactivated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGreyZoneDeactivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetParticlePredictiveSpawnMaxDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("particlePredictiveSpawnMaxDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetParticlePredictiveSpawnVelocityFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("particlePredictiveSpawnVelocityFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhotonConnectedDuringActivation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("photonConnectedDuringActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* GetRoomPlayerList() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("roomPlayerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSimpleGravityFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("simpleGravityFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSkyMonsterDistGravityRampBuffer() {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterDistGravityRampBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSkyMonsterMovementEnterTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterMovementEnterTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSkyMonsterMovementExitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterMovementExitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSkyMonsterMovementVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterMovementVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummoningActivationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* GetSummoningPlayerProgress() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("summoningPlayerProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, void*>* GetSummoningPlayers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, void*>*> _field = GetClass().GetField(O("summoningPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummoningProgress_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGreyZoneActive(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GreyZoneActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTickRunning_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_tickRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveSummoners(::BNM::Structures::Mono::List<::GlobalNamespace::GreyZoneSummoner*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GreyZoneSummoner*>*> _field = GetClass().GetField(O("activeSummoners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmbienceFadeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ambienceFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioFadeCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("audioFadeCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceTimeOfDayToNight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceTimeOfDayToNight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityFactorOptions(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("gravityFactorOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityFactorOptionSelection(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gravityFactorOptionSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityOverrideSet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gravityOverrideSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityReductionAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityReductionAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneActivationTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("greyZoneActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneActive_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("greyZoneActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneActiveDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("greyZoneActiveDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneAmbience(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("greyZoneAmbience"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneAmbienceVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("greyZoneAmbienceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneAvailableDayOfYear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("greyZoneAvailableDayOfYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("greyZoneParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GreyZoneManager* value) {
            static BNM::Field<::GlobalNamespace::GreyZoneManager*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetInvalidSummoners(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("invalidSummoners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoonController(::GlobalNamespace::MoonController* value) {
            static BNM::Field<::GlobalNamespace::MoonController*> _field = GetClass().GetField(O("moonController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGreyZoneActivated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGreyZoneActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGreyZoneDeactivated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGreyZoneDeactivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticlePredictiveSpawnMaxDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("particlePredictiveSpawnMaxDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticlePredictiveSpawnVelocityFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("particlePredictiveSpawnVelocityFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonConnectedDuringActivation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("photonConnectedDuringActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomPlayerList(::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("roomPlayerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSimpleGravityFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("simpleGravityFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyMonsterDistGravityRampBuffer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterDistGravityRampBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyMonsterMovementEnterTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterMovementEnterTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyMonsterMovementExitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterMovementExitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyMonsterMovementVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("skyMonsterMovementVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningActivationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningPlayerProgress(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("summoningPlayerProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningPlayers(::BNM::Structures::Mono::Dictionary<int, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, void*>*> _field = GetClass().GetField(O("summoningPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateGreyZoneAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateGreyZoneAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ActivateGreyZoneLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateGreyZoneLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthorityUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int DayNightOverrideFunction(int inputIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DayNightOverrideFunction"), {"inputIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inputIndex);
        }
        void DeactivateGreyZoneAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateGreyZoneAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeactivateGreyZoneLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateGreyZoneLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeregisterSummoner(::GlobalNamespace::GreyZoneSummoner* summoner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterSummoner"), {"summoner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(summoner);
        }
        ::BNM::Coroutine::IEnumerator* FadeAudioIn(::AudioSource* source, float maxVolume, float duration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("FadeAudioIn"), {"source", "maxVolume", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(source, maxVolume, duration);
        }
        ::BNM::Coroutine::IEnumerator* FadeAudioOut(::AudioSource* source, float duration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("FadeAudioOut"), {"source", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(source, duration);
        }
        void ForceStopGreyZone() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceStopGreyZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_GravityFactorSelection() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GravityFactorSelection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_GreyZoneActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_GreyZoneActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_GreyZoneAvailable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_GreyZoneAvailable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_SummoningProgress() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_SummoningProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GravityOverrideFunction(::GorillaLocomotion::GTPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GravityOverrideFunction"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void LocalSimpleActivation(bool onOff, float gravityFactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalSimpleActivation"), {"onOff", "gravityFactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onOff, gravityFactor);
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
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void OnPlayerEnteredRoom(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::Photon_Realtime::Player* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnPlayerPropertiesUpdate(::Photon_Realtime::Player* targetPlayer, ::ExitGames_Client_Photon::Hashtable* changedProps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerPropertiesUpdate"), {"targetPlayer", "changedProps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer, changedProps);
        }
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
        }
        void RegisterMoon(::GlobalNamespace::MoonController* moon) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterMoon"), {"moon"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(moon);
        }
        void RegisterSummoner(::GlobalNamespace::GreyZoneSummoner* summoner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSummoner"), {"summoner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(summoner);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SharedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SimpleGravityOverrideFunction(::GorillaLocomotion::GTPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimpleGravityOverrideFunction"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void UnregisterMoon(::GlobalNamespace::MoonController* moon) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterMoon"), {"moon"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(moon);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSummonerVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSummonerVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateSummoningPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateSummoningPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VRRigEnteredSummonerProximity(::GlobalNamespace::VRRig* rig, ::GlobalNamespace::GreyZoneSummoner* summoner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VRRigEnteredSummonerProximity"), {"rig", "summoner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, summoner);
        }
        void VRRigExitedSummonerProximity(::GlobalNamespace::VRRig* rig, ::GlobalNamespace::GreyZoneSummoner* summoner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VRRigExitedSummonerProximity"), {"rig", "summoner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, summoner);
        }
    };
}
