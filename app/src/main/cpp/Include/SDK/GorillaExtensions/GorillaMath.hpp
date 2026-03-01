#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct GorillaMath : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GorillaMath");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float Dot2(::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Dot2"), {"v"});
            return _m.Call(&v);
        }
        static float FastInvSqrt(float z) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FastInvSqrt"), {"z"});
            return _m.Call(z);
        }
        static ::BNM::Structures::Unity::Vector3 GetAngularVelocity(::BNM::Structures::Unity::Quaternion oldRotation, ::BNM::Structures::Unity::Quaternion newRotation) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetAngularVelocity"), {"oldRotation", "newRotation"});
            return _m.Call(oldRotation, newRotation);
        }
        static void LineSegClosestPoints(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 u, ::BNM::Structures::Unity::Vector3 b, ::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3& lineAPoint, ::BNM::Structures::Unity::Vector3& lineBPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LineSegClosestPoints"), {"a", "u", "b", "v", "lineAPoint", "lineBPoint"});
            _m.Call(a, u, b, v, &lineAPoint, &lineBPoint);
        }
        static ::BNM::Structures::Unity::Vector4 RaycastToCappedCone(::BNM::Structures::Unity::Vector3& rayOrigin, ::BNM::Structures::Unity::Vector3& rayDirection, ::BNM::Structures::Unity::Vector3& coneTip, ::BNM::Structures::Unity::Vector3& coneBase, float& coneTipRadius, float& coneBaseRadius) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("RaycastToCappedCone"), {"rayOrigin", "rayDirection", "coneTip", "coneBase", "coneTipRadius", "coneBaseRadius"});
            return _m.Call(&rayOrigin, &rayDirection, &coneTip, &coneBase, &coneTipRadius, &coneBaseRadius);
        }
    };
}
