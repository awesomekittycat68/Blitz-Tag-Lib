#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct Ballista : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Ballista");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int predictionLineSamples = 240;
        float GetLaunchSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LaunchSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
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
        int GetCollidingLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("collidingLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSpeedIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSpeedIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawTrajectoryOnLaunch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawTrajectoryOnLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireCompleteTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCompleteTime"));
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
        int GetIdleStateHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("idleStateHash"));
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
        ::Transform* GetLaunchEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchRampDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchRampDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchSpeed_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLaunchStart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoadStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("loadStartTime"));
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
        int GetNotCollidingLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("notCollidingLayer"));
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
        bool GetPlayerReadyToFire() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerReadyToFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerReadyToFireDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerReadyToFireDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetPredictionLinePoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("predictionLinePoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevStateHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("prevStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReloadDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("reloadDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetSpeedOneButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedOneButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSpeedOptions() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("speedOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetSpeedThreeButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedThreeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetSpeedTwoButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedTwoButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetSpeedZeroButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedZeroButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseSpeedOptions() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSpeedOptions"));
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
        void SetCollidingLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("collidingLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSpeedIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSpeedIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawTrajectoryOnLaunch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawTrajectoryOnLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireCompleteTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCompleteTime"));
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
        void SetIdleStateHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("idleStateHash"));
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
        void SetLaunchEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchRampDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchRampDistance"));
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
        void SetLoadStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loadStartTime"));
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
        void SetNotCollidingLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("notCollidingLayer"));
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
        void SetPlayerReadyToFire(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerReadyToFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerReadyToFireDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerReadyToFireDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPredictionLinePoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("predictionLinePoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevStateHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prevStateHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReloadDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reloadDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedOneButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedOneButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedOptions(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("speedOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedThreeButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedThreeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedTwoButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedTwoButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedZeroButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("speedZeroButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSpeedOptions(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSpeedOptions"));
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
        void FireBallistaRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireBallistaRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void FireLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_LaunchSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LaunchSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetPlayerBodyCenterPosition(::GorillaLocomotion::GTPlayer* player) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPlayerBodyCenterPosition"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void RefreshButtonColors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshButtonColors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetSpeedIndex(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSpeedIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void TriggerFire() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerFire"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerLoad"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePredictionLine() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePredictionLine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
