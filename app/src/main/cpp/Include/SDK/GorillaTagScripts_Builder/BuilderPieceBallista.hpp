#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceBallista_BallistaState.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderPieceBallista : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderPieceBallista");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int predictionLineSamples = 240;
        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAppliedAnimatorPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("appliedAnimatorPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoLaunch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoLaunchDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoLaunchDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderPieceBallista_BallistaState GetBallistaState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceBallista_BallistaState> _field = GetClass().GetField(O("ballistaState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetCockSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("cockSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawTrajectoryOnLaunch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawTrajectoryOnLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetDisableWhileLaunching() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("disableWhileLaunching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetEnteredTriggerTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("enteredTriggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFireStateHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("fireStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFireTriggerHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("fireTriggerHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderSmallHandTrigger* GetHandTrigger() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*> _field = GetClass().GetField(O("handTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasLaunchParticles() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLaunchParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIdleStateHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("idleStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLaunchBigMonkes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("launchBigMonkes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLaunchBone() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchBone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("launchDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLaunchedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("launchedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLaunchEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetLaunchParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("launchParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchRampDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchRampDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetLaunchSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("launchSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLaunchStart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLoadCompleteTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("loadCompleteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetLoadSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("loadSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoadStateHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("loadStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoadTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("loadTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoadTriggerHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("loadTriggerHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPitchParamHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("pitchParamHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPlayerBodyOffsetFromHead() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("playerBodyOffsetFromHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerInTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerLaunched() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerMagnetismStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerMagnetismStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerPullInRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerPullInRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerReadyToFireDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerReadyToFireDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetPlayerRigInTrigger() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("playerRigInTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetPredictionLinePoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("predictionLinePoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPrepareForLaunchDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("prepareForLaunchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReloadDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("reloadDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlipOverrideDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("slipOverrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetTriggers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("triggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppliedAnimatorPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("appliedAnimatorPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoLaunch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoLaunchDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoLaunchDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallistaState(::GorillaTagScripts_Builder::BuilderPieceBallista_BallistaState value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceBallista_BallistaState> _field = GetClass().GetField(O("ballistaState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCockSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("cockSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawTrajectoryOnLaunch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawTrajectoryOnLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableWhileLaunching(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("disableWhileLaunching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnteredTriggerTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("enteredTriggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireStateHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fireStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireTriggerHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fireTriggerHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTrigger(::GorillaTagScripts_Builder::BuilderSmallHandTrigger* value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*> _field = GetClass().GetField(O("handTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasLaunchParticles(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLaunchParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleStateHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("idleStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchBigMonkes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("launchBigMonkes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchBone(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchBone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("launchDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("launchedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("launchParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchRampDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchRampDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("launchSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchStart(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadCompleteTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("loadCompleteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("loadSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadStateHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("loadStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loadTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadTriggerHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("loadTriggerHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchParamHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pitchParamHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerBodyOffsetFromHead(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("playerBodyOffsetFromHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerInTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLaunched(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerMagnetismStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerMagnetismStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerPullInRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerPullInRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerReadyToFireDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerReadyToFireDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRigInTrigger(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("playerRigInTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPredictionLinePoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("predictionLinePoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrepareForLaunchDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("prepareForLaunchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReloadDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reloadDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlipOverrideDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slipOverrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggers(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("triggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DebugDrawTrajectory(float duration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DebugDrawTrajectory"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(duration);
        }
        void FunctionalPieceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetPlayerBodyCenterPosition(::Transform* headTransform, float playerScale) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPlayerBodyCenterPosition"), {"headTransform", "playerScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(headTransform, playerScale);
        }
        bool IsStateValid(uint8_t state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsStateValid"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHandTriggerPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandTriggerPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceCreate(int pieceType, int pieceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceCreate"), {"pieceType", "pieceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId);
        }
        void OnPieceDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPiecePlacementDeserialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPiecePlacementDeserialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStateChanged(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnStateRequest(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateRequest"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void ResetFlags() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePredictionLine() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePredictionLine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateMaster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
