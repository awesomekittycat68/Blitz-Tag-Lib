#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/HandLinkAuthorityStatus.hpp"
#include "GTPlayer_HandHoldState.hpp"
#include "GTPlayer_HandState.hpp"
#include "GTPlayer_HoverBoardCast.hpp"
#include "GTPlayer_LiquidProperties.hpp"
#include "GTPlayer_MaterialData.hpp"
#include "GTPlayer_MovingSurfaceContactPoint.hpp"
#include "StiltID.hpp"
#include "../GorillaLocomotion_Swimming/WaterVolume_SurfaceQuery.hpp"

namespace GorillaLocomotion {
    struct GTPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion", "GTPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaLocomotion::GTPlayer* get_Instance() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GorillaLocomotion::GTPlayer* GetInstance() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr float CameraFarClipDefault = 500.0f;
        static constexpr float CameraNearClipDefault = 0.01f;
        static constexpr float CameraNearClipTiny = 0.002f;
        static constexpr float movingSurfaceVelocityLimit = 40.0f;
        static constexpr int MIN_FRAMES_OFF_SURFACE_TO_DETACH = 3;
        static constexpr float climbingMaxThrowSpeed = 5.5f;
        static constexpr float climbHelperSmoothSnapSpeed = 12.0f;
        ::BNM::Structures::Unity::Vector3 GetAveragedVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_AveragedVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetBodyInitialHeight() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_bodyInitialHeight"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetBodyOnGround() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_BodyOnGround"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetCosmeticsHeadTarget() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_CosmeticsHeadTarget"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetCurrentClimbable() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaClimbable*> _method = GetClass().GetMethod(O("get_CurrentClimbable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetCurrentClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _method = GetClass().GetMethod(O("get_CurrentClimber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetCurrentWaterVolume() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume*> _method = GetClass().GetMethod(O("get_CurrentWaterVolume"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetEnableHoverMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_enableHoverMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEnableHoverMode(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_enableHoverMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetForcedUnderwater() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_forcedUnderwater"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetForcedUnderwater(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_forcedUnderwater"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetHandContactingSurface() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HandContactingSurface"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetHeadCenterPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_HeadCenterPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHeadInWater() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HeadInWater"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* GetHeadOverlappingWaterVolumes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _method = GetClass().GetMethod(O("get_HeadOverlappingWaterVolumes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion::GTPlayer* GetInstance_pg() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetInstantaneousVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_InstantaneousVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInWater() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InWater"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsBodySliding() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsBodySliding"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsBodySliding(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsBodySliding"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsDefaultScale() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDefaultScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFrozen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFrozen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsFrozen(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsFrozen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsGroundedButt() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsGroundedButt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsGroundedHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsGroundedHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsHoverAllowed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isHoverAllowed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsHoverAllowed(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isHoverAllowed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsLaserZiplineActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLaserZiplineActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsTentacleActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsTentacleActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsThrusterActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsThrusterActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetJumpMultiplier() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_jumpMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetJumpMultiplier(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_jumpMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLaserZiplineActiveAtFrame() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LaserZiplineActiveAtFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLaserZiplineActiveAtFrame(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LaserZiplineActiveAtFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetLastHandTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LastHandTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastHandTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastHandTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetLastLeftHandPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_LastLeftHandPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_LastPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRightHandPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_LastRightHandPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLastTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LastTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaLocomotion::GTPlayer_HandState GetLeftHand() {
            static BNM::Method<::GorillaLocomotion::GTPlayer_HandState> _method = GetClass().GetMethod(O("get_LeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetLeftHandWaterSurface() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _method = GetClass().GetMethod(O("get_LeftHandWaterSurface"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetLeftHandWaterVolume() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume*> _method = GetClass().GetMethod(O("get_LeftHandWaterVolume"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>* GetMaterialData() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>*> _method = GetClass().GetMethod(O("get_materialData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetNativeScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_NativeScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerRotationOverride(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerRotationOverride"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaLocomotion::GTPlayer_HandState GetRightHand() {
            static BNM::Method<::GorillaLocomotion::GTPlayer_HandState> _method = GetClass().GetMethod(O("get_RightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetRightHandWaterSurface() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _method = GetClass().GetMethod(O("get_RightHandWaterSurface"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetRightHandWaterVolume() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume*> _method = GetClass().GetMethod(O("get_RightHandWaterVolume"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetRigidbodyVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_RigidbodyVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_scale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetScaleMultiplier() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ScaleMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTentacleActiveAtFrame() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TentacleActiveAtFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTentacleActiveAtFrame(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TentacleActiveAtFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetThrusterActiveAtFrame() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ThrusterActiveAtFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetThrusterActiveAtFrame(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ThrusterActiveAtFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTurnedThisFrame() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_turnedThisFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetWaterSurfaceForHead() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _method = GetClass().GetMethod(O("get_WaterSurfaceForHead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetBodyInitialHeight_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_bodyInitialHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaLocomotion::GTPlayer* GetInstance_f() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        float GetJumpMultiplier_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_jumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_HandHoldState GetActiveHandHold() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandHoldState> _field = GetClass().GetField(O("activeHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NativeSizeChangerSettings* GetActiveSizeChangerSettings() {
            static BNM::Field<::GlobalNamespace::NativeSizeChangerSettings*> _field = GetClass().GetField(O("activeSizeChangerSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>* GetActiveWaterCurrents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>*> _field = GetClass().GetField(O("activeWaterCurrents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAntiDriftLastPosition() {
            static BNM::Field<void*> _field = GetClass().GetField(O("antiDriftLastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHandIsColliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandIsColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHandIsSliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandIsSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHandIsSticking() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandIsSticking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHandWasColliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandWasColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHandWasSliding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandWasSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHandWasSticking() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandWasSticking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAreBothTouching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("areBothTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerAudioManager* GetAudioManager() {
            static BNM::Field<::GlobalNamespace::PlayerAudioManager*> _field = GetClass().GetField(O("audioManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAudioSetToUnderwater() {
            static BNM::Field<bool> _field = GetClass().GetField(O("audioSetToUnderwater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetAveragedVelocity_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averagedVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAverageSlipPercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("averageSlipPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetBodyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::Collider*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetBodyCollisionContacts() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("bodyCollisionContacts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBodyCollisionContactsCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("bodyCollisionContactsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBodyGroundContact() {
            static BNM::Field<void*> _field = GetClass().GetField(O("bodyGroundContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBodyGroundContactTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyGroundContactTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetBodyHitInfo() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("bodyHitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBodyInitialRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyInitialRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBodyInWater() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bodyInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBodyLerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBodyMaxRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyMaxRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBodyOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBodyOffsetVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyOffsetVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* GetBodyOverlappingWaterVolumes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("bodyOverlappingWaterVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::IL2CPP::Il2CppObject*>* GetBodyTouchedSurfaces() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("bodyTouchedSurfaces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetBodyVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("bodyVelocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBoostEnabledUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("boostEnabledUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBufferCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("bufferCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBuoyancyExtension() {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyExtension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCalcDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("calcDeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetClimbHelper() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("climbHelper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetClimbHelperTargetPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("climbHelperTargetPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCollidedMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("collidedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ConnectedControllerHandler* GetControllerState() {
            static BNM::Field<::GlobalNamespace::ConnectedControllerHandler*> _field = GetClass().GetField(O("controllerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCosmeticsHeadTarget_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cosmeticsHeadTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCrazyCheckVectors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("crazyCheckVectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentBodyHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentBodyHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetCurrentClimbable_f() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("currentClimbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetCurrentClimber_f() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("currentClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentMaterialIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentMaterialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSurfaceOverride* GetCurrentOverride() {
            static BNM::Field<::GlobalNamespace::GorillaSurfaceOverride*> _field = GetClass().GetField(O("currentOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BasePlatform* GetCurrentPlatform() {
            static BNM::Field<::GlobalNamespace::BasePlatform*> _field = GetClass().GetField(O("currentPlatform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCurrentSlopDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("currentSlopDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaRopeSwing* GetCurrentSwing() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwing*> _field = GetClass().GetField(O("currentSwing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCurrentVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("currentVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaZipline* GetCurrentZipline() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaZipline*> _field = GetClass().GetField(O("currentZipline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawSwimming() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawSwimming"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugFreezeTag() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugFreezeTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDebugLastRightHandPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugLastRightHandPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugMovement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDebugPlatformDeltaPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugPlatformDeltaPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultPrecision() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultPrecision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultSlideFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultSlideFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDegreesTurnedThisFrame() {
            static BNM::Field<float> _field = GetClass().GetField(O("degreesTurnedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidAJump() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didAJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidHoverLastFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didHoverLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableMovement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetEmptyHit() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("emptyHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExitMovingSurface() {
            static BNM::Field<bool> _field = GetClass().GetField(O("exitMovingSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExitMovingSurfaceThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("exitMovingSurfaceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFindMatName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("findMatName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFirstPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("firstPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceRBSync() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceRBSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_MaterialData GetFoundMatData() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_MaterialData> _field = GetClass().GetField(O("foundMatData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetFrameCount() {
            static BNM::Field<double> _field = GetClass().GetField(O("frameCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFreezeTagHandSlidePercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("freezeTagHandSlidePercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrictionConstant() {
            static BNM::Field<float> _field = GetClass().GetField(O("frictionConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenBodyBuoyancyFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenBodyBuoyancyFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGeodeHitEffects() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("geodeHitEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Action<::GorillaLocomotion::GTPlayer*>*>* GetGravityOverrides() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Action<::GorillaLocomotion::GTPlayer*>*>*> _field = GetClass().GetField(O("gravityOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalloweenLevitateBonusFullAtYSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitateBonusFullAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalloweenLevitateBonusOffAtYSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitateBonusOffAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalloweenLevitationBonusStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationBonusStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalloweenLevitationFullStrengthDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationFullStrengthDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalloweenLevitationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalloweenLevitationTotalDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationTotalDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCorrectedForTracking() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCorrectedForTracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasHoverPoint() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasHoverPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        bool GetHasLeftHandTentacleMove() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLeftHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasRightHandTentacleMove() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRightHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SphereCollider* GetHeadCollider() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("headCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeadInWater_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("headInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* GetHeadOverlappingWaterVolumes_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("headOverlappingWaterVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHeadSlideNormal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headSlideNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadSlipPercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("headSlipPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHoverAllowedCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("hoverAllowedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoverboardAudio* GetHoverboardAudio() {
            static BNM::Field<::GlobalNamespace::HoverboardAudio*> _field = GetClass().GetField(O("hoverboardAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverboardBoostGracePeriod() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverboardBoostGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HoverBoardCast>* GetHoverboardCasts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HoverBoardCast>*> _field = GetClass().GetField(O("hoverboardCasts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverboardPaddleBoostMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverboardPaddleBoostMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverboardPaddleBoostMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverboardPaddleBoostMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHoverboardPlayerLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverboardPlayerLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetHoverboardPlayerLocalRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("hoverboardPlayerLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoverboardVisual* GetHoverboardVisual() {
            static BNM::Field<::GlobalNamespace::HoverboardVisual*> _field = GetClass().GetField(O("hoverboardVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverBodyCollisionRadiusUpOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverBodyCollisionRadiusUpOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverBodyHasCollisionsOutsideRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverBodyHasCollisionsOutsideRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHoverCarveAngleResponsiveness() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("hoverCarveAngleResponsiveness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverCarveSidewaysSpeedLossFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverCarveSidewaysSpeedLossFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverGeneralUpwardForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverGeneralUpwardForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverIdealHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverIdealHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoveringSlowSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoveringSlowSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoveringSlowStoppingFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoveringSlowStoppingFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverMaxPaddleSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverMaxPaddleSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverMinGrindSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverMinGrindSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverSlamJumpStrengthFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverSlamJumpStrengthFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverTiltAdjustsForwardFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverTiltAdjustsForwardFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIceThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("iceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInOverlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInReportMenu() {
            static BNM::Field<bool> _field = GetClass().GetField(O("InReportMenu"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAttachedToTrain() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAttachedToTrain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsClimbableMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isClimbableMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsClimbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isClimbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHandHoldMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandHoldMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsUserPresent() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUserPresent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetJunkHit() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("junkHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastAttachedToMovingSurfaceFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAttachedToMovingSurfaceFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastClimbableRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastClimbableRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastFrameHasValidTouchPos() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastFrameHasValidTouchPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastFrameTouchPosLocal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFrameTouchPosLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastFrameTouchPosWorld() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFrameTouchPosWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastHandHoldRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastHandHoldRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastHeadPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastHeadPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetLastHitInfoHand() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("lastHitInfoHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetLastMonkeBlock() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("lastMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_MovingSurfaceContactPoint GetLastMovingSurfaceContact() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_MovingSurfaceContactPoint> _field = GetClass().GetField(O("lastMovingSurfaceContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetLastMovingSurfaceHit() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("lastMovingSurfaceHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastMovingSurfaceID() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastMovingSurfaceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastMovingSurfaceRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastMovingSurfaceRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastMovingSurfaceTouchLocal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastMovingSurfaceTouchLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastMovingSurfaceTouchWorld() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastMovingSurfaceTouchWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastMovingSurfaceVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastMovingSurfaceVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastOpenHeadPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastOpenHeadPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BasePlatform* GetLastPlatformTouched() {
            static BNM::Field<::GlobalNamespace::BasePlatform*> _field = GetClass().GetField(O("lastPlatformTouched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPreHandholdVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPreHandholdVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRealTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRealTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRigidbodyPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRigidbodyPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastSlopeDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSlopeDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTouchedGroundTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTouchedGroundTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastWaterSurfaceJumpTimeLeft() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastWaterSurfaceJumpTimeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastWaterSurfaceJumpTimeRight() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastWaterSurfaceJumpTimeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::LayerChanger* GetLayerChanger() {
            static BNM::Field<::GorillaTagScripts::LayerChanger*> _field = GetClass().GetField(O("layerChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_HandState GetLeftHand_f() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandState> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftHandNonDiveHapticsAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftHandNonDiveHapticsAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftHandTentacleMove() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetLeftHandWaterSurface_f() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("leftHandWaterSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetLeftHandWaterVolume_f() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("leftHandWaterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_LiquidProperties>* GetLiquidPropertiesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_LiquidProperties>*> _field = GetClass().GetField(O("liquidPropertiesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLocomotionEnabledLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("locomotionEnabledLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetLocomotionEnabledLayers_f() {
            static BNM::Field<void*> _field = GetClass().GetField(O("LocomotionEnabledLayers"));
            return _field.Get();
        }
        ::Camera* GetMainCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::MaterialDatasSO* GetMaterialDatasSO() {
            static BNM::Field<::GorillaTag::MaterialDatasSO*> _field = GetClass().GetField(O("materialDatasSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxArmLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxArmLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxJumpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxJumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSphereSize1() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSphereSize1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSphereSize2() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSphereSize2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMeshCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("meshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>* GetMeshTrianglesDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("meshTrianglesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinimumRaycastDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumRaycastDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMovementToProjectedAboveCollisionPlane() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("movementToProjectedAboveCollisionPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMovingHandHoldReleaseVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("movingHandHoldReleaseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMovingSurfaceOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("movingSurfaceOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNativeScale_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("nativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNativeScaleMagnitudeAdjustmentFactor() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nativeScaleMagnitudeAdjustmentFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOverlapAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("overlapAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPlatformTouchOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("platformTouchOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetPlayerRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("playerRigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPlayerRigidbodyInterpolationDefault() {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerRigidbodyInterpolationDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetPlayerRotationOverride() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("playerRotationOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerRotationOverrideDecayRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerRotationOverrideDecayRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerRotationOverrideFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerRotationOverrideFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrimaryButtonPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryButtonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRayCastNonAllocColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRefMovement() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("refMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_HandState GetRightHand_f() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandState> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightHandNonDiveHapticsAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightHandNonDiveHapticsAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightHandTentacleMove() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetRightHandWaterSurface_f() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("rightHandWaterSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetRightHandWaterVolume_f() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("rightHandWaterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleMultiplier_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_HandHoldState GetSecondaryHandHold() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandHoldState> _field = GetClass().GetField(O("secondaryHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSecondLastPreHandholdVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("secondLastPreHandholdVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetSharedMeshTris() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sharedMeshTris"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSidewaysDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("sidewaysDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSizeLayerMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetSlideAverageHistory() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("slideAverageHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSlideAverageNormal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("slideAverageNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlideControl() {
            static BNM::Field<float> _field = GetClass().GetField(O("slideControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlideFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("slideFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetSlideRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("slideRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSlideVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("slideVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlideVelocityLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("slideVelocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlidingMinimum() {
            static BNM::Field<float> _field = GetClass().GetField(O("slidingMinimum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSlipperyMaterial() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("slipperyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStickDepth() {
            static BNM::Field<float> _field = GetClass().GetField(O("stickDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HandState>* GetStiltStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HandState>*> _field = GetClass().GetField(O("stiltStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStuckLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stuckLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStuckRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stuckRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSurfaceDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("surfaceDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::PlayerSwimmingParameters* GetSwimmingParams() {
            static BNM::Field<::GorillaLocomotion_Swimming::PlayerSwimmingParameters*> _field = GetClass().GetField(O("swimmingParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSwimmingVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("swimmingVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTeleportThresholdNoVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportThresholdNoVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTeleportToTrain() {
            static BNM::Field<bool> _field = GetClass().GetField(O("teleportToTrain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTempFreezeLeftHandEnableTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("tempFreezeLeftHandEnableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTempFreezeRightHandEnableTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("tempFreezeRightHandEnableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetTempHitInfo() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("tempHitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetTempIterativeHit() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("tempIterativeHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetTempMaterialArray() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("tempMaterialArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTempRealTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("tempRealTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetTrianglesList() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trianglesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTurnParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("turnParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnStickDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("unStickDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdateRB() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetVelocityHistory() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("velocityHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVelocityHistorySize() {
            static BNM::Field<int> _field = GetClass().GetField(O("velocityHistorySize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVelocityIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("velocityIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertex1() {
            static BNM::Field<int> _field = GetClass().GetField(O("vertex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertex2() {
            static BNM::Field<int> _field = GetClass().GetField(O("vertex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertex3() {
            static BNM::Field<int> _field = GetClass().GetField(O("vertex3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasBodyOnGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasBodyOnGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasHeadTouching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHeadTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasHoldingHandhold() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHoldingHandhold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasMovingSurfaceMonkeBlock() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasMovingSurfaceMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWaterLayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("waterLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterParameters* GetWaterParams() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("waterParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetWaterSurfaceForHead_f() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("waterSurfaceForHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaterSurfaceJumpCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWizardStaffSlamEffects() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("wizardStaffSlamEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyInitialHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_bodyInitialHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetJumpMultiplier_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_jumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveHandHold(::GorillaLocomotion::GTPlayer_HandHoldState value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandHoldState> _field = GetClass().GetField(O("activeHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveSizeChangerSettings(::GlobalNamespace::NativeSizeChangerSettings* value) {
            static BNM::Field<::GlobalNamespace::NativeSizeChangerSettings*> _field = GetClass().GetField(O("activeSizeChangerSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveWaterCurrents(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>*> _field = GetClass().GetField(O("activeWaterCurrents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAntiDriftLastPosition(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("antiDriftLastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHandIsColliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandIsColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHandIsSliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandIsSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHandIsSticking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandIsSticking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHandWasColliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandWasColliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHandWasSliding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandWasSliding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHandWasSticking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHandWasSticking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAreBothTouching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("areBothTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioManager(::GlobalNamespace::PlayerAudioManager* value) {
            static BNM::Field<::GlobalNamespace::PlayerAudioManager*> _field = GetClass().GetField(O("audioManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSetToUnderwater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("audioSetToUnderwater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAveragedVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averagedVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAverageSlipPercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("averageSlipPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollisionContacts(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("bodyCollisionContacts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollisionContactsCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bodyCollisionContactsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyGroundContact(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("bodyGroundContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyGroundContactTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyGroundContactTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyHitInfo(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("bodyHitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyInitialRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyInitialRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyInWater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bodyInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyLerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyMaxRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyMaxRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyOffsetVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyOffsetVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyOverlappingWaterVolumes(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("bodyOverlappingWaterVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyTouchedSurfaces(::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("bodyTouchedSurfaces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("bodyVelocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoostEnabledUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("boostEnabledUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBufferCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bufferCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuoyancyExtension(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyExtension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCalcDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("calcDeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClimbHelper(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("climbHelper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClimbHelperTargetPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("climbHelperTargetPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidedMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("collidedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControllerState(::GlobalNamespace::ConnectedControllerHandler* value) {
            static BNM::Field<::GlobalNamespace::ConnectedControllerHandler*> _field = GetClass().GetField(O("controllerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsHeadTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cosmeticsHeadTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrazyCheckVectors(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("crazyCheckVectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBodyHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentBodyHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentClimbable(::GorillaLocomotion_Climbing::GorillaClimbable* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("currentClimbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentClimber(::GorillaLocomotion_Climbing::GorillaHandClimber* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("currentClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMaterialIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentMaterialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentOverride(::GlobalNamespace::GorillaSurfaceOverride* value) {
            static BNM::Field<::GlobalNamespace::GorillaSurfaceOverride*> _field = GetClass().GetField(O("currentOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPlatform(::GlobalNamespace::BasePlatform* value) {
            static BNM::Field<::GlobalNamespace::BasePlatform*> _field = GetClass().GetField(O("currentPlatform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSlopDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("currentSlopDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSwing(::GorillaLocomotion_Gameplay::GorillaRopeSwing* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwing*> _field = GetClass().GetField(O("currentSwing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("currentVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentZipline(::GorillaLocomotion_Gameplay::GorillaZipline* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaZipline*> _field = GetClass().GetField(O("currentZipline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawSwimming(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawSwimming"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugFreezeTag(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugFreezeTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugLastRightHandPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugLastRightHandPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugMovement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugPlatformDeltaPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("debugPlatformDeltaPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultPrecision(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultPrecision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSlideFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultSlideFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDegreesTurnedThisFrame(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("degreesTurnedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidAJump(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didAJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidHoverLastFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didHoverLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableMovement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyHit(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("emptyHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitMovingSurface(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("exitMovingSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitMovingSurfaceThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("exitMovingSurfaceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFindMatName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("findMatName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("firstPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceRBSync(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceRBSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoundMatData(::GorillaLocomotion::GTPlayer_MaterialData value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_MaterialData> _field = GetClass().GetField(O("foundMatData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameCount(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("frameCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreezeTagHandSlidePercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("freezeTagHandSlidePercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrictionConstant(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frictionConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenBodyBuoyancyFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenBodyBuoyancyFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeodeHitEffects(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("geodeHitEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalloweenLevitateBonusFullAtYSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitateBonusFullAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalloweenLevitateBonusOffAtYSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitateBonusOffAtYSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalloweenLevitationBonusStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationBonusStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalloweenLevitationFullStrengthDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationFullStrengthDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalloweenLevitationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalloweenLevitationTotalDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halloweenLevitationTotalDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCorrectedForTracking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCorrectedForTracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasHoverPoint(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasHoverPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        void SetHasLeftHandTentacleMove(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLeftHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasRightHandTentacleMove(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRightHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadCollider(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("headCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadInWater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("headInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadOverlappingWaterVolumes(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("headOverlappingWaterVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadSlideNormal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headSlideNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadSlipPercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headSlipPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverAllowedCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hoverAllowedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardAudio(::GlobalNamespace::HoverboardAudio* value) {
            static BNM::Field<::GlobalNamespace::HoverboardAudio*> _field = GetClass().GetField(O("hoverboardAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardBoostGracePeriod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverboardBoostGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardCasts(::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HoverBoardCast>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HoverBoardCast>*> _field = GetClass().GetField(O("hoverboardCasts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardPaddleBoostMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverboardPaddleBoostMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardPaddleBoostMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverboardPaddleBoostMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardPlayerLocalPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverboardPlayerLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardPlayerLocalRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("hoverboardPlayerLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardVisual(::GlobalNamespace::HoverboardVisual* value) {
            static BNM::Field<::GlobalNamespace::HoverboardVisual*> _field = GetClass().GetField(O("hoverboardVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverBodyCollisionRadiusUpOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverBodyCollisionRadiusUpOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverBodyHasCollisionsOutsideRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverBodyHasCollisionsOutsideRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverCarveAngleResponsiveness(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("hoverCarveAngleResponsiveness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverCarveSidewaysSpeedLossFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverCarveSidewaysSpeedLossFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverGeneralUpwardForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverGeneralUpwardForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverIdealHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverIdealHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoveringSlowSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoveringSlowSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoveringSlowStoppingFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoveringSlowStoppingFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverMaxPaddleSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverMaxPaddleSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverMinGrindSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverMinGrindSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverSlamJumpStrengthFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverSlamJumpStrengthFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverTiltAdjustsForwardFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverTiltAdjustsForwardFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIceThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("iceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInOverlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInReportMenu(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("InReportMenu"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAttachedToTrain(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAttachedToTrain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsClimbableMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isClimbableMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsClimbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isClimbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHandHoldMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandHoldMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsUserPresent(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUserPresent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJunkHit(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("junkHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAttachedToMovingSurfaceFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAttachedToMovingSurfaceFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastClimbableRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastClimbableRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFrameHasValidTouchPos(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastFrameHasValidTouchPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFrameTouchPosLocal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFrameTouchPosLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFrameTouchPosWorld(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFrameTouchPosWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHandHoldRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastHandHoldRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeadPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastHeadPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHitInfoHand(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("lastHitInfoHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMonkeBlock(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("lastMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceContact(::GorillaLocomotion::GTPlayer_MovingSurfaceContactPoint value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_MovingSurfaceContactPoint> _field = GetClass().GetField(O("lastMovingSurfaceContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceHit(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("lastMovingSurfaceHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastMovingSurfaceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastMovingSurfaceRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceTouchLocal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastMovingSurfaceTouchLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceTouchWorld(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastMovingSurfaceTouchWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMovingSurfaceVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastMovingSurfaceVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastOpenHeadPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastOpenHeadPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPlatformTouched(::GlobalNamespace::BasePlatform* value) {
            static BNM::Field<::GlobalNamespace::BasePlatform*> _field = GetClass().GetField(O("lastPlatformTouched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPreHandholdVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPreHandholdVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRealTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRealTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRigidbodyPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRigidbodyPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSlopeDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastSlopeDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTouchedGroundTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTouchedGroundTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWaterSurfaceJumpTimeLeft(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastWaterSurfaceJumpTimeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWaterSurfaceJumpTimeRight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastWaterSurfaceJumpTimeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayerChanger(::GorillaTagScripts::LayerChanger* value) {
            static BNM::Field<::GorillaTagScripts::LayerChanger*> _field = GetClass().GetField(O("layerChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHand(::GorillaLocomotion::GTPlayer_HandState value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandState> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandNonDiveHapticsAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftHandNonDiveHapticsAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandTentacleMove(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandWaterSurface(::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("leftHandWaterSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandWaterVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("leftHandWaterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidPropertiesList(::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_LiquidProperties>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_LiquidProperties>*> _field = GetClass().GetField(O("liquidPropertiesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocomotionEnabledLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("locomotionEnabledLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLocomotionEnabledLayers_fs(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("LocomotionEnabledLayers"));
            _field.Set(value);
        }
        void SetMainCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialDatasSO(::GorillaTag::MaterialDatasSO* value) {
            static BNM::Field<::GorillaTag::MaterialDatasSO*> _field = GetClass().GetField(O("materialDatasSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxArmLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxArmLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxJumpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxJumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSphereSize1(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSphereSize1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSphereSize2(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSphereSize2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("meshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshTrianglesDict(::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("meshTrianglesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumRaycastDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumRaycastDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovementToProjectedAboveCollisionPlane(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("movementToProjectedAboveCollisionPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingHandHoldReleaseVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("movingHandHoldReleaseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSurfaceOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("movingSurfaceOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeScaleMagnitudeAdjustmentFactor(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nativeScaleMagnitudeAdjustmentFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("overlapAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlatformTouchOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("platformTouchOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("playerRigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRigidbodyInterpolationDefault(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerRigidbodyInterpolationDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRotationOverride_fs(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("playerRotationOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRotationOverrideDecayRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerRotationOverrideDecayRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRotationOverrideFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerRotationOverrideFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryButtonPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryButtonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayCastNonAllocColliders(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefMovement(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("refMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHand(::GorillaLocomotion::GTPlayer_HandState value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandState> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandNonDiveHapticsAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightHandNonDiveHapticsAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTentacleMove(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightHandTentacleMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandWaterSurface(::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("rightHandWaterSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandWaterVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("rightHandWaterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondaryHandHold(::GorillaLocomotion::GTPlayer_HandHoldState value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandHoldState> _field = GetClass().GetField(O("secondaryHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondLastPreHandholdVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("secondLastPreHandholdVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMeshTris(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sharedMeshTris"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSidewaysDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sidewaysDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeLayerMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideAverageHistory(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("slideAverageHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideAverageNormal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("slideAverageNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideControl(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slideControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slideFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("slideRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("slideVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideVelocityLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slideVelocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlidingMinimum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slidingMinimum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlipperyMaterial(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("slipperyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStickDepth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stickDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStiltStates(::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HandState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaLocomotion::GTPlayer_HandState>*> _field = GetClass().GetField(O("stiltStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStuckLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stuckLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStuckRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stuckRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("surfaceDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimmingParams(::GorillaLocomotion_Swimming::PlayerSwimmingParameters* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::PlayerSwimmingParameters*> _field = GetClass().GetField(O("swimmingParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwimmingVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("swimmingVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportThresholdNoVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportThresholdNoVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportToTrain(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("teleportToTrain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempFreezeLeftHandEnableTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("tempFreezeLeftHandEnableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempFreezeRightHandEnableTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("tempFreezeRightHandEnableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempHitInfo(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("tempHitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempIterativeHit(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("tempIterativeHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempMaterialArray(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("tempMaterialArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempRealTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tempRealTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrianglesList(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trianglesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("turnParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnStickDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("unStickDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateRB(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityHistory(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("velocityHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityHistorySize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("velocityHistorySize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("velocityIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertex1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("vertex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertex2(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("vertex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertex3(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("vertex3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasBodyOnGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasBodyOnGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasHeadTouching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHeadTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasHoldingHandhold(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHoldingHandhold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasMovingSurfaceMonkeBlock(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasMovingSurfaceMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterLayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("waterLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterParams(::GorillaLocomotion_Swimming::WaterParameters* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("waterParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceForHead(::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("waterSurfaceForHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceJumpCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceJumpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWizardStaffSlamEffects(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("wizardStaffSlamEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void AddForce(::BNM::Structures::Unity::Vector3 force, TP1 mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddForce"), {"force", "mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force, mode);
        }
        void AddHandHold(::Transform* objectHeld, ::BNM::Structures::Unity::Vector3 localPositionHeld, ::GlobalNamespace::GorillaGrabber* grabber, bool forLeftHand, bool rotatePlayerWhenHeld, ::BNM::Structures::Unity::Vector3& grabbedVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddHandHold"), {"objectHeld", "localPositionHeld", "grabber", "forLeftHand", "rotatePlayerWhenHeld", "grabbedVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(objectHeld, localPositionHeld, grabber, forLeftHand, rotatePlayerWhenHeld, &grabbedVelocity);
        }
        void AntiTeleportTechnology() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AntiTeleportTechnology"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyClampedKnockback(::BNM::Structures::Unity::Vector3 direction, float speed, float boostMultiplier, bool forceOffTheGround) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyClampedKnockback"), {"direction", "speed", "boostMultiplier", "forceOffTheGround"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(direction, speed, boostMultiplier, forceOffTheGround);
        }
        void ApplyGravityOverrides() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyGravityOverrides"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyKnockback(::BNM::Structures::Unity::Vector3 direction, float speed, bool forceOffTheGround) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyKnockback"), {"direction", "speed", "forceOffTheGround"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(direction, speed, forceOffTheGround);
        }
        float ApplyNativeScaleAdjustment(float adjustedMagnitude) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ApplyNativeScaleAdjustment"), {"adjustedMagnitude"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(adjustedMagnitude);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BeginClimbing(::GorillaLocomotion_Climbing::GorillaClimbable* climbable, ::GorillaLocomotion_Climbing::GorillaHandClimber* hand, ::GorillaLocomotion_Climbing::GorillaClimbableRef* climbableRef) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginClimbing"), {"climbable", "hand", "climbableRef"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(climbable, hand, climbableRef);
        }
        void BodyCollider() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BodyCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeLayer(::BNM::Structures::Mono::String* layerName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeLayer"), {"layerName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(layerName);
        }
        bool CheckWaterSurfaceJump(::BNM::Structures::Unity::Vector3 startingHandPosition, ::BNM::Structures::Unity::Vector3 endingHandPosition, ::BNM::Structures::Unity::Vector3 palmForwardDirection, ::BNM::Structures::Unity::Vector3 handAvgVelocity, ::GorillaLocomotion_Swimming::PlayerSwimmingParameters* parameters, ::GorillaLocomotion_Swimming::WaterVolume* contactingWaterVolume, ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery waterSurface, ::BNM::Structures::Unity::Vector3& jumpVelocity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckWaterSurfaceJump"), {"startingHandPosition", "endingHandPosition", "palmForwardDirection", "handAvgVelocity", "parameters", "contactingWaterVolume", "waterSurface", "jumpVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startingHandPosition, endingHandPosition, palmForwardDirection, handAvgVelocity, parameters, contactingWaterVolume, waterSurface, &jumpVelocity);
        }
        void ClearColliderBuffer(::Collider*& colliders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearColliderBuffer"), {"colliders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&colliders);
        }
        void ClearHandHolds() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearHandHolds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearRaycasthitBuffer(::BNM::Structures::Unity::RaycastHit& raycastHits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearRaycasthitBuffer"), {"raycastHits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&raycastHits);
        }
        bool CollisionsSphereCast(::BNM::Structures::Unity::Vector3 startPosition, float sphereRadius, ::BNM::Structures::Unity::Vector3 movementVector, ::BNM::Structures::Unity::Vector3& finalPosition, ::BNM::Structures::Unity::RaycastHit& collisionsHitInfo) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CollisionsSphereCast"), {"startPosition", "sphereRadius", "movementVector", "finalPosition", "collisionsHitInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPosition, sphereRadius, movementVector, &finalPosition, &collisionsHitInfo);
        }
        static bool ComputeLocalHitPoint(::BNM::Structures::Unity::RaycastHit hit, ::BNM::Structures::Unity::Vector3& localHitPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ComputeLocalHitPoint"), {"hit", "localHitPoint"});
            return _m.Call(hit, &localHitPoint);
        }
        static bool ComputeWorldHitPoint(::BNM::Structures::Unity::RaycastHit hit, ::BNM::Structures::Unity::Vector3 localPoint, ::BNM::Structures::Unity::Vector3& worldHitPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ComputeWorldHitPoint"), {"hit", "localPoint", "worldHitPoint"});
            return _m.Call(hit, localPoint, &worldHitPoint);
        }
        bool CrazyCheck2(float sphereSize, ::BNM::Structures::Unity::Vector3 startPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CrazyCheck2"), {"sphereSize", "startPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sphereSize, startPosition);
        }
        void DisableStilt(::GorillaLocomotion::StiltID stiltID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableStilt"), {"stiltID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stiltID);
        }
        void DoLaunch(::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoLaunch"), {"velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(velocity);
        }
        void enablePlayerGravity(bool useGravity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("enablePlayerGravity"), {"useGravity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(useGravity);
        }
        void EnableStilt(::GorillaLocomotion::StiltID stiltID, bool isLeftHand, ::BNM::Structures::Unity::Vector3 currentTipWorldPos, float maxArmLength, bool canTag, bool canStun, float customBoostFactor, ::GorillaLocomotion_Climbing::GorillaVelocityTracker* velocityTracker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableStilt"), {"stiltID", "isLeftHand", "currentTipWorldPos", "maxArmLength", "canTag", "canStun", "customBoostFactor", "velocityTracker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stiltID, isLeftHand, currentTipWorldPos, maxArmLength, canTag, canStun, customBoostFactor, velocityTracker);
        }
        void EndClimbing(::GorillaLocomotion_Climbing::GorillaHandClimber* hand, bool startingNewClimb, bool doDontReclimb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndClimbing"), {"hand", "startingNewClimb", "doDontReclimb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand, startingNewClimb, doDontReclimb);
        }
        float ExtraVelMaxMultiplier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ExtraVelMaxMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float ExtraVelMultiplier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ExtraVelMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate_HandHolds(float timeDelta) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate_HandHolds"), {"timeDelta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeDelta);
        }
        void ForceRigidBodySync() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceRigidBodySync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float FreezeTagSlidePercentage() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FreezeTagSlidePercentage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_AveragedVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_AveragedVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_bodyInitialHeight() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_bodyInitialHeight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_BodyOnGround() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_BodyOnGround"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_CosmeticsHeadTarget() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_CosmeticsHeadTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* get_CurrentClimbable() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaClimbable*> _m = GetClass().GetMethod(O("get_CurrentClimbable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* get_CurrentClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _m = GetClass().GetMethod(O("get_CurrentClimber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* get_CurrentWaterVolume() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume*> _m = GetClass().GetMethod(O("get_CurrentWaterVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_enableHoverMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_enableHoverMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_forcedUnderwater() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_forcedUnderwater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HandContactingSurface() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HandContactingSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_HeadCenterPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_HeadCenterPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HeadInWater() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HeadInWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* get_HeadOverlappingWaterVolumes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _m = GetClass().GetMethod(O("get_HeadOverlappingWaterVolumes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GorillaLocomotion::GTPlayer* get_Instance_1() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_InstantaneousVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_InstantaneousVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InWater() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsBodySliding() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsBodySliding"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDefaultScale() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDefaultScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFrozen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFrozen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsGroundedButt() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsGroundedButt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsGroundedHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsGroundedHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isHoverAllowed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isHoverAllowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLaserZiplineActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLaserZiplineActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsTentacleActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsTentacleActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsThrusterActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsThrusterActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_jumpMultiplier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_jumpMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LaserZiplineActiveAtFrame() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LaserZiplineActiveAtFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LastHandTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LastHandTouchedGroundAtNetworkTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_LastLeftHandPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_LastLeftHandPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_LastPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_LastPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_LastRightHandPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_LastRightHandPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LastTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LastTouchedGroundAtNetworkTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion::GTPlayer_HandState get_LeftHand() {
            static BNM::Method<::GorillaLocomotion::GTPlayer_HandState> _m = GetClass().GetMethod(O("get_LeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery get_LeftHandWaterSurface() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _m = GetClass().GetMethod(O("get_LeftHandWaterSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* get_LeftHandWaterVolume() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume*> _m = GetClass().GetMethod(O("get_LeftHandWaterVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>* get_materialData() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>*> _m = GetClass().GetMethod(O("get_materialData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_NativeScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_NativeScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion::GTPlayer_HandState get_RightHand() {
            static BNM::Method<::GorillaLocomotion::GTPlayer_HandState> _m = GetClass().GetMethod(O("get_RightHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery get_RightHandWaterSurface() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _m = GetClass().GetMethod(O("get_RightHandWaterSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* get_RightHandWaterVolume() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume*> _m = GetClass().GetMethod(O("get_RightHandWaterVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_RigidbodyInterpolation() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_RigidbodyInterpolation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_RigidbodyVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_RigidbodyVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_scale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_scale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_ScaleMultiplier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ScaleMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TentacleActiveAtFrame() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TentacleActiveAtFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ThrusterActiveAtFrame() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ThrusterActiveAtFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_turnedThisFrame() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_turnedThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery get_WaterSurfaceForHead() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _m = GetClass().GetMethod(O("get_WaterSurfaceForHead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetControllerTransform(bool isLeftHand) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetControllerTransform"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        ::Transform* GetHandFollower(bool isLeftHand) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetHandFollower"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        ::BNM::Structures::Unity::Vector3 GetHandOffset(bool isLeftHand) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetHandOffset"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        ::BNM::Structures::Unity::Vector3 GetHandPosition(bool isLeftHand, ::GorillaLocomotion::StiltID stiltID) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetHandPosition"), {"isLeftHand", "stiltID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand, stiltID);
        }
        ::BNM::Structures::Unity::Quaternion GetHandRotOffset(bool isLeftHand) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("GetHandRotOffset"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        void GetHandTapData(bool isLeftHand, ::GorillaLocomotion::StiltID stiltID, bool& wasHandTouching, bool& wasSliding, int& handMatIndex, ::GlobalNamespace::GorillaSurfaceOverride*& surfaceOverride, ::BNM::Structures::Unity::RaycastHit& handHitInfo, ::BNM::Structures::Unity::Vector3& handPosition, ::GorillaLocomotion_Climbing::GorillaVelocityTracker*& handVelocityTracker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetHandTapData"), {"isLeftHand", "stiltID", "wasHandTouching", "wasSliding", "handMatIndex", "surfaceOverride", "handHitInfo", "handPosition", "handVelocityTracker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, stiltID, &wasHandTouching, &wasSliding, &handMatIndex, &surfaceOverride, &handHitInfo, &handPosition, &handVelocityTracker);
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetHandVelocityTracker(bool isLeftHand) {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _m = GetClass().GetMethod(O("GetHandVelocityTracker"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetInteractPointVelocityTracker(bool isLeftHand) {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _m = GetClass().GetMethod(O("GetInteractPointVelocityTracker"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        int GetMaterialTouchIndex(bool isLeftHand) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMaterialTouchIndex"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        float GetSlidePercentage(::BNM::Structures::Unity::RaycastHit raycastHit) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSlidePercentage"), {"raycastHit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(raycastHit);
        }
        ::GlobalNamespace::GorillaSurfaceOverride* GetSurfaceOverride(bool isLeftHand) {
            static BNM::Method<::GlobalNamespace::GorillaSurfaceOverride*> _m = GetClass().GetMethod(O("GetSurfaceOverride"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        bool GetSwimmingVelocityForHand(::BNM::Structures::Unity::Vector3 startingHandPosition, ::BNM::Structures::Unity::Vector3 endingHandPosition, ::BNM::Structures::Unity::Vector3 palmForwardDirection, float dt, ::GorillaLocomotion_Swimming::WaterVolume*& contactingWaterVolume, ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery& waterSurface, ::BNM::Structures::Unity::Vector3& swimmingVelocityChange) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSwimmingVelocityForHand"), {"startingHandPosition", "endingHandPosition", "palmForwardDirection", "dt", "contactingWaterVolume", "waterSurface", "swimmingVelocityChange"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startingHandPosition, endingHandPosition, palmForwardDirection, dt, &contactingWaterVolume, &waterSurface, &swimmingVelocityChange);
        }
        ::BNM::Structures::Unity::RaycastHit GetTouchHitInfo(bool isLeftHand) {
            static BNM::Method<::BNM::Structures::Unity::RaycastHit> _m = GetClass().GetMethod(O("GetTouchHitInfo"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        void GrabPersonalHoverboard(bool isLeftHand, ::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion rot, ::BNM::Structures::Unity::Color col) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabPersonalHoverboard"), {"isLeftHand", "pos", "rot", "col"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, pos, rot, col);
        }
        void handleClimbing(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("handleClimbing"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
        void HandleTentacleMovement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTentacleMovement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 HoverboardFixedUpdate(::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("HoverboardFixedUpdate"), {"velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(velocity);
        }
        void HoverboardLateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HoverboardLateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsHandTouching(bool isLeftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHandTouching"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        bool IsTouchingMovingSurface(::BNM::Structures::Unity::Vector3 rayOrigin, ::BNM::Structures::Unity::RaycastHit raycastHit, int& movingSurfaceId, bool& sideTouch, bool& isMonkeBlock) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTouchingMovingSurface"), {"rayOrigin", "raycastHit", "movingSurfaceId", "sideTouch", "isMonkeBlock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rayOrigin, raycastHit, &movingSurfaceId, &sideTouch, &isMonkeBlock);
        }
        bool IterativeCollisionSphereCast(::BNM::Structures::Unity::Vector3 startPosition, float sphereRadius, ::BNM::Structures::Unity::Vector3 movementVector, ::BNM::Structures::Unity::Vector3 boostVector, ::BNM::Structures::Unity::Vector3& endPosition, bool singleHand, float& slipPercentage, ::BNM::Structures::Unity::RaycastHit& iterativeHitInfo, bool fullSlide) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IterativeCollisionSphereCast"), {"startPosition", "sphereRadius", "movementVector", "boostVector", "endPosition", "singleHand", "slipPercentage", "iterativeHitInfo", "fullSlide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPosition, sphereRadius, movementVector, boostVector, &endPosition, singleHand, &slipPercentage, &iterativeHitInfo, fullSlide);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool MaxSphereSizeForNoOverlap(float testRadius, ::BNM::Structures::Unity::Vector3 checkPosition, bool ignoreOneWay, float& overlapRadiusTest) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MaxSphereSizeForNoOverlap"), {"testRadius", "checkPosition", "ignoreOneWay", "overlapRadiusTest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(testRadius, checkPosition, ignoreOneWay, &overlapRadiusTest);
        }
        ::BNM::Structures::Unity::Vector3 MovingSurfaceMovement() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("MovingSurfaceMovement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int NonAllocRaycast(::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 endPosition) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NonAllocRaycast"), {"startPosition", "endPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPosition, endPosition);
        }
        void OnBeforeRenderInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeRenderInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnChangeActiveHandhold() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnChangeActiveHandhold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCollisionStay(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionStay"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnEnterWaterVolume(::Collider* playerCollider, ::GorillaLocomotion_Swimming::WaterVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterWaterVolume"), {"playerCollider", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerCollider, volume);
        }
        void OnExitWaterVolume(::Collider* playerCollider, ::GorillaLocomotion_Swimming::WaterVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnExitWaterVolume"), {"playerCollider", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerCollider, volume);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 PositionWithOffset(::Transform* transformToModify, ::BNM::Structures::Unity::Vector3 offsetVector) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("PositionWithOffset"), {"transformToModify", "offsetVector"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transformToModify, offsetVector);
        }
        void RemoveHandHold(::GlobalNamespace::GorillaGrabber* grabber, bool forLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveHandHold"), {"grabber", "forLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabber, forLeftHand);
        }
        void RequestTentacleMove(bool isLeftHand, ::BNM::Structures::Unity::Vector3 move) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTentacleMove"), {"isLeftHand", "move"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, move);
        }
        void ResetRigidbodyInterpolation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetRigidbodyInterpolation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestoreLayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreLayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RigidbodyMovePosition(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RigidbodyMovePosition"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos);
        }
        float RotateWithSurface(::BNM::Structures::Unity::Quaternion rotationDelta, ::BNM::Structures::Unity::Vector3 pivot) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("RotateWithSurface"), {"rotationDelta", "pivot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rotationDelta, pivot);
        }
        void ScaleAwayFromPoint(float oldScale, float newScale, ::BNM::Structures::Unity::Vector3 scaleCenter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ScaleAwayFromPoint"), {"oldScale", "newScale", "scaleCenter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldScale, newScale, scaleCenter);
        }
        static ::BNM::Structures::Unity::Vector3 ScalePointAwayFromCenter(::BNM::Structures::Unity::Vector3 point, float baseRadius, float oldScale, float newScale, ::BNM::Structures::Unity::Vector3 scaleCenter) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ScalePointAwayFromCenter"), {"point", "baseRadius", "oldScale", "newScale", "scaleCenter"});
            return _m.Call(point, baseRadius, oldScale, newScale, scaleCenter);
        }
        void set_enableHoverMode(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_enableHoverMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_forcedUnderwater(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_forcedUnderwater"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsBodySliding(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsBodySliding"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsFrozen(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsFrozen"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_isHoverAllowed(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isHoverAllowed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_jumpMultiplier(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_jumpMultiplier"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LaserZiplineActiveAtFrame(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LaserZiplineActiveAtFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LastHandTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastHandTouchedGroundAtNetworkTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LastTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastTouchedGroundAtNetworkTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayerRotationOverride(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerRotationOverride"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_RigidbodyInterpolation(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RigidbodyInterpolation"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TentacleActiveAtFrame(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TentacleActiveAtFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ThrusterActiveAtFrame(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ThrusterActiveAtFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetGravityOverride(::BNM::IL2CPP::Il2CppObject* caller, ::BNM::Structures::Mono::Action<::GorillaLocomotion::GTPlayer*>* gravityFunction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGravityOverride"), {"caller", "gravityFunction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(caller, gravityFunction);
        }
        void SetHalloweenLevitation(float levitateStrength, float levitateDuration, float levitateBlendOutDuration, float levitateBonusStrength, float levitateBonusOffAtYSpeed, float levitateBonusFullAtYSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHalloweenLevitation"), {"levitateStrength", "levitateDuration", "levitateBlendOutDuration", "levitateBonusStrength", "levitateBonusOffAtYSpeed", "levitateBonusFullAtYSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(levitateStrength, levitateDuration, levitateBlendOutDuration, levitateBonusStrength, levitateBonusOffAtYSpeed, levitateBonusFullAtYSpeed);
        }
        void SetHandOffsets(bool isLeftHand, ::BNM::Structures::Unity::Vector3 handOffset, ::BNM::Structures::Unity::Quaternion handRotOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHandOffsets"), {"isLeftHand", "handOffset", "handRotOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, handOffset, handRotOffset);
        }
        void SetHoverActive(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHoverActive"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void SetHoverAllowed(bool allowed, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHoverAllowed"), {"allowed", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allowed, force);
        }
        void SetHoverboardPosRot(::BNM::Structures::Unity::Vector3 worldPos, ::BNM::Structures::Unity::Quaternion worldRot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHoverboardPosRot"), {"worldPos", "worldRot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(worldPos, worldRot);
        }
        void SetLeftMaximumSlipThisFrame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLeftMaximumSlipThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMaximumSlipThisFrame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaximumSlipThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNativeScale_1(::GlobalNamespace::NativeSizeChangerSettings* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNativeScale"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        void SetPlayerVelocity(::BNM::Structures::Unity::Vector3 newVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerVelocity"), {"newVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newVelocity);
        }
        void SetRightMaximumSlipThisFrame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRightMaximumSlipThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetScaleMultiplier_1(float s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScaleMultiplier"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(velocity);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StoreVelocities() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StoreVelocities"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void stuckHandsCheckFixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("stuckHandsCheckFixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void stuckHandsCheckLateUpdate(::BNM::Structures::Unity::Vector3& finalLeftHandPosition, ::BNM::Structures::Unity::Vector3& finalRightHandPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("stuckHandsCheckLateUpdate"), {"finalLeftHandPosition", "finalRightHandPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&finalLeftHandPosition, &finalRightHandPosition);
        }
        ::GlobalNamespace::HandLinkAuthorityStatus TakeMyHand_GetSelfHandLinkAuthority() {
            static BNM::Method<::GlobalNamespace::HandLinkAuthorityStatus> _m = GetClass().GetMethod(O("TakeMyHand_GetSelfHandLinkAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TakeMyHand_PositionBoth(::GlobalNamespace::TakeMyHand_HandLink* link) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionBoth"), {"link"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(link);
        }
        void TakeMyHand_PositionBoth_BothHands(::GlobalNamespace::TakeMyHand_HandLink* link1, ::GlobalNamespace::TakeMyHand_HandLink* link2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionBoth_BothHands"), {"link1", "link2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(link1, link2);
        }
        void TakeMyHand_PositionChild_LocalPlayer(::GlobalNamespace::TakeMyHand_HandLink* parentLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionChild_LocalPlayer"), {"parentLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parentLink);
        }
        void TakeMyHand_PositionChild_LocalPlayer(::GlobalNamespace::TakeMyHand_HandLink* linkA, ::GlobalNamespace::TakeMyHand_HandLink* linkB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionChild_LocalPlayer"), {"linkA", "linkB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(linkA, linkB);
        }
        void TakeMyHand_PositionChild_RemotePlayer(::GlobalNamespace::TakeMyHand_HandLink* childLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionChild_RemotePlayer"), {"childLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(childLink);
        }
        void TakeMyHand_PositionChild_RemotePlayer_BothHands(::GlobalNamespace::TakeMyHand_HandLink* childLink1, ::GlobalNamespace::TakeMyHand_HandLink* childLink2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionChild_RemotePlayer_BothHands"), {"childLink1", "childLink2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(childLink1, childLink2);
        }
        void TakeMyHand_PositionTriple(::GlobalNamespace::TakeMyHand_HandLink* linkA, ::GlobalNamespace::TakeMyHand_HandLink* linkB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_PositionTriple"), {"linkA", "linkB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(linkA, linkB);
        }
        void TakeMyHand_ProcessMovement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeMyHand_ProcessMovement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TeleportTo(::Transform* destination, bool matchDestinationRotation, bool maintainVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportTo"), {"destination", "matchDestinationRotation", "maintainVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(destination, matchDestinationRotation, maintainVelocity);
        }
        void TeleportTo(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool keepVelocity, bool center) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportTo"), {"position", "rotation", "keepVelocity", "center"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, rotation, keepVelocity, center);
        }
        void TeleportToTrain(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportToTrain"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void TempFreezeHand(bool isLeft, float freezeDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TempFreezeHand"), {"isLeft", "freezeDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft, freezeDuration);
        }
        bool TryNormalize(::BNM::Structures::Unity::Vector3 input, ::BNM::Structures::Unity::Vector3& normalized, float& magnitude, float eps) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryNormalize"), {"input", "normalized", "magnitude", "eps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, &normalized, &magnitude, eps);
        }
        bool TryNormalizeDown(::BNM::Structures::Unity::Vector3 input, ::BNM::Structures::Unity::Vector3& normalized, float& magnitude, float eps) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryNormalizeDown"), {"input", "normalized", "magnitude", "eps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, &normalized, &magnitude, eps);
        }
        void Turn(float degrees) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Turn"), {"degrees"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(degrees);
        }
        void UnsetGravityOverride(::BNM::IL2CPP::Il2CppObject* caller) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsetGravityOverride"), {"caller"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(caller);
        }
        void UpdateStiltOffset(::GorillaLocomotion::StiltID stiltID, ::BNM::Structures::Unity::Vector3 currentTipWorldPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStiltOffset"), {"stiltID", "currentTipWorldPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stiltID, currentTipWorldPos);
        }
        void VerifyClimbHelper() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifyClimbHelper"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
