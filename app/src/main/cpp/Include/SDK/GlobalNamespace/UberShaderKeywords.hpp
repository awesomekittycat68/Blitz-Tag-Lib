#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UberShaderKeywords : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UberShaderKeywords");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* STEREO_INSTANCING_ON = "STEREO_INSTANCING_ON";
        static constexpr const char* UNITY_SINGLE_PASS_STEREO = "UNITY_SINGLE_PASS_STEREO";
        static constexpr const char* STEREO_MULTIVIEW_ON = "STEREO_MULTIVIEW_ON";
        static constexpr const char* STEREO_CUBEMAP_RENDER_ON = "STEREO_CUBEMAP_RENDER_ON";
        static constexpr const char* _GLOBAL_ZONE_LIQUID_TYPE__WATER = "_GLOBAL_ZONE_LIQUID_TYPE__WATER";
        static constexpr const char* _GLOBAL_ZONE_LIQUID_TYPE__LAVA = "_GLOBAL_ZONE_LIQUID_TYPE__LAVA";
        static constexpr const char* _ZONE_LIQUID_SHAPE__CYLINDER = "_ZONE_LIQUID_SHAPE__CYLINDER";
        static constexpr const char* _USE_TEXTURE = "_USE_TEXTURE";
        static constexpr const char* USE_TEXTURE__AS_MASK = "USE_TEXTURE__AS_MASK";
        static constexpr const char* _USE_WEATHER_MAP = "_USE_WEATHER_MAP";
        static constexpr const char* _ALPHA_DETAIL_MAP = "_ALPHA_DETAIL_MAP";
        static constexpr const char* _WATER_EFFECT = "_WATER_EFFECT";
        static constexpr const char* _HEIGHT_BASED_WATER_EFFECT = "_HEIGHT_BASED_WATER_EFFECT";
        static constexpr const char* _ALPHATEST_ON = "_ALPHATEST_ON";
        static constexpr const char* _MAINTEX_ROTATE = "_MAINTEX_ROTATE";
        static constexpr const char* _UV_WAVE_WARP = "_UV_WAVE_WARP";
        static constexpr const char* _LIQUID_VOLUME = "_LIQUID_VOLUME";
        static constexpr const char* _LIQUID_CONTAINER = "_LIQUID_CONTAINER";
        static constexpr const char* _EMISSION = "_EMISSION";
        static constexpr const char* _EMISSION_USE_UV_WAVE_WARP = "_EMISSION_USE_UV_WAVE_WARP";
        static constexpr const char* _USE_DEFORM_MAP = "_USE_DEFORM_MAP";
        static constexpr const char* _USE_DAY_NIGHT_LIGHTMAP = "_USE_DAY_NIGHT_LIGHTMAP";
        static constexpr const char* _USE_TEX_ARRAY_ATLAS = "_USE_TEX_ARRAY_ATLAS";
        static constexpr const char* _CRYSTAL_EFFECT = "_CRYSTAL_EFFECT";
        static constexpr const char* _EYECOMP = "_EYECOMP";
        static constexpr const char* _MOUTHCOMP = "_MOUTHCOMP";
        static constexpr const char* _ALPHA_BLUE_LIVE_ON = "_ALPHA_BLUE_LIVE_ON";
        static constexpr const char* _GRID_EFFECT = "_GRID_EFFECT";
        static constexpr const char* _REFLECTIONS = "_REFLECTIONS";
        static constexpr const char* _REFLECTIONS_BOX_PROJECT = "_REFLECTIONS_BOX_PROJECT";
        static constexpr const char* _REFLECTIONS_USE_NORMAL_TEX = "_REFLECTIONS_USE_NORMAL_TEX";
        static constexpr const char* _VERTEX_ROTATE = "_VERTEX_ROTATE";
        static constexpr const char* _VERTEX_ANIM_FLAP = "_VERTEX_ANIM_FLAP";
        static constexpr const char* _VERTEX_ANIM_WAVE = "_VERTEX_ANIM_WAVE";
        static constexpr const char* _VERTEX_ANIM_WAVE_DEBUG = "_VERTEX_ANIM_WAVE_DEBUG";
        static constexpr const char* _VERTEX_LIGHTING = "_VERTEX_LIGHTING";
        static constexpr const char* _GRADIENT_MAP_ON = "_GRADIENT_MAP_ON";
        static constexpr const char* _PARALLAX = "_PARALLAX";
        static constexpr const char* _PARALLAX_AA = "_PARALLAX_AA";
        static constexpr const char* _PARALLAX_PLANAR = "_PARALLAX_PLANAR";
        static constexpr const char* _MASK_MAP_ON = "_MASK_MAP_ON";
        static constexpr const char* _FX_LAVA_LAMP = "_FX_LAVA_LAMP";
        static constexpr const char* _INNER_GLOW = "_INNER_GLOW";
        static constexpr const char* _STEALTH_EFFECT = "_STEALTH_EFFECT";
        static constexpr const char* _UV_SHIFT = "_UV_SHIFT";
        static constexpr const char* _TEXEL_SNAP_UVS = "_TEXEL_SNAP_UVS";
        static constexpr const char* _UNITY_EDIT_MODE = "_UNITY_EDIT_MODE";
        static constexpr const char* _GT_EDITOR_TIME = "_GT_EDITOR_TIME";
        static constexpr const char* _DEBUG_PAWN_DATA = "_DEBUG_PAWN_DATA";
        static constexpr const char* _COLOR_GRADE_PROTANOMALY = "_COLOR_GRADE_PROTANOMALY";
        static constexpr const char* _COLOR_GRADE_PROTANOPIA = "_COLOR_GRADE_PROTANOPIA";
        static constexpr const char* _COLOR_GRADE_DEUTERANOMALY = "_COLOR_GRADE_DEUTERANOMALY";
        static constexpr const char* _COLOR_GRADE_DEUTERANOPIA = "_COLOR_GRADE_DEUTERANOPIA";
        static constexpr const char* _COLOR_GRADE_TRITANOMALY = "_COLOR_GRADE_TRITANOMALY";
        static constexpr const char* _COLOR_GRADE_TRITANOPIA = "_COLOR_GRADE_TRITANOPIA";
        static constexpr const char* _COLOR_GRADE_ACHROMATOMALY = "_COLOR_GRADE_ACHROMATOMALY";
        static constexpr const char* _COLOR_GRADE_ACHROMATOPSIA = "_COLOR_GRADE_ACHROMATOPSIA";
        static constexpr const char* LIGHTMAP_ON = "LIGHTMAP_ON";
        static constexpr const char* DIRLIGHTMAP_COMBINED = "DIRLIGHTMAP_COMBINED";
        static constexpr const char* INSTANCING_ON = "INSTANCING_ON";
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetNamesArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("namesArray"));
            return _field.Get();
        }
    };
}
