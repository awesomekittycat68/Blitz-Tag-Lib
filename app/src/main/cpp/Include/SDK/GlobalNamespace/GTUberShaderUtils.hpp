#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTShaderStencilCompare.hpp"
#include "GTShaderStencilOp.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct GTUberShaderUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTUberShaderUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ShaderHashId GetColorMask() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_ColorMask_"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetManualZWrite() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_ManualZWrite"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetStencilComparison() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_StencilComparison"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetStencilPassFront() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_StencilPassFront"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetStencilReference() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_StencilReference"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetZWrite() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_ZWrite"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetKRenderQueueInts() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("kRenderQueueInts"));
            return _field.Get();
        }
        static ::Shader* GetKUberShader() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("kUberShader"));
            return _field.Get();
        }
        static void SetKUberShader(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("kUberShader"));
            _field.Set(value);
        }
        static int GetNearestRenderQueue(::Material* m, void*& queue) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNearestRenderQueue"), {"m", "queue"});
            return _m.Call(m, &queue);
        }
        static void InitOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitOnLoad"));
            _m.Call();
        }
        static void SetRevealsXRay(::Material* m, bool reveals, bool changeQueue, bool saveToDisk) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRevealsXRay"), {"m", "reveals", "changeQueue", "saveToDisk"});
            _m.Call(m, reveals, changeQueue, saveToDisk);
        }
        static void SetStencilComparison(::Material* m, ::GlobalNamespace::GTShaderStencilCompare cmp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStencilComparison"), {"m", "cmp"});
            _m.Call(m, cmp);
        }
        static void SetStencilPassFrontOp(::Material* m, ::GlobalNamespace::GTShaderStencilOp op) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStencilPassFrontOp"), {"m", "op"});
            _m.Call(m, op);
        }
        static void SetStencilReferenceValue(::Material* m, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStencilReferenceValue"), {"m", "value"});
            _m.Call(m, value);
        }
        static void SetVisibleToXRay(::Material* m, bool visible, bool saveToDisk) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVisibleToXRay"), {"m", "visible", "saveToDisk"});
            _m.Call(m, visible, saveToDisk);
        }
    };
}
