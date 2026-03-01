#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GizmosUtil_Style.hpp"

namespace CjLib {
    struct GizmosUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "GizmosUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void DrawArrow(::BNM::Structures::Unity::Vector3 from, ::BNM::Structures::Unity::Vector3 to, float size, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArrow"), {"from", "to", "size", "color", "style"});
            _m.Call(from, to, size, color, style);
        }
        static void DrawArrow(::BNM::Structures::Unity::Vector3 from, ::BNM::Structures::Unity::Vector3 to, float coneRadius, float coneHeight, int numSegments, float stemThickness, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArrow"), {"from", "to", "coneRadius", "coneHeight", "numSegments", "stemThickness", "color", "style"});
            _m.Call(from, to, coneRadius, coneHeight, numSegments, stemThickness, color, style);
        }
        static void DrawBox(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 dimensions, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawBox"), {"center", "rotation", "dimensions", "color", "style"});
            _m.Call(center, rotation, dimensions, color, style);
        }
        static void DrawCapsule(::BNM::Structures::Unity::Vector3 point0, ::BNM::Structures::Unity::Vector3 point1, float radius, int latSegmentsPerCap, int longSegmentsPerCap, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule"), {"point0", "point1", "radius", "latSegmentsPerCap", "longSegmentsPerCap", "color", "style"});
            _m.Call(point0, point1, radius, latSegmentsPerCap, longSegmentsPerCap, color, style);
        }
        static void DrawCapsule(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float height, float radius, int latSegmentsPerCap, int longSegmentsPerCap, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule"), {"center", "rotation", "height", "radius", "latSegmentsPerCap", "longSegmentsPerCap", "color", "style"});
            _m.Call(center, rotation, height, radius, latSegmentsPerCap, longSegmentsPerCap, color, style);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 baseCenter, ::BNM::Structures::Unity::Vector3 top, float radius, int numSegments, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"baseCenter", "top", "radius", "numSegments", "color", "style"});
            _m.Call(baseCenter, top, radius, numSegments, color, style);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 baseCenter, ::BNM::Structures::Unity::Quaternion rotation, float height, float radius, int numSegments, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"baseCenter", "rotation", "height", "radius", "numSegments", "color", "style"});
            _m.Call(baseCenter, rotation, height, radius, numSegments, color, style);
        }
        static void DrawCylinder(::BNM::Structures::Unity::Vector3 point0, ::BNM::Structures::Unity::Vector3 point1, float radius, int numSegments, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCylinder"), {"point0", "point1", "radius", "numSegments", "color", "style"});
            _m.Call(point0, point1, radius, numSegments, color, style);
        }
        static void DrawCylinder(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float height, float radius, int numSegments, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCylinder"), {"center", "rotation", "height", "radius", "numSegments", "color", "style"});
            _m.Call(center, rotation, height, radius, numSegments, color, style);
        }
        static void DrawLine(::BNM::Structures::Unity::Vector3 v0, ::BNM::Structures::Unity::Vector3 v1, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLine"), {"v0", "v1", "color"});
            _m.Call(v0, v1, color);
        }
        static void DrawLines(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* aVert, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLines"), {"aVert", "color"});
            _m.Call(aVert, color);
        }
        static void DrawLineStrip(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* aVert, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLineStrip"), {"aVert", "color"});
            _m.Call(aVert, color);
        }
        static void DrawSphere(::BNM::Structures::Unity::Vector3 center, float radius, int latSegments, int longSegments, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphere"), {"center", "radius", "latSegments", "longSegments", "color", "style"});
            _m.Call(center, radius, latSegments, longSegments, color, style);
        }
        static void DrawSphere(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float radius, int latSegments, int longSegments, ::BNM::Structures::Unity::Color color, ::CjLib::GizmosUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphere"), {"center", "rotation", "radius", "latSegments", "longSegments", "color", "style"});
            _m.Call(center, rotation, radius, latSegments, longSegments, color, style);
        }
    };
}
