#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BezierUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BezierUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 BezierSolve(float t, ::BNM::Structures::Unity::Vector3 startPos, ::BNM::Structures::Unity::Vector3 ctrl1, ::BNM::Structures::Unity::Vector3 ctrl2, ::BNM::Structures::Unity::Vector3 endPos) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("BezierSolve"), {"t", "startPos", "ctrl1", "ctrl2", "endPos"});
            return _m.Call(t, startPos, ctrl1, ctrl2, endPos);
        }
    };
}
