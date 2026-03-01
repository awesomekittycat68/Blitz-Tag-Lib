#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VectorMath : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VectorMath");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static void* Abs(TP0 v) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Abs"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 Abs(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Abs"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 Add(::BNM::Structures::Unity::Vector3 v, float amount) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Add"), {"v", "amount"});
            return _m.Call(v, amount);
        }
        static bool Approx(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx"), {"a", "b", "epsilon"});
            return _m.Call(a, b, epsilon);
        }
        static bool Approx(::BNM::Structures::Unity::Vector4 a, ::BNM::Structures::Unity::Vector4 b, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx"), {"a", "b", "epsilon"});
            return _m.Call(a, b, epsilon);
        }
        static bool Approx0(::BNM::Structures::Unity::Vector3 v, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx0"), {"v", "epsilon"});
            return _m.Call(v, epsilon);
        }
        static bool Approx1(::BNM::Structures::Unity::Vector3 v, float epsilon) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Approx1"), {"v", "epsilon"});
            return _m.Call(v, epsilon);
        }
        template <typename TP0 = void*>
        static void* Clamped(TP0 v, int min, int max) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Clamped"), {"v", "min", "max"});
            return _m.Call(v, min, max);
        }
        static ::BNM::Structures::Unity::Vector3 Clamped(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 min, ::BNM::Structures::Unity::Vector3 max) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Clamped"), {"v", "min", "max"});
            return _m.Call(v, min, max);
        }
        static ::BNM::Structures::Unity::Vector3 Div(::BNM::Structures::Unity::Vector3 v, float amount) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Div"), {"v", "amount"});
            return _m.Call(v, amount);
        }
        static bool IsFinite(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFinite"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 Max(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Max"), {"v"});
            return _m.Call(v);
        }
        template <typename TP0 = void*>
        static void* Max(TP0 v) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Max"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 Max(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 other) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Max"), {"v", "other"});
            return _m.Call(v, other);
        }
        static ::BNM::Structures::Unity::Vector3 Max(::BNM::Structures::Unity::Vector3 v, float max) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Max"), {"v", "max"});
            return _m.Call(v, max);
        }
        static ::BNM::Structures::Unity::Vector3 Min(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 other) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Min"), {"v", "other"});
            return _m.Call(v, other);
        }
        static ::BNM::Structures::Unity::Vector3 Mul(::BNM::Structures::Unity::Vector3 v, float amount) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Mul"), {"v", "amount"});
            return _m.Call(v, amount);
        }
        static void SetXYZ(::BNM::Structures::Unity::Vector3& v, float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetXYZ"), {"v", "f"});
            _m.Call(&v, f);
        }
        static ::BNM::Structures::Unity::Vector3 Sub(::BNM::Structures::Unity::Vector3 v, float amount) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Sub"), {"v", "amount"});
            return _m.Call(v, amount);
        }
    };
}
