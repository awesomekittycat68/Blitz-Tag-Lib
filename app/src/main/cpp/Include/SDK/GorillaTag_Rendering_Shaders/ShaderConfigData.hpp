#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderConfigData_MatPropFloat.hpp"
#include "ShaderConfigData_MatPropInt.hpp"
#include "ShaderConfigData_MatPropMatrix.hpp"
#include "ShaderConfigData_MatPropTexture.hpp"
#include "ShaderConfigData_MatPropVector.hpp"
#include "ShaderConfigData_ShaderConfig.hpp"

namespace GorillaTag_Rendering_Shaders {
    struct ShaderConfigData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering.Shaders", "ShaderConfigData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropFloat>* convertFloats(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, ::BNM::Structures::Mono::Array<float>* vals) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropFloat>*> _m = GetClass().GetMethod(O("convertFloats"), {"names", "vals"});
            return _m.Call(names, vals);
        }
        static ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropInt>* convertInts(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, ::BNM::Structures::Mono::Array<int>* vals) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropInt>*> _m = GetClass().GetMethod(O("convertInts"), {"names", "vals"});
            return _m.Call(names, vals);
        }
        static ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropMatrix>* convertMatrices(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* vals) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropMatrix>*> _m = GetClass().GetMethod(O("convertMatrices"), {"names", "vals"});
            return _m.Call(names, vals);
        }
        static ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropTexture>* convertTextures(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* vals) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropTexture>*> _m = GetClass().GetMethod(O("convertTextures"), {"names", "vals"});
            return _m.Call(names, vals);
        }
        static ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropVector>* convertVectors(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>* vals) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropVector>*> _m = GetClass().GetMethod(O("convertVectors"), {"names", "vals"});
            return _m.Call(names, vals);
        }
        static ::GorillaTag_Rendering_Shaders::ShaderConfigData_ShaderConfig GetConfigDataFromMaterial(::Material* mat, bool includeMainTexData) {
            static BNM::Method<::GorillaTag_Rendering_Shaders::ShaderConfigData_ShaderConfig> _m = GetClass().GetMethod(O("GetConfigDataFromMaterial"), {"mat", "includeMainTexData"});
            return _m.Call(mat, includeMainTexData);
        }
        static ::BNM::Structures::Mono::String* GetShaderPropertiesStringFromMaterial(::Material* mat, bool excludeMainTexData) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetShaderPropertiesStringFromMaterial"), {"mat", "excludeMainTexData"});
            return _m.Call(mat, excludeMainTexData);
        }
    };
}
