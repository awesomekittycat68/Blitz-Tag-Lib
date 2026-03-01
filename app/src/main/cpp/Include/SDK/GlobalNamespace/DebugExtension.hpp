#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DebugExtension : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DebugExtension");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void DebugArrow(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugArrow"), {"position", "direction", "duration", "depthTest"});
            _m.Call(position, direction, duration, depthTest);
        }
        static void DebugArrow(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, ::BNM::Structures::Unity::Color color, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugArrow"), {"position", "direction", "color", "duration", "depthTest"});
            _m.Call(position, direction, color, duration, depthTest);
        }
        template <typename TP0 = void*>
        static void DebugBounds(TP0 bounds, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugBounds"), {"bounds", "duration", "depthTest"});
            _m.Call(bounds, duration, depthTest);
        }
        template <typename TP0 = void*>
        static void DebugBounds(TP0 bounds, ::BNM::Structures::Unity::Color color, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugBounds"), {"bounds", "color", "duration", "depthTest"});
            _m.Call(bounds, color, duration, depthTest);
        }
        static void DebugCapsule(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCapsule"), {"start", "end", "radius", "duration", "depthTest"});
            _m.Call(start, end, radius, duration, depthTest);
        }
        static void DebugCapsule(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, ::BNM::Structures::Unity::Color color, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCapsule"), {"start", "end", "color", "radius", "duration", "depthTest"});
            _m.Call(start, end, color, radius, duration, depthTest);
        }
        static void DebugCircle(::BNM::Structures::Unity::Vector3 position, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCircle"), {"position", "radius", "duration", "depthTest"});
            _m.Call(position, radius, duration, depthTest);
        }
        static void DebugCircle(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCircle"), {"position", "color", "radius", "duration", "depthTest"});
            _m.Call(position, color, radius, duration, depthTest);
        }
        static void DebugCircle(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 up, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCircle"), {"position", "up", "radius", "duration", "depthTest"});
            _m.Call(position, up, radius, duration, depthTest);
        }
        static void DebugCircle(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 up, ::BNM::Structures::Unity::Color color, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCircle"), {"position", "up", "color", "radius", "duration", "depthTest"});
            _m.Call(position, up, color, radius, duration, depthTest);
        }
        static void DebugCone(::BNM::Structures::Unity::Vector3 position, float angle, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCone"), {"position", "angle", "duration", "depthTest"});
            _m.Call(position, angle, duration, depthTest);
        }
        static void DebugCone(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, float angle, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCone"), {"position", "direction", "angle", "duration", "depthTest"});
            _m.Call(position, direction, angle, duration, depthTest);
        }
        static void DebugCone(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float angle, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCone"), {"position", "color", "angle", "duration", "depthTest"});
            _m.Call(position, color, angle, duration, depthTest);
        }
        static void DebugCone(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, ::BNM::Structures::Unity::Color color, float angle, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCone"), {"position", "direction", "color", "angle", "duration", "depthTest"});
            _m.Call(position, direction, color, angle, duration, depthTest);
        }
        static void DebugCylinder(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCylinder"), {"start", "end", "radius", "duration", "depthTest"});
            _m.Call(start, end, radius, duration, depthTest);
        }
        static void DebugCylinder(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, ::BNM::Structures::Unity::Color color, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugCylinder"), {"start", "end", "color", "radius", "duration", "depthTest"});
            _m.Call(start, end, color, radius, duration, depthTest);
        }
        static void DebugLocalCube(::Transform* transform, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Vector3 center, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugLocalCube"), {"transform", "size", "center", "duration", "depthTest"});
            _m.Call(transform, size, center, duration, depthTest);
        }
        static void DebugLocalCube(::BNM::Structures::Unity::Matrix4x4 space, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Vector3 center, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugLocalCube"), {"space", "size", "center", "duration", "depthTest"});
            _m.Call(space, size, center, duration, depthTest);
        }
        static void DebugLocalCube(::Transform* transform, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Color color, ::BNM::Structures::Unity::Vector3 center, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugLocalCube"), {"transform", "size", "color", "center", "duration", "depthTest"});
            _m.Call(transform, size, color, center, duration, depthTest);
        }
        static void DebugLocalCube(::BNM::Structures::Unity::Matrix4x4 space, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Color color, ::BNM::Structures::Unity::Vector3 center, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugLocalCube"), {"space", "size", "color", "center", "duration", "depthTest"});
            _m.Call(space, size, color, center, duration, depthTest);
        }
        static void DebugPoint(::BNM::Structures::Unity::Vector3 position, float scale, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugPoint"), {"position", "scale", "duration", "depthTest"});
            _m.Call(position, scale, duration, depthTest);
        }
        static void DebugPoint(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float scale, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugPoint"), {"position", "color", "scale", "duration", "depthTest"});
            _m.Call(position, color, scale, duration, depthTest);
        }
        static void DebugWireSphere(::BNM::Structures::Unity::Vector3 position, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugWireSphere"), {"position", "radius", "duration", "depthTest"});
            _m.Call(position, radius, duration, depthTest);
        }
        static void DebugWireSphere(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float radius, float duration, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugWireSphere"), {"position", "color", "radius", "duration", "depthTest"});
            _m.Call(position, color, radius, duration, depthTest);
        }
        static void DrawArrow(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArrow"), {"position", "direction"});
            _m.Call(position, direction);
        }
        static void DrawArrow(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArrow"), {"position", "direction", "color"});
            _m.Call(position, direction, color);
        }
        template <typename TP0 = void*>
        static void DrawBounds(TP0 bounds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawBounds"), {"bounds"});
            _m.Call(bounds);
        }
        template <typename TP0 = void*>
        static void DrawBounds(TP0 bounds, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawBounds"), {"bounds", "color"});
            _m.Call(bounds, color);
        }
        static void DrawCapsule(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule"), {"start", "end", "radius"});
            _m.Call(start, end, radius);
        }
        static void DrawCapsule(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, ::BNM::Structures::Unity::Color color, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule"), {"start", "end", "color", "radius"});
            _m.Call(start, end, color, radius);
        }
        static void DrawCircle(::BNM::Structures::Unity::Vector3 position, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle"), {"position", "radius"});
            _m.Call(position, radius);
        }
        static void DrawCircle(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle"), {"position", "color", "radius"});
            _m.Call(position, color, radius);
        }
        static void DrawCircle(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 up, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle"), {"position", "up", "radius"});
            _m.Call(position, up, radius);
        }
        static void DrawCircle(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 up, ::BNM::Structures::Unity::Color color, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle"), {"position", "up", "color", "radius"});
            _m.Call(position, up, color, radius);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 position, float angle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"position", "angle"});
            _m.Call(position, angle);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, float angle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"position", "direction", "angle"});
            _m.Call(position, direction, angle);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float angle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"position", "color", "angle"});
            _m.Call(position, color, angle);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 direction, ::BNM::Structures::Unity::Color color, float angle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"position", "direction", "color", "angle"});
            _m.Call(position, direction, color, angle);
        }
        static void DrawCylinder(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCylinder"), {"start", "end", "radius"});
            _m.Call(start, end, radius);
        }
        static void DrawCylinder(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, ::BNM::Structures::Unity::Color color, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCylinder"), {"start", "end", "color", "radius"});
            _m.Call(start, end, color, radius);
        }
        static void DrawLocalCube(::Transform* transform, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Vector3 center) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocalCube"), {"transform", "size", "center"});
            _m.Call(transform, size, center);
        }
        static void DrawLocalCube(::BNM::Structures::Unity::Matrix4x4 space, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Vector3 center) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocalCube"), {"space", "size", "center"});
            _m.Call(space, size, center);
        }
        static void DrawLocalCube(::Transform* transform, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Color color, ::BNM::Structures::Unity::Vector3 center) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocalCube"), {"transform", "size", "color", "center"});
            _m.Call(transform, size, color, center);
        }
        static void DrawLocalCube(::BNM::Structures::Unity::Matrix4x4 space, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Color color, ::BNM::Structures::Unity::Vector3 center) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocalCube"), {"space", "size", "color", "center"});
            _m.Call(space, size, color, center);
        }
        static void DrawPoint(::BNM::Structures::Unity::Vector3 position, float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawPoint"), {"position", "scale"});
            _m.Call(position, scale);
        }
        static void DrawPoint(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawPoint"), {"position", "color", "scale"});
            _m.Call(position, color, scale);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* MethodsOfObject(TP0 obj, bool includeInfo) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("MethodsOfObject"), {"obj", "includeInfo"});
            return _m.Call(obj, includeInfo);
        }
        static ::BNM::Structures::Mono::String* MethodsOfType(::BNM::MonoType* type, bool includeInfo) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("MethodsOfType"), {"type", "includeInfo"});
            return _m.Call(type, includeInfo);
        }
    };
}
