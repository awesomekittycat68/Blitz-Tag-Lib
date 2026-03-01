#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIUpgradeSet.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIGadgetTapTeleporter : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetTapTeleporter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasInfiniteDuration() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInfiniteDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInfiniteDuration(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInfiniteDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Color GetIdentifierColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _method = GetClass().GetMethod(O("get_identifierColor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIdentifierColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_identifierColor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsVelocityPreserved() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isVelocityPreserved"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsVelocityPreserved(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isVelocityPreserved"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseStealthTeleporters() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_useStealthTeleporters"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseStealthTeleporters(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_useStealthTeleporters"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SIGadgetTapTeleporterDeployable* GetSelection1Teleport() {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporterDeployable*> _field = GetClass().GetField(O("_selection1Teleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetTapTeleporterDeployable* GetSelection2Teleport() {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporterDeployable*> _field = GetClass().GetField(O("_selection2Teleport"));
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
        float GetFarOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("farOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetIdentifierColorDisplay() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("identifierColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeSet GetInstanceUpgrades() {
            static BNM::Field<::GlobalNamespace::SIUpgradeSet> _field = GetClass().GetField(O("instanceUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHandTapSetup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandTapSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxBrightness() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBrightness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinBrightness() {
            static BNM::Field<float> _field = GetClass().GetField(O("minBrightness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNearOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("nearOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextPlacementDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextPlacementDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextSelectionId() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSelectionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOverlapCheckLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("overlapCheckLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverlapCheckRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("overlapCheckRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapCheckResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapCheckResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacementCheckDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("placementCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacementDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("placementDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPortalDefaultDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("portalDefaultDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSelectionColor1() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSelectionColor2() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetSelectionColorDisplay() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("selectionColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTeleportPointPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("teleportPointPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSelection1Teleport(::GlobalNamespace::SIGadgetTapTeleporterDeployable* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporterDeployable*> _field = GetClass().GetField(O("_selection1Teleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelection2Teleport(::GlobalNamespace::SIGadgetTapTeleporterDeployable* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporterDeployable*> _field = GetClass().GetField(O("_selection2Teleport"));
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
        void SetFarOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("farOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdentifierColorDisplay(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("identifierColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceUpgrades(::GlobalNamespace::SIUpgradeSet value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeSet> _field = GetClass().GetField(O("instanceUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHandTapSetup(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandTapSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBrightness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBrightness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinBrightness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minBrightness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNearOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nearOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPlacementDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextPlacementDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSelectionId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSelectionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapCheckLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("overlapCheckLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapCheckRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overlapCheckRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapCheckResults(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapCheckResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementCheckDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placementCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placementDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPortalDefaultDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("portalDefaultDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionColor1(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionColor2(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionColorDisplay(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("selectionColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportPointPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("teleportPointPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyIdentifierColor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyIdentifierColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        bool CheckValidTeleporterPlacement(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckValidTeleporterPlacement"), {"position", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position, direction);
        }
        void CycleSelection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CycleSelection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Color GenerateColor(int seed) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("GenerateColor"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seed);
        }
        bool get_hasInfiniteDuration() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInfiniteDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Color get_identifierColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("get_identifierColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isVelocityPreserved() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isVelocityPreserved"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_useStealthTeleporters() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_useStealthTeleporters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleHandAttached() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHandAttached"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleHandDetach() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHandDetach"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleOnDestroyed(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnDestroyed"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void HandleOnHandTap(bool isLeft, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnHandTap"), {"isLeft", "position", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft, position, normal);
        }
        void HandleStateChanged(int64_t oldState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleStateChanged"), {"oldState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldState, newState);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void PlaceNewTapTeleporter(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int selectionId, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaceNewTapTeleporter"), {"position", "rotation", "selectionId", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, rotation, selectionId, duration);
        }
        void PlaceTapTeleporter(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaceTapTeleporter"), {"position", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, normal);
        }
        void ProcessClientToAuthorityRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToAuthorityRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void ProcessClientToClientRPC(::Photon_Pun::PhotonMessageInfo info, int rpcID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToClientRPC"), {"info", "rpcID", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, rpcID, data);
        }
        void RemoveTeleporter(int selectId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTeleporter"), {"selectId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(selectId);
        }
        void set_hasInfiniteDuration(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInfiniteDuration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_identifierColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_identifierColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_isVelocityPreserved(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isVelocityPreserved"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_useStealthTeleporters(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_useStealthTeleporters"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateNewTeleporters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNewTeleporters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateNextSelectionDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNextSelectionDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
