#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SpatialUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpatialUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 GetKMaxVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("kMaxVector"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetKMinVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("kMinVector"));
            return _field.Get();
        }
        static bool BoxIntersectsBox(void*& a, void*& b) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BoxIntersectsBox"), {"a", "b"});
            return _m.Call(&a, &b);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static int CompareByZOrder(TP0 a, TP1 b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareByZOrder"), {"a", "b"});
            return _m.Call(a, b);
        }
        static void ComputeBoundingSphere2Pass(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* points, ::BNM::Structures::Unity::Vector3& center, float& radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ComputeBoundingSphere2Pass"), {"points", "center", "radius"});
            _m.Call(points, &center, &radius);
        }
        static void ComputeBoundingSphereRitter(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* points, ::BNM::Structures::Unity::Vector3& center, float& radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ComputeBoundingSphereRitter"), {"points", "center", "radius"});
            _m.Call(points, &center, &radius);
        }
        static uint32_t Decode64(uint64_t w) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Decode64"), {"w"});
            return _m.Call(w);
        }
        static float DistSq(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DistSq"), {"a", "b"});
            return _m.Call(a, b);
        }
        static uint64_t Encode64(uint64_t w) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Encode64"), {"w"});
            return _m.Call(w);
        }
        static void* FlatIndexToXYZ(int idx, int xMax, int yMax) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FlatIndexToXYZ"), {"idx", "xMax", "yMax"});
            return _m.Call(idx, xMax, yMax);
        }
        static void FlatIndexToXYZ(int idx, int xMax, int yMax, int& x, int& y, int& z) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FlatIndexToXYZ"), {"idx", "xMax", "yMax", "x", "y", "z"});
            _m.Call(idx, xMax, yMax, &x, &y, &z);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCorners(TP0 b) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("GetCorners"), {"b"});
            return _m.Call(b);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCorners(::BNM::Structures::Unity::Vector3 min, ::BNM::Structures::Unity::Vector3 max) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("GetCorners"), {"min", "max"});
            return _m.Call(min, max);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCorners(TP0 b, ::BNM::Structures::Unity::Matrix4x4 transform) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("GetCorners"), {"b", "transform"});
            return _m.Call(b, transform);
        }
        static void* GetRadialBounds(void*& bounds, ::BNM::Structures::Unity::Matrix4x4& xform) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetRadialBounds"), {"bounds", "xform"});
            return _m.Call(&bounds, &xform);
        }
        template <typename TP0 = void*>
        static void* TransformedBy(TP0 b, ::BNM::Structures::Unity::Matrix4x4 transform) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TransformedBy"), {"b", "transform"});
            return _m.Call(b, transform);
        }
        template <typename TP0 = void*>
        static bool TryGetBounds(TP0 renderers, void*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBounds"), {"renderers", "result"});
            return _m.Call(renderers, &result);
        }
        template <typename TP0 = void*>
        static bool TryGetBounds_1(TP0 colliders, void*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBounds"), {"colliders", "result"});
            return _m.Call(colliders, &result);
        }
        static bool TryGetBounds(::Transform* x, void*& result, bool includeRenderers, bool includeColliders, bool fallbackToXforms) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBounds"), {"x", "result", "includeRenderers", "includeColliders", "fallbackToXforms"});
            return _m.Call(x, &result, includeRenderers, includeColliders, fallbackToXforms);
        }
        template <typename TP0 = void*>
        static int XYZToFlatIndex(TP0 xyz, int xMax, int yMax) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("XYZToFlatIndex"), {"xyz", "xMax", "yMax"});
            return _m.Call(xyz, xMax, yMax);
        }
        static int XYZToFlatIndex(int x, int y, int z, int xMax, int yMax) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("XYZToFlatIndex"), {"x", "y", "z", "xMax", "yMax"});
            return _m.Call(x, y, z, xMax, yMax);
        }
        static void ZOrderDecode(uint32_t code, uint32_t& x, uint32_t& y) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZOrderDecode"), {"code", "x", "y"});
            _m.Call(code, &x, &y);
        }
        static void ZOrderDecode(uint32_t code, uint32_t& x, uint32_t& y, uint32_t& z) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZOrderDecode"), {"code", "x", "y", "z"});
            _m.Call(code, &x, &y, &z);
        }
        static void ZOrderDecode64(uint64_t code, uint32_t& x, uint32_t& y, uint32_t& z) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZOrderDecode64"), {"code", "x", "y", "z"});
            _m.Call(code, &x, &y, &z);
        }
        static uint32_t ZOrderEncode(uint32_t x, uint32_t y) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ZOrderEncode"), {"x", "y"});
            return _m.Call(x, y);
        }
        static uint32_t ZOrderEncode(uint32_t x, uint32_t y, uint32_t z) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ZOrderEncode"), {"x", "y", "z"});
            return _m.Call(x, y, z);
        }
        static void ZOrderEncode64(uint32_t x, uint32_t y, uint32_t z, uint64_t& code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZOrderEncode64"), {"x", "y", "z", "code"});
            _m.Call(x, y, z, &code);
        }
    };
}
