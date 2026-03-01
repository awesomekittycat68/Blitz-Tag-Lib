#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GizmoRenderer_RenderMode.hpp"

namespace GlobalNamespace {
    struct GizmoRenderer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GizmoRenderer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GizmoRenderer_GizmoInfo*>* GetGizmos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GizmoRenderer_GizmoInfo*>*> _field = GetClass().GetField(O("gizmos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetGLabelAligns() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("gLabelAligns"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetGRenderFuncs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("gRenderFuncs"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetGSphereMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gSphereMesh"));
            return _field.Get();
        }
        bool GetIncludeInBuild() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInBuild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GizmoRenderer_RenderMode GetRenderMode() {
            static BNM::Field<::GlobalNamespace::GizmoRenderer_RenderMode> _field = GetClass().GetField(O("renderMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGizmos(::BNM::Structures::Mono::Array<::GlobalNamespace::GizmoRenderer_GizmoInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GizmoRenderer_GizmoInfo*>*> _field = GetClass().GetField(O("gizmos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGSphereMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gSphereMesh"));
            _field.Set(value);
        }
        void SetIncludeInBuild(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInBuild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderMode(::GlobalNamespace::GizmoRenderer_RenderMode value) {
            static BNM::Field<::GlobalNamespace::GizmoRenderer_RenderMode> _field = GetClass().GetField(O("renderMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Unity::Color GetRandomColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("GetRandomColor"));
            return _m.Call();
        }
        static void InitializeOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeOnLoad"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RenderBoxSolid(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderBoxSolid"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderBoxWire(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderBoxWire"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        void RenderGizmos() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderGizmos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RenderGridWire(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderGridWire"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderLabel2D(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderLabel2D"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderLabel3D(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderLabel3D"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderPlaneSolid(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderPlaneSolid"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderPlaneWire(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderPlaneWire"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderSphereSolid(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderSphereSolid"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        template <typename TP0 = void*>
        static void RenderSphereWire(TP0 draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo* gizmo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderSphereWire"), {"draw", "gizmo"});
            _m.Call(draw, gizmo);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
