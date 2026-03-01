#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetSlipMitt_EState.hpp"
#include "SIUpgradeSet.hpp"
#include "../GorillaLocomotion/GTPlayer_HandState.hpp"

namespace GlobalNamespace {
    struct SIGadgetSlipMitt : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetSlipMitt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIGadgetSlipMitt]  ";
        static constexpr const char* preErr = "[SIGadgetSlipMitt]  ERROR!!!  ";
        int GetHandIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get__HandIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetAirGrabTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_airGrabTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAirReleaseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_airReleaseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetAirReleaseVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_airReleaseVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_HandState GetAttachedHandState() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandState> _field = GetClass().GetField(O("_attachedHandState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttachedPlayerActorNr() {
            static BNM::Field<int> _field = GetClass().GetField(O("_attachedPlayerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetAttachedVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_attachedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTagged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isTagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastAttachedPlayerActorNr() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastAttachedPlayerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDashSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRaycastHitResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("_raycastHitResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetSlipMitt_EState GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetSlipMitt_EState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMAirGrabXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_airGrabXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetMButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("m_buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetMClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("m_clips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetMClipVolumes() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("m_clipVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMCooldownDurationDefault() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_cooldownDurationDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMCooldownDurationUpgrade() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_cooldownDurationUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMInputActivateThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_inputActivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMInputDeactivateThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_inputDeactivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxDashSpeedDefault() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxDashSpeedDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxDashSpeedUpgraded() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxDashSpeedUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxInfluenceAngleDefault() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxInfluenceAngleDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxInfluenceAngleUpgrade() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxInfluenceAngleUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMinDashSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMSlipperySurfacesTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_slipperySurfacesTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameSnappable* GetMSnappable() {
            static BNM::Field<::GlobalNamespace::GameSnappable*> _field = GetClass().GetField(O("m_snappable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMSpeedMappingCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_speedMappingCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMYankMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMYankMinSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMYoyoDefaultPosXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_yoyoDefaultPosXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMYoyoRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("m_yoyoRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAirGrabTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_airGrabTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAirReleaseSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_airReleaseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAirReleaseVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_airReleaseVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedHandState(::GorillaLocomotion::GTPlayer_HandState value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_HandState> _field = GetClass().GetField(O("_attachedHandState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedPlayerActorNr(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_attachedPlayerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_attachedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTagged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isTagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAttachedPlayerActorNr(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastAttachedPlayerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDashSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastHitResults(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("_raycastHitResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetSlipMitt_EState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetSlipMitt_EState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAirGrabXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_airGrabXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("m_buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("m_clips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMClipVolumes(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("m_clipVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCooldownDurationDefault(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_cooldownDurationDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCooldownDurationUpgrade(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_cooldownDurationUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInputActivateThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_inputActivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInputDeactivateThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_inputDeactivateThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxDashSpeedDefault(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxDashSpeedDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxDashSpeedUpgraded(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxDashSpeedUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxInfluenceAngleDefault(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxInfluenceAngleDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxInfluenceAngleUpgrade(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxInfluenceAngleUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMinDashSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSlipperySurfacesTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_slipperySurfacesTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSnappable(::GlobalNamespace::GameSnappable* value) {
            static BNM::Field<::GlobalNamespace::GameSnappable*> _field = GetClass().GetField(O("m_snappable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSpeedMappingCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_speedMappingCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYankMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYankMinSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYoyoDefaultPosXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_yoyoDefaultPosXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYoyoRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("m_yoyoRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float _CalculateDashSpeed(float currentYankSpeed) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("_CalculateDashSpeed"), {"currentYankSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentYankSpeed);
        }
        static bool _CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_CanChangeState"), {"newStateIndex"});
            return _m.Call(newStateIndex);
        }
        bool _CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void _DoAirGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_DoAirGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _DoDash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_DoDash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _HandleGTPlayerOnUpdateGravity(::GorillaLocomotion::GTPlayer* gtPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleGTPlayerOnUpdateGravity"), {"gtPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gtPlayer);
        }
        void _HandleStartInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleStartInteraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _HandleStopInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleStopInteraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _PlayAudio(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_PlayAudio"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void _PlayHaptic(float strengthMultiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_PlayHaptic"), {"strengthMultiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strengthMultiplier);
        }
        void _SetStateShared(::GlobalNamespace::SIGadgetSlipMitt_EState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetStateShared"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get__HandIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get__HandIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetSlipMitt_EState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
