#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ShaderProps : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ShaderProps");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetBasicOptions() {
            static BNM::Field<int> _field = GetClass().GetField(O("__BasicOptions__"));
            return _field.Get();
        }
        static int GetDirty() {
            static BNM::Field<int> _field = GetClass().GetField(O("__dirty"));
            return _field.Get();
        }
        static int GetAbscissaOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AbscissaOffset"));
            return _field.Get();
        }
        static int GetAChannelColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AChannelColor"));
            return _field.Get();
        }
        static int GetAddPrecomputedVelocity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AddPrecomputedVelocity"));
            return _field.Get();
        }
        static int GetAdvancedOptions() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AdvancedOptions"));
            return _field.Get();
        }
        static int GetAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Alpha"));
            return _field.Get();
        }
        static int GetAlphaClip() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaClip"));
            return _field.Get();
        }
        static int GetAlphaClipThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaClipThreshold"));
            return _field.Get();
        }
        static int GetAlphaColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaColor"));
            return _field.Get();
        }
        static int GetAlphaCutoff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaCutoff"));
            return _field.Get();
        }
        static int GetAlphaDetailOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_Opacity"));
            return _field.Get();
        }
        static int GetAlphaDetailST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_ST"));
            return _field.Get();
        }
        static int GetAlphaDetailWorldSpace() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetail_WorldSpace"));
            return _field.Get();
        }
        static int GetAlphaDetailToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaDetailToggle"));
            return _field.Get();
        }
        static int GetAlphaTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaTex"));
            return _field.Get();
        }
        static int GetAlphaTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaTex_ST"));
            return _field.Get();
        }
        static int GetAlphaToMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AlphaToMask"));
            return _field.Get();
        }
        static int GetAmbient() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Ambient"));
            return _field.Get();
        }
        static int GetAngle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Angle"));
            return _field.Get();
        }
        static int GetAverageColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_AverageColor"));
            return _field.Get();
        }
        static int GetBackgroundColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BackgroundColor"));
            return _field.Get();
        }
        static int GetBAKERY2SIDED() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_2SIDED"));
            return _field.Get();
        }
        static int GetBAKERY2SIDEDON() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_2SIDEDON"));
            return _field.Get();
        }
        static int GetBAKERYBICUBIC() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_BICUBIC"));
            return _field.Get();
        }
        static int GetBAKERYLMSPEC() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_LMSPEC"));
            return _field.Get();
        }
        static int GetBAKERYPROBESHNONLINEAR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_PROBESHNONLINEAR"));
            return _field.Get();
        }
        static int GetBAKERYRNM() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_RNM"));
            return _field.Get();
        }
        static int GetBAKERYSH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_SH"));
            return _field.Get();
        }
        static int GetBAKERYSHNONLINEAR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_SHNONLINEAR"));
            return _field.Get();
        }
        static int GetBAKERYVERTEXLM() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_VERTEXLM"));
            return _field.Get();
        }
        static int GetBAKERYVERTEXLMDIR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_VERTEXLMDIR"));
            return _field.Get();
        }
        static int GetBAKERYVERTEXLMMASK() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_VERTEXLMMASK"));
            return _field.Get();
        }
        static int GetBAKERYVERTEXLMSH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_VERTEXLMSH"));
            return _field.Get();
        }
        static int GetBAKERYVOLROTATION() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_VOLROTATION"));
            return _field.Get();
        }
        static int GetBAKERYVOLUME() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BAKERY_VOLUME"));
            return _field.Get();
        }
        static int GetBase() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Base"));
            return _field.Get();
        }
        static int GetBaseColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Base_Color"));
            return _field.Get();
        }
        static int GetBASECOLOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BASE_COLOR"));
            return _field.Get();
        }
        static int GetBASECOLORMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BASE_COLOR_MAP"));
            return _field.Get();
        }
        static int GetBASECOLORWEIGHT() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BASE_COLOR_WEIGHT"));
            return _field.Get();
        }
        static int GetBaseColor_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseColor"));
            return _field.Get();
        }
        static int GetBaseColorAddSubDiff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseColorAddSubDiff"));
            return _field.Get();
        }
        static int GetBaseMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap"));
            return _field.Get();
        }
        static int GetBaseMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_Atlas"));
            return _field.Get();
        }
        static int GetBaseMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_AtlasSlice"));
            return _field.Get();
        }
        static int GetBaseMapAtlasSliceSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_AtlasSliceSource"));
            return _field.Get();
        }
        static int GetBaseMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_ST"));
            return _field.Get();
        }
        static int GetBaseMapWH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMap_WH"));
            return _field.Get();
        }
        static int GetBaseMapArray() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMapArray"));
            return _field.Get();
        }
        static int GetBaseMapArrayST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMapArray_ST"));
            return _field.Get();
        }
        static int GetBaseMapArrayIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseMapArrayIndex"));
            return _field.Get();
        }
        static int GetBaseOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BaseOpacity"));
            return _field.Get();
        }
        static int GetBChannelColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BChannelColor"));
            return _field.Get();
        }
        static int GetBevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Bevel"));
            return _field.Get();
        }
        static int GetBevelAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BevelAmount"));
            return _field.Get();
        }
        static int GetBevelClamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BevelClamp"));
            return _field.Get();
        }
        static int GetBevelOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BevelOffset"));
            return _field.Get();
        }
        static int GetBevelRoundness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BevelRoundness"));
            return _field.Get();
        }
        static int GetBevelType() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BevelType"));
            return _field.Get();
        }
        static int GetBevelWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BevelWidth"));
            return _field.Get();
        }
        static int GetBillboardKwToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BillboardKwToggle"));
            return _field.Get();
        }
        static int GetBillboardShadowFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BillboardShadowFade"));
            return _field.Get();
        }
        static int GetBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Blend"));
            return _field.Get();
        }
        static int GetBlendDst() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendDst"));
            return _field.Get();
        }
        static int GetBlendFactorCircleRadius() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendFactorCircleRadius"));
            return _field.Get();
        }
        static int GetBlendModeDestination() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendModeDestination"));
            return _field.Get();
        }
        static int GetBlendModePreserveSpecular() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendModePreserveSpecular"));
            return _field.Get();
        }
        static int GetBlendModeSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendModeSource"));
            return _field.Get();
        }
        static int GetBlendOp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendOp"));
            return _field.Get();
        }
        static int GetBlendOpAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendOpAlpha"));
            return _field.Get();
        }
        static int GetBlendOpColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendOpColor"));
            return _field.Get();
        }
        static int GetBlendSrc() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BlendSrc"));
            return _field.Get();
        }
        static int GetBorder() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Border"));
            return _field.Get();
        }
        static int GetBorderColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BorderColor"));
            return _field.Get();
        }
        static int GetBorderColorA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BorderColorA"));
            return _field.Get();
        }
        static int GetBorderColorB() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BorderColorB"));
            return _field.Get();
        }
        static int GetBorderColorType() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BorderColorType"));
            return _field.Get();
        }
        static int GetBorderLine() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BorderLine"));
            return _field.Get();
        }
        static int GetBorderWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BorderWidth"));
            return _field.Get();
        }
        static int GetBottomColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BottomColor"));
            return _field.Get();
        }
        static int GetBrightness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Brightness"));
            return _field.Get();
        }
        static int GetBUILTINQueueControl() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BUILTIN_QueueControl"));
            return _field.Get();
        }
        static int GetBUILTINQueueOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BUILTIN_QueueOffset"));
            return _field.Get();
        }
        static int GetBUMPMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BUMP_MAP"));
            return _field.Get();
        }
        static int GetBUMPMAPSTRENGTH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BUMP_MAP_STRENGTH"));
            return _field.Get();
        }
        static int GetBumpFace() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BumpFace"));
            return _field.Get();
        }
        static int GetBumpMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BumpMap"));
            return _field.Get();
        }
        static int GetBumpMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BumpMap_ST"));
            return _field.Get();
        }
        static int GetBumpOutline() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BumpOutline"));
            return _field.Get();
        }
        static int GetBumpScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_BumpScale"));
            return _field.Get();
        }
        static int GetCameraFadeParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CameraFadeParams"));
            return _field.Get();
        }
        static int GetCameraFadingEnabled() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CameraFadingEnabled"));
            return _field.Get();
        }
        static int GetCameraFarFadeDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CameraFarFadeDistance"));
            return _field.Get();
        }
        static int GetCameraNearFadeDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CameraNearFadeDistance"));
            return _field.Get();
        }
        static int GetCenterSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CenterSize"));
            return _field.Get();
        }
        static int GetChromaAlphaCutoff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ChromaAlphaCutoff"));
            return _field.Get();
        }
        static int GetChromaShadows() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ChromaShadows"));
            return _field.Get();
        }
        static int GetChromaToleranceA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ChromaToleranceA"));
            return _field.Get();
        }
        static int GetChromaToleranceB() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ChromaToleranceB"));
            return _field.Get();
        }
        static int GetClearCoat() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearCoat"));
            return _field.Get();
        }
        static int GetClearCoatMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearCoatMap"));
            return _field.Get();
        }
        static int GetClearCoatMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearCoatMap_ST"));
            return _field.Get();
        }
        static int GetClearCoatMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearCoatMask"));
            return _field.Get();
        }
        static int GetClearCoatSmoothness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearCoatSmoothness"));
            return _field.Get();
        }
        static int GetClearStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearStencilReadMask"));
            return _field.Get();
        }
        static int GetClearStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearStencilRef"));
            return _field.Get();
        }
        static int GetClearStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClearStencilWriteMask"));
            return _field.Get();
        }
        static int GetClipRect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ClipRect"));
            return _field.Get();
        }
        static int GetCloudsColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CloudsColor"));
            return _field.Get();
        }
        static int GetCol() {
            static BNM::Field<int> _field = GetClass().GetField(O("_col"));
            return _field.Get();
        }
        static int GetColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color"));
            return _field.Get();
        }
        static int GetCOLORMODE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_COLOR_MODE__"));
            return _field.Get();
        }
        static int GetColor0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color0"));
            return _field.Get();
        }
        static int GetColor1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color1"));
            return _field.Get();
        }
        static int GetColor2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color2"));
            return _field.Get();
        }
        static int GetColor3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color3"));
            return _field.Get();
        }
        static int GetColor4() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Color4"));
            return _field.Get();
        }
        static int GetColorA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorA"));
            return _field.Get();
        }
        static int GetColorB() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorB"));
            return _field.Get();
        }
        static int GetColorBottom() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorBottom"));
            return _field.Get();
        }
        static int GetColorDark() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorDark"));
            return _field.Get();
        }
        static int GetColorEnd() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorEnd"));
            return _field.Get();
        }
        static int GetColorG() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorG"));
            return _field.Get();
        }
        static int GetColorInner() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorInner"));
            return _field.Get();
        }
        static int GetColorLight() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorLight"));
            return _field.Get();
        }
        static int GetColorMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorMask"));
            return _field.Get();
        }
        static int GetColorMiddle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorMiddle"));
            return _field.Get();
        }
        static int GetColorMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorMode"));
            return _field.Get();
        }
        static int GetColorOuter() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorOuter"));
            return _field.Get();
        }
        static int GetColorPrimary() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorPrimary"));
            return _field.Get();
        }
        static int GetColorR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorR"));
            return _field.Get();
        }
        static int GetColorRamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorRamp"));
            return _field.Get();
        }
        static int GetColorRampST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorRamp_ST"));
            return _field.Get();
        }
        static int GetColorRampOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorRampOffset"));
            return _field.Get();
        }
        static int GetColorSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorSource"));
            return _field.Get();
        }
        static int GetColorStart() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorStart"));
            return _field.Get();
        }
        static int GetColorTop() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ColorTop"));
            return _field.Get();
        }
        static int GetCompositingParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CompositingParams"));
            return _field.Get();
        }
        static int GetCompositingParams2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CompositingParams2"));
            return _field.Get();
        }
        static int GetContrast() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Contrast"));
            return _field.Get();
        }
        static int GetControl() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Control"));
            return _field.Get();
        }
        static int GetControlST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Control_ST"));
            return _field.Get();
        }
        static int GetControlTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ControlTex"));
            return _field.Get();
        }
        static int GetControlTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ControlTex_ST"));
            return _field.Get();
        }
        static int GetCosTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CosTime"));
            return _field.Get();
        }
        static int GetCrystalPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CrystalPower"));
            return _field.Get();
        }
        static int GetCrystalRimColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CrystalRimColor"));
            return _field.Get();
        }
        static int GetCube() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cube"));
            return _field.Get();
        }
        static int GetCubeST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cube_ST"));
            return _field.Get();
        }
        static int GetCubeToLatLongParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CubeToLatLongParams"));
            return _field.Get();
        }
        static int GetCull() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cull"));
            return _field.Get();
        }
        static int GetCullMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_CullMode"));
            return _field.Get();
        }
        static int GetCutoff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Cutoff"));
            return _field.Get();
        }
        static int GetDarken() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Darken"));
            return _field.Get();
        }
        static int GetDayNightLightmapArray() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray"));
            return _field.Get();
        }
        static int GetDayNightLightmapArrayAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_AtlasSlice"));
            return _field.Get();
        }
        static int GetDayNightLightmapArrayST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DayNightLightmapArray_ST"));
            return _field.Get();
        }
        static int GetDEBUGPAWNDATA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            return _field.Get();
        }
        static int GetDecalMeshBiasType() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DecalMeshBiasType"));
            return _field.Get();
        }
        static int GetDecalMeshDepthBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DecalMeshDepthBias"));
            return _field.Get();
        }
        static int GetDecalMeshViewBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DecalMeshViewBias"));
            return _field.Get();
        }
        static int GetDefaultColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DefaultColor"));
            return _field.Get();
        }
        static int GetDeform() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Deform"));
            return _field.Get();
        }
        static int GetDeformMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap"));
            return _field.Get();
        }
        static int GetDeformMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap_Atlas"));
            return _field.Get();
        }
        static int GetDeformMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMap_AtlasSlice"));
            return _field.Get();
        }
        static int GetDeformMapIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapIntensity"));
            return _field.Get();
        }
        static int GetDeformMapMaskByVertColorRAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapMaskByVertColorRAmount"));
            return _field.Get();
        }
        static int GetDeformMapObjectSpaceOffsetsU() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsU"));
            return _field.Get();
        }
        static int GetDeformMapObjectSpaceOffsetsV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapObjectSpaceOffsetsV"));
            return _field.Get();
        }
        static int GetDeformMapScrollSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapScrollSpeed"));
            return _field.Get();
        }
        static int GetDeformMapUV0Influence() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapUV0Influence"));
            return _field.Get();
        }
        static int GetDeformMapWorldSpaceOffsetsU() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsU"));
            return _field.Get();
        }
        static int GetDeformMapWorldSpaceOffsetsV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DeformMapWorldSpaceOffsetsV"));
            return _field.Get();
        }
        static int GetDepthBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DepthBias"));
            return _field.Get();
        }
        static int GetDepthMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DepthMap"));
            return _field.Get();
        }
        static int GetDepthTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DepthTex"));
            return _field.Get();
        }
        static int GetDepthTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DepthTex_ST"));
            return _field.Get();
        }
        static int GetDestRect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DestRect"));
            return _field.Get();
        }
        static int GetDetailAlbedoMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailAlbedoMap"));
            return _field.Get();
        }
        static int GetDetailAlbedoMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailAlbedoMap_ST"));
            return _field.Get();
        }
        static int GetDetailAlbedoMapScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailAlbedoMapScale"));
            return _field.Get();
        }
        static int GetDetailMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailMask"));
            return _field.Get();
        }
        static int GetDetailMaskST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailMask_ST"));
            return _field.Get();
        }
        static int GetDetailNormalMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailNormalMap"));
            return _field.Get();
        }
        static int GetDetailNormalMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailNormalMap_ST"));
            return _field.Get();
        }
        static int GetDetailNormalMapScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailNormalMapScale"));
            return _field.Get();
        }
        static int GetDetailTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailTex"));
            return _field.Get();
        }
        static int GetDetailTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailTex_ST"));
            return _field.Get();
        }
        static int GetDetailTexIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DetailTexIntensity"));
            return _field.Get();
        }
        static int GetDiffuse() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Diffuse"));
            return _field.Get();
        }
        static int GetDiffusePower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DiffusePower"));
            return _field.Get();
        }
        static int GetDimensions() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Dimensions"));
            return _field.Get();
        }
        static int GetDirection() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Direction"));
            return _field.Get();
        }
        static int GetDistanceMultipler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DistanceMultipler"));
            return _field.Get();
        }
        static int GetDistortionBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DistortionBlend"));
            return _field.Get();
        }
        static int GetDistortionEnabled() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DistortionEnabled"));
            return _field.Get();
        }
        static int GetDistortionStrength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DistortionStrength"));
            return _field.Get();
        }
        static int GetDistortionStrengthScaled() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DistortionStrengthScaled"));
            return _field.Get();
        }
        static int GetDither() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Dither"));
            return _field.Get();
        }
        static int GetDitherStrength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DitherStrength"));
            return _field.Get();
        }
        static int GetDoTextureRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DoTextureRotation"));
            return _field.Get();
        }
        static int GetDragColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DragColor"));
            return _field.Get();
        }
        static int GetDrawOrder() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DrawOrder"));
            return _field.Get();
        }
        static int GetDstBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DstBlend"));
            return _field.Get();
        }
        static int GetDstBlendAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_DstBlendAlpha"));
            return _field.Get();
        }
        static int GetEdgeThickness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EdgeThickness"));
            return _field.Get();
        }
        static int GetEditorTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EditorTime"));
            return _field.Get();
        }
        static int GetEmission() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Emission"));
            return _field.Get();
        }
        static int GetEMISSIONCOLOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EMISSION_COLOR"));
            return _field.Get();
        }
        static int GetEMISSIONCOLORMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EMISSION_COLOR_MAP"));
            return _field.Get();
        }
        static int GetEMISSIONWEIGHT() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EMISSION_WEIGHT"));
            return _field.Get();
        }
        static int GetEmissionColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionColor"));
            return _field.Get();
        }
        static int GetEmissionDissolveAnimation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveAnimation"));
            return _field.Get();
        }
        static int GetEmissionDissolveEdgeSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveEdgeSize"));
            return _field.Get();
        }
        static int GetEmissionDissolveProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionDissolveProgress"));
            return _field.Get();
        }
        static int GetEmissionIntensityInDynamic() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionIntensityInDynamic"));
            return _field.Get();
        }
        static int GetEmissionMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap"));
            return _field.Get();
        }
        static int GetEmissionMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_Atlas"));
            return _field.Get();
        }
        static int GetEmissionMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_AtlasSlice"));
            return _field.Get();
        }
        static int GetEmissionMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMap_ST"));
            return _field.Get();
        }
        static int GetEmissionMaskByBaseMapAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionMaskByBaseMapAlpha"));
            return _field.Get();
        }
        static int GetEmissionToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionToggle"));
            return _field.Get();
        }
        static int GetEmissionUseUVWaveWarp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionUseUVWaveWarp"));
            return _field.Get();
        }
        static int GetEmissionUVScrollSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissionUVScrollSpeed"));
            return _field.Get();
        }
        static int GetEmissiveAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissiveAmount"));
            return _field.Get();
        }
        static int GetEmissiveTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmissiveTex"));
            return _field.Get();
        }
        static int GetEmptyTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmptyTex"));
            return _field.Get();
        }
        static int GetEmptyTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EmptyTex_ST"));
            return _field.Get();
        }
        static int GetEnableExternalAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnableExternalAlpha"));
            return _field.Get();
        }
        static int GetEnableHeightBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnableHeightBlend"));
            return _field.Get();
        }
        static int GetEnableInstancedPerPixelNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnableInstancedPerPixelNormal"));
            return _field.Get();
        }
        static int GetEnableOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnableOpacity"));
            return _field.Get();
        }
        static int GetEnvironmentDepthBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnvironmentDepthBias"));
            return _field.Get();
        }
        static int GetEnvironmentReflections() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnvironmentReflections"));
            return _field.Get();
        }
        static int GetEnvMapSampler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnvMapSampler"));
            return _field.Get();
        }
        static int GetEnvMapSamplerST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnvMapSampler_ST"));
            return _field.Get();
        }
        static int GetEnvMatrixRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EnvMatrixRotation"));
            return _field.Get();
        }
        static int GetExposure() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Exposure"));
            return _field.Get();
        }
        static int GetExtraTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ExtraTex"));
            return _field.Get();
        }
        static int GetExtraTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ExtraTex_ST"));
            return _field.Get();
        }
        static int GetEyeOverrideUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUV"));
            return _field.Get();
        }
        static int GetEyeOverrideUVTransform() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeOverrideUVTransform"));
            return _field.Get();
        }
        static int GetEyeTileOffsetUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_EyeTileOffsetUV"));
            return _field.Get();
        }
        static int GetFace() {
            static BNM::Field<int> _field = GetClass().GetField(O("_face"));
            return _field.Get();
        }
        static int GetFaceColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceColor"));
            return _field.Get();
        }
        static int GetFaceDilate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceDilate"));
            return _field.Get();
        }
        static int GetFaceShininess() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceShininess"));
            return _field.Get();
        }
        static int GetFaceTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceTex"));
            return _field.Get();
        }
        static int GetFaceTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceTex_ST"));
            return _field.Get();
        }
        static int GetFaceTextST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceText_ST"));
            return _field.Get();
        }
        static int GetFaceUVSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceUVSpeed"));
            return _field.Get();
        }
        static int GetFaceUVSpeedX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceUVSpeedX"));
            return _field.Get();
        }
        static int GetFaceUVSpeedY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FaceUVSpeedY"));
            return _field.Get();
        }
        static int GetFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Fade"));
            return _field.Get();
        }
        static int GetFADEENDEDGE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FADE_END_EDGE"));
            return _field.Get();
        }
        static int GetFADESTARTEDGE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FADE_START_EDGE"));
            return _field.Get();
        }
        static int GetFadeColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FadeColor"));
            return _field.Get();
        }
        static int GetFadeColorIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FadeColorIntensity"));
            return _field.Get();
        }
        static int GetFadeLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FadeLimit"));
            return _field.Get();
        }
        static int GetFadeSign() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FadeSign"));
            return _field.Get();
        }
        static int GetFallbackAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FallbackAmount"));
            return _field.Get();
        }
        static int GetFallbackTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FallbackTex"));
            return _field.Get();
        }
        static int GetFallbackTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FallbackTex_ST"));
            return _field.Get();
        }
        static int GetFalloffSampler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FalloffSampler"));
            return _field.Get();
        }
        static int GetFalloffSamplerST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FalloffSampler_ST"));
            return _field.Get();
        }
        static int GetFalloffTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FalloffTex"));
            return _field.Get();
        }
        static int GetFalloffTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FalloffTex_ST"));
            return _field.Get();
        }
        static int GetFingerGlowMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FingerGlowMask"));
            return _field.Get();
        }
        static int GetFingerGlowMaskST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FingerGlowMask_ST"));
            return _field.Get();
        }
        static int GetFirstTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FirstTex"));
            return _field.Get();
        }
        static int GetFirstTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FirstTex_ST"));
            return _field.Get();
        }
        static int GetFirstViewColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FirstViewColor"));
            return _field.Get();
        }
        static int GetFlameWobbleNoise() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FlameWobbleNoise"));
            return _field.Get();
        }
        static int GetFlameWobbleNoiseAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FlameWobbleNoise_Atlas"));
            return _field.Get();
        }
        static int GetFlameWobbleNoiseAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FlameWobbleNoise_AtlasSlice"));
            return _field.Get();
        }
        static int GetFlip() {
            static BNM::Field<int> _field = GetClass().GetField(O("_flip"));
            return _field.Get();
        }
        static int GetFlipbookBlending() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FlipbookBlending"));
            return _field.Get();
        }
        static int GetFlipbookMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FlipbookMode"));
            return _field.Get();
        }
        static int GetFlow() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Flow"));
            return _field.Get();
        }
        static int GetFlowFac() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FlowFac"));
            return _field.Get();
        }
        static int GetFourthTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FourthTex"));
            return _field.Get();
        }
        static int GetFourthTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FourthTex_ST"));
            return _field.Get();
        }
        static int GetFresnelPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FresnelPower"));
            return _field.Get();
        }
        static int GetFullTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FullTex"));
            return _field.Get();
        }
        static int GetFullTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_FullTex_ST"));
            return _field.Get();
        }
        static int GetGammaCorrection() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GammaCorrection"));
            return _field.Get();
        }
        static int GetGChannelColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GChannelColor"));
            return _field.Get();
        }
        static int GetGenerateGlow() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GenerateGlow"));
            return _field.Get();
        }
        static int GetGetBlendFactorMaxGizmoDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GetBlendFactorMaxGizmoDistance"));
            return _field.Get();
        }
        static int GetGizmoCircleRadius() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoCircleRadius"));
            return _field.Get();
        }
        static int GetGizmoLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoLength"));
            return _field.Get();
        }
        static int GetGizmoPosition() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoPosition"));
            return _field.Get();
        }
        static int GetGizmoRenderMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoRenderMode"));
            return _field.Get();
        }
        static int GetGizmoSplitPlane() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoSplitPlane"));
            return _field.Get();
        }
        static int GetGizmoSplitPlaneOrtho() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoSplitPlaneOrtho"));
            return _field.Get();
        }
        static int GetGizmoThickness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoThickness"));
            return _field.Get();
        }
        static int GetGizmoZoneCenter() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GizmoZoneCenter"));
            return _field.Get();
        }
        static int GetGloss() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Gloss"));
            return _field.Get();
        }
        static int GetGlossiness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Glossiness"));
            return _field.Get();
        }
        static int GetGlossinessSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlossinessSource"));
            return _field.Get();
        }
        static int GetGlossMapScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlossMapScale"));
            return _field.Get();
        }
        static int GetGlossyReflections() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlossyReflections"));
            return _field.Get();
        }
        static int GetGlowColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlowColor"));
            return _field.Get();
        }
        static int GetGlowInner() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlowInner"));
            return _field.Get();
        }
        static int GetGlowOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlowOffset"));
            return _field.Get();
        }
        static int GetGlowOuter() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlowOuter"));
            return _field.Get();
        }
        static int GetGlowPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GlowPower"));
            return _field.Get();
        }
        static int GetGoo() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Goo"));
            return _field.Get();
        }
        static int GetGooST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Goo_ST"));
            return _field.Get();
        }
        static int GetGooN() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GooN"));
            return _field.Get();
        }
        static int GetGooNST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GooN_ST"));
            return _field.Get();
        }
        static int GetGradient() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Gradient"));
            return _field.Get();
        }
        static int GetGradientMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientMap"));
            return _field.Get();
        }
        static int GetGradientMapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientMapToggle"));
            return _field.Get();
        }
        static int GetGradientPosition0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientPosition0"));
            return _field.Get();
        }
        static int GetGradientPosition1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientPosition1"));
            return _field.Get();
        }
        static int GetGradientPosition2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientPosition2"));
            return _field.Get();
        }
        static int GetGradientScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientScale"));
            return _field.Get();
        }
        static int GetGradientStop1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientStop1"));
            return _field.Get();
        }
        static int GetGradientStop2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientStop2"));
            return _field.Get();
        }
        static int GetGradientStop3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientStop3"));
            return _field.Get();
        }
        static int GetGradientTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientTex"));
            return _field.Get();
        }
        static int GetGradientTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GradientTex_ST"));
            return _field.Get();
        }
        static int GetGreyZoneException() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GreyZoneException"));
            return _field.Get();
        }
        static int GetGuardianFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("_GuardianFade"));
            return _field.Get();
        }
        static int GetHalfLambertToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HalfLambertToggle"));
            return _field.Get();
        }
        static int GetHandAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HandAlpha"));
            return _field.Get();
        }
        static int GetHandleZTest() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HandleZTest"));
            return _field.Get();
        }
        static int GetHandleZWrite() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HandleZWrite"));
            return _field.Get();
        }
        static int GetHeightBasedWaterEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HeightBasedWaterEffect"));
            return _field.Get();
        }
        static int GetHeightTransition() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HeightTransition"));
            return _field.Get();
        }
        static int GetHemispherical() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Hemispherical"));
            return _field.Get();
        }
        static int GetHighlight() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Highlight"));
            return _field.Get();
        }
        static int GetHighLightAttenuation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HighLightAttenuation"));
            return _field.Get();
        }
        static int GetHighlightColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HighlightColor"));
            return _field.Get();
        }
        static int GetHighlightOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HighlightOpacity"));
            return _field.Get();
        }
        static int GetHorizonColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HorizonColor"));
            return _field.Get();
        }
        static int GetHorizonParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HorizonParams"));
            return _field.Get();
        }
        static int GetHOTWHITE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HOT_WHITE_"));
            return _field.Get();
        }
        static int GetHueVariation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HueVariation"));
            return _field.Get();
        }
        static int GetHueVariationColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HueVariationColor"));
            return _field.Get();
        }
        static int GetHueVariationKwToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_HueVariationKwToggle"));
            return _field.Get();
        }
        static int GetInconfidenceTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InconfidenceTex"));
            return _field.Get();
        }
        static int GetInconfidenceTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InconfidenceTex_ST"));
            return _field.Get();
        }
        static int GetIndexGlowValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_IndexGlowValue"));
            return _field.Get();
        }
        static int GetInflation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Inflation"));
            return _field.Get();
        }
        static int GetInfluences() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Influences"));
            return _field.Get();
        }
        static int GetInnerGlowColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowColor"));
            return _field.Get();
        }
        static int GetInnerGlowOn() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowOn"));
            return _field.Get();
        }
        static int GetInnerGlowParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowParams"));
            return _field.Get();
        }
        static int GetInnerGlowSine() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSine"));
            return _field.Get();
        }
        static int GetInnerGlowSinePeriod() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSinePeriod"));
            return _field.Get();
        }
        static int GetInnerGlowSinePhaseShift() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowSinePhaseShift"));
            return _field.Get();
        }
        static int GetInnerGlowTap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InnerGlowTap"));
            return _field.Get();
        }
        static int GetInput() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Input"));
            return _field.Get();
        }
        static int GetInsideColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InsideColor"));
            return _field.Get();
        }
        static int GetIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Intensity"));
            return _field.Get();
        }
        static int GetInterpolator() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Interpolator"));
            return _field.Get();
        }
        static int GetInvertedAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InvertedAlpha"));
            return _field.Get();
        }
        static int GetInvFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("_InvFade"));
            return _field.Get();
        }
        static int GetIsOn() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Is_On"));
            return _field.Get();
        }
        static int GetIsRecording() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Is_Recording"));
            return _field.Get();
        }
        static int GetIsoPerimeter() {
            static BNM::Field<int> _field = GetClass().GetField(O("_IsoPerimeter"));
            return _field.Get();
        }
        static int GetLavaLampToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LavaLampToggle"));
            return _field.Get();
        }
        static int GetLengthPadding() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LengthPadding"));
            return _field.Get();
        }
        static int GetLightAngle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LightAngle"));
            return _field.Get();
        }
        static int GetLightColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LightColor"));
            return _field.Get();
        }
        static int GetLightColor0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LightColor0"));
            return _field.Get();
        }
        static int GetLightmap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Lightmap"));
            return _field.Get();
        }
        static int GetLIGHTMAPMODE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LIGHTMAP_MODE_"));
            return _field.Get();
        }
        static int GetLightmapExposure() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LightmapExposure"));
            return _field.Get();
        }
        static int GetLine() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Line"));
            return _field.Get();
        }
        static int GetLinearGradientColor1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LinearGradientColor1"));
            return _field.Get();
        }
        static int GetLinearGradientColor2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LinearGradientColor2"));
            return _field.Get();
        }
        static int GetLinearGradientEnd() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LinearGradientEnd"));
            return _field.Get();
        }
        static int GetLinearGradientStart() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LinearGradientStart"));
            return _field.Get();
        }
        static int GetLineDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LineDistance"));
            return _field.Get();
        }
        static int GetLinesThickness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LinesThickness"));
            return _field.Get();
        }
        static int GetLineWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LineWidth"));
            return _field.Get();
        }
        static int GetLiquidContainer() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidContainer"));
            return _field.Get();
        }
        static int GetLiquidFill() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidFill"));
            return _field.Get();
        }
        static int GetLiquidFillNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidFillNormal"));
            return _field.Get();
        }
        static int GetLiquidPlaneNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidPlaneNormal"));
            return _field.Get();
        }
        static int GetLiquidPlanePosition() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidPlanePosition"));
            return _field.Get();
        }
        static int GetLiquidSurfaceColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSurfaceColor"));
            return _field.Get();
        }
        static int GetLiquidSwayX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSwayX"));
            return _field.Get();
        }
        static int GetLiquidSwayY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidSwayY"));
            return _field.Get();
        }
        static int GetLiquidVolume() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LiquidVolume"));
            return _field.Get();
        }
        static int GetLitDirStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitDirStencilReadMask"));
            return _field.Get();
        }
        static int GetLitDirStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitDirStencilRef"));
            return _field.Get();
        }
        static int GetLitDirStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitDirStencilWriteMask"));
            return _field.Get();
        }
        static int GetLitPunctualStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitPunctualStencilReadMask"));
            return _field.Get();
        }
        static int GetLitPunctualStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitPunctualStencilRef"));
            return _field.Get();
        }
        static int GetLitPunctualStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitPunctualStencilWriteMask"));
            return _field.Get();
        }
        static int GetLitStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitStencilReadMask"));
            return _field.Get();
        }
        static int GetLitStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitStencilRef"));
            return _field.Get();
        }
        static int GetLitStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_LitStencilWriteMask"));
            return _field.Get();
        }
        static int GetMAINTEXMODE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MAIN_TEX_MODE__"));
            return _field.Get();
        }
        static int GetMainTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MainTex"));
            return _field.Get();
        }
        static int GetMainTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MainTex_ST"));
            return _field.Get();
        }
        static int GetMainTexMMBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MainTexMMBias"));
            return _field.Get();
        }
        static int GetMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask"));
            return _field.Get();
        }
        static int GetMask0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask0"));
            return _field.Get();
        }
        static int GetMask0ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask0_ST"));
            return _field.Get();
        }
        static int GetMask1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask1"));
            return _field.Get();
        }
        static int GetMask1ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask1_ST"));
            return _field.Get();
        }
        static int GetMask2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask2"));
            return _field.Get();
        }
        static int GetMask2ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask2_ST"));
            return _field.Get();
        }
        static int GetMask3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask3"));
            return _field.Get();
        }
        static int GetMask3ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mask3_ST"));
            return _field.Get();
        }
        static int GetMaskCoord() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskCoord"));
            return _field.Get();
        }
        static int GetMaskEdgeColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskEdgeColor"));
            return _field.Get();
        }
        static int GetMaskEdgeSoftness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskEdgeSoftness"));
            return _field.Get();
        }
        static int GetMaskInverse() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskInverse"));
            return _field.Get();
        }
        static int GetMaskMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap"));
            return _field.Get();
        }
        static int GetMaskMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap_ST"));
            return _field.Get();
        }
        static int GetMaskMapWH() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMap_WH"));
            return _field.Get();
        }
        static int GetMaskMapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskMapToggle"));
            return _field.Get();
        }
        static int GetMasks() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Masks"));
            return _field.Get();
        }
        static int GetMaskSoftnessX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskSoftnessX"));
            return _field.Get();
        }
        static int GetMaskSoftnessY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskSoftnessY"));
            return _field.Get();
        }
        static int GetMaskTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskTex"));
            return _field.Get();
        }
        static int GetMaskTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskTex_ST"));
            return _field.Get();
        }
        static int GetMaskWipeControl() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaskWipeControl"));
            return _field.Get();
        }
        static int GetMatrixForward() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MatrixForward"));
            return _field.Get();
        }
        static int GetMatrixRight() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MatrixRight"));
            return _field.Get();
        }
        static int GetMatrixUp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MatrixUp"));
            return _field.Get();
        }
        static int GetMaxColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaxColor"));
            return _field.Get();
        }
        static int GetMaxFadeDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaxFadeDistance"));
            return _field.Get();
        }
        static int GetMaxRadius() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MaxRadius"));
            return _field.Get();
        }
        static int GetMetallic() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic"));
            return _field.Get();
        }
        static int GetMetallicST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic_ST"));
            return _field.Get();
        }
        static int GetMetallic0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic0"));
            return _field.Get();
        }
        static int GetMetallic1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic1"));
            return _field.Get();
        }
        static int GetMetallic2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic2"));
            return _field.Get();
        }
        static int GetMetallic3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Metallic3"));
            return _field.Get();
        }
        static int GetMetallicGloss() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MetallicGloss"));
            return _field.Get();
        }
        static int GetMetallicGlossMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MetallicGlossMap"));
            return _field.Get();
        }
        static int GetMetallicGlossMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MetallicGlossMap_ST"));
            return _field.Get();
        }
        static int GetMetallicTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MetallicTex"));
            return _field.Get();
        }
        static int GetMetallicTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MetallicTex_ST"));
            return _field.Get();
        }
        static int GetMETALNESS() {
            static BNM::Field<int> _field = GetClass().GetField(O("_METALNESS"));
            return _field.Get();
        }
        static int GetMETALNESSMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_METALNESS_MAP"));
            return _field.Get();
        }
        static int GetMiddleColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MiddleColor"));
            return _field.Get();
        }
        static int GetMiddleGlowValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MiddleGlowValue"));
            return _field.Get();
        }
        static int GetMinFadeDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MinFadeDistance"));
            return _field.Get();
        }
        static int GetMinRadius() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MinRadius"));
            return _field.Get();
        }
        static int GetMinVisibleAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MinVisibleAlpha"));
            return _field.Get();
        }
        static int GetMipBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MipBias"));
            return _field.Get();
        }
        static int GetMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Mode"));
            return _field.Get();
        }
        static int GetMoonAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MoonAlpha"));
            return _field.Get();
        }
        static int GetMoonAngles() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MoonAngles"));
            return _field.Get();
        }
        static int GetMoonMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MoonMap"));
            return _field.Get();
        }
        static int GetMoonMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MoonMap_ST"));
            return _field.Get();
        }
        static int GetMoonSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MoonSize"));
            return _field.Get();
        }
        static int GetMouthMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap"));
            return _field.Get();
        }
        static int GetMouthMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap_Atlas"));
            return _field.Get();
        }
        static int GetMouthMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap_AtlasSlice"));
            return _field.Get();
        }
        static int GetMouthMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_MouthMap_ST"));
            return _field.Get();
        }
        static int GetN() {
            static BNM::Field<int> _field = GetClass().GetField(O("_N"));
            return _field.Get();
        }
        static int GetNoiseSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Noise_Size"));
            return _field.Get();
        }
        static int GetNoiseStrength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Noise_Strength"));
            return _field.Get();
        }
        static int GetNoiseTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NoiseTex"));
            return _field.Get();
        }
        static int GetNoiseTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NoiseTex_ST"));
            return _field.Get();
        }
        static int GetNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal"));
            return _field.Get();
        }
        static int GetNORMALMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NORMAL_MAP"));
            return _field.Get();
        }
        static int GetNormalST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal_ST"));
            return _field.Get();
        }
        static int GetNormal0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal0"));
            return _field.Get();
        }
        static int GetNormal0ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal0_ST"));
            return _field.Get();
        }
        static int GetNormal1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal1"));
            return _field.Get();
        }
        static int GetNormal1ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal1_ST"));
            return _field.Get();
        }
        static int GetNormal2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal2"));
            return _field.Get();
        }
        static int GetNormal2ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal2_ST"));
            return _field.Get();
        }
        static int GetNormal3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal3"));
            return _field.Get();
        }
        static int GetNormal3ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Normal3_ST"));
            return _field.Get();
        }
        static int GetNormalMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NormalMap"));
            return _field.Get();
        }
        static int GetNormalMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NormalMap_ST"));
            return _field.Get();
        }
        static int GetNormalMapKwToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NormalMapKwToggle"));
            return _field.Get();
        }
        static int GetNormalMapSampler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NormalMapSampler"));
            return _field.Get();
        }
        static int GetNormalMapSamplerST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NormalMapSampler_ST"));
            return _field.Get();
        }
        static int GetNormalsShrink() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NormalsShrink"));
            return _field.Get();
        }
        static int GetNoTexture() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NoTexture"));
            return _field.Get();
        }
        static int GetNotVisibleColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NotVisibleColor"));
            return _field.Get();
        }
        static int GetNumberOfTiles() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Number_of_Tiles"));
            return _field.Get();
        }
        static int GetNumLayersCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_NumLayersCount"));
            return _field.Get();
        }
        static int GetOcclusion() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Occlusion"));
            return _field.Get();
        }
        static int GetOcclusionEnabled() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OcclusionEnabled"));
            return _field.Get();
        }
        static int GetOcclusionMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OcclusionMap"));
            return _field.Get();
        }
        static int GetOcclusionMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OcclusionMap_ST"));
            return _field.Get();
        }
        static int GetOcclusionStrength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OcclusionStrength"));
            return _field.Get();
        }
        static int GetOffColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Off_Color"));
            return _field.Get();
        }
        static int GetOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Offset"));
            return _field.Get();
        }
        static int GetOffsetFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OffsetFactor"));
            return _field.Get();
        }
        static int GetOffsetUnits() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OffsetUnits"));
            return _field.Get();
        }
        static int GetOldHueVarBehavior() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OldHueVarBehavior"));
            return _field.Get();
        }
        static int GetOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Opacity"));
            return _field.Get();
        }
        static int GetOPACITY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OPACITY"));
            return _field.Get();
        }
        static int GetOPACITYMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OPACITY_MAP"));
            return _field.Get();
        }
        static int GetOpacityThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OpacityThreshold"));
            return _field.Get();
        }
        static int GetOrdinateScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OrdinateScale"));
            return _field.Get();
        }
        static int GetOutlineColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineColor"));
            return _field.Get();
        }
        static int GetOutlineColor1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineColor1"));
            return _field.Get();
        }
        static int GetOutlineColor2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineColor2"));
            return _field.Get();
        }
        static int GetOutlineColor3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineColor3"));
            return _field.Get();
        }
        static int GetOutlineJointColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineJointColor"));
            return _field.Get();
        }
        static int GetOutlineMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineMode"));
            return _field.Get();
        }
        static int GetOutlineOffset1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineOffset1"));
            return _field.Get();
        }
        static int GetOutlineOffset2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineOffset2"));
            return _field.Get();
        }
        static int GetOutlineOffset3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineOffset3"));
            return _field.Get();
        }
        static int GetOutlineOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineOpacity"));
            return _field.Get();
        }
        static int GetOutlineShininess() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineShininess"));
            return _field.Get();
        }
        static int GetOutlineSoftness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineSoftness"));
            return _field.Get();
        }
        static int GetOutlineTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineTex"));
            return _field.Get();
        }
        static int GetOutlineTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineTex_ST"));
            return _field.Get();
        }
        static int GetOutlineUVSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineUVSpeed"));
            return _field.Get();
        }
        static int GetOutlineUVSpeedX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineUVSpeedX"));
            return _field.Get();
        }
        static int GetOutlineUVSpeedY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineUVSpeedY"));
            return _field.Get();
        }
        static int GetOutlineWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OutlineWidth"));
            return _field.Get();
        }
        static int GetOverlayTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OverlayTex"));
            return _field.Get();
        }
        static int GetOverlayTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_OverlayTex_ST"));
            return _field.Get();
        }
        static int GetPadding() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Padding"));
            return _field.Get();
        }
        static int GetPaddingAndSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PaddingAndSize"));
            return _field.Get();
        }
        static int GetParallax() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Parallax"));
            return _field.Get();
        }
        static int GetParallaxAABias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAABias"));
            return _field.Get();
        }
        static int GetParallaxAAToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAAToggle"));
            return _field.Get();
        }
        static int GetParallaxAmplitude() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxAmplitude"));
            return _field.Get();
        }
        static int GetParallaxMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxMap"));
            return _field.Get();
        }
        static int GetParallaxMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxMap_ST"));
            return _field.Get();
        }
        static int GetParallaxPlanarToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxPlanarToggle"));
            return _field.Get();
        }
        static int GetParallaxSamplesMinMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxSamplesMinMax"));
            return _field.Get();
        }
        static int GetParallaxToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ParallaxToggle"));
            return _field.Get();
        }
        static int GetPassthroughAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PassthroughAmount"));
            return _field.Get();
        }
        static int GetPassthroughMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PassthroughMask"));
            return _field.Get();
        }
        static int GetPassthroughMaskST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PassthroughMask_ST"));
            return _field.Get();
        }
        static int GetPerspectiveFilter() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PerspectiveFilter"));
            return _field.Get();
        }
        static int GetPhi0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Phi0"));
            return _field.Get();
        }
        static int GetPhi1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Phi1"));
            return _field.Get();
        }
        static int GetPinchDeform() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PinchDeform"));
            return _field.Get();
        }
        static int GetPinkyGlowValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PinkyGlowValue"));
            return _field.Get();
        }
        static int GetPixelScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PixelScale"));
            return _field.Get();
        }
        static int GetPixelWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PixelWidth"));
            return _field.Get();
        }
        static int GetPointsThickness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PointsThickness"));
            return _field.Get();
        }
        static int GetPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Power"));
            return _field.Get();
        }
        static int GetPremultiply() {
            static BNM::Field<int> _field = GetClass().GetField(O("_premultiply"));
            return _field.Get();
        }
        static int GetPrimaryColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Primary_Color"));
            return _field.Get();
        }
        static int GetProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Progress"));
            return _field.Get();
        }
        static int GetProgressValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ProgressValue"));
            return _field.Get();
        }
        static int GetProjectionParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ProjectionParams"));
            return _field.Get();
        }
        static int GetProximityColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ProximityColor"));
            return _field.Get();
        }
        static int GetProximityStrength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ProximityStrength"));
            return _field.Get();
        }
        static int GetProximityTransitionRange() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ProximityTransitionRange"));
            return _field.Get();
        }
        static int GetPulseRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_PulseRate"));
            return _field.Get();
        }
        static int GetQueueControl() {
            static BNM::Field<int> _field = GetClass().GetField(O("_QueueControl"));
            return _field.Get();
        }
        static int GetQueueOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_QueueOffset"));
            return _field.Get();
        }
        static int GetRadialGradientBackgroundOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RadialGradientBackgroundOpacity"));
            return _field.Get();
        }
        static int GetRadialGradientIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RadialGradientIntensity"));
            return _field.Get();
        }
        static int GetRadialGradientOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RadialGradientOpacity"));
            return _field.Get();
        }
        static int GetRadialGradientScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RadialGradientScale"));
            return _field.Get();
        }
        static int GetRadii() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Radii"));
            return _field.Get();
        }
        static int GetRadius() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Radius"));
            return _field.Get();
        }
        static int GetReceiveShadows() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReceiveShadows"));
            return _field.Get();
        }
        static int GetRect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Rect"));
            return _field.Get();
        }
        static int GetReflectAlbedoTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectAlbedoTint"));
            return _field.Get();
        }
        static int GetReflectBoxCubePos() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxCubePos"));
            return _field.Get();
        }
        static int GetReflectBoxProjectToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxProjectToggle"));
            return _field.Get();
        }
        static int GetReflectBoxRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxRotation"));
            return _field.Get();
        }
        static int GetReflectBoxSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectBoxSize"));
            return _field.Get();
        }
        static int GetReflectExposure() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectExposure"));
            return _field.Get();
        }
        static int GetReflectFaceColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectFaceColor"));
            return _field.Get();
        }
        static int GetREFLECTIONSCOLOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_COLOR"));
            return _field.Get();
        }
        static int GetREFLECTIONSCOLORMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_COLOR_MAP"));
            return _field.Get();
        }
        static int GetREFLECTIONSIOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_IOR"));
            return _field.Get();
        }
        static int GetREFLECTIONSIORMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_IOR_MAP"));
            return _field.Get();
        }
        static int GetREFLECTIONSROUGHNESS() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_ROUGHNESS"));
            return _field.Get();
        }
        static int GetREFLECTIONSROUGHNESSMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_ROUGHNESS_MAP"));
            return _field.Get();
        }
        static int GetREFLECTIONSWEIGHT() {
            static BNM::Field<int> _field = GetClass().GetField(O("_REFLECTIONS_WEIGHT"));
            return _field.Get();
        }
        static int GetReflectivity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Reflectivity"));
            return _field.Get();
        }
        static int GetReflectMatcapPerspToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectMatcapPerspToggle"));
            return _field.Get();
        }
        static int GetReflectMatcapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectMatcapToggle"));
            return _field.Get();
        }
        static int GetReflectNormalTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalTex"));
            return _field.Get();
        }
        static int GetReflectNormalToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectNormalToggle"));
            return _field.Get();
        }
        static int GetReflectOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOffset"));
            return _field.Get();
        }
        static int GetReflectOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOpacity"));
            return _field.Get();
        }
        static int GetReflectOutlineColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectOutlineColor"));
            return _field.Get();
        }
        static int GetReflectRotate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectRotate"));
            return _field.Get();
        }
        static int GetReflectScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectScale"));
            return _field.Get();
        }
        static int GetReflectTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectTex"));
            return _field.Get();
        }
        static int GetReflectTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectTint"));
            return _field.Get();
        }
        static int GetReflectToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ReflectToggle"));
            return _field.Get();
        }
        static int GetRendererColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RendererColor"));
            return _field.Get();
        }
        static int GetRespawnAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RespawnAmount"));
            return _field.Get();
        }
        static int GetRim() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Rim"));
            return _field.Get();
        }
        static int GetRimColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RimColor"));
            return _field.Get();
        }
        static int GetRimFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RimFactor"));
            return _field.Get();
        }
        static int GetRimLightSampler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RimLightSampler"));
            return _field.Get();
        }
        static int GetRimLightSamplerST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RimLightSampler_ST"));
            return _field.Get();
        }
        static int GetRimPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RimPower"));
            return _field.Get();
        }
        static int GetRingGlowValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RingGlowValue"));
            return _field.Get();
        }
        static int GetRotateAngle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateAngle"));
            return _field.Get();
        }
        static int GetRotateAnim() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateAnim"));
            return _field.Get();
        }
        static int GetRotateOnYAxisBySinTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateOnYAxisBySinTime"));
            return _field.Get();
        }
        static int GetRotateSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_RotateSpeed"));
            return _field.Get();
        }
        static int GetRough() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Rough"));
            return _field.Get();
        }
        static int GetSampleGI() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SampleGI"));
            return _field.Get();
        }
        static int GetSATTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SATTex"));
            return _field.Get();
        }
        static int GetSATTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SATTex_ST"));
            return _field.Get();
        }
        static int GetScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Scale"));
            return _field.Get();
        }
        static int GetScaleOffsetB() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleOffsetB"));
            return _field.Get();
        }
        static int GetScaleOffsetG() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleOffsetG"));
            return _field.Get();
        }
        static int GetScaleOffsetR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleOffsetR"));
            return _field.Get();
        }
        static int GetScaleRatioA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleRatioA"));
            return _field.Get();
        }
        static int GetScaleRatioB() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleRatioB"));
            return _field.Get();
        }
        static int GetScaleRatioC() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleRatioC"));
            return _field.Get();
        }
        static int GetScaleRG() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleRG"));
            return _field.Get();
        }
        static int GetScaleX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleX"));
            return _field.Get();
        }
        static int GetScaleY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScaleY"));
            return _field.Get();
        }
        static int GetSceneMeshZWrite() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SceneMeshZWrite"));
            return _field.Get();
        }
        static int GetSceneTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SceneTint"));
            return _field.Get();
        }
        static int GetScl() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Scl"));
            return _field.Get();
        }
        static int GetScreenParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScreenParams"));
            return _field.Get();
        }
        static int GetScreenRatio() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScreenRatio"));
            return _field.Get();
        }
        static int GetScrollSpeedAndScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScrollSpeedAndScale"));
            return _field.Get();
        }
        static int GetScrollUOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ScrollUOffset"));
            return _field.Get();
        }
        static int GetSecondaryColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Secondary_Color"));
            return _field.Get();
        }
        static int GetSecondTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SecondTex"));
            return _field.Get();
        }
        static int GetSecondTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SecondTex_ST"));
            return _field.Get();
        }
        static int GetSecondViewColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SecondViewColor"));
            return _field.Get();
        }
        static int GetSeeThru() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SeeThru"));
            return _field.Get();
        }
        static int GetSelectedOpacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SelectedOpacity"));
            return _field.Get();
        }
        static int GetSettingsPreset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SettingsPreset"));
            return _field.Get();
        }
        static int GetShaderFlags() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShaderFlags"));
            return _field.Get();
        }
        static int GetShadowColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowColor"));
            return _field.Get();
        }
        static int GetShadowColor0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowColor0"));
            return _field.Get();
        }
        static int GetShadowColor1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowColor1"));
            return _field.Get();
        }
        static int GetShadowColorMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowColorMask"));
            return _field.Get();
        }
        static int GetShadowIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowIntensity"));
            return _field.Get();
        }
        static int GetShadowTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowTex"));
            return _field.Get();
        }
        static int GetShadowTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShadowTex_ST"));
            return _field.Get();
        }
        static int GetSharpness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sharpness"));
            return _field.Get();
        }
        static int GetShininess() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Shininess"));
            return _field.Get();
        }
        static int GetShrinkLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ShrinkLimit"));
            return _field.Get();
        }
        static int GetSideFalloff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SideFalloff"));
            return _field.Get();
        }
        static int GetSimpleLitDirStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitDirStencilReadMask"));
            return _field.Get();
        }
        static int GetSimpleLitDirStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitDirStencilRef"));
            return _field.Get();
        }
        static int GetSimpleLitDirStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitDirStencilWriteMask"));
            return _field.Get();
        }
        static int GetSimpleLitPunctualStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitPunctualStencilReadMask"));
            return _field.Get();
        }
        static int GetSimpleLitPunctualStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitPunctualStencilRef"));
            return _field.Get();
        }
        static int GetSimpleLitPunctualStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitPunctualStencilWriteMask"));
            return _field.Get();
        }
        static int GetSimpleLitStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitStencilReadMask"));
            return _field.Get();
        }
        static int GetSimpleLitStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitStencilRef"));
            return _field.Get();
        }
        static int GetSimpleLitStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SimpleLitStencilWriteMask"));
            return _field.Get();
        }
        static int GetSingleLightmap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SingleLightmap"));
            return _field.Get();
        }
        static int GetSingleLightmapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SingleLightmap_ST"));
            return _field.Get();
        }
        static int GetSinTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SinTime"));
            return _field.Get();
        }
        static int GetSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Size"));
            return _field.Get();
        }
        static int GetSkyOff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky_Off"));
            return _field.Get();
        }
        static int GetSky1Col() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky1_Col"));
            return _field.Get();
        }
        static int GetSky1Exp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky1_Exp"));
            return _field.Get();
        }
        static int GetSky1Rot() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky1_Rot"));
            return _field.Get();
        }
        static int GetSky2Col() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky2_Col"));
            return _field.Get();
        }
        static int GetSky2Exp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky2_Exp"));
            return _field.Get();
        }
        static int GetSky2Rot() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Sky2_Rot"));
            return _field.Get();
        }
        static int GetSkyAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyAlpha"));
            return _field.Get();
        }
        static int GetSkyGradient() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyGradient"));
            return _field.Get();
        }
        static int GetSkyGradientST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyGradient_ST"));
            return _field.Get();
        }
        static int GetSkyLayer1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyLayer1"));
            return _field.Get();
        }
        static int GetSkyLayer1Params() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyLayer1_Params"));
            return _field.Get();
        }
        static int GetSkyLayer1ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyLayer1_ST"));
            return _field.Get();
        }
        static int GetSkyLayer2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyLayer2"));
            return _field.Get();
        }
        static int GetSkyLayer2Params() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyLayer2_Params"));
            return _field.Get();
        }
        static int GetSkyLayer2ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SkyLayer2_ST"));
            return _field.Get();
        }
        static int GetSmoothness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness"));
            return _field.Get();
        }
        static int GetSmoothness0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness0"));
            return _field.Get();
        }
        static int GetSmoothness1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness1"));
            return _field.Get();
        }
        static int GetSmoothness2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness2"));
            return _field.Get();
        }
        static int GetSmoothness3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Smoothness3"));
            return _field.Get();
        }
        static int GetSmoothnessSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SmoothnessSource"));
            return _field.Get();
        }
        static int GetSmoothnessTextureChannel() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SmoothnessTextureChannel"));
            return _field.Get();
        }
        static int GetSoftness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Softness"));
            return _field.Get();
        }
        static int GetSoftParticleFadeParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SoftParticleFadeParams"));
            return _field.Get();
        }
        static int GetSoftParticlesEnabled() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SoftParticlesEnabled"));
            return _field.Get();
        }
        static int GetSoftParticlesFarFadeDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SoftParticlesFarFadeDistance"));
            return _field.Get();
        }
        static int GetSoftParticlesNearFadeDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SoftParticlesNearFadeDistance"));
            return _field.Get();
        }
        static int GetSpecColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecColor"));
            return _field.Get();
        }
        static int GetSpecGlossMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecGlossMap"));
            return _field.Get();
        }
        static int GetSpecGlossMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecGlossMap_ST"));
            return _field.Get();
        }
        static int GetSpecSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecSource"));
            return _field.Get();
        }
        static int GetSPECULARCOLOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SPECULAR_COLOR"));
            return _field.Get();
        }
        static int GetSPECULARCOLORMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SPECULAR_COLOR_MAP"));
            return _field.Get();
        }
        static int GetSPECULARIOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SPECULAR_IOR"));
            return _field.Get();
        }
        static int GetSPECULARIORMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SPECULAR_IOR_MAP"));
            return _field.Get();
        }
        static int GetSPECULARROUGHNESS() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SPECULAR_ROUGHNESS"));
            return _field.Get();
        }
        static int GetSPECULARROUGHNESSMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SPECULAR_ROUGHNESS_MAP"));
            return _field.Get();
        }
        static int GetSpecularColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularColor"));
            return _field.Get();
        }
        static int GetSpecularDir() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularDir"));
            return _field.Get();
        }
        static int GetSpecularHighlights() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularHighlights"));
            return _field.Get();
        }
        static int GetSpecularPower() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularPower"));
            return _field.Get();
        }
        static int GetSpecularPowerIntensity() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularPowerIntensity"));
            return _field.Get();
        }
        static int GetSpecularReflectionSampler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularReflectionSampler"));
            return _field.Get();
        }
        static int GetSpecularReflectionSamplerST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularReflectionSampler_ST"));
            return _field.Get();
        }
        static int GetSpecularUseDiffuseColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpecularUseDiffuseColor"));
            return _field.Get();
        }
        static int GetSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Speed"));
            return _field.Get();
        }
        static int GetSpeedA() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpeedA"));
            return _field.Get();
        }
        static int GetSpeedB() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpeedB"));
            return _field.Get();
        }
        static int GetSpeedG() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpeedG"));
            return _field.Get();
        }
        static int GetSpeedR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpeedR"));
            return _field.Get();
        }
        static int GetSpeedRG() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpeedRG"));
            return _field.Get();
        }
        static int GetSplat0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat0"));
            return _field.Get();
        }
        static int GetSplat0ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat0_ST"));
            return _field.Get();
        }
        static int GetSplat1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat1"));
            return _field.Get();
        }
        static int GetSplat1ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat1_ST"));
            return _field.Get();
        }
        static int GetSplat2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat2"));
            return _field.Get();
        }
        static int GetSplat2ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat2_ST"));
            return _field.Get();
        }
        static int GetSplat3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat3"));
            return _field.Get();
        }
        static int GetSplat3ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Splat3_ST"));
            return _field.Get();
        }
        static int GetSpotDirection() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SpotDirection"));
            return _field.Get();
        }
        static int GetSrcBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcBlend"));
            return _field.Get();
        }
        static int GetSrcBlendAlpha() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcBlendAlpha"));
            return _field.Get();
        }
        static int GetSrcRect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SrcRect"));
            return _field.Get();
        }
        static int GetStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Stamp"));
            return _field.Get();
        }
        static int GetStampMultipler() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StampMultipler"));
            return _field.Get();
        }
        static int GetStealthEffectOn() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StealthEffectOn"));
            return _field.Get();
        }
        static int GetStencil() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Stencil"));
            return _field.Get();
        }
        static int GetStencilComp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilComp"));
            return _field.Get();
        }
        static int GetStencilComparison() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilComparison"));
            return _field.Get();
        }
        static int GetStencilFailFront() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilFailFront"));
            return _field.Get();
        }
        static int GetStencilMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilMask"));
            return _field.Get();
        }
        static int GetStencilOp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilOp"));
            return _field.Get();
        }
        static int GetStencilPassFront() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilPassFront"));
            return _field.Get();
        }
        static int GetStencilReadMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilReadMask"));
            return _field.Get();
        }
        static int GetStencilRef() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilRef"));
            return _field.Get();
        }
        static int GetStencilRefDitherMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilRefDitherMask"));
            return _field.Get();
        }
        static int GetStencilReference() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilReference"));
            return _field.Get();
        }
        static int GetStencilWriteDitherMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilWriteDitherMask"));
            return _field.Get();
        }
        static int GetStencilWriteMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilWriteMask"));
            return _field.Get();
        }
        static int GetStencilZFailFront() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StencilZFailFront"));
            return _field.Get();
        }
        static int GetStreamingColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_StreamingColor"));
            return _field.Get();
        }
        static int GetSubShaderOptions() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SubShaderOptions"));
            return _field.Get();
        }
        static int GetSubsurfaceColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SubsurfaceColor"));
            return _field.Get();
        }
        static int GetSubsurfaceIndirect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SubsurfaceIndirect"));
            return _field.Get();
        }
        static int GetSubsurfaceKwToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SubsurfaceKwToggle"));
            return _field.Get();
        }
        static int GetSubsurfaceTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SubsurfaceTex"));
            return _field.Get();
        }
        static int GetSubsurfaceTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SubsurfaceTex_ST"));
            return _field.Get();
        }
        static int GetSubtract() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Subtract"));
            return _field.Get();
        }
        static int GetSunAngles() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SunAngles"));
            return _field.Get();
        }
        static int GetSunMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SunMap"));
            return _field.Get();
        }
        static int GetSunMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SunMap_ST"));
            return _field.Get();
        }
        static int GetSurface() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Surface"));
            return _field.Get();
        }
        static int GetSwizzleNormalMapChannelsNM() {
            static BNM::Field<int> _field = GetClass().GetField(O("_SwizzleNormalMapChannelsNM"));
            return _field.Get();
        }
        static int GetTentacleEndDir() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TentacleEndDir"));
            return _field.Get();
        }
        static int GetTentacleEndPos() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TentacleEndPos"));
            return _field.Get();
        }
        static int GetTentacleRingOrigin() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TentacleRingOrigin"));
            return _field.Get();
        }
        static int GetTentacleRingRadius() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TentacleRingRadius"));
            return _field.Get();
        }
        static int GetTentacleStartDir() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TentacleStartDir"));
            return _field.Get();
        }
        static int GetTerrainHolesTexture() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TerrainHolesTexture"));
            return _field.Get();
        }
        static int GetTerrainHolesTextureST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TerrainHolesTexture_ST"));
            return _field.Get();
        }
        static int GetTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex"));
            return _field.Get();
        }
        static int GetTex0MainView() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex0MainView"));
            return _field.Get();
        }
        static int GetTex0MainViewST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex0MainView_ST"));
            return _field.Get();
        }
        static int GetTex0Shadows() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex0Shadows"));
            return _field.Get();
        }
        static int GetTex0ShadowsST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex0Shadows_ST"));
            return _field.Get();
        }
        static int GetTex1MainView() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex1MainView"));
            return _field.Get();
        }
        static int GetTex1MainViewST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex1MainView_ST"));
            return _field.Get();
        }
        static int GetTex1Shadows() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex1Shadows"));
            return _field.Get();
        }
        static int GetTex1ShadowsST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex1Shadows_ST"));
            return _field.Get();
        }
        static int GetTex2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex2"));
            return _field.Get();
        }
        static int GetTex2ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tex2_ST"));
            return _field.Get();
        }
        static int GetTexcoord() {
            static BNM::Field<int> _field = GetClass().GetField(O("_texcoord"));
            return _field.Get();
        }
        static int GetTexcoordST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_texcoord_ST"));
            return _field.Get();
        }
        static int GetTexelSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSize"));
            return _field.Get();
        }
        static int GetTexelSnapFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSnap_Factor"));
            return _field.Get();
        }
        static int GetTexelSnapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexelSnapToggle"));
            return _field.Get();
        }
        static int GetTexMipBias() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexMipBias"));
            return _field.Get();
        }
        static int GetTexTransition() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TexTransition"));
            return _field.Get();
        }
        static int GetTexture() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Texture"));
            return _field.Get();
        }
        static int GetTextureST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Texture_ST"));
            return _field.Get();
        }
        static int GetTexture2D() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Texture2D"));
            return _field.Get();
        }
        static int GetTextureHeight() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TextureHeight"));
            return _field.Get();
        }
        static int GetTextureSampleAdd() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TextureSampleAdd"));
            return _field.Get();
        }
        static int GetTextureWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TextureWidth"));
            return _field.Get();
        }
        static int GetTheta0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Theta0"));
            return _field.Get();
        }
        static int GetTheta1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Theta1"));
            return _field.Get();
        }
        static int GetThirdTex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ThirdTex"));
            return _field.Get();
        }
        static int GetThirdTexST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ThirdTex_ST"));
            return _field.Get();
        }
        static int GetThreshold1Color() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Threshold1Color"));
            return _field.Get();
        }
        static int GetThreshold2Color() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Threshold2Color"));
            return _field.Get();
        }
        static int GetThreshold3Color() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Threshold3Color"));
            return _field.Get();
        }
        static int GetThumbGlowValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ThumbGlowValue"));
            return _field.Get();
        }
        static int GetTileX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tile_X"));
            return _field.Get();
        }
        static int GetTileY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tile_Y"));
            return _field.Get();
        }
        static int GetTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Time"));
            return _field.Get();
        }
        static int GetTimeOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TimeOffset"));
            return _field.Get();
        }
        static int GetTimeScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TimeScale"));
            return _field.Get();
        }
        static int GetTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Tint"));
            return _field.Get();
        }
        static int GetTintColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TintColor"));
            return _field.Get();
        }
        static int GetToneMapCoeffs1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ToneMapCoeffs1"));
            return _field.Get();
        }
        static int GetToneMapCoeffs2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ToneMapCoeffs2"));
            return _field.Get();
        }
        static int GetTopColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TopColor"));
            return _field.Get();
        }
        static int GetTransitionPoint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TransitionPoint"));
            return _field.Get();
        }
        static int GetTRANSPARENCY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TRANSPARENCY"));
            return _field.Get();
        }
        static int GetTRANSPARENCYMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TRANSPARENCY_MAP"));
            return _field.Get();
        }
        static int GetTransparencyMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TransparencyMode"));
            return _field.Get();
        }
        static int GetTwoSided() {
            static BNM::Field<int> _field = GetClass().GetField(O("_TwoSided"));
            return _field.Get();
        }
        static int GetUAxis() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UAxis"));
            return _field.Get();
        }
        static int GetUnderlayColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlayColor"));
            return _field.Get();
        }
        static int GetUnderlayDilate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlayDilate"));
            return _field.Get();
        }
        static int GetUnderlayOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlayOffset"));
            return _field.Get();
        }
        static int GetUnderlayOffsetX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlayOffsetX"));
            return _field.Get();
        }
        static int GetUnderlayOffsetY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlayOffsetY"));
            return _field.Get();
        }
        static int GetUnderlayPixelSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlayPixelSize"));
            return _field.Get();
        }
        static int GetUnderlaySoftness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UnderlaySoftness"));
            return _field.Get();
        }
        static int GetUNDERWATERMODE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UNDERWATER_MODE_"));
            return _field.Get();
        }
        static int GetUnmultiply() {
            static BNM::Field<int> _field = GetClass().GetField(O("_unmultiply"));
            return _field.Get();
        }
        static int GetUOrigin() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UOrigin"));
            return _field.Get();
        }
        static int GetUScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UScale"));
            return _field.Get();
        }
        static int GetUSEDEFORMMAP() {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_DEFORM_MAP"));
            return _field.Get();
        }
        static int GetUSETEXARRAYATLAS() {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_TEX_ARRAY_ATLAS"));
            return _field.Get();
        }
        static int GetUSEWORLDPOSASOFFSET() {
            static BNM::Field<int> _field = GetClass().GetField(O("_USE_WORLD_POS_AS_OFFSET"));
            return _field.Get();
        }
        static int GetUseAoMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseAoMap"));
            return _field.Get();
        }
        static int GetUseColorMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseColorMap"));
            return _field.Get();
        }
        static int GetUseCrystalEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseCrystalEffect"));
            return _field.Get();
        }
        static int GetUseDayNightLightmap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseDayNightLightmap"));
            return _field.Get();
        }
        static int GetUseEmissiveMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseEmissiveMap"));
            return _field.Get();
        }
        static int GetUseEyeTracking() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseEyeTracking"));
            return _field.Get();
        }
        static int GetUseGridEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseGridEffect"));
            return _field.Get();
        }
        static int GetUseImageAsSDF() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseImageAsSDF"));
            return _field.Get();
        }
        static int GetUseMetallicMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseMetallicMap"));
            return _field.Get();
        }
        static int GetUseMouthFlap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseMouthFlap"));
            return _field.Get();
        }
        static int GetUseNormalMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseNormalMap"));
            return _field.Get();
        }
        static int GetUseOpacityMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseOpacityMap"));
            return _field.Get();
        }
        static int GetUseRoughnessMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseRoughnessMap"));
            return _field.Get();
        }
        static int GetUseSpecHighlight() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecHighlight"));
            return _field.Get();
        }
        static int GetUseSpecular() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecular"));
            return _field.Get();
        }
        static int GetUseSpecularAlphaChannel() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseSpecularAlphaChannel"));
            return _field.Get();
        }
        static int GetUseUIAlphaClip() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseUIAlphaClip"));
            return _field.Get();
        }
        static int GetUseVertexColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseVertexColor"));
            return _field.Get();
        }
        static int GetUseViewSpaceUVs() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseViewSpaceUVs"));
            return _field.Get();
        }
        static int GetUseWaveWarp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWaveWarp"));
            return _field.Get();
        }
        static int GetUseWeatherMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWeatherMap"));
            return _field.Get();
        }
        static int GetUseWorldSpaceUVs() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UseWorldSpaceUVs"));
            return _field.Get();
        }
        static int GetUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UV"));
            return _field.Get();
        }
        static int GetUvOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvOffset"));
            return _field.Get();
        }
        static int GetUVSec() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UVSec"));
            return _field.Get();
        }
        static int GetUvShiftOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftOffset"));
            return _field.Get();
        }
        static int GetUvShiftRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftRate"));
            return _field.Get();
        }
        static int GetUvShiftSteps() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftSteps"));
            return _field.Get();
        }
        static int GetUvShiftToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvShiftToggle"));
            return _field.Get();
        }
        static int GetUVSource() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UVSource"));
            return _field.Get();
        }
        static int GetUvTiling() {
            static BNM::Field<int> _field = GetClass().GetField(O("_UvTiling"));
            return _field.Get();
        }
        static int GetVAxis() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VAxis"));
            return _field.Get();
        }
        static int GetVERTEXCOLOR() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VERTEX_COLOR_"));
            return _field.Get();
        }
        static int GetVERTEXCOLORMODE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VERTEX_COLOR_MODE_"));
            return _field.Get();
        }
        static int GetVERTEXDEFORMATION() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VERTEX_DEFORMATION"));
            return _field.Get();
        }
        static int GetVertexColorLightmap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexColorLightmap"));
            return _field.Get();
        }
        static int GetVertexColorLightmapScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexColorLightmapScale"));
            return _field.Get();
        }
        static int GetVertexFlapAxis() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapAxis"));
            return _field.Get();
        }
        static int GetVertexFlapDegreesMinMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapDegreesMinMax"));
            return _field.Get();
        }
        static int GetVertexFlapPhaseOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapPhaseOffset"));
            return _field.Get();
        }
        static int GetVertexFlapSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapSpeed"));
            return _field.Get();
        }
        static int GetVertexFlapToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexFlapToggle"));
            return _field.Get();
        }
        static int GetVertexLightToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexLightToggle"));
            return _field.Get();
        }
        static int GetVertexOffsetX() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexOffsetX"));
            return _field.Get();
        }
        static int GetVertexOffsetY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexOffsetY"));
            return _field.Get();
        }
        static int GetVertexRotateAngles() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateAngles"));
            return _field.Get();
        }
        static int GetVertexRotateAnim() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateAnim"));
            return _field.Get();
        }
        static int GetVertexRotateToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexRotateToggle"));
            return _field.Get();
        }
        static int GetVertexWaveAxes() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveAxes"));
            return _field.Get();
        }
        static int GetVertexWaveDebug() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveDebug"));
            return _field.Get();
        }
        static int GetVertexWaveEnd() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveEnd"));
            return _field.Get();
        }
        static int GetVertexWaveFalloff() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveFalloff"));
            return _field.Get();
        }
        static int GetVertexWaveParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveParams"));
            return _field.Get();
        }
        static int GetVertexWavePhaseOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWavePhaseOffset"));
            return _field.Get();
        }
        static int GetVertexWaveSphereMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveSphereMask"));
            return _field.Get();
        }
        static int GetVertexWaveToggle() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VertexWaveToggle"));
            return _field.Get();
        }
        static int GetVisible() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Visible"));
            return _field.Get();
        }
        static int GetVolume0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Volume0"));
            return _field.Get();
        }
        static int GetVolume0ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Volume0_ST"));
            return _field.Get();
        }
        static int GetVolume1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Volume1"));
            return _field.Get();
        }
        static int GetVolume1ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Volume1_ST"));
            return _field.Get();
        }
        static int GetVolume2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Volume2"));
            return _field.Get();
        }
        static int GetVolume2ST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Volume2_ST"));
            return _field.Get();
        }
        static int GetVolumeInvSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VolumeInvSize"));
            return _field.Get();
        }
        static int GetVolumeMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VolumeMask"));
            return _field.Get();
        }
        static int GetVolumeMaskST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VolumeMask_ST"));
            return _field.Get();
        }
        static int GetVolumeMin() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VolumeMin"));
            return _field.Get();
        }
        static int GetVOrigin() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VOrigin"));
            return _field.Get();
        }
        static int GetVScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_VScale"));
            return _field.Get();
        }
        static int GetWallScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WallScale"));
            return _field.Get();
        }
        static int GetWaterCaustics() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaterCaustics"));
            return _field.Get();
        }
        static int GetWaterEffect() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaterEffect"));
            return _field.Get();
        }
        static int GetWaveAmplitude() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveAmplitude"));
            return _field.Get();
        }
        static int GetWaveAndDistance() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveAndDistance"));
            return _field.Get();
        }
        static int GetWaveFrequency() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveFrequency"));
            return _field.Get();
        }
        static int GetWaveScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveScale"));
            return _field.Get();
        }
        static int GetWaveTimeScale() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WaveTimeScale"));
            return _field.Get();
        }
        static int GetWavingTint() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WavingTint"));
            return _field.Get();
        }
        static int GetWeatherMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap"));
            return _field.Get();
        }
        static int GetWeatherMapAtlas() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap_Atlas"));
            return _field.Get();
        }
        static int GetWeatherMapAtlasSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMap_AtlasSlice"));
            return _field.Get();
        }
        static int GetWeatherMapDissolveEdgeSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeatherMapDissolveEdgeSize"));
            return _field.Get();
        }
        static int GetWeightBold() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeightBold"));
            return _field.Get();
        }
        static int GetWeightNormal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WeightNormal"));
            return _field.Get();
        }
        static int GetWetBumpMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WetBumpMap"));
            return _field.Get();
        }
        static int GetWetBumpMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WetBumpMap_ST"));
            return _field.Get();
        }
        static int GetWetMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WetMap"));
            return _field.Get();
        }
        static int GetWetMapUV() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WetMapUV"));
            return _field.Get();
        }
        static int GetWINDBRANCH1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WIND_BRANCH1"));
            return _field.Get();
        }
        static int GetWINDBRANCH2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WIND_BRANCH2"));
            return _field.Get();
        }
        static int GetWINDRIPPLE() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WIND_RIPPLE"));
            return _field.Get();
        }
        static int GetWINDSHARED() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WIND_SHARED"));
            return _field.Get();
        }
        static int GetWINDSHIMMER() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WIND_SHIMMER"));
            return _field.Get();
        }
        static int GetWindColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WindColor"));
            return _field.Get();
        }
        static int GetWindowParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WindowParams"));
            return _field.Get();
        }
        static int GetWindQuality() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WindQuality"));
            return _field.Get();
        }
        static int GetWINDQUALITY() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WINDQUALITY"));
            return _field.Get();
        }
        static int GetWireframeColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WireframeColor"));
            return _field.Get();
        }
        static int GetWireThickness() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WireThickness"));
            return _field.Get();
        }
        static int GetWorkflowMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WorkflowMode"));
            return _field.Get();
        }
        static int GetWorldSpaceCameraPos() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WorldSpaceCameraPos"));
            return _field.Get();
        }
        static int GetWorldSpaceLightPos0() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WorldSpaceLightPos0"));
            return _field.Get();
        }
        static int GetWristFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("_WristFade"));
            return _field.Get();
        }
        static int GetXRMotionVectorsPass() {
            static BNM::Field<int> _field = GetClass().GetField(O("_XRMotionVectorsPass"));
            return _field.Get();
        }
        static int GetZBufferParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZBufferParams"));
            return _field.Get();
        }
        static int GetZFightOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZFightOffset"));
            return _field.Get();
        }
        static int GetZQueue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZQueue"));
            return _field.Get();
        }
        static int GetZTest() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZTest"));
            return _field.Get();
        }
        static int GetZTestMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZTestMode"));
            return _field.Get();
        }
        static int GetZWrite() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZWrite"));
            return _field.Get();
        }
        static int GetZWriteMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ZWriteMode"));
            return _field.Get();
        }
        static int GetBackfaceNormalMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("Backface_Normal_Mode"));
            return _field.Get();
        }
        static int GetBACKFACENORMALMODE() {
            static BNM::Field<int> _field = GetClass().GetField(O("BACKFACE_NORMAL_MODE"));
            return _field.Get();
        }
        static int GetBaseMap_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("Base_Map"));
            return _field.Get();
        }
        static int GetBestFitNormalMap() {
            static BNM::Field<int> _field = GetClass().GetField(O("bestFitNormalMap"));
            return _field.Get();
        }
        static int GetBestFitNormalMapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("bestFitNormalMap_ST"));
            return _field.Get();
        }
        static int GetEFFECTBILLBOARD() {
            static BNM::Field<int> _field = GetClass().GetField(O("EFFECT_BILLBOARD"));
            return _field.Get();
        }
        static int GetEFFECTEXTRATEX() {
            static BNM::Field<int> _field = GetClass().GetField(O("EFFECT_EXTRA_TEX"));
            return _field.Get();
        }
        static int GetGFlCornerAdjust() {
            static BNM::Field<int> _field = GetClass().GetField(O("g_flCornerAdjust"));
            return _field.Get();
        }
        static int GetGFlOutlineWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("g_flOutlineWidth"));
            return _field.Get();
        }
        static int GetGVOutlineColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("g_vOutlineColor"));
            return _field.Get();
        }
        static int GetHARDOCCLUSION() {
            static BNM::Field<int> _field = GetClass().GetField(O("HARD_OCCLUSION"));
            return _field.Get();
        }
        static int GetIntensity_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("intensity"));
            return _field.Get();
        }
        static int GetNormalBlend() {
            static BNM::Field<int> _field = GetClass().GetField(O("Normal_Blend"));
            return _field.Get();
        }
        static int GetNormalMap_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("Normal_Map"));
            return _field.Get();
        }
        static int GetPixelSnap() {
            static BNM::Field<int> _field = GetClass().GetField(O("PixelSnap"));
            return _field.Get();
        }
        static int GetSOFTOCCLUSION() {
            static BNM::Field<int> _field = GetClass().GetField(O("SOFT_OCCLUSION"));
            return _field.Get();
        }
        static int GetUnity4LightAtten0() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_4LightAtten0"));
            return _field.Get();
        }
        static int GetUnity4LightPosX0() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_4LightPosX0"));
            return _field.Get();
        }
        static int GetUnity4LightPosY0() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_4LightPosY0_"));
            return _field.Get();
        }
        static int GetUnity4LightPosZ0() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_4LightPosZ0"));
            return _field.Get();
        }
        static int GetUnityAmbientEquator() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_AmbientEquator"));
            return _field.Get();
        }
        static int GetUnityAmbientGround() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_AmbientGround_"));
            return _field.Get();
        }
        static int GetUnityAmbientSky() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_AmbientSky"));
            return _field.Get();
        }
        static int GetUnityCameraInvProjection() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_CameraInvProjection"));
            return _field.Get();
        }
        static int GetUnityCameraProjection() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_CameraProjection"));
            return _field.Get();
        }
        static int GetUnityCameraWorldClipPlanes() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_CameraWorldClipPlanes"));
            return _field.Get();
        }
        static int GetUnityDeltaTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_DeltaTime"));
            return _field.Get();
        }
        static int GetUnityFogColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_FogColor"));
            return _field.Get();
        }
        static int GetUnityFogParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_FogParams"));
            return _field.Get();
        }
        static int GetUnityIndirectSpecColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_IndirectSpecColor"));
            return _field.Get();
        }
        static int GetUnityLightAtten() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_LightAtten"));
            return _field.Get();
        }
        static int GetUnityLightColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_LightColor"));
            return _field.Get();
        }
        static int GetUnityLightmap() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_Lightmap"));
            return _field.Get();
        }
        static int GetUnityLightmaps() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_Lightmaps"));
            return _field.Get();
        }
        static int GetUnityLightmapsInd() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_LightmapsInd"));
            return _field.Get();
        }
        static int GetUnityLightmapST() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_LightmapST"));
            return _field.Get();
        }
        static int GetUNITYLIGHTMODELAMBIENT() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_LIGHTMODEL_AMBIENT"));
            return _field.Get();
        }
        static int GetUnityLightPosition() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_LightPosition"));
            return _field.Get();
        }
        static int GetUnityLODFade() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_LODFade"));
            return _field.Get();
        }
        static int GetUNITYMATRIXITMV() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_IT_MV"));
            return _field.Get();
        }
        static int GetUNITYMATRIXMV() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_MV"));
            return _field.Get();
        }
        static int GetUNITYMATRIXMVP() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_MVP"));
            return _field.Get();
        }
        static int GetUNITYMATRIXP() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_P"));
            return _field.Get();
        }
        static int GetUNITYMATRIXTMV() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_T_MV"));
            return _field.Get();
        }
        static int GetUNITYMATRIXV() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_V"));
            return _field.Get();
        }
        static int GetUNITYMATRIXVP() {
            static BNM::Field<int> _field = GetClass().GetField(O("UNITY_MATRIX_VP_"));
            return _field.Get();
        }
        static int GetUnityObjectToWorld() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_ObjectToWorld"));
            return _field.Get();
        }
        static int GetUnityOrthoParamsperspective() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_OrthoParamsperspective_"));
            return _field.Get();
        }
        static int GetUnityShadowMasks() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_ShadowMasks"));
            return _field.Get();
        }
        static int GetUnitySpotDirection() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_SpotDirection"));
            return _field.Get();
        }
        static int GetUnityWorldToLight() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_WorldToLight"));
            return _field.Get();
        }
        static int GetUnityWorldToObject() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_WorldToObject"));
            return _field.Get();
        }
        static int GetUnityWorldToShadow() {
            static BNM::Field<int> _field = GetClass().GetField(O("unity_WorldToShadow"));
            return _field.Get();
        }
    };
}
