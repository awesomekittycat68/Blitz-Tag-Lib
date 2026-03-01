#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugUtil_Style.hpp"

namespace CjLib {
    struct DebugUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "DebugUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int kNormalFlag = 1;
        static constexpr int kCapShiftScaleFlag = 2;
        static constexpr int kDepthTestFlag = 4;
        static ::BNM::Structures::Mono::Dictionary<int, ::Material*>* GetSMaterialPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::Material*>*> _field = GetClass().GetField(O("s_materialPool"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSMaterialProperties() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_materialProperties"));
            return _field.Get();
        }
        static float GetSWireframeZBias() {
            static BNM::Field<float> _field = GetClass().GetField(O("s_wireframeZBias"));
            return _field.Get();
        }
        static void SetSMaterialPool(::BNM::Structures::Mono::Dictionary<int, ::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::Material*>*> _field = GetClass().GetField(O("s_materialPool"));
            _field.Set(value);
        }
        static void SetSMaterialProperties(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_materialProperties"));
            _field.Set(value);
        }
        static void SetSWireframeZBias(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("s_wireframeZBias"));
            _field.Set(value);
        }
        static void DrawArc(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Vector3 from, ::BNM::Structures::Unity::Vector3 normal, float angle, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArc"), {"center", "from", "normal", "angle", "radius", "numSegments", "color", "depthTest"});
            _m.Call(center, from, normal, angle, radius, numSegments, color, depthTest);
        }
        static void DrawArrow(::BNM::Structures::Unity::Vector3 from, ::BNM::Structures::Unity::Vector3 to, float size, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArrow"), {"from", "to", "size", "color", "depthTest", "style"});
            _m.Call(from, to, size, color, depthTest, style);
        }
        static void DrawArrow(::BNM::Structures::Unity::Vector3 from, ::BNM::Structures::Unity::Vector3 to, float coneRadius, float coneHeight, int numSegments, float stemThickness, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawArrow"), {"from", "to", "coneRadius", "coneHeight", "numSegments", "stemThickness", "color", "depthTest", "style"});
            _m.Call(from, to, coneRadius, coneHeight, numSegments, stemThickness, color, depthTest, style);
        }
        static void DrawBox(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 dimensions, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawBox"), {"center", "rotation", "dimensions", "color", "depthTest", "style"});
            _m.Call(center, rotation, dimensions, color, depthTest, style);
        }
        static void DrawCapsule(::BNM::Structures::Unity::Vector3 point0, ::BNM::Structures::Unity::Vector3 point1, float radius, int latSegmentsPerCap, int longSegmentsPerCap, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule"), {"point0", "point1", "radius", "latSegmentsPerCap", "longSegmentsPerCap", "color", "depthTest", "style"});
            _m.Call(point0, point1, radius, latSegmentsPerCap, longSegmentsPerCap, color, depthTest, style);
        }
        static void DrawCapsule(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float height, float radius, int latSegmentsPerCap, int longSegmentsPerCap, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule"), {"center", "rotation", "height", "radius", "latSegmentsPerCap", "longSegmentsPerCap", "color", "depthTest", "style"});
            _m.Call(center, rotation, height, radius, latSegmentsPerCap, longSegmentsPerCap, color, depthTest, style);
        }
        static void DrawCapsule2D(::BNM::Structures::Unity::Vector3 center, float rotationDeg, float height, float radius, int capSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCapsule2D"), {"center", "rotationDeg", "height", "radius", "capSegments", "color", "depthTest", "style"});
            _m.Call(center, rotationDeg, height, radius, capSegments, color, depthTest, style);
        }
        static void DrawCircle(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle"), {"center", "rotation", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(center, rotation, radius, numSegments, color, depthTest, style);
        }
        static void DrawCircle(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Vector3 normal, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle"), {"center", "normal", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(center, normal, radius, numSegments, color, depthTest, style);
        }
        static void DrawCircle2D(::BNM::Structures::Unity::Vector3 center, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCircle2D"), {"center", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(center, radius, numSegments, color, depthTest, style);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 baseCenter, ::BNM::Structures::Unity::Vector3 top, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"baseCenter", "top", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(baseCenter, top, radius, numSegments, color, depthTest, style);
        }
        static void DrawCone(::BNM::Structures::Unity::Vector3 baseCenter, ::BNM::Structures::Unity::Quaternion rotation, float height, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCone"), {"baseCenter", "rotation", "height", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(baseCenter, rotation, height, radius, numSegments, color, depthTest, style);
        }
        static void DrawCylinder(::BNM::Structures::Unity::Vector3 point0, ::BNM::Structures::Unity::Vector3 point1, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCylinder"), {"point0", "point1", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(point0, point1, radius, numSegments, color, depthTest, style);
        }
        static void DrawCylinder(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float height, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCylinder"), {"center", "rotation", "height", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(center, rotation, height, radius, numSegments, color, depthTest, style);
        }
        static void DrawLine(::BNM::Structures::Unity::Vector3 v0, ::BNM::Structures::Unity::Vector3 v1, ::BNM::Structures::Unity::Color color, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLine"), {"v0", "v1", "color", "depthTest"});
            _m.Call(v0, v1, color, depthTest);
        }
        static void DrawLines(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* aVert, ::BNM::Structures::Unity::Color color, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLines"), {"aVert", "color", "depthTest"});
            _m.Call(aVert, color, depthTest);
        }
        static void DrawLineStrip(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* aVert, ::BNM::Structures::Unity::Color color, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLineStrip"), {"aVert", "color", "depthTest"});
            _m.Call(aVert, color, depthTest);
        }
        static void DrawLocator(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, float size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocator"), {"position", "rotation", "size"});
            _m.Call(position, rotation, size);
        }
        static void DrawLocator(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 right, ::BNM::Structures::Unity::Vector3 up, ::BNM::Structures::Unity::Vector3 forward, float size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocator"), {"position", "right", "up", "forward", "size"});
            _m.Call(position, right, up, forward, size);
        }
        static void DrawLocator(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Color rightColor, ::BNM::Structures::Unity::Color upColor, ::BNM::Structures::Unity::Color forwardColor, float size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocator"), {"position", "rotation", "rightColor", "upColor", "forwardColor", "size"});
            _m.Call(position, rotation, rightColor, upColor, forwardColor, size);
        }
        static void DrawLocator(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 right, ::BNM::Structures::Unity::Vector3 up, ::BNM::Structures::Unity::Vector3 forward, ::BNM::Structures::Unity::Color rightColor, ::BNM::Structures::Unity::Color upColor, ::BNM::Structures::Unity::Color forwardColor, float size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawLocator"), {"position", "right", "up", "forward", "rightColor", "upColor", "forwardColor", "size"});
            _m.Call(position, right, up, forward, rightColor, upColor, forwardColor, size);
        }
        static void DrawRect(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector2 dimensions, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawRect"), {"center", "rotation", "dimensions", "color", "depthTest", "style"});
            _m.Call(center, rotation, dimensions, color, depthTest, style);
        }
        static void DrawRect2D(::BNM::Structures::Unity::Vector3 center, float rotationDeg, ::BNM::Structures::Unity::Vector2 dimensions, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawRect2D"), {"center", "rotationDeg", "dimensions", "color", "depthTest", "style"});
            _m.Call(center, rotationDeg, dimensions, color, depthTest, style);
        }
        static void DrawSphere(::BNM::Structures::Unity::Vector3 center, float radius, int latSegments, int longSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphere"), {"center", "radius", "latSegments", "longSegments", "color", "depthTest", "style"});
            _m.Call(center, radius, latSegments, longSegments, color, depthTest, style);
        }
        static void DrawSphere(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float radius, int latSegments, int longSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphere"), {"center", "rotation", "radius", "latSegments", "longSegments", "color", "depthTest", "style"});
            _m.Call(center, rotation, radius, latSegments, longSegments, color, depthTest, style);
        }
        static void DrawSphereTripleCircles(::BNM::Structures::Unity::Vector3 center, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphereTripleCircles"), {"center", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(center, radius, numSegments, color, depthTest, style);
        }
        static void DrawSphereTripleCircles(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Quaternion rotation, float radius, int numSegments, ::BNM::Structures::Unity::Color color, bool depthTest, ::CjLib::DebugUtil_Style style) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphereTripleCircles"), {"center", "rotation", "radius", "numSegments", "color", "depthTest", "style"});
            _m.Call(center, rotation, radius, numSegments, color, depthTest, style);
        }
        static ::Material* GetMaterial(::CjLib::DebugUtil_Style style, bool depthTest, bool capShiftScale) {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("GetMaterial"), {"style", "depthTest", "capShiftScale"});
            return _m.Call(style, depthTest, capShiftScale);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetMaterialPropertyBlock() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetMaterialPropertyBlock"));
            return _m.Call();
        }
    };
}
