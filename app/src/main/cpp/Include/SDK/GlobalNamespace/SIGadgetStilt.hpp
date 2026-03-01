#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIUpgradeSet.hpp"
#include "SIUpgradeType.hpp"
#include "SnapJointType.hpp"
#include "../GorillaLocomotion/StiltID.hpp"

namespace GlobalNamespace {
    struct SIGadgetStilt : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetStilt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int64_t IsSpinningBit = 1;
        bool GetCanStun() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanStun"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCanStun(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CanStun"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCanTag() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCanTag(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CanTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetHasMotor() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasMotor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasMotor(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasMotor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetStickToAdjustLength() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_StickToAdjustLength"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStickToAdjustLength(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_StickToAdjustLength"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTriggerToExtend() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TriggerToExtend"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTriggerToExtend(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TriggerToExtend"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetAdjustmentSendRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("adjustmentSendRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetAttachedNetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("attachedNetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttachedPlayerActorNr() {
            static BNM::Field<int> _field = GetClass().GetField(O("attachedPlayerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetAttachedVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("attachedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentExtendedLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentExtendedLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentMotorAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentMotorAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::StiltID GetCurrentStiltID() {
            static BNM::Field<::GorillaLocomotion::StiltID> _field = GetClass().GetField(O("currentStiltID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::StiltID GetCurrentStiltIDB() {
            static BNM::Field<::GorillaLocomotion::StiltID> _field = GetClass().GetField(O("currentStiltIDB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::StiltID GetCurrentStiltIDC() {
            static BNM::Field<::GorillaLocomotion::StiltID> _field = GetClass().GetField(O("currentStiltIDC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetExtendSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("extendSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("extendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtendSpeedNormal() {
            static BNM::Field<float> _field = GetClass().GetField(O("extendSpeedNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtendSpeedUpgraded() {
            static BNM::Field<float> _field = GetClass().GetField(O("extendSpeedUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasEndB() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasEndB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasEndC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasEndC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSpinning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsSpinning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTagged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastSentLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastSentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLengthChangeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("lengthChangeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMatDest() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("matDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxArmLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxArmLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLengthNormal() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLengthNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLengthUpgraded() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLengthUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMidpoint() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("midpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMotorAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("motorAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMotorTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("motorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextAdjustmentSendTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextAdjustmentSendTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOffsetDir() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* GetRestrictedUpgrades() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("restrictedUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractedLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractedLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetRetractSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("retractSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractSpeedNormal() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeedNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractSpeedUpgraded() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeedUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateSpeedFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateSpeedFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetSkinnedMatDest() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("skinnedMatDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStiltEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stiltEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStiltEndB() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stiltEndB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStiltEndC() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stiltEndC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTagActivatedMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tagActivatedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetTagActivatedObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("tagActivatedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("targetLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTip() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTipDefaultOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("tipDefaultOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SnapJointType GetWasSnappedByLocalJoint() {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("wasSnappedByLocalJoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdjustmentSendRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("adjustmentSendRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedNetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("attachedNetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedPlayerActorNr(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attachedPlayerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("attachedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentExtendedLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentExtendedLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMotorAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentMotorAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStiltID(::GorillaLocomotion::StiltID value) {
            static BNM::Field<::GorillaLocomotion::StiltID> _field = GetClass().GetField(O("currentStiltID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStiltIDB(::GorillaLocomotion::StiltID value) {
            static BNM::Field<::GorillaLocomotion::StiltID> _field = GetClass().GetField(O("currentStiltIDB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStiltIDC(::GorillaLocomotion::StiltID value) {
            static BNM::Field<::GorillaLocomotion::StiltID> _field = GetClass().GetField(O("currentStiltIDC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("extendSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendSpeedNormal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extendSpeedNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendSpeedUpgraded(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extendSpeedUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasEndB(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasEndB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasEndC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasEndC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSpinning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsSpinning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTagged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSentLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastSentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthChangeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lengthChangeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatDest(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("matDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxArmLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxArmLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLengthNormal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLengthNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLengthUpgraded(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLengthUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMidpoint(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("midpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("motorAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMotorTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("motorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextAdjustmentSendTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextAdjustmentSendTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetDir(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictedUpgrades(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("restrictedUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractedLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractedLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("retractSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractSpeedNormal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeedNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractSpeedUpgraded(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeedUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateSpeedFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateSpeedFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkinnedMatDest(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("skinnedMatDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStiltEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stiltEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStiltEndB(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stiltEndB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStiltEndC(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stiltEndC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagActivatedMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tagActivatedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagActivatedObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("tagActivatedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("targetLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTip(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTipDefaultOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("tipDefaultOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasSnappedByLocalJoint(::GlobalNamespace::SnapJointType value) {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("wasSnappedByLocalJoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyCurrentLength() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyCurrentLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckPlaySounds(float oldLength, float newLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckPlaySounds"), {"oldLength", "newLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldLength, newLength);
        }
        void DisableCurrentStilt() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableCurrentStilt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SIUpgradeSet FilterUpgradeNodes(::GlobalNamespace::SIUpgradeSet upgrades) {
            static BNM::Method<::GlobalNamespace::SIUpgradeSet> _m = GetClass().GetMethod(O("FilterUpgradeNodes"), {"upgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrades);
        }
        bool get_CanStun() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanStun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanTag() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanTag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasMotor() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasMotor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_StickToAdjustLength() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_StickToAdjustLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TriggerToExtend() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TriggerToExtend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleStartInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleStartInteraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleStopInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleStopInteraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleVRRigMaterialIndexChanged(int oldMatIndex, int newMatIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleVRRigMaterialIndexChanged"), {"oldMatIndex", "newMatIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldMatIndex, newMatIndex);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        int64_t PackStateForNetwork() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackStateForNetwork"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CanStun(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CanStun"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CanTag(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CanTag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_hasMotor(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasMotor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_StickToAdjustLength(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_StickToAdjustLength"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TriggerToExtend(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TriggerToExtend"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SpinMotor(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpinMotor"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void UnpackStateFromNetwork(int64_t state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackStateFromNetwork"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void UpdateEndPoints(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEndPoints"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
    };
}
