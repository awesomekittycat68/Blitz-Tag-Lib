#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "UnderwaterCameraEffect_CameraOverlapWaterState.hpp"
#include "WaterVolume_SurfaceQuery.hpp"

namespace GorillaLocomotion_Swimming {
    struct UnderwaterCameraEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "UnderwaterCameraEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float edgeBuffer = 0.04f;
        static constexpr const char* kShaderKeyword_GlobalCameraTouchingWater = "_GLOBAL_CAMERA_TOUCHING_WATER";
        static constexpr const char* kShaderKeyword_GlobalCameraFullyUnderwater = "_GLOBAL_CAMERA_FULLY_UNDERWATER";
        float GetCachedAspectRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedAspectRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCachedFov() {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedFov"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::UnderwaterCameraEffect_CameraOverlapWaterState GetCameraOverlapWaterState() {
            static BNM::Field<::GorillaLocomotion_Swimming::UnderwaterCameraEffect_CameraOverlapWaterState> _field = GetClass().GetField(O("cameraOverlapWaterState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDraw() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceFromCamera() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceFromCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetFrustumPlaneCornersLocal() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("frustumPlaneCornersLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFrustumPlaneExtents() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("frustumPlaneExtents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTargetCamera() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTargetCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetPlaneRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("planeRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShaderParamGlobalCameraOverlapWaterSurfacePlane() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalCameraOverlapWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetTargetCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("targetCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::UnderwaterParticleEffects* GetUnderwaterParticleEffect() {
            static BNM::Field<::GorillaLocomotion_Swimming::UnderwaterParticleEffects*> _field = GetClass().GetField(O("underwaterParticleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetWaterSurface() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("waterSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedAspectRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedAspectRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedFov(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cachedFov"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraOverlapWaterState(::GorillaLocomotion_Swimming::UnderwaterCameraEffect_CameraOverlapWaterState value) {
            static BNM::Field<::GorillaLocomotion_Swimming::UnderwaterCameraEffect_CameraOverlapWaterState> _field = GetClass().GetField(O("cameraOverlapWaterState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDraw(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceFromCamera(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceFromCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrustumPlaneExtents(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("frustumPlaneExtents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTargetCamera(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTargetCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaneRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("planeRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderParamGlobalCameraOverlapWaterSurfacePlane(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalCameraOverlapWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("targetCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterParticleEffect(::GorillaLocomotion_Swimming::UnderwaterParticleEffects* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::UnderwaterParticleEffects*> _field = GetClass().GetField(O("underwaterParticleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurface(::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("waterSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CalculateFrustumPlaneBounds(float fieldOfView, float aspectRatio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateFrustumPlaneBounds"), {"fieldOfView", "aspectRatio"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fieldOfView, aspectRatio);
        }
        float GetFrustumCoverageDistance(::BNM::Structures::Unity::Vector3 localDirection) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetFrustumCoverageDistance"), {"localDirection"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(localDirection);
        }
        void InitializeShaderProperties() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeShaderProperties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*>
        bool IntersectPlanes(TP0 p1, TP1 p2, ::BNM::Structures::Unity::Vector3& point, ::BNM::Structures::Unity::Vector3& direction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IntersectPlanes"), {"p1", "p2", "point", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p1, p2, &point, &direction);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCameraOverlapState(::GorillaLocomotion_Swimming::UnderwaterCameraEffect_CameraOverlapWaterState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCameraOverlapState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void SetFullScreenPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFullScreenPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetOffScreenPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOffScreenPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
