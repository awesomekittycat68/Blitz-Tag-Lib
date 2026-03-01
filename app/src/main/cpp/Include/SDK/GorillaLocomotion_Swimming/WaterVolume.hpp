#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaLocomotion/GTPlayer_LiquidType.hpp"
#include "WaterOverlappingCollider.hpp"
#include "WaterVolume_SurfaceQuery.hpp"
#include "../GorillaTag_GuidedRefs/BaseGuidedRefTargetMono.hpp"

namespace GorillaLocomotion_Swimming {
    struct WaterVolume : ::GorillaTag_GuidedRefs::BaseGuidedRefTargetMono {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "WaterVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* WaterSplashRPC = "RPC_PlaySplashEffect";
        ::GorillaLocomotion_Swimming::WaterCurrent* GetCurrent() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterCurrent*> _method = GetClass().GetMethod(O("get_Current"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion::GTPlayer_LiquidType GetLiquidType() {
            static BNM::Method<::GorillaLocomotion::GTPlayer_LiquidType> _method = GetClass().GetMethod(O("get_LiquidType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Swimming::WaterParameters* GetParameters() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterParameters*> _method = GetClass().GetMethod(O("get_Parameters"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRig* GetPlayerVRRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_PlayerVRRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_ColliderEnteredVolume(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderEnteredVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ColliderEnteredVolume(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderEnteredVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_ColliderEnteredWater(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderEnteredWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ColliderEnteredWater(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderEnteredWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_ColliderExitedVolume(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderExitedVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ColliderExitedVolume(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderExitedVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_ColliderExitedWater(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderExitedWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ColliderExitedWater(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderExitedWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* GetGuidedRefTargetId() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*> _field = GetClass().GetField(O("_guidedRefTargetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGuidedRefTargetObject() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_guidedRefTargetObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* GetColliderEnteredVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderEnteredVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* GetColliderEnteredWater() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderEnteredWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* GetColliderExitedVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderExitedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* GetColliderExitedWater() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderExitedWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawSurfaceCast() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawSurfaceCast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMonkeblock() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMonkeblock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsStationary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStationary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer_LiquidType GetLiquidType_f() {
            static BNM::Field<::GorillaLocomotion::GTPlayer_LiquidType> _field = GetClass().GetField(O("liquidType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>* GetMeshTrianglesDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("meshTrianglesDict"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*>* GetMeshVertsDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*>*> _field = GetClass().GetField(O("meshVertsDict"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterOverlappingCollider>* GetPersistentColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterOverlappingCollider>*> _field = GetClass().GetField(O("persistentColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetPlayerVRRig_f() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("playerVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Collider*, ::GorillaLocomotion_Swimming::WaterVolume*>* GetSharedColliderRegistry() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, ::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("sharedColliderRegistry"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetSharedMeshTris() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sharedMeshTris"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetSharedMeshVerts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("sharedMeshVerts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<float>* GetSplashRPCSendTimes() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("splashRPCSendTimes"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSurfaceColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("surfaceColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSurfacePlane() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("surfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetTriggerCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("triggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetVolumeColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("volumeColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeMaxHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("volumeMaxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeMinHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("volumeMinHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterCurrent* GetWaterCurrent() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterCurrent*> _field = GetClass().GetField(O("waterCurrent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterParameters* GetWaterParams() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("waterParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGuidedRefTargetId(::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*> _field = GetClass().GetField(O("_guidedRefTargetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuidedRefTargetObject(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_guidedRefTargetObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderEnteredVolume(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderEnteredVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderEnteredWater(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderEnteredWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderExitedVolume(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderExitedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderExitedWater(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent*> _field = GetClass().GetField(O("ColliderExitedWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawSurfaceCast(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawSurfaceCast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMonkeblock(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMonkeblock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsStationary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStationary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidType(::GorillaLocomotion::GTPlayer_LiquidType value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer_LiquidType> _field = GetClass().GetField(O("liquidType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMeshTrianglesDict(::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("meshTrianglesDict"));
            _field.Set(value);
        }
        static void SetMeshVertsDict(::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*>*> _field = GetClass().GetField(O("meshVertsDict"));
            _field.Set(value);
        }
        void SetPersistentColliders(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterOverlappingCollider>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterOverlappingCollider>*> _field = GetClass().GetField(O("persistentColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("playerVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSharedColliderRegistry(::BNM::Structures::Mono::Dictionary<::Collider*, ::GorillaLocomotion_Swimming::WaterVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, ::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("sharedColliderRegistry"));
            _field.Set(value);
        }
        void SetSharedMeshTris(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sharedMeshTris"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMeshVerts(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("sharedMeshVerts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSplashRPCSendTimes(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("splashRPCSendTimes"));
            _field.Set(value);
        }
        void SetSurfaceColliders(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("surfaceColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfacePlane(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("surfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("triggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("volumeColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeMaxHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("volumeMaxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeMinHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("volumeMinHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterCurrent(::GorillaLocomotion_Swimming::WaterCurrent* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterCurrent*> _field = GetClass().GetField(O("waterCurrent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterParams(::GorillaLocomotion_Swimming::WaterParameters* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("waterParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_ColliderEnteredVolume_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderEnteredVolume"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_ColliderEnteredWater_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderEnteredWater"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_ColliderExitedVolume_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderExitedVolume"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_ColliderExitedWater_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ColliderExitedWater"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanPlayerSwim() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerSwim"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckColliderAgainstWater(::GorillaLocomotion_Swimming::WaterOverlappingCollider& persistentCollider, float currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckColliderAgainstWater"), {"persistentCollider", "currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&persistentCollider, currentTime);
        }
        bool CheckColliderInVolume(::Collider* collider, bool& inWater, bool& surfaceDetected) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckColliderInVolume"), {"collider", "inWater", "surfaceDetected"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider, &inWater, &surfaceDetected);
        }
        void ColliderInWaterUpdate(::GorillaLocomotion_Swimming::WaterOverlappingCollider& persistentCollider, float currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ColliderInWaterUpdate"), {"persistentCollider", "currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&persistentCollider, currentTime);
        }
        void ColliderOutOfWaterUpdate(::GorillaLocomotion_Swimming::WaterOverlappingCollider& persistentCollider, float currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ColliderOutOfWaterUpdate"), {"persistentCollider", "currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&persistentCollider, currentTime);
        }
        void DebugDrawMeshColliderHitTriangle(::BNM::Structures::Unity::RaycastHit hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugDrawMeshColliderHitTriangle"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hit);
        }
        ::GorillaLocomotion_Swimming::WaterCurrent* get_Current() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterCurrent*> _m = GetClass().GetMethod(O("get_Current"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion::GTPlayer_LiquidType get_LiquidType() {
            static BNM::Method<::GorillaLocomotion::GTPlayer_LiquidType> _m = GetClass().GetMethod(O("get_LiquidType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Swimming::WaterParameters* get_Parameters() {
            static BNM::Method<::GorillaLocomotion_Swimming::WaterParameters*> _m = GetClass().GetMethod(O("get_Parameters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_PlayerVRRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_PlayerVRRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetColliderVelocity(::GorillaLocomotion_Swimming::WaterOverlappingCollider& persistentCollider) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetColliderVelocity"), {"persistentCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&persistentCollider);
        }
        bool GetSurfaceQueryForPoint(::BNM::Structures::Unity::Vector3 point, ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery& result, bool debugDraw) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSurfaceQueryForPoint"), {"point", "result", "debugDraw"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point, &result, debugDraw);
        }
        bool HasOwnershipOfCollider(::Collider* collider) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasOwnershipOfCollider"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider);
        }
        bool HitOutsideSurfaceOfMesh(::BNM::Structures::Unity::Vector3 castDir, ::BNM::IL2CPP::Il2CppObject* meshCollider, ::BNM::Structures::Unity::RaycastHit hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HitOutsideSurfaceOfMesh"), {"castDir", "meshCollider", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(castDir, meshCollider, hit);
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
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnWaterSurfaceEnter(::GorillaLocomotion_Swimming::WaterOverlappingCollider& persistentCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWaterSurfaceEnter"), {"persistentCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&persistentCollider);
        }
        void OnWaterSurfaceExit(::GorillaLocomotion_Swimming::WaterOverlappingCollider& persistentCollider, float currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWaterSurfaceExit"), {"persistentCollider", "currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&persistentCollider, currentTime);
        }
        bool RaycastWater(::BNM::Structures::Unity::Vector3 origin, ::BNM::Structures::Unity::Vector3 direction, ::BNM::Structures::Unity::RaycastHit& hit, float distance, int layerMask) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RaycastWater"), {"origin", "direction", "hit", "distance", "layerMask"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(origin, direction, &hit, distance, layerMask);
        }
        void RefreshColliders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshColliders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_ColliderEnteredVolume_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderEnteredVolume"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_ColliderEnteredWater_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderEnteredWater"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_ColliderExitedVolume_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderExitedVolume"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_ColliderExitedWater_1(::GorillaLocomotion_Swimming::WaterVolume_WaterVolumeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ColliderExitedWater"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveCollidersOutsideVolume(float currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCollidersOutsideVolume"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void SetPropertiesFromPlaceholder(TP0 properties, ::BNM::Structures::Mono::List<::Collider*>* waterVolumeColliders, ::GorillaLocomotion_Swimming::WaterParameters* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPropertiesFromPlaceholder"), {"properties", "waterVolumeColliders", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(properties, waterVolumeColliders, parameters);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryRegisterOwnershipOfCollider(::Collider* collider, bool isInWater, bool isSurfaceDetected) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryRegisterOwnershipOfCollider"), {"collider", "isInWater", "isSurfaceDetected"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider, isInWater, isSurfaceDetected);
        }
        void UnregisterOwnershipOfCollider(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterOwnershipOfCollider"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
    };
}
