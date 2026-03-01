#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "MoonController_Placement.hpp"
#include "MoonController_SceneData.hpp"
#include "MoonController_Scenes.hpp"

namespace GlobalNamespace {
    struct MoonController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MoonController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float moonFallStart = 0.086666666f;
        static constexpr float moonFallEnd = 0.22f;
        static constexpr float moonRiseStart = 0.53999996f;
        static constexpr float moonRiseEnd = 0.6733333f;
        float GetDistance() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Distance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetTimeOfDay() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_TimeOfDay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::MoonController_Scenes GetActiveScene() {
            static BNM::Field<::GlobalNamespace::MoonController_Scenes> _field = GetClass().GetField(O("activeScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAlwaysInTheSky() {
            static BNM::Field<bool> _field = GetClass().GetField(O("alwaysInTheSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrackDayInOctoberOverride() {
            static BNM::Field<int> _field = GetClass().GetField(O("crackDayInOctoberOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrackEndDayOfYear() {
            static BNM::Field<int> _field = GetClass().GetField(O("crackEndDayOfYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCrackMaterialPropertyBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("crackMaterialPropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrackProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("crackProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetCrackRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("crackRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrackStartDayOfYear() {
            static BNM::Field<int> _field = GetClass().GetField(O("crackStartDayOfYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentlySetCrackProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentlySetCrackProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawOrbit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawOrbit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugOverrideCrackDayInOctober() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugOverrideCrackDayInOctober"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugOverrideCrackProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugOverrideCrackProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugOverrideTimeOfDay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugOverrideTimeOfDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDefaultMoon() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("defaultMoon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MoonController_Placement GetDefaultPlacement() {
            static BNM::Field<::GlobalNamespace::MoonController_Placement> _field = GetClass().GetField(O("defaultPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistance_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEyeCloseDistThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("eyeCloseDistThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEyeOpenDistThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("eyeOpenDistThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEyeOpenHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("eyeOpenHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOpenEyeModelEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("openEyeModelEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOpenMoon() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("openMoon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Animator* GetOpenMoonAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("openMoonAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOrbitAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MoonController_SceneData>* GetScenes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MoonController_SceneData>*> _field = GetClass().GetField(O("scenes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOfDayOverride() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOfDayOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::MoonController_Scenes>* GetZoneToSceneMapping() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::MoonController_Scenes>*> _field = GetClass().GetField(O("zoneToSceneMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveScene(::GlobalNamespace::MoonController_Scenes value) {
            static BNM::Field<::GlobalNamespace::MoonController_Scenes> _field = GetClass().GetField(O("activeScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlwaysInTheSky(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("alwaysInTheSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrackDayInOctoberOverride(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("crackDayInOctoberOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrackEndDayOfYear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("crackEndDayOfYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrackMaterialPropertyBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("crackMaterialPropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrackProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crackProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrackRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("crackRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrackStartDayOfYear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("crackStartDayOfYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlySetCrackProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentlySetCrackProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawOrbit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawOrbit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugOverrideCrackDayInOctober(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugOverrideCrackDayInOctober"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugOverrideCrackProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugOverrideCrackProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugOverrideTimeOfDay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugOverrideTimeOfDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMoon(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("defaultMoon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultPlacement(::GlobalNamespace::MoonController_Placement value) {
            static BNM::Field<::GlobalNamespace::MoonController_Placement> _field = GetClass().GetField(O("defaultPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeCloseDistThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("eyeCloseDistThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeOpenDistThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("eyeOpenDistThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeOpenHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("eyeOpenHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenEyeModelEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("openEyeModelEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenMoon(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("openMoon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenMoonAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("openMoonAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrbitAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenes(::BNM::Structures::Mono::List<::GlobalNamespace::MoonController_SceneData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MoonController_SceneData>*> _field = GetClass().GetField(O("scenes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOfDayOverride(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOfDayOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneToSceneMapping(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::MoonController_Scenes>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::MoonController_Scenes>*> _field = GetClass().GetField(O("zoneToSceneMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_Distance() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Distance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_TimeOfDay() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_TimeOfDay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetEyeOpenAnimation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEyeOpenAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartEyeCloseAnimation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartEyeCloseAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateActiveScene(::GlobalNamespace::MoonController_Scenes nextScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActiveScene"), {"nextScene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextScene);
        }
        void UpdateCrack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCrack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDistance(float nextDistance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDistance"), {"nextDistance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextDistance);
        }
        void UpdatePlacement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlacement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlacementOrbit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlacementOrbit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlacementSimple() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlacementSimple"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateVisualState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisualState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
