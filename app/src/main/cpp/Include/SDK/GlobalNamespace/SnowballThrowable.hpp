#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HoldableObject.hpp"
#include "../GorillaTag/GTColor_HSVRanges.hpp"
#include "../GorillaTag/XformOffset.hpp"

namespace GlobalNamespace {
    struct SnowballThrowable : ::GlobalNamespace::HoldableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SnowballThrowable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetProjectileHash() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ProjectileHash"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag::XformOffset GetSpawnOffset() {
            static BNM::Method<::GorillaTag::XformOffset> _method = GetClass().GetMethod(O("get_SpawnOffset"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpawnOffset(::GorillaTag::XformOffset value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SpawnOffset"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAwakeHasBeenCalled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("awakeHasBeenCalled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestroyTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOfflineRig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOfflineRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLinSpeedMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("linSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::RandomProjectileThrowable*>* GetLocalModels() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::RandomProjectileThrowable*>*> _field = GetClass().GetField(O("localModels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetMatDataIndexes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("matDataIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLinSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnEnableHasBeenCalled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("OnEnableHasBeenCalled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetPickupSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("pickupSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRandModelIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("randModelIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::GTColor_HSVRanges GetRandomColorHSVRanges() {
            static BNM::Field<::GorillaTag::GTColor_HSVRanges> _field = GetClass().GetField(O("randomColorHSVRanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRandomizeColor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("randomizeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRandomModelSelection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("randomModelSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::XformOffset GetSpawnOffset_f() {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("spawnOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetTargetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetThrowableMakerIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("throwableMakerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetThrowEventName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("throwEventName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAwakeHasBeenCalled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("awakeHasBeenCalled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOfflineRig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOfflineRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinSpeedMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("linSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalModels(::BNM::Structures::Mono::List<::GorillaTagScripts::RandomProjectileThrowable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::RandomProjectileThrowable*>*> _field = GetClass().GetField(O("localModels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatDataIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("matDataIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLinSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnableHasBeenCalled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("OnEnableHasBeenCalled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPickupSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("pickupSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandModelIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("randModelIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomColorHSVRanges(::GorillaTag::GTColor_HSVRanges value) {
            static BNM::Field<::GorillaTag::GTColor_HSVRanges> _field = GetClass().GetField(O("randomColorHSVRanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomizeColor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("randomizeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomModelSelection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("randomModelSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnOffset_fs(::GorillaTag::XformOffset value) {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("spawnOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowableMakerIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("throwableMakerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowEventName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("throwEventName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Transform* Anchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("Anchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void AnchorToHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnchorToHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyColor(::BNM::Structures::Unity::Color newColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyColor"), {"newColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newColor);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropItemCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItemCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableRandomModel(int index, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableRandomModel"), {"index", "enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, enable);
        }
        int get_ProjectileHash() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ProjectileHash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag::XformOffset get_SpawnOffset() {
            static BNM::Method<::GorillaTag::XformOffset> _m = GetClass().GetMethod(O("get_SpawnOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetRandomModelIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomModelIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleOnDestroyRandomProjectile(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnDestroyRandomProjectile"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        bool IsMine() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateReplicated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SlingshotProjectile* LaunchSnowballLocal(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 velocity, float scale, bool randomColour, ::BNM::Structures::Unity::Color colour) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("LaunchSnowballLocal"), {"location", "velocity", "scale", "randomColour", "colour"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(location, velocity, scale, randomColour, colour);
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
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnHover(::GlobalNamespace::InteractionPoint* pointHovered, ::GameObject* hoveringHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"pointHovered", "hoveringHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointHovered, hoveringHand);
        }
        void OnProjectileImpact(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::Structures::Unity::Vector3 impactPos, ::GlobalNamespace::NetPlayer* hitPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileImpact"), {"projectile", "impactPos", "hitPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, impactPos, hitPlayer);
        }
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void OnSnowballRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSnowballRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PerformSnowballThrowAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PerformSnowballThrowAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_SpawnOffset(::GorillaTag::XformOffset value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SpawnOffset"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetSnowballActiveLocal(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSnowballActiveLocal"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        ::GlobalNamespace::SlingshotProjectile* SpawnProjectile() {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("SpawnProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
