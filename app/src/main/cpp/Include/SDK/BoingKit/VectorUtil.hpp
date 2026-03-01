#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct VectorUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "VectorUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 GetMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Max"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetMin() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Min"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 ClampBend(::BNM::Structures::Unity::Vector3 vector, ::BNM::Structures::Unity::Vector3 reference, float maxBendAngle) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClampBend"), {"vector", "reference", "maxBendAngle"});
            return _m.Call(vector, reference, maxBendAngle);
        }
        static ::BNM::Structures::Unity::Vector3 ClampLength(::BNM::Structures::Unity::Vector3 v, float minLen, float maxLen) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClampLength"), {"v", "minLen", "maxLen"});
            return _m.Call(v, minLen, maxLen);
        }
        static ::BNM::Structures::Unity::Vector3 ComponentWiseAbs(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ComponentWiseAbs"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 ComponentWiseDiv(::BNM::Structures::Unity::Vector3 num, ::BNM::Structures::Unity::Vector3 den) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ComponentWiseDiv"), {"num", "den"});
            return _m.Call(num, den);
        }
        static ::BNM::Structures::Unity::Vector3 ComponentWiseDivSafe(::BNM::Structures::Unity::Vector3 num, ::BNM::Structures::Unity::Vector3 den) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ComponentWiseDivSafe"), {"num", "den"});
            return _m.Call(num, den);
        }
        static ::BNM::Structures::Unity::Vector3 ComponentWiseMult(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ComponentWiseMult"), {"a", "b"});
            return _m.Call(a, b);
        }
        static ::BNM::Structures::Unity::Vector3 FindOrthogonal(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("FindOrthogonal"), {"v"});
            return _m.Call(v);
        }
        static void FormOrthogonalBasis(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3& a, ::BNM::Structures::Unity::Vector3& b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FormOrthogonalBasis"), {"v", "a", "b"});
            _m.Call(v, &a, &b);
        }
        static ::BNM::Structures::Unity::Vector3 GetClosestPointOnSegment(::BNM::Structures::Unity::Vector3 p, ::BNM::Structures::Unity::Vector3 segA, ::BNM::Structures::Unity::Vector3 segB) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetClosestPointOnSegment"), {"p", "segA", "segB"});
            return _m.Call(p, segA, segB);
        }
        static float MaxComponent(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("MaxComponent"), {"v"});
            return _m.Call(v);
        }
        static float MinComponent(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("MinComponent"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 NormalizeSafe(::BNM::Structures::Unity::Vector4 v, ::BNM::Structures::Unity::Vector4 fallback) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("NormalizeSafe"), {"v", "fallback"});
            return _m.Call(v, fallback);
        }
        static ::BNM::Structures::Unity::Vector3 Rotate2D(::BNM::Structures::Unity::Vector3 v, float angle) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Rotate2D"), {"v", "angle"});
            return _m.Call(v, angle);
        }
        static ::BNM::Structures::Unity::Vector3 Slerp(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Slerp"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
        static ::BNM::Structures::Unity::Vector3 TriLerp(::BNM::Structures::Unity::Vector3& min, ::BNM::Structures::Unity::Vector3& max, bool lerpX, bool lerpY, bool lerpZ, float tx, float ty, float tz) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("TriLerp"), {"min", "max", "lerpX", "lerpY", "lerpZ", "tx", "ty", "tz"});
            return _m.Call(&min, &max, lerpX, lerpY, lerpZ, tx, ty, tz);
        }
        static ::BNM::Structures::Unity::Vector4 TriLerp(::BNM::Structures::Unity::Vector4& min, ::BNM::Structures::Unity::Vector4& max, bool lerpX, bool lerpY, bool lerpZ, float tx, float ty, float tz) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("TriLerp"), {"min", "max", "lerpX", "lerpY", "lerpZ", "tx", "ty", "tz"});
            return _m.Call(&min, &max, lerpX, lerpY, lerpZ, tx, ty, tz);
        }
        static ::BNM::Structures::Unity::Vector3 TriLerp(::BNM::Structures::Unity::Vector3& v000, ::BNM::Structures::Unity::Vector3& v001, ::BNM::Structures::Unity::Vector3& v010, ::BNM::Structures::Unity::Vector3& v011, ::BNM::Structures::Unity::Vector3& v100, ::BNM::Structures::Unity::Vector3& v101, ::BNM::Structures::Unity::Vector3& v110, ::BNM::Structures::Unity::Vector3& v111, float tx, float ty, float tz) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("TriLerp"), {"v000", "v001", "v010", "v011", "v100", "v101", "v110", "v111", "tx", "ty", "tz"});
            return _m.Call(&v000, &v001, &v010, &v011, &v100, &v101, &v110, &v111, tx, ty, tz);
        }
        static ::BNM::Structures::Unity::Vector3 TriLerp(::BNM::Structures::Unity::Vector3& v000, ::BNM::Structures::Unity::Vector3& v001, ::BNM::Structures::Unity::Vector3& v010, ::BNM::Structures::Unity::Vector3& v011, ::BNM::Structures::Unity::Vector3& v100, ::BNM::Structures::Unity::Vector3& v101, ::BNM::Structures::Unity::Vector3& v110, ::BNM::Structures::Unity::Vector3& v111, bool lerpX, bool lerpY, bool lerpZ, float tx, float ty, float tz) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("TriLerp"), {"v000", "v001", "v010", "v011", "v100", "v101", "v110", "v111", "lerpX", "lerpY", "lerpZ", "tx", "ty", "tz"});
            return _m.Call(&v000, &v001, &v010, &v011, &v100, &v101, &v110, &v111, lerpX, lerpY, lerpZ, tx, ty, tz);
        }
        static ::BNM::Structures::Unity::Vector4 TriLerp(::BNM::Structures::Unity::Vector4& v000, ::BNM::Structures::Unity::Vector4& v001, ::BNM::Structures::Unity::Vector4& v010, ::BNM::Structures::Unity::Vector4& v011, ::BNM::Structures::Unity::Vector4& v100, ::BNM::Structures::Unity::Vector4& v101, ::BNM::Structures::Unity::Vector4& v110, ::BNM::Structures::Unity::Vector4& v111, bool lerpX, bool lerpY, bool lerpZ, float tx, float ty, float tz) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("TriLerp"), {"v000", "v001", "v010", "v011", "v100", "v101", "v110", "v111", "lerpX", "lerpY", "lerpZ", "tx", "ty", "tz"});
            return _m.Call(&v000, &v001, &v010, &v011, &v100, &v101, &v110, &v111, lerpX, lerpY, lerpZ, tx, ty, tz);
        }
    };
}
