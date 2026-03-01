#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PickupableVariant.hpp"

namespace GorillaTag_Cosmetics {
    struct PickupableCosmetic : ::GorillaTag_Cosmetics::PickupableVariant {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "PickupableCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowPickupFromGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowPickupFromGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoPickupAfterSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoPickupAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoPickupDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoPickupDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetBodyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetBreakableBitmask() {
            static BNM::Field<int> _field = GetClass().GetField(O("breakableBitmask"));
            return _field.Get();
        }
        ::ParticleSystem* GetBreakEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("breakEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBroken() {
            static BNM::Field<bool> _field = GetClass().GetField(O("broken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBrokenTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("brokenTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetCachedLocalRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("cachedLocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRayIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugPlacementRays() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugPlacementRays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*>* GetDirectionCache() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*>*> _field = GetClass().GetField(O("directionCache"));
            return _field.Get();
        }
        bool GetDontStickToWall() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dontStickToWall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFloorLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("floorLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("frameCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetHideOnBreak() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("hideOnBreak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoldableObject* GetHoldableParent() {
            static BNM::Field<::GlobalNamespace::HoldableObject*> _field = GetClass().GetField(O("holdableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetInteractionPoint() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("interactionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBreakable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBreakable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLandingSide() {
            static BNM::Field<int> _field = GetClass().GetField(O("landingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnBrokenShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnBrokenShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnPickupShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnPickupShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnPlacedShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnPlacedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlacedOnFloor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("placedOnFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacedOnFloorTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("placedOnFloorTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacementOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("placementOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRaycastCheckDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("RaycastCheckDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRaycastChecksMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("RaycastChecksMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRaycastOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("raycastOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRaysPerStep() {
            static BNM::Field<int> _field = GetClass().GetField(O("raysPerStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRespawnDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigOwnedPhysicsBody* GetRigOwnedPhysicsBody() {
            static BNM::Field<::GlobalNamespace::RigOwnedPhysicsBody*> _field = GetClass().GetField(O("rigOwnedPhysicsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSelfSkinOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("selfSkinOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStepEveryNFrames() {
            static BNM::Field<int> _field = GetClass().GetField(O("stepEveryNFrames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetThrowSettledTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("throwSettledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetTmpEmpty() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("tmpEmpty"));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetTransferrableParent() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowPickupFromGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowPickupFromGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoPickupAfterSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoPickupAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoPickupDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoPickupDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetBreakableBitmask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("breakableBitmask"));
            _field.Set(value);
        }
        void SetBreakEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("breakEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBroken(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("broken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBrokenTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("brokenTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedLocalRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("cachedLocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRayIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugPlacementRays(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugPlacementRays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDontStickToWall(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dontStickToWall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("floorLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frameCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHideOnBreak(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("hideOnBreak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldableParent(::GlobalNamespace::HoldableObject* value) {
            static BNM::Field<::GlobalNamespace::HoldableObject*> _field = GetClass().GetField(O("holdableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractionPoint(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("interactionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBreakable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBreakable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingSide(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("landingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBrokenShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnBrokenShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPickupShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnPickupShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlacedShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnPlacedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacedOnFloor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("placedOnFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacedOnFloorTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placedOnFloorTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placementOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastCheckDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RaycastCheckDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastChecksMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RaycastChecksMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("raycastOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaysPerStep(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("raysPerStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigOwnedPhysicsBody(::GlobalNamespace::RigOwnedPhysicsBody* value) {
            static BNM::Field<::GlobalNamespace::RigOwnedPhysicsBody*> _field = GetClass().GetField(O("rigOwnedPhysicsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelfSkinOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("selfSkinOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStepEveryNFrames(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stepEveryNFrames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSettledTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("throwSettledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrableParent(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BreakPlaceable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BreakPlaceable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DelayedPickup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DelayedPickup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DelayedPickup_Internal() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedPickup_Internal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCachedDirections(int count) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("GetCachedDirections"), {"count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(count);
        }
        ::BNM::Structures::Unity::Vector3 GetFibonacciSphereDirection(int index, int total) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetFibonacciSphereDirection"), {"index", "total"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index, total);
        }
        ::BNM::Structures::Unity::Vector3 GetSafeRayOrigin(::BNM::Structures::Unity::Vector3 rawOrigin, ::BNM::Structures::Unity::Vector3 dir) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetSafeRayOrigin"), {"rawOrigin", "dir"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rawOrigin, dir);
        }
        void OnBreakReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBreakReplicated"));
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
        void Pickup(bool isAutoPickup) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Pickup"), {"isAutoPickup"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isAutoPickup);
        }
        void PlayBreakEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayBreakEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Release(::GlobalNamespace::HoldableObject* holdable, ::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 velocity, float playerScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"), {"holdable", "startPosition", "velocity", "playerScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable, startPosition, velocity, playerScale);
        }
        void SettleBanner(::BNM::Structures::Unity::RaycastHit hitInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SettleBanner"), {"hitInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitInfo);
        }
        void ShowRenderers(bool visible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowRenderers"), {"visible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visible);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
