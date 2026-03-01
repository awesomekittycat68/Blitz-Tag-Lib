#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSkinMaterials.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct GorillaSkinToggle_ColoringRule : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSkinToggle").GetInnerClass("ColoringRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaSkinMaterials GetColorMaterials() {
            static BNM::Field<::GlobalNamespace::GorillaSkinMaterials> _field = GetClass().GetField(O("colorMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShaderColorProperty() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shaderColorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetShaderHashId() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("shaderHashId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColorMaterials(::GlobalNamespace::GorillaSkinMaterials value) {
            static BNM::Field<::GlobalNamespace::GorillaSkinMaterials> _field = GetClass().GetField(O("colorMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderColorProperty(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shaderColorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderHashId(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("shaderHashId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Apply(::GlobalNamespace::GorillaSkin* skin, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Apply"), {"skin", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(skin, color);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
