#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GizmoUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GizmoUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::Collider*, ::BNM::Structures::Unity::Color>* GetGColliderToColor() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, ::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("gColliderToColor"));
            return _field.Get();
        }
        static void DrawGizmo(::Collider* c, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawGizmo"), {"c", "color"});
            _m.Call(c, color);
        }
        static void DrawWireCubeTRS(::BNM::Structures::Unity::Vector3 t, ::BNM::Structures::Unity::Quaternion r, ::BNM::Structures::Unity::Vector3 s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawWireCubeTRS"), {"t", "r", "s"});
            _m.Call(t, r, s);
        }
    };
}
