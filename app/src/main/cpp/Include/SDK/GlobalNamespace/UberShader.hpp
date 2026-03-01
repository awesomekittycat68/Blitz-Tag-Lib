#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UberShader : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UberShader");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>* GetAllProperties() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>*> _method = GetClass().GetMethod(O("get_AllProperties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetReferenceMaterial() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_ReferenceMaterial"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetReferenceMaterialNonSRP() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_ReferenceMaterialNonSRP"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Shader* GetReferenceShader() {
            static BNM::Method<::Shader*> _method = GetClass().GetMethod(O("get_ReferenceShader"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Shader* GetReferenceShaderNonSRP() {
            static BNM::Method<::Shader*> _method = GetClass().GetMethod(O("get_ReferenceShaderNonSRP"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::UberShaderProperty* GetAChannelColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AChannelColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetAlphaDetailOpacity() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetail_Opacity"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetAlphaDetailST() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetail_ST"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetAlphaDetailWorldSpace() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetail_WorldSpace"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetAlphaDetailToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetailToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetAlphaToMask() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaToMask"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetBaseColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetBaseMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetBaseMapAtlas() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap_Atlas"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetBaseMapAtlasSlice() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap_AtlasSlice"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetBaseMapWH() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap_WH"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetBChannelColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BChannelColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Color"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetColorSource() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ColorSource"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetCrystalPower() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("CrystalPower"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetCrystalRimColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("CrystalRimColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetCull() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Cull"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetCutoff() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Cutoff"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDayNightLightmapArray() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DayNightLightmapArray"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDayNightLightmapArrayAtlasSlice() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DayNightLightmapArray_AtlasSlice"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDEBUGPAWNDATA() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DEBUG_PAWN_DATA"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapAtlas() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMap_Atlas"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapAtlasSlice() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMap_AtlasSlice"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapIntensity() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapIntensity"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapMaskByVertColorRAmount() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapMaskByVertColorRAmount"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapObjectSpaceOffsetsU() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapObjectSpaceOffsetsU"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapObjectSpaceOffsetsV() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapObjectSpaceOffsetsV"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapScrollSpeed() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapScrollSpeed"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapUV0Influence() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapUV0Influence"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapWorldSpaceOffsetsU() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapWorldSpaceOffsetsU"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDeformMapWorldSpaceOffsetsV() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapWorldSpaceOffsetsV"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDepthMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DepthMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDoTextureRotation() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DoTextureRotation"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDstBlend() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DstBlend"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetDstBlendAlpha() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DstBlendAlpha"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionDissolveAnimation() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionDissolveAnimation"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionDissolveEdgeSize() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionDissolveEdgeSize"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionDissolveProgress() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionDissolveProgress"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionMapAtlas() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMap_Atlas"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionMapAtlasSlice() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMap_AtlasSlice"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionMaskByBaseMapAlpha() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMaskByBaseMapAlpha"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionUseUVWaveWarp() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionUseUVWaveWarp"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEmissionUVScrollSpeed() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionUVScrollSpeed"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEyeOverrideUV() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EyeOverrideUV"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEyeOverrideUVTransform() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EyeOverrideUVTransform"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetEyeTileOffsetUV() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EyeTileOffsetUV"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetGChannelColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GChannelColor"));
            return _field.Get();
        }
        static bool GetGInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gInitialized"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetGradientMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GradientMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetGradientMapToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GradientMapToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetGreyZoneException() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GreyZoneException"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetHalfLambertToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("HalfLambertToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetHeightBasedWaterEffect() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("HeightBasedWaterEffect"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowOn() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowOn"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowParams() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowParams"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowSine() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowSine"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowSinePeriod() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowSinePeriod"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowSinePhaseShift() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowSinePhaseShift"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetInnerGlowTap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowTap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>* GetKProperties() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>*> _field = GetClass().GetField(O("kProperties"));
            return _field.Get();
        }
        static ::Material* GetKReferenceMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("kReferenceMaterial"));
            return _field.Get();
        }
        static ::Material* GetKReferenceMaterialNonSRP() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("kReferenceMaterialNonSRP"));
            return _field.Get();
        }
        static ::Shader* GetKReferenceShader() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("kReferenceShader"));
            return _field.Get();
        }
        static ::Shader* GetKReferenceShaderNonSRP() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("kReferenceShaderNonSRP"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLavaLampToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LavaLampToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidContainer() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidContainer"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidFill() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidFill"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidFillNormal() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidFillNormal"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidPlaneNormal() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidPlaneNormal"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidPlanePosition() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidPlanePosition"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidSurfaceColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidSurfaceColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidSwayX() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidSwayX"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidSwayY() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidSwayY"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetLiquidVolume() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidVolume"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMaskMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MaskMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMaskMapWH() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MaskMap_WH"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMaskMapToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MaskMapToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMetallic() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Metallic"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMouthMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MouthMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMouthMapAtlas() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MouthMap_Atlas"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetMouthMapAtlasSlice() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MouthMap_AtlasSlice"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetParallaxAABias() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxAABias"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetParallaxAAToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxAAToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetParallaxAmplitude() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxAmplitude"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetParallaxPlanarToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxPlanarToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetParallaxSamplesMinMax() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxSamplesMinMax"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetParallaxToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectAlbedoTint() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectAlbedoTint"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectBoxCubePos() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxCubePos"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectBoxProjectToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxProjectToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectBoxRotation() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxRotation"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectBoxSize() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxSize"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectExposure() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectExposure"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectMatcapPerspToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectMatcapPerspToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectMatcapToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectMatcapToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectNormalTex() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectNormalTex"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectNormalToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectNormalToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectOffset() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectOffset"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectOpacity() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectOpacity"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectRotate() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectRotate"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectScale() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectScale"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectTex() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectTex"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectTint() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectTint"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetReflectToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetRotateAngle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("RotateAngle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetRotateAnim() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("RotateAnim"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetRotateOnYAxisBySinTime() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("RotateOnYAxisBySinTime"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSingleLightmap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SingleLightmap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSmoothness() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Smoothness"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSpecColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSpecularColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSpecularDir() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularDir"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSpecularPowerIntensity() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularPowerIntensity"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSpecularUseDiffuseColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularUseDiffuseColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSrcBlend() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SrcBlend"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSrcBlendAlpha() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SrcBlendAlpha"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetStealthEffectOn() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StealthEffectOn"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetStencilComparison() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StencilComparison"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetStencilPassFront() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StencilPassFront"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetStencilReference() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StencilReference"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetSurface() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Surface"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetTexelSnapFactor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("TexelSnap_Factor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetTexelSnapToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("TexelSnapToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetTransparencyMode() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("TransparencyMode"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUSEDEFORMMAP() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("USE_DEFORM_MAP"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUSETEXARRAYATLAS() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("USE_TEX_ARRAY_ATLAS"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseCrystalEffect() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseCrystalEffect"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseDayNightLightmap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseDayNightLightmap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseEyeTracking() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseEyeTracking"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseGridEffect() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseGridEffect"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseMouthFlap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseMouthFlap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseSpecHighlight() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseSpecHighlight"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseSpecular() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseSpecular"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseSpecularAlphaChannel() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseSpecularAlphaChannel"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseVertexColor() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseVertexColor"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseWaveWarp() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseWaveWarp"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUseWeatherMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseWeatherMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUvShiftOffset() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftOffset"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUvShiftRate() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftRate"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUvShiftSteps() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftSteps"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUvShiftToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetUVSource() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UVSource"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexFlapAxis() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapAxis"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexFlapDegreesMinMax() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapDegreesMinMax"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexFlapPhaseOffset() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapPhaseOffset"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexFlapSpeed() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapSpeed"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexFlapToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexLightToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexLightToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexRotateAngles() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexRotateAngles"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexRotateAnim() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexRotateAnim"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexRotateToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexRotateToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveAxes() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveAxes"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveDebug() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveDebug"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveEnd() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveEnd"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveFalloff() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveFalloff"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveParams() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveParams"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWavePhaseOffset() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWavePhaseOffset"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveSphereMask() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveSphereMask"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetVertexWaveToggle() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveToggle"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWaterEffect() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaterEffect"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWaveAmplitude() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveAmplitude"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWaveFrequency() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveFrequency"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWaveScale() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveScale"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWaveTimeScale() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveTimeScale"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWeatherMap() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WeatherMap"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetWeatherMapDissolveEdgeSize() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WeatherMapDissolveEdgeSize"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetZFightOffset() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ZFightOffset"));
            return _field.Get();
        }
        static ::GlobalNamespace::UberShaderProperty* GetZWrite() {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ZWrite"));
            return _field.Get();
        }
        static void SetAChannelColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AChannelColor"));
            _field.Set(value);
        }
        static void SetAlphaDetailOpacity(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetail_Opacity"));
            _field.Set(value);
        }
        static void SetAlphaDetailST(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetail_ST"));
            _field.Set(value);
        }
        static void SetAlphaDetailWorldSpace(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetail_WorldSpace"));
            _field.Set(value);
        }
        static void SetAlphaDetailToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaDetailToggle"));
            _field.Set(value);
        }
        static void SetAlphaToMask(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("AlphaToMask"));
            _field.Set(value);
        }
        static void SetBaseColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseColor"));
            _field.Set(value);
        }
        static void SetBaseMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap"));
            _field.Set(value);
        }
        static void SetBaseMapAtlas(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap_Atlas"));
            _field.Set(value);
        }
        static void SetBaseMapAtlasSlice(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap_AtlasSlice"));
            _field.Set(value);
        }
        static void SetBaseMapWH(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BaseMap_WH"));
            _field.Set(value);
        }
        static void SetBChannelColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("BChannelColor"));
            _field.Set(value);
        }
        static void SetColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Color"));
            _field.Set(value);
        }
        static void SetColorSource(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ColorSource"));
            _field.Set(value);
        }
        static void SetCrystalPower(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("CrystalPower"));
            _field.Set(value);
        }
        static void SetCrystalRimColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("CrystalRimColor"));
            _field.Set(value);
        }
        static void SetCull(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Cull"));
            _field.Set(value);
        }
        static void SetCutoff(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Cutoff"));
            _field.Set(value);
        }
        static void SetDayNightLightmapArray(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DayNightLightmapArray"));
            _field.Set(value);
        }
        static void SetDayNightLightmapArrayAtlasSlice(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DayNightLightmapArray_AtlasSlice"));
            _field.Set(value);
        }
        static void SetDEBUGPAWNDATA(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DEBUG_PAWN_DATA"));
            _field.Set(value);
        }
        static void SetDeformMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMap"));
            _field.Set(value);
        }
        static void SetDeformMapAtlas(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMap_Atlas"));
            _field.Set(value);
        }
        static void SetDeformMapAtlasSlice(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMap_AtlasSlice"));
            _field.Set(value);
        }
        static void SetDeformMapIntensity(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapIntensity"));
            _field.Set(value);
        }
        static void SetDeformMapMaskByVertColorRAmount(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapMaskByVertColorRAmount"));
            _field.Set(value);
        }
        static void SetDeformMapObjectSpaceOffsetsU(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapObjectSpaceOffsetsU"));
            _field.Set(value);
        }
        static void SetDeformMapObjectSpaceOffsetsV(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapObjectSpaceOffsetsV"));
            _field.Set(value);
        }
        static void SetDeformMapScrollSpeed(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapScrollSpeed"));
            _field.Set(value);
        }
        static void SetDeformMapUV0Influence(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapUV0Influence"));
            _field.Set(value);
        }
        static void SetDeformMapWorldSpaceOffsetsU(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapWorldSpaceOffsetsU"));
            _field.Set(value);
        }
        static void SetDeformMapWorldSpaceOffsetsV(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DeformMapWorldSpaceOffsetsV"));
            _field.Set(value);
        }
        static void SetDepthMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DepthMap"));
            _field.Set(value);
        }
        static void SetDoTextureRotation(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DoTextureRotation"));
            _field.Set(value);
        }
        static void SetDstBlend(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DstBlend"));
            _field.Set(value);
        }
        static void SetDstBlendAlpha(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("DstBlendAlpha"));
            _field.Set(value);
        }
        static void SetEmissionColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionColor"));
            _field.Set(value);
        }
        static void SetEmissionDissolveAnimation(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionDissolveAnimation"));
            _field.Set(value);
        }
        static void SetEmissionDissolveEdgeSize(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionDissolveEdgeSize"));
            _field.Set(value);
        }
        static void SetEmissionDissolveProgress(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionDissolveProgress"));
            _field.Set(value);
        }
        static void SetEmissionMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMap"));
            _field.Set(value);
        }
        static void SetEmissionMapAtlas(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMap_Atlas"));
            _field.Set(value);
        }
        static void SetEmissionMapAtlasSlice(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMap_AtlasSlice"));
            _field.Set(value);
        }
        static void SetEmissionMaskByBaseMapAlpha(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionMaskByBaseMapAlpha"));
            _field.Set(value);
        }
        static void SetEmissionToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionToggle"));
            _field.Set(value);
        }
        static void SetEmissionUseUVWaveWarp(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionUseUVWaveWarp"));
            _field.Set(value);
        }
        static void SetEmissionUVScrollSpeed(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EmissionUVScrollSpeed"));
            _field.Set(value);
        }
        static void SetEyeOverrideUV(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EyeOverrideUV"));
            _field.Set(value);
        }
        static void SetEyeOverrideUVTransform(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EyeOverrideUVTransform"));
            _field.Set(value);
        }
        static void SetEyeTileOffsetUV(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("EyeTileOffsetUV"));
            _field.Set(value);
        }
        static void SetGChannelColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GChannelColor"));
            _field.Set(value);
        }
        static void SetGInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gInitialized"));
            _field.Set(value);
        }
        static void SetGradientMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GradientMap"));
            _field.Set(value);
        }
        static void SetGradientMapToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GradientMapToggle"));
            _field.Set(value);
        }
        static void SetGreyZoneException(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("GreyZoneException"));
            _field.Set(value);
        }
        static void SetHalfLambertToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("HalfLambertToggle"));
            _field.Set(value);
        }
        static void SetHeightBasedWaterEffect(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("HeightBasedWaterEffect"));
            _field.Set(value);
        }
        static void SetInnerGlowColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowColor"));
            _field.Set(value);
        }
        static void SetInnerGlowOn(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowOn"));
            _field.Set(value);
        }
        static void SetInnerGlowParams(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowParams"));
            _field.Set(value);
        }
        static void SetInnerGlowSine(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowSine"));
            _field.Set(value);
        }
        static void SetInnerGlowSinePeriod(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowSinePeriod"));
            _field.Set(value);
        }
        static void SetInnerGlowSinePhaseShift(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowSinePhaseShift"));
            _field.Set(value);
        }
        static void SetInnerGlowTap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("InnerGlowTap"));
            _field.Set(value);
        }
        static void SetKProperties(::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>*> _field = GetClass().GetField(O("kProperties"));
            _field.Set(value);
        }
        static void SetKReferenceMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("kReferenceMaterial"));
            _field.Set(value);
        }
        static void SetKReferenceMaterialNonSRP(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("kReferenceMaterialNonSRP"));
            _field.Set(value);
        }
        static void SetKReferenceShader(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("kReferenceShader"));
            _field.Set(value);
        }
        static void SetKReferenceShaderNonSRP(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("kReferenceShaderNonSRP"));
            _field.Set(value);
        }
        static void SetLavaLampToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LavaLampToggle"));
            _field.Set(value);
        }
        static void SetLiquidContainer(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidContainer"));
            _field.Set(value);
        }
        static void SetLiquidFill(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidFill"));
            _field.Set(value);
        }
        static void SetLiquidFillNormal(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidFillNormal"));
            _field.Set(value);
        }
        static void SetLiquidPlaneNormal(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidPlaneNormal"));
            _field.Set(value);
        }
        static void SetLiquidPlanePosition(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidPlanePosition"));
            _field.Set(value);
        }
        static void SetLiquidSurfaceColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidSurfaceColor"));
            _field.Set(value);
        }
        static void SetLiquidSwayX(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidSwayX"));
            _field.Set(value);
        }
        static void SetLiquidSwayY(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidSwayY"));
            _field.Set(value);
        }
        static void SetLiquidVolume(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("LiquidVolume"));
            _field.Set(value);
        }
        static void SetMaskMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MaskMap"));
            _field.Set(value);
        }
        static void SetMaskMapWH(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MaskMap_WH"));
            _field.Set(value);
        }
        static void SetMaskMapToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MaskMapToggle"));
            _field.Set(value);
        }
        static void SetMetallic(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Metallic"));
            _field.Set(value);
        }
        static void SetMouthMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MouthMap"));
            _field.Set(value);
        }
        static void SetMouthMapAtlas(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MouthMap_Atlas"));
            _field.Set(value);
        }
        static void SetMouthMapAtlasSlice(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("MouthMap_AtlasSlice"));
            _field.Set(value);
        }
        static void SetParallaxAABias(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxAABias"));
            _field.Set(value);
        }
        static void SetParallaxAAToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxAAToggle"));
            _field.Set(value);
        }
        static void SetParallaxAmplitude(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxAmplitude"));
            _field.Set(value);
        }
        static void SetParallaxPlanarToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxPlanarToggle"));
            _field.Set(value);
        }
        static void SetParallaxSamplesMinMax(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxSamplesMinMax"));
            _field.Set(value);
        }
        static void SetParallaxToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ParallaxToggle"));
            _field.Set(value);
        }
        static void SetReflectAlbedoTint(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectAlbedoTint"));
            _field.Set(value);
        }
        static void SetReflectBoxCubePos(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxCubePos"));
            _field.Set(value);
        }
        static void SetReflectBoxProjectToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxProjectToggle"));
            _field.Set(value);
        }
        static void SetReflectBoxRotation(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxRotation"));
            _field.Set(value);
        }
        static void SetReflectBoxSize(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectBoxSize"));
            _field.Set(value);
        }
        static void SetReflectExposure(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectExposure"));
            _field.Set(value);
        }
        static void SetReflectMatcapPerspToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectMatcapPerspToggle"));
            _field.Set(value);
        }
        static void SetReflectMatcapToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectMatcapToggle"));
            _field.Set(value);
        }
        static void SetReflectNormalTex(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectNormalTex"));
            _field.Set(value);
        }
        static void SetReflectNormalToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectNormalToggle"));
            _field.Set(value);
        }
        static void SetReflectOffset(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectOffset"));
            _field.Set(value);
        }
        static void SetReflectOpacity(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectOpacity"));
            _field.Set(value);
        }
        static void SetReflectRotate(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectRotate"));
            _field.Set(value);
        }
        static void SetReflectScale(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectScale"));
            _field.Set(value);
        }
        static void SetReflectTex(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectTex"));
            _field.Set(value);
        }
        static void SetReflectTint(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectTint"));
            _field.Set(value);
        }
        static void SetReflectToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ReflectToggle"));
            _field.Set(value);
        }
        static void SetRotateAngle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("RotateAngle"));
            _field.Set(value);
        }
        static void SetRotateAnim(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("RotateAnim"));
            _field.Set(value);
        }
        static void SetRotateOnYAxisBySinTime(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("RotateOnYAxisBySinTime"));
            _field.Set(value);
        }
        static void SetSingleLightmap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SingleLightmap"));
            _field.Set(value);
        }
        static void SetSmoothness(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Smoothness"));
            _field.Set(value);
        }
        static void SetSpecColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecColor"));
            _field.Set(value);
        }
        static void SetSpecularColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularColor"));
            _field.Set(value);
        }
        static void SetSpecularDir(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularDir"));
            _field.Set(value);
        }
        static void SetSpecularPowerIntensity(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularPowerIntensity"));
            _field.Set(value);
        }
        static void SetSpecularUseDiffuseColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SpecularUseDiffuseColor"));
            _field.Set(value);
        }
        static void SetSrcBlend(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SrcBlend"));
            _field.Set(value);
        }
        static void SetSrcBlendAlpha(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("SrcBlendAlpha"));
            _field.Set(value);
        }
        static void SetStealthEffectOn(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StealthEffectOn"));
            _field.Set(value);
        }
        static void SetStencilComparison(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StencilComparison"));
            _field.Set(value);
        }
        static void SetStencilPassFront(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StencilPassFront"));
            _field.Set(value);
        }
        static void SetStencilReference(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("StencilReference"));
            _field.Set(value);
        }
        static void SetSurface(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("Surface"));
            _field.Set(value);
        }
        static void SetTexelSnapFactor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("TexelSnap_Factor"));
            _field.Set(value);
        }
        static void SetTexelSnapToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("TexelSnapToggle"));
            _field.Set(value);
        }
        static void SetTransparencyMode(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("TransparencyMode"));
            _field.Set(value);
        }
        static void SetUSEDEFORMMAP(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("USE_DEFORM_MAP"));
            _field.Set(value);
        }
        static void SetUSETEXARRAYATLAS(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("USE_TEX_ARRAY_ATLAS"));
            _field.Set(value);
        }
        static void SetUseCrystalEffect(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseCrystalEffect"));
            _field.Set(value);
        }
        static void SetUseDayNightLightmap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseDayNightLightmap"));
            _field.Set(value);
        }
        static void SetUseEyeTracking(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseEyeTracking"));
            _field.Set(value);
        }
        static void SetUseGridEffect(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseGridEffect"));
            _field.Set(value);
        }
        static void SetUseMouthFlap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseMouthFlap"));
            _field.Set(value);
        }
        static void SetUseSpecHighlight(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseSpecHighlight"));
            _field.Set(value);
        }
        static void SetUseSpecular(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseSpecular"));
            _field.Set(value);
        }
        static void SetUseSpecularAlphaChannel(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseSpecularAlphaChannel"));
            _field.Set(value);
        }
        static void SetUseVertexColor(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseVertexColor"));
            _field.Set(value);
        }
        static void SetUseWaveWarp(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseWaveWarp"));
            _field.Set(value);
        }
        static void SetUseWeatherMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UseWeatherMap"));
            _field.Set(value);
        }
        static void SetUvShiftOffset(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftOffset"));
            _field.Set(value);
        }
        static void SetUvShiftRate(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftRate"));
            _field.Set(value);
        }
        static void SetUvShiftSteps(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftSteps"));
            _field.Set(value);
        }
        static void SetUvShiftToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UvShiftToggle"));
            _field.Set(value);
        }
        static void SetUVSource(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("UVSource"));
            _field.Set(value);
        }
        static void SetVertexFlapAxis(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapAxis"));
            _field.Set(value);
        }
        static void SetVertexFlapDegreesMinMax(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapDegreesMinMax"));
            _field.Set(value);
        }
        static void SetVertexFlapPhaseOffset(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapPhaseOffset"));
            _field.Set(value);
        }
        static void SetVertexFlapSpeed(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapSpeed"));
            _field.Set(value);
        }
        static void SetVertexFlapToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexFlapToggle"));
            _field.Set(value);
        }
        static void SetVertexLightToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexLightToggle"));
            _field.Set(value);
        }
        static void SetVertexRotateAngles(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexRotateAngles"));
            _field.Set(value);
        }
        static void SetVertexRotateAnim(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexRotateAnim"));
            _field.Set(value);
        }
        static void SetVertexRotateToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexRotateToggle"));
            _field.Set(value);
        }
        static void SetVertexWaveAxes(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveAxes"));
            _field.Set(value);
        }
        static void SetVertexWaveDebug(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveDebug"));
            _field.Set(value);
        }
        static void SetVertexWaveEnd(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveEnd"));
            _field.Set(value);
        }
        static void SetVertexWaveFalloff(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveFalloff"));
            _field.Set(value);
        }
        static void SetVertexWaveParams(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveParams"));
            _field.Set(value);
        }
        static void SetVertexWavePhaseOffset(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWavePhaseOffset"));
            _field.Set(value);
        }
        static void SetVertexWaveSphereMask(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveSphereMask"));
            _field.Set(value);
        }
        static void SetVertexWaveToggle(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("VertexWaveToggle"));
            _field.Set(value);
        }
        static void SetWaterEffect(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaterEffect"));
            _field.Set(value);
        }
        static void SetWaveAmplitude(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveAmplitude"));
            _field.Set(value);
        }
        static void SetWaveFrequency(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveFrequency"));
            _field.Set(value);
        }
        static void SetWaveScale(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveScale"));
            _field.Set(value);
        }
        static void SetWaveTimeScale(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WaveTimeScale"));
            _field.Set(value);
        }
        static void SetWeatherMap(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WeatherMap"));
            _field.Set(value);
        }
        static void SetWeatherMapDissolveEdgeSize(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("WeatherMapDissolveEdgeSize"));
            _field.Set(value);
        }
        static void SetZFightOffset(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ZFightOffset"));
            _field.Set(value);
        }
        static void SetZWrite(::GlobalNamespace::UberShaderProperty* value) {
            static BNM::Field<::GlobalNamespace::UberShaderProperty*> _field = GetClass().GetField(O("ZWrite"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>* EnumerateAllProperties(::Shader* uberShader) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>*> _m = GetClass().GetMethod(O("EnumerateAllProperties"), {"uberShader"});
            return _m.Call(uberShader);
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>* get_AllProperties() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::UberShaderProperty*>*> _m = GetClass().GetMethod(O("get_AllProperties"));
            return _m.Call();
        }
        static ::Material* get_ReferenceMaterial() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_ReferenceMaterial"));
            return _m.Call();
        }
        static ::Material* get_ReferenceMaterialNonSRP() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_ReferenceMaterialNonSRP"));
            return _m.Call();
        }
        static ::Shader* get_ReferenceShader() {
            static BNM::Method<::Shader*> _m = GetClass().GetMethod(O("get_ReferenceShader"));
            return _m.Call();
        }
        static ::Shader* get_ReferenceShaderNonSRP() {
            static BNM::Method<::Shader*> _m = GetClass().GetMethod(O("get_ReferenceShaderNonSRP"));
            return _m.Call();
        }
        static ::GlobalNamespace::UberShaderProperty* GetProperty(int i) {
            static BNM::Method<::GlobalNamespace::UberShaderProperty*> _m = GetClass().GetMethod(O("GetProperty"), {"i"});
            return _m.Call(i);
        }
        static ::GlobalNamespace::UberShaderProperty* GetProperty(int i, ::BNM::Structures::Mono::String* expectedName) {
            static BNM::Method<::GlobalNamespace::UberShaderProperty*> _m = GetClass().GetMethod(O("GetProperty"), {"i", "expectedName"});
            return _m.Call(i, expectedName);
        }
        static ::Shader* GetShader() {
            static BNM::Method<::Shader*> _m = GetClass().GetMethod(O("GetShader"));
            return _m.Call();
        }
        static void InitDependencies() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitDependencies"));
            _m.Call();
        }
        static bool IsAnimated(::Material* m) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnimated"), {"m"});
            return _m.Call(m);
        }
    };
}
