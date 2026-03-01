#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/BoneOffset.hpp"
#include "RCRemoteHoldable_RCInput.hpp"
#include "RCVehicle_State.hpp"

namespace GorillaTag_Cosmetics {
    struct RCVehicle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "RCVehicle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasLocalAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasLocalAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetVrRigBones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_vrRigBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::RCRemoteHoldable_RCInput GetActiveInput() {
            static BNM::Field<::GorillaTag_Cosmetics::RCRemoteHoldable_RCInput> _field = GetClass().GetField(O("activeInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::RCRemoteHoldable* GetConnectedRemote() {
            static BNM::Field<::GorillaTag_Cosmetics::RCRemoteHoldable*> _field = GetClass().GetField(O("connectedRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCrashOnHit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("crashOnHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrashOnHitSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("crashOnHitSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrashRespawnDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("crashRespawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDisconnectionTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("disconnectionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::BoneOffset GetDockLeftOffset() {
            static BNM::Field<::GorillaTag::BoneOffset> _field = GetClass().GetField(O("dockLeftOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::BoneOffset GetDockRightOffset() {
            static BNM::Field<::GorillaTag::BoneOffset> _field = GetClass().GetField(O("dockRightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasNetworkSync() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasNetworkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitMaxHitSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitMaxHitSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitVelocityTransfer() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitVelocityTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJoystickDeadzone() {
            static BNM::Field<float> _field = GetClass().GetField(O("joystickDeadzone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftDockParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftDockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::RCVehicle_State GetLocalState() {
            static BNM::Field<::GorillaTag_Cosmetics::RCVehicle_State> _field = GetClass().GetField(O("localState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::RCVehicle_State GetLocalStatePrev() {
            static BNM::Field<::GorillaTag_Cosmetics::RCVehicle_State> _field = GetClass().GetField(O("localStatePrev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDisconnectionTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDisconnectionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::RCCosmeticNetworkSync* GetNetworkSync() {
            static BNM::Field<::GorillaTag_Cosmetics::RCCosmeticNetworkSync*> _field = GetClass().GetField(O("networkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNetworkSyncFollowRateExp() {
            static BNM::Field<float> _field = GetClass().GetField(O("networkSyncFollowRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnHitImpact() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnHitImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectileVelocityTransfer() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileVelocityTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightDockParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightDockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseLeftDock() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLeftDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingForTriggerRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForTriggerRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVrRigBones(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_vrRigBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveInput(::GorillaTag_Cosmetics::RCRemoteHoldable_RCInput value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCRemoteHoldable_RCInput> _field = GetClass().GetField(O("activeInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnectedRemote(::GorillaTag_Cosmetics::RCRemoteHoldable* value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCRemoteHoldable*> _field = GetClass().GetField(O("connectedRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashOnHit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("crashOnHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashOnHitSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crashOnHitSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrashRespawnDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crashRespawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectionTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("disconnectionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockLeftOffset(::GorillaTag::BoneOffset value) {
            static BNM::Field<::GorillaTag::BoneOffset> _field = GetClass().GetField(O("dockLeftOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockRightOffset(::GorillaTag::BoneOffset value) {
            static BNM::Field<::GorillaTag::BoneOffset> _field = GetClass().GetField(O("dockRightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasNetworkSync(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasNetworkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitMaxHitSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitMaxHitSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitVelocityTransfer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitVelocityTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoystickDeadzone(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("joystickDeadzone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftDockParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftDockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalState(::GorillaTag_Cosmetics::RCVehicle_State value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCVehicle_State> _field = GetClass().GetField(O("localState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalStatePrev(::GorillaTag_Cosmetics::RCVehicle_State value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCVehicle_State> _field = GetClass().GetField(O("localStatePrev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDisconnectionTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDisconnectionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkSync(::GorillaTag_Cosmetics::RCCosmeticNetworkSync* value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCCosmeticNetworkSync*> _field = GetClass().GetField(O("networkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkSyncFollowRateExp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("networkSyncFollowRateExp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnHitImpact(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnHitImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileVelocityTransfer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileVelocityTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightDockParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightDockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseLeftDock(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLeftDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForTriggerRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForTriggerRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void AddScaledGravityCompensationForce(::Rigidbody* rb, float scaleFactor, float gravityCompensation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddScaledGravityCompensationForce"), {"rb", "scaleFactor", "gravityCompensation"});
            _m.Call(rb, scaleFactor, gravityCompensation);
        }
        void ApplyRemoteControlInput(::GorillaTag_Cosmetics::RCRemoteHoldable_RCInput rcInput) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyRemoteControlInput"), {"rcInput"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rcInput);
        }
        void AuthorityApplyImpact(::BNM::Structures::Unity::Vector3 hitVelocity, bool isProjectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityApplyImpact"), {"hitVelocity", "isProjectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitVelocity, isProjectile);
        }
        void AuthorityBeginCrash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityBeginCrash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthorityBeginDocked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityBeginDocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthorityBeginMobilization() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityBeginMobilization"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthorityUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EndConnection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_HasLocalAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasLocalAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float NormalizeAngle180(float angle) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NormalizeAngle180"), {"angle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(angle);
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
        void RemoteUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void ResetToSpawnPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToSpawnPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDisabledState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDisabledState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SharedUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void StartConnection(::GorillaTag_Cosmetics::RCRemoteHoldable* remote, ::GorillaTag_Cosmetics::RCCosmeticNetworkSync* sync) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartConnection"), {"remote", "sync"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remote, sync);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WakeUpRemote(::GorillaTag_Cosmetics::RCCosmeticNetworkSync* sync) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WakeUpRemote"), {"sync"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sync);
        }
    };
}
