#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTShaderTransparencyMode.hpp"
#include "TexFormatInfo.hpp"

namespace GlobalNamespace {
    struct MaterialFingerprint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialFingerprint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr bool _k_UNITY_2023_1_OR_NEWER = true;
        void* GetAChannelColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_AChannelColor"));
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
        void* GetAlphaDetailST() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_AlphaDetail_ST"));
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
        void* GetBaseColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BaseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBaseMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_BaseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBaseMapAtlas() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_BaseMap_Atlas"));
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
        void* GetBaseMapST() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BaseMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBaseMapWH() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BaseMap_WH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBChannelColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_Color"));
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
        void* GetCrystalRimColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_CrystalRimColor"));
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
        ::BNM::Structures::Mono::String* GetDayNightLightmapArray() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DayNightLightmapArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDayNightLightmapArrayAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDayNightLightmapArrayST() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DayNightLightmapArray_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDEBUGPAWNDATA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDeformMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DeformMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDeformMapAtlas() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DeformMap_Atlas"));
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
        void* GetDeformMapObjectSpaceOffsetsU() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDeformMapObjectSpaceOffsetsV() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDeformMapScrollSpeed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDeformMapUV0Influence() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapUV0Influence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDeformMapWorldSpaceOffsetsU() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDeformMapWorldSpaceOffsetsV() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDepthMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DepthMap"));
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
        void* GetEmissionColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EmissionColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEmissionDissolveAnimation() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EmissionDissolveAnimation"));
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
        ::BNM::Structures::Mono::String* GetEmissionMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_EmissionMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetEmissionMapAtlas() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_EmissionMap_Atlas"));
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
        void* GetEmissionUVScrollSpeed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EmissionUVScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEyeOverrideUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEyeOverrideUVTransform() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EyeOverrideUVTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEyeTileOffsetUV() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EyeTileOffsetUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGChannelColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_GChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGradientMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_GradientMap"));
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
        void* GetInnerGlowColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_InnerGlowColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInnerGlowOn() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInnerGlowParams() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_InnerGlowParams"));
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
        void* GetLiquidFillNormal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidFillNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLiquidPlaneNormal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidPlaneNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLiquidPlanePosition() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidPlanePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLiquidSurfaceColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidSurfaceColor"));
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
        ::BNM::Structures::Mono::String* GetMaskMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_MaskMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMaskMapST() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_MaskMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMaskMapWH() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_MaskMap_WH"));
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
        ::BNM::Structures::Mono::String* GetMouthMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_MouthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMouthMapST() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_MouthMap_ST"));
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
        void* GetParallaxSamplesMinMax() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ParallaxSamplesMinMax"));
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
        void* GetReflectBoxCubePos() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectBoxCubePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectBoxProjectToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxProjectToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReflectBoxRotation() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectBoxRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReflectBoxSize() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectBoxSize"));
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
        ::BNM::Structures::Mono::String* GetReflectNormalTex() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_ReflectNormalTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReflectNormalToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReflectOffset() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectOffset"));
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
        void* GetReflectScale() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetReflectTex() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_ReflectTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReflectTint() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectTint"));
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
        void* GetRotateOnYAxisBySinTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_RotateOnYAxisBySinTime"));
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
        void* GetSpecColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpecularColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecularColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpecularDir() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecularDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpecularPowerIntensity() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecularPowerIntensity"));
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
        ::GlobalNamespace::GTShaderTransparencyMode GetTransparencyMode() {
            static BNM::Field<::GlobalNamespace::GTShaderTransparencyMode> _field = GetClass().GetField(O("_TransparencyMode"));
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
        void* GetUvShiftOffset() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_UvShiftOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUvShiftRate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_UvShiftRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUvShiftSteps() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_UvShiftSteps"));
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
        void* GetVertexFlapAxis() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexFlapAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVertexFlapDegreesMinMax() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexFlapDegreesMinMax"));
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
        void* GetVertexRotateAngles() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexRotateAngles"));
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
        void* GetVertexWaveAxes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveAxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWaveDebug() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVertexWaveEnd() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVertexWaveFalloff() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveFalloff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVertexWaveParams() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVertexWavePhaseOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWavePhaseOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVertexWaveSphereMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveSphereMask"));
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
        ::BNM::Structures::Mono::String* GetWeatherMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_WeatherMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetWeatherMapAtlas() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_WeatherMap_Atlas"));
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
        bool GetIsValid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAChannelColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_AChannelColor"));
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
        void SetAlphaDetailST(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_AlphaDetail_ST"));
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
        void SetBaseColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BaseColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_BaseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapAtlas(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_BaseMap_Atlas"));
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
        void SetBaseMapST(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BaseMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMapWH(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BaseMap_WH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBChannelColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_BChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_Color"));
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
        void SetCrystalRimColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_CrystalRimColor"));
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
        void SetDayNightLightmapArray(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DayNightLightmapArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightLightmapArrayAtlasSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_AtlasSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightLightmapArrayST(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DayNightLightmapArray_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDEBUGPAWNDATA(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DeformMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapAtlas(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DeformMap_Atlas"));
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
        void SetDeformMapObjectSpaceOffsetsU(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapObjectSpaceOffsetsV(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapScrollSpeed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapUV0Influence(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapUV0Influence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapWorldSpaceOffsetsU(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsU"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeformMapWorldSpaceOffsetsV(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_DepthMap"));
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
        void SetEmissionColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EmissionColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionDissolveAnimation(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EmissionDissolveAnimation"));
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
        void SetEmissionMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_EmissionMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmissionMapAtlas(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_EmissionMap_Atlas"));
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
        void SetEmissionUVScrollSpeed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EmissionUVScrollSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeOverrideUV(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeOverrideUVTransform(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EyeOverrideUVTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeTileOffsetUV(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_EyeTileOffsetUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGChannelColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_GChannelColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGradientMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_GradientMap"));
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
        void SetInnerGlowColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_InnerGlowColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowOn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerGlowParams(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_InnerGlowParams"));
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
        void SetLiquidFillNormal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidFillNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidPlaneNormal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidPlaneNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidPlanePosition(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidPlanePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSurfaceColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_LiquidSurfaceColor"));
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
        void SetMaskMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_MaskMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaskMapST(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_MaskMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaskMapWH(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_MaskMap_WH"));
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
        void SetMouthMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_MouthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthMapST(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_MouthMap_ST"));
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
        void SetParallaxSamplesMinMax(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ParallaxSamplesMinMax"));
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
        void SetReflectBoxCubePos(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectBoxCubePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxProjectToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxProjectToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxRotation(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectBoxRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectBoxSize(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectBoxSize"));
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
        void SetReflectNormalTex(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_ReflectNormalTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectNormalToggle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectOffset(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectOffset"));
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
        void SetReflectScale(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectTex(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_ReflectTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectTint(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_ReflectTint"));
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
        void SetRotateOnYAxisBySinTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_RotateOnYAxisBySinTime"));
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
        void SetSpecColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecularColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularDir(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecularDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecularPowerIntensity(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_SpecularPowerIntensity"));
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
        void SetTransparencyMode(::GlobalNamespace::GTShaderTransparencyMode value) {
            static BNM::Field<::GlobalNamespace::GTShaderTransparencyMode> _field = GetClass().GetField(O("_TransparencyMode"));
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
        void SetUvShiftOffset(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_UvShiftOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvShiftRate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_UvShiftRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvShiftSteps(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_UvShiftSteps"));
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
        void SetVertexFlapAxis(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexFlapAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexFlapDegreesMinMax(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexFlapDegreesMinMax"));
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
        void SetVertexRotateAngles(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexRotateAngles"));
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
        void SetVertexWaveAxes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveAxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveDebug(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveEnd(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveFalloff(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveFalloff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveParams(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWavePhaseOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWavePhaseOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVertexWaveSphereMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_VertexWaveSphereMask"));
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
        void SetWeatherMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_WeatherMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherMapAtlas(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_WeatherMap_Atlas"));
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
        void SetIsValid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::TexFormatInfo _GetTexFormatInfo(::Material* mat, ::BNM::Structures::Mono::String* texPropName, int usedCount) {
            static BNM::Method<::GlobalNamespace::TexFormatInfo> _m = GetClass().GetMethod(O("_GetTexFormatInfo"), {"mat", "texPropName", "usedCount"});
            return _m.Call(mat, texPropName, usedCount);
        }
        static ::BNM::Structures::Mono::String* _GetTexPropGuid(::Material* mat, int texPropId, int usedCount) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("_GetTexPropGuid"), {"mat", "texPropId", "usedCount"});
            return _m.Call(mat, texPropId, usedCount);
        }
        static void* _Round(::BNM::Structures::Unity::Color c, int mul, int usedCount) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("_Round"), {"c", "mul", "usedCount"});
            return _m.Call(c, mul, usedCount);
        }
        static void* _Round(::BNM::Structures::Unity::Vector4 v, int mul, int usedCount) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("_Round"), {"v", "mul", "usedCount"});
            return _m.Call(v, mul, usedCount);
        }
        static int _Round(float f, int mul, int usedCount) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("_Round"), {"f", "mul", "usedCount"});
            return _m.Call(f, mul, usedCount);
        }
        static ::GlobalNamespace::GTShaderTransparencyMode GetMatTransparencyMode(::Material* mat) {
            static BNM::Method<::GlobalNamespace::GTShaderTransparencyMode> _m = GetClass().GetMethod(O("GetMatTransparencyMode"), {"mat"});
            return _m.Call(mat);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
