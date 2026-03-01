#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTRendererMatSlot.hpp"
#include "ShaderHashId.hpp"
#include "SIGadget.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetTentacleArm : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetTentacleArm");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIGadgetWristJet]  ";
        static constexpr const char* preErr = "[SIGadgetWristJet]  ERROR!!!  ";
        static constexpr const char* preErrBeta = "[SIGadgetWristJet]  ERROR!!!  (beta only log)  ";
        static constexpr float kFUEL_CAPACITY = 10.0f;
        static constexpr int64_t HoldingLeftHand_Bit = 2305843009213693952;
        static constexpr int64_t Anchored_Bit = 4611686018427387904;
        static constexpr int64_t HoldingHand_Bit = -9223372036854775808;
        bool GetIsAnchored() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isAnchored"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsAnchored(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isAnchored"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsFull() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFull"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsHoldingHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isHoldingHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsHoldingHand(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isHoldingHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUsesEnergy() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UsesEnergy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurrentGrabFps() {
            static BNM::Field<float> _field = GetClass().GetField(O("_current_grab_fps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFpsHoldingBase() {
            static BNM::Field<float> _field = GetClass().GetField(O("_fps_holding_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFpsRechargingBase() {
            static BNM::Field<float> _field = GetClass().GetField(O("_fps_recharging_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGaugeMatPropBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gaugeMatPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabAngleBase() {
            static BNM::Field<float> _field = GetClass().GetField(O("_grabAngle_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabCostBase() {
            static BNM::Field<float> _field = GetClass().GetField(O("_grabCost_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJumpCostBase() {
            static BNM::Field<float> _field = GetClass().GetField(O("_jumpCost_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJumpSpeedBase() {
            static BNM::Field<float> _field = GetClass().GetField(O("_jumpSpeed_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLowFuelThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lowFuelThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinGrabDot() {
            static BNM::Field<float> _field = GetClass().GetField(O("_min_grab_dot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWallAngleDot() {
            static BNM::Field<float> _field = GetClass().GetField(O("_wall_angle_dot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetAttachFailSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("attachFailSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetAttachSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("attachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanHoldSlipperyWalls() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canHoldSlipperyWalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetClaw() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("claw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetClawAnchorPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("clawAnchorPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetClawAnchorRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("clawAnchorRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetClawHoldAdjustment() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("clawHoldAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetClawHoldingVisual() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("clawHoldingVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetClawMaxBlendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("ClawMaxBlendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetClawMaxRotBlendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("ClawMaxRotBlendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetClawReleasedVisual() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("clawReleasedVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetClawVisualPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("clawVisualPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetClawVisualRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("clawVisualRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentFuel() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFuel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetDetachFailSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("detachFailSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetDetachSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("detachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelCostGrab() {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_Grab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelCostJumpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_JumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelCostSlipperyMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_Slippery_Multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelCostWallMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_Wall_Multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelPerSecondHolding() {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelPerSecond_Holding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelPerSecondRecharging() {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelPerSecond_Recharging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDurationOnGrab() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDurationOnRelease() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrengthOnGrab() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrengthOnRelease() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasFailedToGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFailedToGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasGravityOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasGravityOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasRigCallback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRigCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTentacle2() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTentacle2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback* GetHeldPlayerCallback() {
            static BNM::Field<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*> _field = GetClass().GetField(O("heldPlayerCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGripBroken() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGripBroken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLowFuel() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLowFuel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetKnownSafePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("knownSafePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastCallbackFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastCallbackFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastHeldCallbackFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastHeldCallbackFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRequestedPlayerPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRequestedPlayerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLengthFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("LengthFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetLowFuelSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("lowFuelSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>* GetMGaugeMatSlots() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>*> _field = GetClass().GetField(O("m_gaugeMatSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("marker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxGrabAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxGrabAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTentacleJumpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxTentacleJumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTentacleLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTentacleLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRigForCallback() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rigForCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTentacleAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTentacleAnchor2() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleEndHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEnd_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleEndDirHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEndDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTentacleForwardAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("tentacleForwardAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTentacleMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tentacleMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTentacleMat2() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tentacleMat2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetTentacleRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetTentacleRenderer2() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleRingOriginHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleRingOrigin_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleStartDirHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleStartDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWallAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("WallAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasGrabPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGrabPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWorldCollisionLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("worldCollisionLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentGrabFps(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_current_grab_fps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFpsHoldingBase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_fps_holding_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFpsRechargingBase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_fps_recharging_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGaugeMatPropBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gaugeMatPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabAngleBase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_grabAngle_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabCostBase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_grabCost_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumpCostBase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_jumpCost_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumpSpeedBase(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_jumpSpeed_base"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowFuelThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lowFuelThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinGrabDot(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_min_grab_dot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallAngleDot(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_wall_angle_dot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachFailSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("attachFailSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("attachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanHoldSlipperyWalls(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canHoldSlipperyWalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaw(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("claw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawAnchorPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("clawAnchorPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawAnchorRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("clawAnchorRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawHoldAdjustment(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("clawHoldAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawHoldingVisual(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("clawHoldingVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawMaxBlendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ClawMaxBlendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawMaxRotBlendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ClawMaxRotBlendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawReleasedVisual(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("clawReleasedVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawVisualPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("clawVisualPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClawVisualRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("clawVisualRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentFuel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFuel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetachFailSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("detachFailSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetachSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("detachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelCostGrab(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_Grab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelCostJumpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_JumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelCostSlipperyMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_Slippery_Multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelCostWallMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelCost_Wall_Multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelPerSecondHolding(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelPerSecond_Holding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelPerSecondRecharging(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FuelPerSecond_Recharging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDurationOnGrab(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDurationOnRelease(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrengthOnGrab(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrengthOnRelease(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasFailedToGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFailedToGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasGravityOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasGravityOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasRigCallback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRigCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTentacle2(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTentacle2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldPlayerCallback(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*> _field = GetClass().GetField(O("heldPlayerCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGripBroken(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGripBroken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLowFuel(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLowFuel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnownSafePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("knownSafePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCallbackFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastCallbackFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeldCallbackFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastHeldCallbackFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRequestedPlayerPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRequestedPlayerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LengthFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowFuelSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("lowFuelSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMGaugeMatSlots(::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>*> _field = GetClass().GetField(O("m_gaugeMatSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("marker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxGrabAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxGrabAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTentacleJumpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxTentacleJumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTentacleLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTentacleLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigForCallback(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rigForCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleAnchor2(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleEndHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEnd_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleEndDirHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEndDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleForwardAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tentacleForwardAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tentacleMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleMat2(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tentacleMat2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleRenderer2(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleRingOriginHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleRingOrigin_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleStartDirHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleStartDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("WallAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasGrabPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGrabPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldCollisionLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("worldCollisionLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CallBack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallBack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ClearClawAnchor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearClawAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_isAnchored() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isAnchored"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFull() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isHoldingHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isHoldingHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UsesEnergy() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UsesEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetIdealClawPosition(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetIdealClawPosition"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig);
        }
        static ::BNM::Structures::Unity::Vector3 GetPlaneIntersection(::BNM::Structures::Unity::Vector3 p1Pos, ::BNM::Structures::Unity::Vector3 p1Norm, ::BNM::Structures::Unity::Vector3 p2Pos, ::BNM::Structures::Unity::Vector3 p2Norm, ::BNM::Structures::Unity::Vector3 refPoint) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPlaneIntersection"), {"p1Pos", "p1Norm", "p2Pos", "p2Norm", "refPoint"});
            return _m.Call(p1Pos, p1Norm, p2Pos, p2Norm, refPoint);
        }
        int64_t GetStateLong() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetStateLong"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GravityOverrideFunction(::GorillaLocomotion::GTPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GravityOverrideFunction"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChanged(int64_t oldState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChanged"), {"oldState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldState, newState);
        }
        void OnGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnKnockback(::BNM::Structures::Unity::Vector3 knockbackVector) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKnockback"), {"knockbackVector"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(knockbackVector);
        }
        void OnReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSnapped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUnsnapped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUnsnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void set_isAnchored(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isAnchored"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_isHoldingHand(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isHoldingHand"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetClawAnchor(::BNM::Structures::Unity::Vector3 clawPosition, ::BNM::Structures::Unity::Quaternion clawRotation, ::BNM::Structures::Unity::Vector3 adjustment) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClawAnchor"), {"clawPosition", "clawRotation", "adjustment"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clawPosition, clawRotation, adjustment);
        }
        static ::BNM::Structures::Unity::Vector3 SplineSample(float theta, ::BNM::Structures::Unity::Vector3 startDir, ::BNM::Structures::Unity::Vector3 endPos, ::BNM::Structures::Unity::Vector3 endDir) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("SplineSample"), {"theta", "startDir", "endPos", "endDir"});
            return _m.Call(theta, startDir, endPos, endDir);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFuelGauge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFuelGauge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRecharge(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRecharge"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void UpdateTentacle(::Material* material, ::Transform* tentacle, ::Transform* anchor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTentacle"), {"material", "tentacle", "anchor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(material, tentacle, anchor);
        }
        void UpdateTentacleHoldingHandPos(::GlobalNamespace::TakeMyHand_HandLink* heldHandLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTentacleHoldingHandPos"), {"heldHandLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(heldHandLink);
        }
    };
}
