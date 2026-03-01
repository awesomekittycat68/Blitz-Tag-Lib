#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTUberShader_MaterialKeywordStates : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTUberShader_MaterialKeywordStates");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetALPHABLUELIVEON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ALPHA_BLUE_LIVE_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetALPHADETAILMAP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ALPHA_DETAIL_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetALPHATESTON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ALPHATEST_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADEACHROMATOMALY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_ACHROMATOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADEACHROMATOPSIA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_ACHROMATOPSIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADEDEUTERANOMALY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_DEUTERANOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADEDEUTERANOPIA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_DEUTERANOPIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADEPROTANOMALY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_PROTANOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADEPROTANOPIA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_PROTANOPIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADETRITANOMALY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_TRITANOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCOLORGRADETRITANOPIA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_TRITANOPIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCRYSTALEFFECT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_CRYSTAL_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDEBUGPAWNDATA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEMISSION() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_EMISSION"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEMISSIONUSEUVWAVEWARP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_EMISSION_USE_UV_WAVE_WARP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEYECOMP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_EYECOMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFXLAVALAMP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_FX_LAVA_LAMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGLOBALZONELIQUIDTYPELAVA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GLOBAL_ZONE_LIQUID_TYPE__LAVA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGLOBALZONELIQUIDTYPEWATER() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GLOBAL_ZONE_LIQUID_TYPE__WATER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGRADIENTMAPON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GRADIENT_MAP_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGRIDEFFECT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GRID_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGTBASEMAPATLASSLICESOURCEPROPERTY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGTBASEMAPATLASSLICESOURCEUV1Z() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGTEDITORTIME() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_EDITOR_TIME"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGTRIMLIGHT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_RIM_LIGHT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGTRIMLIGHTFLAT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_RIM_LIGHT_FLAT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGTRIMLIGHTUSEALPHA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_RIM_LIGHT_USE_ALPHA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHALFLAMBERTTERM() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_HALF_LAMBERT_TERM"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHEIGHTBASEDWATEREFFECT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_HEIGHT_BASED_WATER_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetINNERGLOW() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_INNER_GLOW"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLIQUIDCONTAINER() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_LIQUID_CONTAINER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLIQUIDVOLUME() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_LIQUID_VOLUME"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMAINTEXROTATE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_MAINTEX_ROTATE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMASKMAPON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_MASK_MAP_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMOUTHCOMP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_MOUTHCOMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPARALLAX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_PARALLAX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPARALLAXAA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_PARALLAX_AA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPARALLAXPLANAR() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_PARALLAX_PLANAR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetREFLECTIONS() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetREFLECTIONSALBEDOTINT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_ALBEDO_TINT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetREFLECTIONSBOXPROJECT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_BOX_PROJECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetREFLECTIONSMATCAP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_MATCAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetREFLECTIONSMATCAPPERSPAWARE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_MATCAP_PERSP_AWARE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetREFLECTIONSUSENORMALTEX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_USE_NORMAL_TEX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSPECULARHIGHLIGHT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_SPECULAR_HIGHLIGHT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSTEALTHEFFECT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_STEALTH_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTEXELSNAPUVS() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_TEXEL_SNAP_UVS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUNITYEDITMODE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UNITY_EDIT_MODE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSEDAYNIGHTLIGHTMAP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_DAY_NIGHT_LIGHTMAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSEDEFORMMAP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_DEFORM_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSETEXARRAYATLAS() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_TEX_ARRAY_ATLAS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSETEXTURE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_TEXTURE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSEVERTEXCOLOR() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_VERTEX_COLOR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSEWEATHERMAP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_WEATHER_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUVSHIFT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_SHIFT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUVSOURCEUV0() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_SOURCE__UV0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUVSOURCEWORLDPLANARY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_SOURCE__WORLD_PLANAR_Y"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUVWAVEWARP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_WAVE_WARP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVERTEXANIMFLAP() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ANIM_FLAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVERTEXANIMWAVE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ANIM_WAVE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVERTEXANIMWAVEDEBUG() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ANIM_WAVE_DEBUG"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVERTEXROTATE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ROTATE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWATERCAUSTICS() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_WATER_CAUSTICS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWATEREFFECT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_WATER_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetZONEDYNAMICLIGHTSCUSTOMVERTEX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetZONELIQUIDSHAPECYLINDER() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ZONE_LIQUID_SHAPE__CYLINDER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDIRLIGHTMAPCOMBINED() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DIRLIGHTMAP_COMBINED"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetINSTANCINGON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("INSTANCING_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLIGHTMAPON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LIGHTMAP_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSTEREOCUBEMAPRENDERON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("STEREO_CUBEMAP_RENDER_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSTEREOINSTANCINGON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("STEREO_INSTANCING_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSTEREOMULTIVIEWON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("STEREO_MULTIVIEW_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUNITYSINGLEPASSSTEREO() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UNITY_SINGLE_PASS_STEREO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUSETEXTUREASMASK() {
            static BNM::Field<bool> _field = GetClass().GetField(O("USE_TEXTURE__AS_MASK"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetALPHABLUELIVEON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ALPHA_BLUE_LIVE_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetALPHADETAILMAP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ALPHA_DETAIL_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetALPHATESTON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ALPHATEST_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADEACHROMATOMALY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_ACHROMATOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADEACHROMATOPSIA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_ACHROMATOPSIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADEDEUTERANOMALY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_DEUTERANOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADEDEUTERANOPIA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_DEUTERANOPIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADEPROTANOMALY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_PROTANOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADEPROTANOPIA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_PROTANOPIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADETRITANOMALY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_TRITANOMALY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCOLORGRADETRITANOPIA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_COLOR_GRADE_TRITANOPIA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCRYSTALEFFECT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_CRYSTAL_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDEBUGPAWNDATA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_DEBUG_PAWN_DATA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEMISSION(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_EMISSION"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEMISSIONUSEUVWAVEWARP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_EMISSION_USE_UV_WAVE_WARP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEYECOMP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_EYECOMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFXLAVALAMP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_FX_LAVA_LAMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGLOBALZONELIQUIDTYPELAVA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GLOBAL_ZONE_LIQUID_TYPE__LAVA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGLOBALZONELIQUIDTYPEWATER(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GLOBAL_ZONE_LIQUID_TYPE__WATER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGRADIENTMAPON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GRADIENT_MAP_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGRIDEFFECT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GRID_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTBASEMAPATLASSLICESOURCEPROPERTY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTBASEMAPATLASSLICESOURCEUV1Z(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTEDITORTIME(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_EDITOR_TIME"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTRIMLIGHT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_RIM_LIGHT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTRIMLIGHTFLAT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_RIM_LIGHT_FLAT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTRIMLIGHTUSEALPHA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_GT_RIM_LIGHT_USE_ALPHA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHALFLAMBERTTERM(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_HALF_LAMBERT_TERM"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHEIGHTBASEDWATEREFFECT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_HEIGHT_BASED_WATER_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetINNERGLOW(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_INNER_GLOW"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLIQUIDCONTAINER(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_LIQUID_CONTAINER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLIQUIDVOLUME(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_LIQUID_VOLUME"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAINTEXROTATE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_MAINTEX_ROTATE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMASKMAPON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_MASK_MAP_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOUTHCOMP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_MOUTHCOMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPARALLAX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_PARALLAX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPARALLAXAA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_PARALLAX_AA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPARALLAXPLANAR(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_PARALLAX_PLANAR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetREFLECTIONS(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetREFLECTIONSALBEDOTINT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_ALBEDO_TINT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetREFLECTIONSBOXPROJECT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_BOX_PROJECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetREFLECTIONSMATCAP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_MATCAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetREFLECTIONSMATCAPPERSPAWARE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_MATCAP_PERSP_AWARE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetREFLECTIONSUSENORMALTEX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_REFLECTIONS_USE_NORMAL_TEX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSPECULARHIGHLIGHT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_SPECULAR_HIGHLIGHT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSTEALTHEFFECT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_STEALTH_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTEXELSNAPUVS(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_TEXEL_SNAP_UVS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUNITYEDITMODE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UNITY_EDIT_MODE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSEDAYNIGHTLIGHTMAP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_DAY_NIGHT_LIGHTMAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSEDEFORMMAP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_DEFORM_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSETEXARRAYATLAS(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_TEX_ARRAY_ATLAS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSETEXTURE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_TEXTURE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSEVERTEXCOLOR(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_VERTEX_COLOR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSEWEATHERMAP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_USE_WEATHER_MAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUVSHIFT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_SHIFT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUVSOURCEUV0(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_SOURCE__UV0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUVSOURCEWORLDPLANARY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_SOURCE__WORLD_PLANAR_Y"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUVWAVEWARP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_UV_WAVE_WARP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVERTEXANIMFLAP(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ANIM_FLAP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVERTEXANIMWAVE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ANIM_WAVE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVERTEXANIMWAVEDEBUG(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ANIM_WAVE_DEBUG"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVERTEXROTATE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_VERTEX_ROTATE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWATERCAUSTICS(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_WATER_CAUSTICS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWATEREFFECT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_WATER_EFFECT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZONEDYNAMICLIGHTSCUSTOMVERTEX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZONELIQUIDSHAPECYLINDER(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ZONE_LIQUID_SHAPE__CYLINDER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDIRLIGHTMAPCOMBINED(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DIRLIGHTMAP_COMBINED"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetINSTANCINGON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("INSTANCING_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLIGHTMAPON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LIGHTMAP_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSTEREOCUBEMAPRENDERON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("STEREO_CUBEMAP_RENDER_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSTEREOINSTANCINGON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("STEREO_INSTANCING_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSTEREOMULTIVIEWON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("STEREO_MULTIVIEW_ON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUNITYSINGLEPASSSTEREO(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UNITY_SINGLE_PASS_STEREO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUSETEXTUREASMASK(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("USE_TEXTURE__AS_MASK"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
