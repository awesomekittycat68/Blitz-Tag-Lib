#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetDashYoyo_EState.hpp"
#include "SIGadgetDashYoyo_StateMaterialsInfo.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetDashYoyo : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetDashYoyo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIGadgetDashYoyo]  ";
        static constexpr const char* preErr = "[SIGadgetDashYoyo]  ERROR!!!  ";
        int GetHandIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get__HandIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetAttachedNetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("_attachedNetPlayer"));
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
        float GetCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasStunUpgrade() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasStunUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTagUpgrade() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasTagUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRecheckingYank() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRecheckingYank"));
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
        ::BNM::Structures::Mono::Array<void*>* GetLaunchYoyoRPCArgs() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("_launchYoyoRPCArgs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDashSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxEncounteredYankSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxEncounteredYankSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxInfluenceAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxInfluenceAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetDashYoyo_EState GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_EState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo GetStateMaterials() {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("_stateMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSuccessfulYankTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_successfulYankTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("_throwMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastThrown() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeLastThrown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetYankBeginPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_yankBeginPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo GetMBaseStateMats() {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("m_baseStateMats"));
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
        float GetMMaxYankRecheckTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxYankRecheckTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMinDashSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMinThrowSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minThrowSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPostYankCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_postYankCooldown"));
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
        ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo GetMTagUpgradeStateMatsWhileTagged() {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("m_tagUpgradeStateMatsWhileTagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo GetMTagUpgradeStateMatsWhileUntagged() {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("m_tagUpgradeStateMatsWhileUntagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetMTetherLineRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("m_tetherLineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMThrowMultiplierDefault() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_throwMultiplierDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMThrowMultiplierUpgrade() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_throwMultiplierUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMWaitBeforeAutoReturn() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_waitBeforeAutoReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMYankMaxAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMaxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMYankMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMYankMinDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMinDistance"));
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
        ::Transform* GetMYoyoTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_yoyoTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetMYoyoTargetRB() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("m_yoyoTargetRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachedNetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("_attachedNetPlayer"));
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
        void SetCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasStunUpgrade(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasStunUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTagUpgrade(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasTagUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRecheckingYank(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRecheckingYank"));
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
        void SetMaxEncounteredYankSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxEncounteredYankSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxInfluenceAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxInfluenceAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetDashYoyo_EState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_EState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateMaterials(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("_stateMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessfulYankTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_successfulYankTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_throwMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastThrown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeLastThrown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYankBeginPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_yankBeginPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMBaseStateMats(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("m_baseStateMats"));
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
        void SetMMaxYankRecheckTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxYankRecheckTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMinDashSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMinThrowSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minThrowSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPostYankCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_postYankCooldown"));
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
        void SetMTagUpgradeStateMatsWhileTagged(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("m_tagUpgradeStateMatsWhileTagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTagUpgradeStateMatsWhileUntagged(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo> _field = GetClass().GetField(O("m_tagUpgradeStateMatsWhileUntagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTetherLineRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("m_tetherLineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrowMultiplierDefault(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_throwMultiplierDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrowMultiplierUpgrade(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_throwMultiplierUpgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMWaitBeforeAutoReturn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_waitBeforeAutoReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYankMaxAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMaxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYankMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYankMinDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_yankMinDistance"));
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
        void SetMYoyoTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_yoyoTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMYoyoTargetRB(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("m_yoyoTargetRB"));
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
        void _CheckYankProgression() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_CheckYankProgression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _FreezeYoYo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_FreezeYoYo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void _HandleVRRigMaterialIndexChanged(int oldMatIndex, int newMatIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleVRRigMaterialIndexChanged"), {"oldMatIndex", "newMatIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldMatIndex, newMatIndex);
        }
        void _LaunchYoYoShared(::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::BNM::Structures::Unity::Vector3 targetPosition, ::BNM::Structures::Unity::Quaternion targetRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_LaunchYoYoShared"), {"velocity", "angVelocity", "targetPosition", "targetRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(velocity, angVelocity, targetPosition, targetRotation);
        }
        void _OnTagStateOrUpgradesChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnTagStateOrUpgradesChanged"));
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
        void _ResetYoYo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ResetYoYo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _SetMaterials(::Material* mat) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetMaterials"), {"mat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mat);
        }
        void _SetStateShared(::GlobalNamespace::SIGadgetDashYoyo_EState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetStateShared"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        bool _ThrowYoYoTarget() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_ThrowYoYoTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        int get__HandIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get__HandIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHitPlayer_Authority(::GlobalNamespace::SuperInfectionGame* siTagGameManager, ::GlobalNamespace::NetPlayer* victimNetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHitPlayer_Authority"), {"siTagGameManager", "victimNetPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(siTagGameManager, victimNetPlayer);
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
        void RemoteThrowYoYoTarget(::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::BNM::Structures::Unity::Vector3 targetPosition, ::BNM::Structures::Unity::Quaternion targetRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteThrowYoYoTarget"), {"velocity", "angVelocity", "targetPosition", "targetRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(velocity, angVelocity, targetPosition, targetRotation);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetDashYoyo_EState newState) {
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
