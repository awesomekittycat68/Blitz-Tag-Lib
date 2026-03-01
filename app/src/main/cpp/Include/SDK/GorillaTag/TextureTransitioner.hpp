#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaExtensions/GorillaMath_RemapFloatInfo.hpp"
#include "TextureTransitioner_DirectionRetentionMode.hpp"

namespace GorillaTag {
    struct TextureTransitioner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "TextureTransitioner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::TextureTransitioner_DirectionRetentionMode GetDirectionRetentionMode() {
            static BNM::Field<::GorillaTag::TextureTransitioner_DirectionRetentionMode> _field = GetClass().GetField(O("directionRetentionMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MonoBehaviour* GetDynamicFloatComponent() {
            static BNM::Field<::MonoBehaviour*> _field = GetClass().GetField(O("dynamicFloatComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEditorPreview() {
            static BNM::Field<bool> _field = GetClass().GetField(O("editorPreview"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIDynamicFloat() {
            static BNM::Field<void*> _field = GetClass().GetField(O("iDynamicFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNormalizedValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("normalizedValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaExtensions::GorillaMath_RemapFloatInfo GetRemapInfo() {
            static BNM::Field<::GorillaExtensions::GorillaMath_RemapFloatInfo> _field = GetClass().GetField(O("remapInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTex1Index() {
            static BNM::Field<int> _field = GetClass().GetField(O("tex1Index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTex1ShaderParam() {
            static BNM::Field<int> _field = GetClass().GetField(O("tex1ShaderParam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTex1ShaderParamName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tex1ShaderParamName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTex2Index() {
            static BNM::Field<int> _field = GetClass().GetField(O("tex2Index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTex2ShaderParam() {
            static BNM::Field<int> _field = GetClass().GetField(O("tex2ShaderParam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTex2ShaderParamName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tex2ShaderParamName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTexTransitionShaderParam() {
            static BNM::Field<int> _field = GetClass().GetField(O("texTransitionShaderParam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTexTransitionShaderParamName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("texTransitionShaderParamName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("textures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTransitionPercent() {
            static BNM::Field<int> _field = GetClass().GetField(O("transitionPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDirectionRetentionMode(::GorillaTag::TextureTransitioner_DirectionRetentionMode value) {
            static BNM::Field<::GorillaTag::TextureTransitioner_DirectionRetentionMode> _field = GetClass().GetField(O("directionRetentionMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDynamicFloatComponent(::MonoBehaviour* value) {
            static BNM::Field<::MonoBehaviour*> _field = GetClass().GetField(O("dynamicFloatComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEditorPreview(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("editorPreview"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIDynamicFloat(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("iDynamicFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalizedValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("normalizedValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemapInfo(::GorillaExtensions::GorillaMath_RemapFloatInfo value) {
            static BNM::Field<::GorillaExtensions::GorillaMath_RemapFloatInfo> _field = GetClass().GetField(O("remapInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTex1Index(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tex1Index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTex1ShaderParam(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tex1ShaderParam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTex1ShaderParamName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tex1ShaderParamName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTex2Index(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tex2Index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTex2ShaderParam(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tex2ShaderParam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTex2ShaderParamName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tex2ShaderParamName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexTransitionShaderParam(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("texTransitionShaderParam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexTransitionShaderParamName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("texTransitionShaderParamName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextures(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("textures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransitionPercent(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("transitionPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        void RefreshShaderParams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShaderParams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetToDefaultState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToDefaultState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
