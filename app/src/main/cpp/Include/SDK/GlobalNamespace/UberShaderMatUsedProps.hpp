#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTUberShader_MaterialKeywordStates.hpp"
#include "MaterialFingerprint.hpp"

namespace GlobalNamespace {
    struct UberShaderMatUsedProps : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UberShaderMatUsedProps");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAChannelColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAdvancedOptions() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AdvancedOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAlphaDetailOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_Opacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAlphaDetailST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAlphaDetailWorldSpace() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_WorldSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAlphaDetailToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetailToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAlphaToMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaToMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseMapAtlasSliceSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_AtlasSliceSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBaseMapWH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_WH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBChannelColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetColorSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrystalPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CrystalPower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrystalRimColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CrystalRimColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCull() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCutoff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cutoff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDayNightLightmapArray() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDayNightLightmapArrayAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDayNightLightmapArrayST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDEBUGPAWNDATA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapMaskByVertColorRAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapMaskByVertColorRAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapObjectSpaceOffsetsU() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapObjectSpaceOffsetsV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapScrollSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapUV0Influence() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapUV0Influence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapWorldSpaceOffsetsU() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeformMapWorldSpaceOffsetsV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDepthMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DepthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDoTextureRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DoTextureRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDstBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DstBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDstBlendAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DstBlendAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionDissolveAnimation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionDissolveEdgeSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveEdgeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionDissolveProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionIntensityInDynamic() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionIntensityInDynamic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionMaskByBaseMapAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMaskByBaseMapAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionUseUVWaveWarp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionUseUVWaveWarp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmissionUVScrollSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionUVScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEyeOverrideUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEyeOverrideUVTransform() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUVTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEyeTileOffsetUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeTileOffsetUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGChannelColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGradientMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGradientMapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientMapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGreyZoneException() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GreyZoneException"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHalfLambertToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HalfLambertToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeightBasedWaterEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HeightBasedWaterEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowOn() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowSine() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowSinePeriod() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSinePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowSinePhaseShift() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSinePhaseShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowTap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLavaLampToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LavaLampToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidContainer() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidFill() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidFillNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidFillNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidPlaneNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidPlaneNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidPlanePosition() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidPlanePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidSurfaceColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSurfaceColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidSwayX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSwayX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidSwayY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSwayY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLiquidVolume() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaskMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaskMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaskMapWH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap_WH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaskMapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMetallic() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMouthMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMouthMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNotAProp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_notAProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParallaxAABias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAABias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParallaxAAToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAAToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParallaxAmplitude() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParallaxPlanarToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxPlanarToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParallaxSamplesMinMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxSamplesMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParallaxToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectAlbedoTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectAlbedoTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectBoxCubePos() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxCubePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectBoxProjectToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxProjectToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectBoxRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectBoxSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectExposure() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectExposure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectMatcapPerspToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectMatcapPerspToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectMatcapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectMatcapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectNormalTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectNormalToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOpacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectRotate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectRotate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRotateAngle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRotateAnim() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRotateOnYAxisBySinTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateOnYAxisBySinTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSettingsPreset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SettingsPreset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSmoothness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpecColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpecularColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpecularDir() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpecularPowerIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularPowerIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpecularUseDiffuseColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularUseDiffuseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSrcBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSrcBlendAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcBlendAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStealthEffectOn() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StealthEffectOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStencilComparison() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilComparison"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStencilPassFront() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilPassFront"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStencilReference() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSurface() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Surface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTexelSnapFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSnap_Factor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTexelSnapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSnapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTexMipBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexMipBias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTransparencyMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TransparencyMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUSEDEFORMMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_DEFORM_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUSETEXARRAYATLAS() {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_TEX_ARRAY_ATLAS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseCrystalEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseCrystalEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseDayNightLightmap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseDayNightLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseEyeTracking() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseEyeTracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseGridEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseGridEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseMouthFlap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseMouthFlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseSpecHighlight() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecHighlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseSpecular() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecular"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseSpecularAlphaChannel() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecularAlphaChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseVertexColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseVertexColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseWaveWarp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWaveWarp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUseWeatherMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWeatherMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUvShiftOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUvShiftRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUvShiftSteps() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUvShiftToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUVSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UVSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexFlapAxis() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexFlapDegreesMinMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapDegreesMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexFlapPhaseOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapPhaseOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexFlapSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexFlapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexLightToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexLightToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexRotateAngles() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateAngles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexRotateAnim() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexRotateToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveAxes() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveAxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveDebug() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveEnd() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveFalloff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveFalloff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWavePhaseOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWavePhaseOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveSphereMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveSphereMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaterCaustics() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaterCaustics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaterEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaterEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaveAmplitude() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaveFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaveScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaveTimeScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveTimeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeatherMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeatherMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeatherMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeatherMapDissolveEdgeSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMapDissolveEdgeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetZWrite() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZWrite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MaterialFingerprint GetFingerprint() {
            static BNM::Field<::GlobalNamespace::MaterialFingerprint> _field = GetClass().GetField(O("fingerprint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsValid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTUberShader_MaterialKeywordStates GetKw() {
            static BNM::Field<::GlobalNamespace::GTUberShader_MaterialKeywordStates> _field = GetClass().GetField(O("kw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAChannelColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdvancedOptions(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AdvancedOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlphaDetailOpacity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_Opacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlphaDetailST(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlphaDetailWorldSpace(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_WorldSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlphaDetailToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetailToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlphaToMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaToMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapAtlas(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapAtlasSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapAtlasSliceSource(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_AtlasSliceSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapST(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapWH(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_WH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBChannelColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_BChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorSource(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrystalPower(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_CrystalPower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrystalRimColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_CrystalRimColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCull(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCutoff(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cutoff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightLightmapArray(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightLightmapArrayAtlasSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightLightmapArrayST(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDEBUGPAWNDATA(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapAtlas(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapAtlasSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapIntensity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapMaskByVertColorRAmount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapMaskByVertColorRAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapObjectSpaceOffsetsU(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapObjectSpaceOffsetsV(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapScrollSpeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapUV0Influence(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapUV0Influence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapWorldSpaceOffsetsU(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapWorldSpaceOffsetsV(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DepthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoTextureRotation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DoTextureRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDstBlend(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DstBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDstBlendAlpha(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DstBlendAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionDissolveAnimation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionDissolveEdgeSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveEdgeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionDissolveProgress(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionIntensityInDynamic(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionIntensityInDynamic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionMapAtlas(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionMapAtlasSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionMaskByBaseMapAlpha(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMaskByBaseMapAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionUseUVWaveWarp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionUseUVWaveWarp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionUVScrollSpeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionUVScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeOverrideUV(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeOverrideUVTransform(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUVTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeTileOffsetUV(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeTileOffsetUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGChannelColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_GChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGradientMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGradientMapToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientMapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneException(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_GreyZoneException"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalfLambertToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_HalfLambertToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeightBasedWaterEffect(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_HeightBasedWaterEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowOn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowSine(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowSinePeriod(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSinePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowSinePhaseShift(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSinePhaseShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowTap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaLampToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LavaLampToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidContainer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidFill(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidFillNormal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidFillNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidPlaneNormal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidPlaneNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidPlanePosition(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidPlanePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSurfaceColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSurfaceColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSwayX(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSwayX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSwayY(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSwayY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidVolume(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaskMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaskMapST(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaskMapWH(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap_WH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaskMapToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetallic(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthMapST(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParallaxAABias(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAABias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParallaxAAToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAAToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParallaxAmplitude(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParallaxPlanarToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxPlanarToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParallaxSamplesMinMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxSamplesMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParallaxToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectAlbedoTint(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectAlbedoTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxCubePos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxCubePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxProjectToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxProjectToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxRotation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectExposure(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectExposure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectMatcapPerspToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectMatcapPerspToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectMatcapToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectMatcapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectNormalTex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectNormalToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectOpacity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOpacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectRotate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectRotate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectScale(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectTex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectTint(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateAngle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateAnim(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateOnYAxisBySinTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateOnYAxisBySinTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettingsPreset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SettingsPreset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothness(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularDir(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularPowerIntensity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularPowerIntensity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularUseDiffuseColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularUseDiffuseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSrcBlend(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSrcBlendAlpha(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcBlendAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStealthEffectOn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_StealthEffectOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStencilComparison(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilComparison"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStencilPassFront(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilPassFront"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStencilReference(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurface(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Surface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexelSnapFactor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSnap_Factor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexelSnapToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSnapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexMipBias(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexMipBias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransparencyMode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_TransparencyMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSEDEFORMMAP(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_DEFORM_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSETEXARRAYATLAS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_TEX_ARRAY_ATLAS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseCrystalEffect(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseCrystalEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseDayNightLightmap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseDayNightLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseEyeTracking(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseEyeTracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseGridEffect(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseGridEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseMouthFlap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseMouthFlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSpecHighlight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecHighlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSpecular(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecular"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSpecularAlphaChannel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecularAlphaChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseVertexColor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseVertexColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseWaveWarp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWaveWarp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseWeatherMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWeatherMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvShiftOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvShiftRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvShiftSteps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvShiftToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUVSource(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_UVSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexFlapAxis(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexFlapDegreesMinMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapDegreesMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexFlapPhaseOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapPhaseOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexFlapSpeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexFlapToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexLightToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexLightToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexRotateAngles(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateAngles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexRotateAnim(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexRotateToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveAxes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveAxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveDebug(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveEnd(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveFalloff(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveFalloff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWavePhaseOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWavePhaseOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveSphereMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveSphereMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterCaustics(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaterCaustics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterEffect(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaterEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveAmplitude(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveFrequency(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveScale(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveTimeScale(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveTimeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherMap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherMapAtlas(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap_Atlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherMapAtlasSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherMapDissolveEdgeSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMapDissolveEdgeSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZWrite(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZWrite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerprint(::GlobalNamespace::MaterialFingerprint value) {
            static BNM::Field<::GlobalNamespace::MaterialFingerprint> _field = GetClass().GetField(O("fingerprint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsValid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKw(::GlobalNamespace::GTUberShader_MaterialKeywordStates value) {
            static BNM::Field<::GlobalNamespace::GTUberShader_MaterialKeywordStates> _field = GetClass().GetField(O("kw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void _g_Macro_DECLARE_ATLASABLE_SAMPLER(::GlobalNamespace::GTUberShader_MaterialKeywordStates& kw, int& sampler, int& sampler_Atlas) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_Macro_DECLARE_ATLASABLE_SAMPLER"), {"kw", "sampler", "sampler_Atlas"});
            _m.Call(&kw, &sampler, &sampler_Atlas);
        }
        static void _g_Macro_DECLARE_ATLASABLE_TEX2D(::GlobalNamespace::GTUberShader_MaterialKeywordStates& kw, int& tex, int& tex_Atlas) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_Macro_DECLARE_ATLASABLE_TEX2D"), {"kw", "tex", "tex_Atlas"});
            _m.Call(&kw, &tex, &tex_Atlas);
        }
        static void _g_Macro_SAMPLE_ATLASABLE_TEX2D(::GlobalNamespace::GTUberShader_MaterialKeywordStates& kw, int& tex, int& tex_Atlas, int& tex_AtlasSlice, int& sampler, int& sampler_Atlas, int& coord2, int& mipBias) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_Macro_SAMPLE_ATLASABLE_TEX2D"), {"kw", "tex", "tex_Atlas", "tex_AtlasSlice", "sampler", "sampler_Atlas", "coord2", "mipBias"});
            _m.Call(&kw, &tex, &tex_Atlas, &tex_AtlasSlice, &sampler, &sampler_Atlas, &coord2, &mipBias);
        }
        static void _g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD(::GlobalNamespace::GTUberShader_MaterialKeywordStates& kw, int& texName, int& texName_Atlas) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD"), {"kw", "texName", "texName_Atlas"});
            _m.Call(&kw, &texName, &texName_Atlas);
        }
        static void _g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD(::GlobalNamespace::GTUberShader_MaterialKeywordStates& kw, int& texName, int& texName_Atlas, int& sampler, int& coord2, int& lod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD"), {"kw", "texName", "texName_Atlas", "sampler", "coord2", "lod"});
            _m.Call(&kw, &texName, &texName_Atlas, &sampler, &coord2, &lod);
        }
        static void _g_Macro_TRANSFORM_TEX(::GlobalNamespace::GTUberShader_MaterialKeywordStates& kw, int& tex, int& tex_ST) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_Macro_TRANSFORM_TEX"), {"kw", "tex", "tex_ST"});
            _m.Call(&kw, &tex, &tex_ST);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToStringTSV() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringTSV"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
