#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CjLib {
    struct VectorUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "VectorUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 CatmullRom(::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, ::BNM::Structures::Unity::Vector3 p3, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("CatmullRom"), {"p0", "p1", "p2", "p3", "t"});
            return _m.Call(p0, p1, p2, p3, t);
        }
        static ::BNM::Structures::Unity::Vector3 FindOrthogonal(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("FindOrthogonal"), {"v"});
            return _m.Call(v);
        }
        static void FormOrthogonalBasis(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3& a, ::BNM::Structures::Unity::Vector3& b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FormOrthogonalBasis"), {"v", "a", "b"});
            _m.Call(v, &a, &b);
        }
        static ::BNM::Structures::Unity::Vector3 Integrate(::BNM::Structures::Unity::Vector3 x, ::BNM::Structures::Unity::Vector3 v, float dt) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Integrate"), {"x", "v", "dt"});
            return _m.Call(x, v, dt);
        }
        static ::BNM::Structures::Unity::Vector3 NormalizeSafe(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 fallback) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("NormalizeSafe"), {"v", "fallback"});
            return _m.Call(v, fallback);
        }
        static ::BNM::Structures::Unity::Vector3 Rotate2D(::BNM::Structures::Unity::Vector3 v, float deg) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Rotate2D"), {"v", "deg"});
            return _m.Call(v, deg);
        }
        static ::BNM::Structures::Unity::Vector3 Slerp(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Slerp"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
    };
}
