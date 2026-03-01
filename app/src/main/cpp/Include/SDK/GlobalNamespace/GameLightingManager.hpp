#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameLightingManager_LightData.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GameLightingManager : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameLightingManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GameLightingManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GameLightingManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int MAX_VERTEX_LIGHTS = 50;
        static constexpr int USE_MAX_VERTEX_LIGHTS = 20;
        static constexpr int MAX_UPDATE_LIGHTS_PER_FRAME = 10;
        static constexpr int MAX_LIGHT_POWER = 100;
        static constexpr int LIGHT_POWER_BIN_SIZE = 5;
        ::BNM::Structures::Unity::Vector3 GetCameraPosForSort() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cameraPosForSort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCustomVertexLightingEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("customVertexLightingEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDesaturateAndTintEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("desaturateAndTintEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameLight*>* GetGameLights() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameLight*>*> _field = GetClass().GetField(O("gameLights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetImmediateSort() {
            static BNM::Field<bool> _field = GetClass().GetField(O("immediateSort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GameLightingManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GameLightingManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void* GetLightData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lightData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLightDataBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lightDataBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetLightDistanceBins() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("lightDistanceBins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMainCameraTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("mainCameraTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxUseTestLights() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxUseTestLights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextLightCacheUpdate() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLightCacheUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextLightUpdate() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLightUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSkipNextSlice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("skipNextSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetTestAmbience() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("testAmbience"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTestLightBrightness() {
            static BNM::Field<float> _field = GetClass().GetField(O("testLightBrightness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetTestLightColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("testLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTestLightRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("testLightRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTestLightsCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("testLightsCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetZoneDynamicLightingEnableCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("zoneDynamicLightingEnableCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCameraPosForSort(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cameraPosForSort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomVertexLightingEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("customVertexLightingEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesaturateAndTintEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("desaturateAndTintEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameLights(::BNM::Structures::Mono::List<::GlobalNamespace::GameLight*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameLight*>*> _field = GetClass().GetField(O("gameLights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImmediateSort(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("immediateSort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GameLightingManager* value) {
            static BNM::Field<::GlobalNamespace::GameLightingManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLightData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lightData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightDataBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lightDataBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightDistanceBins(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("lightDistanceBins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainCameraTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("mainCameraTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxUseTestLights(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxUseTestLights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextLightCacheUpdate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLightCacheUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextLightUpdate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLightUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipNextSlice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("skipNextSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestAmbience(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("testAmbience"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestLightBrightness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("testLightBrightness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestLightColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("testLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestLightRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("testLightRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestLightsCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("testLightsCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneDynamicLightingEnableCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("zoneDynamicLightingEnableCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int AddGameLight(::GlobalNamespace::GameLight* light, bool ignoreUnityLightDisable) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddGameLight"), {"light", "ignoreUnityLightDisable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(light, ignoreUnityLightDisable);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CacheAllLightData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CacheAllLightData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CacheLightDataForNonCloseLights(int numLightsToUpdateCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CacheLightDataForNonCloseLights"), {"numLightsToUpdateCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numLightsToUpdateCache);
        }
        void ClearGameLights() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGameLights"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int CompareDistFromCamera(::GlobalNamespace::GameLight* a, ::GlobalNamespace::GameLight* b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareDistFromCamera"), {"a", "b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(a, b);
        }
        void GetFromLight(int lightIndex, int gameLightIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFromLight"), {"lightIndex", "gameLightIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lightIndex, gameLightIndex);
        }
        void InitData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void PullLightData(int numLightsToPull) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullLightData"), {"numLightsToPull"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numLightsToPull);
        }
        void RefreshLightData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshLightData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveGameLight(::GlobalNamespace::GameLight* light) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGameLight"), {"light"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(light);
        }
        void ResetLight(int lightIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetLight"), {"lightIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lightIndex);
        }
        void SetAmbientLightDynamic(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAmbientLightDynamic"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void SetCustomDynamicLightingEnabled(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCustomDynamicLightingEnabled"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void SetDesaturateAndTintEnabled_1(bool enable, ::BNM::Structures::Unity::Color tint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDesaturateAndTintEnabled"), {"enable", "tint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, tint);
        }
        void SetMaxLights(int maxLights) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaxLights"), {"maxLights"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maxLights);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SortLights() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SortLights"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ZoneEnableCustomDynamicLighting(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZoneEnableCustomDynamicLighting"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
    };
}
