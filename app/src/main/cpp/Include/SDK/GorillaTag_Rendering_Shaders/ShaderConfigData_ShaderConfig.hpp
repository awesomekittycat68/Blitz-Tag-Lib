#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderConfigData_MatPropFloat.hpp"
#include "ShaderConfigData_MatPropInt.hpp"
#include "ShaderConfigData_MatPropMatrix.hpp"
#include "ShaderConfigData_MatPropTexture.hpp"
#include "ShaderConfigData_MatPropVector.hpp"

namespace GorillaTag_Rendering_Shaders {
    struct ShaderConfigData_ShaderConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering.Shaders", "ShaderConfigData").GetInnerClass("ShaderConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Material* GetFirstMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("firstMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropFloat>* GetFloats() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropFloat>*> _field = GetClass().GetField(O("floats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropInt>* GetInts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropInt>*> _field = GetClass().GetField(O("ints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropMatrix>* GetMatrices() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropMatrix>*> _field = GetClass().GetField(O("matrices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShaderName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shaderName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropTexture>* GetTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropTexture>*> _field = GetClass().GetField(O("textures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropVector>* GetVectors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropVector>*> _field = GetClass().GetField(O("vectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFirstMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("firstMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloats(::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropFloat>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropFloat>*> _field = GetClass().GetField(O("floats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInts(::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropInt>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropInt>*> _field = GetClass().GetField(O("ints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatrices(::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropMatrix>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropMatrix>*> _field = GetClass().GetField(O("matrices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shaderName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextures(::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropTexture>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropTexture>*> _field = GetClass().GetField(O("textures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVectors(::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropVector>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Rendering_Shaders::ShaderConfigData_MatPropVector>*> _field = GetClass().GetField(O("vectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
