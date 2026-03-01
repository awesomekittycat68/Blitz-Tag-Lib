#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Bezier : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bezier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 GetFirstDerivative(::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetFirstDerivative"), {"p0", "p1", "p2", "t"});
            return _m.Call(p0, p1, p2, t);
        }
        static ::BNM::Structures::Unity::Vector3 GetFirstDerivative(::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, ::BNM::Structures::Unity::Vector3 p3, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetFirstDerivative"), {"p0", "p1", "p2", "p3", "t"});
            return _m.Call(p0, p1, p2, p3, t);
        }
        static ::BNM::Structures::Unity::Vector3 GetPoint(::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPoint"), {"p0", "p1", "p2", "t"});
            return _m.Call(p0, p1, p2, t);
        }
        static ::BNM::Structures::Unity::Vector3 GetPoint(::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, ::BNM::Structures::Unity::Vector3 p3, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPoint"), {"p0", "p1", "p2", "p3", "t"});
            return _m.Call(p0, p1, p2, p3, t);
        }
    };
}
