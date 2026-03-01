#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "../GorillaTag_CosmeticSystem/ECosmeticSelectSide.hpp"

namespace GorillaTag_Cosmetics {
    struct ShakeReactorCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ShakeReactorCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int kFrequencyHistoryCount = 1;
        static constexpr float kNoReversalGraceMultiplier = 1.0f;
        static constexpr float kEpsilon = 1e-05f;
        static constexpr float kTinyVelocitySqr = 1e-06f;
        static constexpr float kMinHalfCycleDuration = 0.0005f;
        static constexpr float kHalfPerCycle = 0.5f;
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide GetCosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _method = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSpawned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSpawned(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RubberDuckEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAngleToleranceDeg() {
            static BNM::Field<float> _field = GetClass().GetField(O("angleToleranceDeg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetCallLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("callLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebugCurrentHalfCycleDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugCurrentHalfCycleDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebugCurrentRateHz() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugCurrentRateHz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasLastDir() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLastDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsShaking() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isShaking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAmplitudeMeters() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAmplitudeMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastReversalTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastReversalTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastVelocityDir() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastVelocityDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMaxShake() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("MaxShake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxShakeAmplitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxShakeAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxShakeRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxShakeRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSpeedForReversal() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpeedForReversal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextAllowedShakeStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextAllowedShakeStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPathSinceLastReversal() {
            static BNM::Field<float> _field = GetClass().GetField(O("pathSinceLastReversal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRecentHalfCycleDurations() {
            static BNM::Field<void*> _field = GetClass().GetField(O("recentHalfCycleDurations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShakeAmplitudeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("shakeAmplitudeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetShakeEndLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeEndLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetShakeEndShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeEndShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShakeRateThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("shakeRateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetShakeStartLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeStartLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetShakeStartShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeStartShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoftMaxMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("softMaxMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SimpleSpeedTracker* GetSpeedTracker() {
            static BNM::Field<::GlobalNamespace::SimpleSpeedTracker*> _field = GetClass().GetField(O("speedTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartCooldownSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("startCooldownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubscribed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseMaxes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMaxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::RubberDuckEvents* value) {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngleToleranceDeg(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angleToleranceDeg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("callLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugCurrentHalfCycleDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugCurrentHalfCycleDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugCurrentRateHz(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugCurrentRateHz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasLastDir(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLastDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsShaking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isShaking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAmplitudeMeters(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAmplitudeMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReversalTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastReversalTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastVelocityDir(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastVelocityDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxShake(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("MaxShake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxShakeAmplitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxShakeAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxShakeRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxShakeRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSpeedForReversal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpeedForReversal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextAllowedShakeStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextAllowedShakeStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathSinceLastReversal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pathSinceLastReversal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShakeAmplitudeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shakeAmplitudeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShakeEndLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeEndLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShakeEndShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeEndShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShakeRateThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shakeRateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShakeStartLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeStartLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShakeStartShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ShakeStartShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoftMaxMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("softMaxMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedTracker(::GlobalNamespace::SimpleSpeedTracker* value) {
            static BNM::Field<::GlobalNamespace::SimpleSpeedTracker*> _field = GetClass().GetField(O("speedTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartCooldownSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startCooldownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseMaxes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMaxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyStrength(float strength01) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyStrength"), {"strength01"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strength01);
        }
        void EnqueueHalfCycle(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueHalfCycle"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _m = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetAverageHalfCycleDuration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAverageHalfCycleDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnShake(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShake"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void set_CosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CosmeticSelectedSide"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpawned(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpawned"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
