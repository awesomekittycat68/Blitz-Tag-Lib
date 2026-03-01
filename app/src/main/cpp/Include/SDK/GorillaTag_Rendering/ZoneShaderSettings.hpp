#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ZoneShaderSettings_ELiquidShape.hpp"
#include "ZoneShaderSettings_EOverrideMode.hpp"
#include "ZoneShaderSettings_EZoneLiquidType.hpp"

namespace GorillaTag_Rendering {
    struct ZoneShaderSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering", "ZoneShaderSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kEdTooltip_liquidResidueTex = "This is used for things like the charred surface effect when lava burns static geo.";
        ::GorillaTag_Rendering::ZoneShaderSettings* GetActiveInstance() {
            static BNM::Method<::GorillaTag_Rendering::ZoneShaderSettings*> _method = GetClass().GetMethod(O("get_activeInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActiveInstance(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_activeInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag_Rendering::ZoneShaderSettings* GetDefaultsInstance() {
            static BNM::Method<::GorillaTag_Rendering::ZoneShaderSettings*> _method = GetClass().GetMethod(O("get_defaultsInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDefaultsInstance(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_defaultsInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetGroundFogDepthFadeSq() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_GroundFogDepthFadeSq"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetGroundFogHeightFade() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_GroundFogHeightFade"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasActiveInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasActiveInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasActiveInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasActiveInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetHasDefaultsInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasDefaultsInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasDefaultsInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasDefaultsInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsActiveInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isActiveInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetShaderParamZoneLiquidPosRadiusSq() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_shaderParam_ZoneLiquidPosRadiusSq"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShaderParamZoneLiquidPosRadiusSq(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_shaderParam_ZoneLiquidPosRadiusSq"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetActivateOnAwake() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_activateOnAwake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGroundFogDepthFadeSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_groundFogDepthFadeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGroundFogHeightFadeSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_groundFogHeightFadeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetDidEverSetLiquidShape() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didEverSetLiquidShape"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetGroundFogColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("groundFogColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetGroundFogColorOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogColor_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetGroundFogColorShaderProp() {
            static BNM::Field<int> _field = GetClass().GetField(O("groundFogColor_shaderProp"));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetGroundFogDepthFadeOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogDepthFade_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetGroundFogDepthFadeSqShaderProp() {
            static BNM::Field<int> _field = GetClass().GetField(O("groundFogDepthFadeSq_shaderProp"));
            return _field.Get();
        }
        float GetGroundFogHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("groundFogHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetGroundFogHeightOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogHeight_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetGroundFogHeightShaderProp() {
            static BNM::Field<int> _field = GetClass().GetField(O("groundFogHeight_shaderProp"));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetGroundFogHeightFadeOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogHeightFade_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetGroundFogHeightFadeShaderProp() {
            static BNM::Field<int> _field = GetClass().GetField(O("groundFogHeightFade_shaderProp"));
            return _field.Get();
        }
        bool GetHasDynamicWaterSurfacePlane() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDynamicWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasLiquidBottomTransform() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLiquidBottomTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasMainWaterSurfacePlane() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMainWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDefaultValues() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDefaultValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            return _field.Get();
        }
        float GetLiquidBottomPosYPreviousValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("liquidBottomPosY_previousValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLiquidBottomTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidBottomTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetLiquidBottomTransformOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidBottomTransform_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetLiquidResidueTex() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("liquidResidueTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetLiquidResidueTexOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidResidueTex_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape GetLiquidShape() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape> _field = GetClass().GetField(O("liquidShape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetLiquidShapeOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidShape_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape GetLiquidShapePreviousValue() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape> _field = GetClass().GetField(O("liquidShape_previousValue"));
            return _field.Get();
        }
        float GetLiquidShapeRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("liquidShapeRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetLiquidShapeRadiusOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidShapeRadius_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetLiquidShapeRadiusPreviousValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("liquidShapeRadius_previousValue"));
            return _field.Get();
        }
        static ::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType GetLiquidTypePreviousValue() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType> _field = GetClass().GetField(O("liquidType_previousValue"));
            return _field.Get();
        }
        ::Transform* GetMainWaterSurfacePlane() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("mainWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetMainWaterSurfacePlaneOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("mainWaterSurfacePlane_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetShaderParamGlobalLiquidResidueTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalLiquidResidueTex"));
            return _field.Get();
        }
        int GetShaderParamGlobalMainWaterSurfacePlane() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalMainWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetShaderParamGlobalUnderwaterCausticsParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalUnderwaterCausticsParams"));
            return _field.Get();
        }
        static int GetShaderParamGlobalUnderwaterCausticsTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalUnderwaterCausticsTex"));
            return _field.Get();
        }
        static int GetShaderParamGlobalUnderwaterEffectsDistanceToSurfaceFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade"));
            return _field.Get();
        }
        static int GetShaderParamGlobalUnderwaterFogColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalUnderwaterFogColor"));
            return _field.Get();
        }
        static int GetShaderParamGlobalUnderwaterFogParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalUnderwaterFogParams"));
            return _field.Get();
        }
        static int GetShaderParamGlobalWaterTintColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalWaterTintColor"));
            return _field.Get();
        }
        static int GetShaderParamGlobalZoneLiquidUVScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_GlobalZoneLiquidUVScale"));
            return _field.Get();
        }
        static int GetShaderParamZoneWeatherMapDissolveProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderParam_ZoneWeatherMapDissolveProgress"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetUnderwaterCausticsParams() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("underwaterCausticsParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetUnderwaterCausticsParamsOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterCausticsParams_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetUnderwaterCausticsTexture() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("underwaterCausticsTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetUnderwaterCausticsTextureOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterCausticsTexture_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetUnderwaterEffectsDistanceToSurfaceFade() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("underwaterEffectsDistanceToSurfaceFade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetUnderwaterEffectsDistanceToSurfaceFadeOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterEffectsDistanceToSurfaceFade_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetUnderwaterFogColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("underwaterFogColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetUnderwaterFogColorOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterFogColor_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetUnderwaterFogParams() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("underwaterFogParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetUnderwaterFogParamsOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterFogParams_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetUnderwaterTintColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("underwaterTintColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetUnderwaterTintColorOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterTintColor_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType GetZoneLiquidType() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType> _field = GetClass().GetField(O("zoneLiquidType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetZoneLiquidTypeOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("zoneLiquidType_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetZoneLiquidUVScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("zoneLiquidUVScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetZoneLiquidUVScaleOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("zoneLiquidUVScale_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetZoneWeatherMapDissolveProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("zoneWeatherMapDissolveProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode GetZoneWeatherMapDissolveProgressOverrideMode() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("zoneWeatherMapDissolveProgress_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivateOnAwake(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_activateOnAwake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogDepthFadeSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_groundFogDepthFadeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogHeightFadeSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_groundFogHeightFadeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDidEverSetLiquidShape(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didEverSetLiquidShape"));
            _field.Set(value);
        }
        void SetGroundFogColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("groundFogColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogColorOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogColor_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogDepthFadeOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogDepthFade_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("groundFogHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogHeightOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogHeight_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundFogHeightFadeOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("groundFogHeightFade_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasDynamicWaterSurfacePlane(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDynamicWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasLiquidBottomTransform(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLiquidBottomTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasMainWaterSurfacePlane(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMainWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDefaultValues(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDefaultValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.Set(value);
        }
        void SetLiquidBottomPosYPreviousValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("liquidBottomPosY_previousValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidBottomTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidBottomTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidBottomTransformOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidBottomTransform_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidResidueTex(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("liquidResidueTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidResidueTexOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidResidueTex_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidShape(::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape> _field = GetClass().GetField(O("liquidShape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidShapeOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidShape_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLiquidShapePreviousValue(::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape> _field = GetClass().GetField(O("liquidShape_previousValue"));
            _field.Set(value);
        }
        void SetLiquidShapeRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("liquidShapeRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidShapeRadiusOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("liquidShapeRadius_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLiquidShapeRadiusPreviousValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("liquidShapeRadius_previousValue"));
            _field.Set(value);
        }
        static void SetLiquidTypePreviousValue(::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType> _field = GetClass().GetField(O("liquidType_previousValue"));
            _field.Set(value);
        }
        void SetMainWaterSurfacePlane(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("mainWaterSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainWaterSurfacePlaneOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("mainWaterSurfacePlane_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterCausticsParams(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("underwaterCausticsParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterCausticsParamsOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterCausticsParams_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterCausticsTexture(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("underwaterCausticsTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterCausticsTextureOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterCausticsTexture_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterEffectsDistanceToSurfaceFade(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("underwaterEffectsDistanceToSurfaceFade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterEffectsDistanceToSurfaceFadeOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterEffectsDistanceToSurfaceFade_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterFogColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("underwaterFogColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterFogColorOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterFogColor_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterFogParams(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("underwaterFogParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterFogParamsOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterFogParams_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterTintColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("underwaterTintColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderwaterTintColorOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("underwaterTintColor_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneLiquidType(::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType> _field = GetClass().GetField(O("zoneLiquidType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneLiquidTypeOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("zoneLiquidType_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneLiquidUVScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("zoneLiquidUVScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneLiquidUVScaleOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("zoneLiquidUVScale_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneWeatherMapDissolveProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("zoneWeatherMapDissolveProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneWeatherMapDissolveProgressOverrideMode(::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode> _field = GetClass().GetField(O("zoneWeatherMapDissolveProgress_overrideMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void ActivateDefaultSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateDefaultSettings"));
            _m.Call();
        }
        void ApplyColor(int shaderProp, ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode overrideMode, ::BNM::Structures::Unity::Color value, ::BNM::Structures::Unity::Color defaultValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyColor"), {"shaderProp", "overrideMode", "value", "defaultValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shaderProp, overrideMode, value, defaultValue);
        }
        void ApplyFloat(int shaderProp, ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode overrideMode, float value, float defaultValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyFloat"), {"shaderProp", "overrideMode", "value", "defaultValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shaderProp, overrideMode, value, defaultValue);
        }
        void ApplyTexture(int shaderProp, ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode overrideMode, ::Texture2D* value, ::Texture2D* defaultValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyTexture"), {"shaderProp", "overrideMode", "value", "defaultValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shaderProp, overrideMode, value, defaultValue);
        }
        void ApplyValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyVector(int shaderProp, ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode overrideMode, ::BNM::Structures::Unity::Vector2 value, ::BNM::Structures::Unity::Vector2 defaultValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVector"), {"shaderProp", "overrideMode", "value", "defaultValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shaderProp, overrideMode, value, defaultValue);
        }
        void ApplyVector(int shaderProp, ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode overrideMode, ::BNM::Structures::Unity::Vector3 value, ::BNM::Structures::Unity::Vector3 defaultValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVector"), {"shaderProp", "overrideMode", "value", "defaultValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shaderProp, overrideMode, value, defaultValue);
        }
        void ApplyVector(int shaderProp, ::GorillaTag_Rendering::ZoneShaderSettings_EOverrideMode overrideMode, ::BNM::Structures::Unity::Vector4 value, ::BNM::Structures::Unity::Vector4 defaultValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVector"), {"shaderProp", "overrideMode", "value", "defaultValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shaderProp, overrideMode, value, defaultValue);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BecomeActiveInstance(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BecomeActiveInstance"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        void CheckDefaultsInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckDefaultsInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopySettings(::BNM::IL2CPP::Il2CppObject* cmsZoneShaderSettings, bool rerunAwake) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySettings"), {"cmsZoneShaderSettings", "rerunAwake"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmsZoneShaderSettings, rerunAwake);
        }
        void CopySettings(::GorillaTag_Rendering::ZoneShaderSettings* zoneShaderSettings, bool rerunAwake) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySettings"), {"zoneShaderSettings", "rerunAwake"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneShaderSettings, rerunAwake);
        }
        static ::GorillaTag_Rendering::ZoneShaderSettings* get_activeInstance() {
            static BNM::Method<::GorillaTag_Rendering::ZoneShaderSettings*> _m = GetClass().GetMethod(O("get_activeInstance"));
            return _m.Call();
        }
        static ::GorillaTag_Rendering::ZoneShaderSettings* get_defaultsInstance() {
            static BNM::Method<::GorillaTag_Rendering::ZoneShaderSettings*> _m = GetClass().GetMethod(O("get_defaultsInstance"));
            return _m.Call();
        }
        float get_GroundFogDepthFadeSq() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_GroundFogDepthFadeSq"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_GroundFogHeightFade() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_GroundFogHeightFade"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool get_hasActiveInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasActiveInstance"));
            return _m.Call();
        }
        static bool get_hasDefaultsInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasDefaultsInstance"));
            return _m.Call();
        }
        bool get_isActiveInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isActiveInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int get_shaderParam_ZoneLiquidPosRadiusSq() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_shaderParam_ZoneLiquidPosRadiusSq"));
            return _m.Call();
        }
        static float GetWaterY() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetWaterY"));
            return _m.Call();
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
        void ReplaceDefaultValues(::GorillaTag_Rendering::ZoneShaderSettings* defaultZoneShaderSettings, bool rerunAwake) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplaceDefaultValues"), {"defaultZoneShaderSettings", "rerunAwake"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(defaultZoneShaderSettings, rerunAwake);
        }
        template <typename TP0 = void*>
        void ReplaceDefaultValues(TP0 defaultZoneShaderProperties, bool rerunAwake) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplaceDefaultValues"), {"defaultZoneShaderProperties", "rerunAwake"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(defaultZoneShaderProperties, rerunAwake);
        }
        static void set_activeInstance(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_activeInstance"), {"value"});
            _m.Call(value);
        }
        static void set_defaultsInstance(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_defaultsInstance"), {"value"});
            _m.Call(value);
        }
        static void set_hasActiveInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasActiveInstance"), {"value"});
            _m.Call(value);
        }
        static void set_hasDefaultsInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasDefaultsInstance"), {"value"});
            _m.Call(value);
        }
        static void set_shaderParam_ZoneLiquidPosRadiusSq(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_shaderParam_ZoneLiquidPosRadiusSq"), {"value"});
            _m.Call(value);
        }
        void SetGroundFogValue(::BNM::Structures::Unity::Color fogColor, float fogDepthFade, float fogHeight, float fogHeightFade) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGroundFogValue"), {"fogColor", "fogDepthFade", "fogHeight", "fogHeightFade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fogColor, fogDepthFade, fogHeight, fogHeightFade);
        }
        void SetZoneLiquidShapeKeywordEnum(::GorillaTag_Rendering::ZoneShaderSettings_ELiquidShape shape) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetZoneLiquidShapeKeywordEnum"), {"shape"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shape);
        }
        void SetZoneLiquidTypeKeywordEnum(::GorillaTag_Rendering::ZoneShaderSettings_EZoneLiquidType liquidType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetZoneLiquidTypeKeywordEnum"), {"liquidType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(liquidType);
        }
        void UpdateMainPlaneShaderProperty() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMainPlaneShaderProperty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
