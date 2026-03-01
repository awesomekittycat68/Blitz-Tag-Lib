#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetSlashDash_EState.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetSlashDash : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetSlashDash");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIGadgetSlashDash]  ";
        static constexpr const char* preErr = "[SIGadgetSlashDash]  ERROR!!!  ";
        int GetHandIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get__HandIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetAirReleaseVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_airReleaseVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("_coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDashStartNetworkTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_dashStartNetworkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDashStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_dashStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFxGObj() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_fxGObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFxMain() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_fxMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFxXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_fxXform"));
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
        float GetMaxDashSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetSlashDash_EState GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetSlashDash_EState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetMButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("m_buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMCoolDownDefault() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_coolDownDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMCoolDownUpgraded() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_coolDownUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHandMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_handMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMHandMinSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_handMinSpeed"));
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
        ::ParticleSystem* GetMParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("m_particleSystem"));
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
        void SetAirReleaseVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_airReleaseVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDashStartNetworkTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_dashStartNetworkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDashStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_dashStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxGObj(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_fxGObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxMain(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_fxMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_fxXform"));
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
        void SetMaxDashSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDashSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetSlashDash_EState value) {
            static BNM::Field<::GlobalNamespace::SIGadgetSlashDash_EState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("m_buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCoolDownDefault(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_coolDownDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCoolDownUpgraded(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_coolDownUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHandMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_handMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHandMinSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_handMinSpeed"));
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
        void SetMParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("m_particleSystem"));
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
        float _CalculateDashSpeed(float currentYankSpeed) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("_CalculateDashSpeed"), {"currentYankSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentYankSpeed);
        }
        bool _CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void _DoDash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_DoDash"));
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
        void _OnUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _PlayHaptic(float strengthMultiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_PlayHaptic"), {"strengthMultiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strengthMultiplier);
        }
        void _SetStateAuthority(::GlobalNamespace::SIGadgetSlashDash_EState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        bool _TrySetStateShared(::GlobalNamespace::SIGadgetSlashDash_EState newState) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_TrySetStateShared"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newState);
        }
        void _UpdateFxRotation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_UpdateFxRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
