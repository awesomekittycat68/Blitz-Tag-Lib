#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MathUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MathUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float kDecay = 16.0f;
        static constexpr float kFloatEpsilon = 1e-06f;
        static bool Approx(::BNM::Structures::Unity::Quaternion a, ::BNM::Structures::Unity::Quaternion b, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx"), {"a", "b", "epsilon"});
            return _m.Call(a, b, epsilon);
        }
        static bool Approx(float a, float b, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx"), {"a", "b", "epsilon"});
            return _m.Call(a, b, epsilon);
        }
        static bool Approx0(float a, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx0"), {"a", "epsilon"});
            return _m.Call(a, epsilon);
        }
        static bool Approx1(float a, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx1"), {"a", "epsilon"});
            return _m.Call(a, epsilon);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* BoxCorners(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Vector3 size) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("BoxCorners"), {"center", "size"});
            return _m.Call(center, size);
        }
        static void BoxCornersNonAlloc(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* array, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BoxCornersNonAlloc"), {"center", "size", "array", "index"});
            _m.Call(center, size, array, index);
        }
        template <typename TP0 = void*>
        static int CalculateAgeFromDateTime(TP0 Dob) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculateAgeFromDateTime"), {"Dob"});
            return _m.Call(Dob);
        }
        static ::BNM::Structures::Unity::Vector3 Clamp(::BNM::Structures::Unity::Vector3& v, ::BNM::Structures::Unity::Vector3& min, ::BNM::Structures::Unity::Vector3& max) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Clamp"), {"v", "min", "max"});
            return _m.Call(&v, &min, &max);
        }
        static float ClampApprox(float f, float min, float max, float epsilon) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ClampApprox"), {"f", "min", "max", "epsilon"});
            return _m.Call(f, min, max, epsilon);
        }
        static float ClampToReal(float f, float min, float max, float epsilon) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ClampToReal"), {"f", "min", "max", "epsilon"});
            return _m.Call(f, min, max, epsilon);
        }
        static float GetCircleValue(float degrees) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetCircleValue"), {"degrees"});
            return _m.Call(degrees);
        }
        static float GetScaledRadius(float radius, ::BNM::Structures::Unity::Vector3 scale) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetScaledRadius"), {"radius", "scale"});
            return _m.Call(radius, scale);
        }
        static float Linear(float value, float min, float max, float newMin, float newMax) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Linear"), {"value", "min", "max", "newMin", "newMax"});
            return _m.Call(value, min, max, newMin, newMax);
        }
        static float LinearUnclamped(float value, float min, float max, float newMin, float newMax) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("LinearUnclamped"), {"value", "min", "max", "newMin", "newMax"});
            return _m.Call(value, min, max, newMin, newMax);
        }
        static ::BNM::Structures::Unity::Vector3 MatchMagnitudeInDirection(::BNM::Structures::Unity::Vector3 input, ::BNM::Structures::Unity::Vector3 target, float eps) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("MatchMagnitudeInDirection"), {"input", "target", "eps"});
            return _m.Call(input, target, eps);
        }
        static bool OrientedBoxContains(::BNM::Structures::Unity::Vector3 point, ::BNM::Structures::Unity::Vector3 boxCenter, ::BNM::Structures::Unity::Vector3 boxSize, ::BNM::Structures::Unity::Quaternion boxAngles) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OrientedBoxContains"), {"point", "boxCenter", "boxSize", "boxAngles"});
            return _m.Call(point, boxCenter, boxSize, boxAngles);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* OrientedBoxCorners(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Quaternion angles) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("OrientedBoxCorners"), {"center", "size", "angles"});
            return _m.Call(center, size, angles);
        }
        static void OrientedBoxCornersNonAlloc(::BNM::Structures::Unity::Vector3 center, ::BNM::Structures::Unity::Vector3 size, ::BNM::Structures::Unity::Quaternion angles, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* array, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OrientedBoxCornersNonAlloc"), {"center", "size", "angles", "array", "index"});
            _m.Call(center, size, angles, array, index);
        }
        static int OrientedBoxSphereOverlap(::BNM::Structures::Unity::Vector3 center, float radius, ::BNM::Structures::Unity::Vector3 boxCenter, ::BNM::Structures::Unity::Vector3 boxSize, ::BNM::Structures::Unity::Quaternion boxAngles) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("OrientedBoxSphereOverlap"), {"center", "radius", "boxCenter", "boxSize", "boxAngles"});
            return _m.Call(center, radius, boxCenter, boxSize, boxAngles);
        }
        static int PositiveModulo(int x, int m) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PositiveModulo"), {"x", "m"});
            return _m.Call(x, m);
        }
        static float PositiveModulo(float x, float m) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PositiveModulo"), {"x", "m"});
            return _m.Call(x, m);
        }
        static float Quantize(float f, float step) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Quantize"), {"f", "step"});
            return _m.Call(f, step);
        }
        static ::BNM::Structures::Unity::Vector3 SafeDivide(::BNM::Structures::Unity::Vector3 v, float d) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("SafeDivide"), {"v", "d"});
            return _m.Call(v, d);
        }
        static ::BNM::Structures::Unity::Vector3 SafeDivide(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 d) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("SafeDivide"), {"v", "d"});
            return _m.Call(v, d);
        }
        static float SafeDivide(float f, float d, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("SafeDivide"), {"f", "d", "eps"});
            return _m.Call(f, d, eps);
        }
        static float Saturate(float f, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Saturate"), {"f", "eps"});
            return _m.Call(f, eps);
        }
        static ::BNM::Structures::Unity::Vector3 Sin(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Sin"), {"v"});
            return _m.Call(v);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<void*>* Subdivide(TP0 b, int x, int y, int z) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("Subdivide"), {"b", "x", "y", "z"});
            return _m.Call(b, x, y, z);
        }
        static ::BNM::Structures::Unity::Vector3 WeightedMaxVector(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, float eps) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("WeightedMaxVector"), {"a", "b", "eps"});
            return _m.Call(a, b, eps);
        }
        static float Xlerp(float a, float b, float dt, float decay) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Xlerp"), {"a", "b", "dt", "decay"});
            return _m.Call(a, b, dt, decay);
        }
        static ::BNM::Structures::Unity::Vector3 Xlerp(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, float dt, float decay) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Xlerp"), {"a", "b", "dt", "decay"});
            return _m.Call(a, b, dt, decay);
        }
    };
}
