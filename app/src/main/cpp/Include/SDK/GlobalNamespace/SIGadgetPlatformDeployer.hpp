#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetPlatformDeployer_State.hpp"
#include "SIUpgradeSet.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIGadgetPlatformDeployer : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetPlatformDeployer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MAX_DEPLOY_DIST = 2.0f;
        bool GetIsFull() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFull"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetUsesEnergy() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UsesEnergy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetActivationHandDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBlockedDisplayMesh() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("blockedDisplayMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBlockedMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("blockedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetBlockedSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("blockedSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanActivateWhileHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canActivateWhileHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIChargeDisplay* GetChargeDisplay() {
            static BNM::Field<::GlobalNamespace::SIChargeDisplay*> _field = GetClass().GetField(O("chargeDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIChargeDisplay* GetChargeDisplayDefault() {
            static BNM::Field<::GlobalNamespace::SIChargeDisplay*> _field = GetClass().GetField(O("chargeDisplayDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIChargeDisplay* GetChargeDisplayHighCapacity() {
            static BNM::Field<::GlobalNamespace::SIChargeDisplay*> _field = GetClass().GetField(O("chargeDisplayHighCapacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeRecoveryTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRecoveryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeRecoveryTimeDefault() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRecoveryTimeDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeRecoveryTimeFast() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRecoveryTimeFast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeployedPlatformCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("deployedPlatformCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeployMinRequiredHandDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("deployMinRequiredHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandDepthOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("handDepthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandInset() {
            static BNM::Field<float> _field = GetClass().GetField(O("handInset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInputSensitivity() {
            static BNM::Field<float> _field = GetClass().GetField(O("inputSensitivity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeSet GetInstanceUpgrades() {
            static BNM::Field<::GlobalNamespace::SIUpgradeSet> _field = GetClass().GetField(O("instanceUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetInvalidPreviewMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("invalidPreviewMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInstancePlace() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInstancePlace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxCharges() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCharges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxChargesDefault() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxChargesDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxChargesHighCapacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxChargesHighCapacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlatformPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("platformPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetPreviewMesh() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("previewMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPreviewPlatform() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("previewPlatform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetRechargeSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("rechargeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingRechargeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingRechargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetPlatformDeployer_State GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetPlatformDeployer_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetUnblockedMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unblockedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetValidPreviewMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("validPreviewMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInputPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInputPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationHandDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockedDisplayMesh(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("blockedDisplayMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockedMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("blockedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockedSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("blockedSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanActivateWhileHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canActivateWhileHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeDisplay(::GlobalNamespace::SIChargeDisplay* value) {
            static BNM::Field<::GlobalNamespace::SIChargeDisplay*> _field = GetClass().GetField(O("chargeDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeDisplayDefault(::GlobalNamespace::SIChargeDisplay* value) {
            static BNM::Field<::GlobalNamespace::SIChargeDisplay*> _field = GetClass().GetField(O("chargeDisplayDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeDisplayHighCapacity(::GlobalNamespace::SIChargeDisplay* value) {
            static BNM::Field<::GlobalNamespace::SIChargeDisplay*> _field = GetClass().GetField(O("chargeDisplayHighCapacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeRecoveryTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRecoveryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeRecoveryTimeDefault(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRecoveryTimeDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeRecoveryTimeFast(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRecoveryTimeFast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeployedPlatformCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deployedPlatformCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeployMinRequiredHandDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deployMinRequiredHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandDepthOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handDepthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandInset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handInset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputSensitivity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inputSensitivity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceUpgrades(::GlobalNamespace::SIUpgradeSet value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeSet> _field = GetClass().GetField(O("instanceUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvalidPreviewMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("invalidPreviewMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInstancePlace(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInstancePlace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCharges(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCharges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxChargesDefault(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxChargesDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxChargesHighCapacity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxChargesHighCapacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlatformPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("platformPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviewMesh(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("previewMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviewPlatform(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("previewPlatform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRechargeSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("rechargeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingRechargeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingRechargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetPlatformDeployer_State value) {
            static BNM::Field<::GlobalNamespace::SIGadgetPlatformDeployer_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnblockedMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unblockedMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidPreviewMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("validPreviewMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInputPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInputPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        bool CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeState"), {"newStateIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newStateIndex);
        }
        bool CheckInitInputs() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInitInputs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckReleaseInputs() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckReleaseInputs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CreateLocalPlatformInstance(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion rot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateLocalPlatformInstance"), {"pos", "rot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos, rot);
        }
        void DeployPlatform(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion rot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeployPlatform"), {"pos", "rot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos, rot);
        }
        void Disrupt(float disruptTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disrupt"), {"disruptTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disruptTime);
        }
        bool get_IsFull() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UsesEnergy() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UsesEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleBlockedActionChanged(bool isBlocked) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleBlockedActionChanged"), {"isBlocked"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isBlocked);
        }
        void HandleStopInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleStopInteraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsChargeAvailable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsChargeAvailable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsEquippedLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEquippedLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void ProcessAuthorityToClientRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAuthorityToClientRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void ProcessClientToAuthorityRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToAuthorityRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void SetPreviewVisibility(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPreviewVisibility"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        void SetState_1(::GlobalNamespace::SIGadgetPlatformDeployer_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetPlatformDeployer_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SpendCharge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpendCharge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryDeployInstantPlatform() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDeployInstantPlatform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryDeployPlatform() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDeployPlatform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryGetGamePlayer(::GlobalNamespace::GamePlayer*& player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetGamePlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&player);
        }
        bool TryGetPlatformPosRotScale(::BNM::Structures::Unity::Vector3& pos, ::BNM::Structures::Unity::Quaternion& rot, ::BNM::Structures::Unity::Vector3& scale) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetPlatformPosRotScale"), {"pos", "rot", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&pos, &rot, &scale);
        }
        void UpdatePreview() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePreview"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRecharge(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRecharge"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
