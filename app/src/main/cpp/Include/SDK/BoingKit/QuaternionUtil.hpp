#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "QuaternionUtil_SterpMode.hpp"

namespace BoingKit {
    struct QuaternionUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "QuaternionUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Quaternion AxisAngle(::BNM::Structures::Unity::Vector3 axis, float angle) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("AxisAngle"), {"axis", "angle"});
            return _m.Call(axis, angle);
        }
        static void DecomposeSwingTwist(::BNM::Structures::Unity::Quaternion q, ::BNM::Structures::Unity::Vector3 twistAxis, ::BNM::Structures::Unity::Quaternion& swing, ::BNM::Structures::Unity::Quaternion& twist) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecomposeSwingTwist"), {"q", "twistAxis", "swing", "twist"});
            _m.Call(q, twistAxis, &swing, &twist);
        }
        static ::BNM::Structures::Unity::Quaternion FromAngularVector(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("FromAngularVector"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Quaternion FromVector4(::BNM::Structures::Unity::Vector4 v, bool normalize) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("FromVector4"), {"v", "normalize"});
            return _m.Call(v, normalize);
        }
        static float GetAngle(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAngle"), {"q"});
            return _m.Call(q);
        }
        static ::BNM::Structures::Unity::Vector3 GetAxis(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetAxis"), {"q"});
            return _m.Call(q);
        }
        static ::BNM::Structures::Unity::Quaternion Integrate(::BNM::Structures::Unity::Quaternion q, ::BNM::Structures::Unity::Quaternion v, float dt) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Integrate"), {"q", "v", "dt"});
            return _m.Call(q, v, dt);
        }
        static ::BNM::Structures::Unity::Quaternion Integrate(::BNM::Structures::Unity::Quaternion q, ::BNM::Structures::Unity::Vector3 omega, float dt) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Integrate"), {"q", "omega", "dt"});
            return _m.Call(q, omega, dt);
        }
        static float Magnitude(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Magnitude"), {"q"});
            return _m.Call(q);
        }
        static float MagnitudeSqr(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("MagnitudeSqr"), {"q"});
            return _m.Call(q);
        }
        static ::BNM::Structures::Unity::Quaternion Normalize(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Normalize"), {"q"});
            return _m.Call(q);
        }
        static ::BNM::Structures::Unity::Quaternion Pow(::BNM::Structures::Unity::Quaternion q, float exp) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Pow"), {"q", "exp"});
            return _m.Call(q, exp);
        }
        static ::BNM::Structures::Unity::Quaternion Sterp(::BNM::Structures::Unity::Quaternion a, ::BNM::Structures::Unity::Quaternion b, ::BNM::Structures::Unity::Vector3 twistAxis, float t, ::BoingKit::QuaternionUtil_SterpMode mode) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Sterp"), {"a", "b", "twistAxis", "t", "mode"});
            return _m.Call(a, b, twistAxis, t, mode);
        }
        static ::BNM::Structures::Unity::Quaternion Sterp(::BNM::Structures::Unity::Quaternion a, ::BNM::Structures::Unity::Quaternion b, ::BNM::Structures::Unity::Vector3 twistAxis, float tSwing, float tTwist, ::BoingKit::QuaternionUtil_SterpMode mode) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Sterp"), {"a", "b", "twistAxis", "tSwing", "tTwist", "mode"});
            return _m.Call(a, b, twistAxis, tSwing, tTwist, mode);
        }
        static ::BNM::Structures::Unity::Quaternion Sterp(::BNM::Structures::Unity::Quaternion a, ::BNM::Structures::Unity::Quaternion b, ::BNM::Structures::Unity::Vector3 twistAxis, float t, ::BNM::Structures::Unity::Quaternion& swing, ::BNM::Structures::Unity::Quaternion& twist, ::BoingKit::QuaternionUtil_SterpMode mode) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Sterp"), {"a", "b", "twistAxis", "t", "swing", "twist", "mode"});
            return _m.Call(a, b, twistAxis, t, &swing, &twist, mode);
        }
        static ::BNM::Structures::Unity::Quaternion Sterp(::BNM::Structures::Unity::Quaternion a, ::BNM::Structures::Unity::Quaternion b, ::BNM::Structures::Unity::Vector3 twistAxis, float tSwing, float tTwist, ::BNM::Structures::Unity::Quaternion& swing, ::BNM::Structures::Unity::Quaternion& twist, ::BoingKit::QuaternionUtil_SterpMode mode) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Sterp"), {"a", "b", "twistAxis", "tSwing", "tTwist", "swing", "twist", "mode"});
            return _m.Call(a, b, twistAxis, tSwing, tTwist, &swing, &twist, mode);
        }
        static ::BNM::Structures::Unity::Vector3 ToAngularVector(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ToAngularVector"), {"q"});
            return _m.Call(q);
        }
        static ::BNM::Structures::Unity::Vector4 ToVector4(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("ToVector4"), {"q"});
            return _m.Call(q);
        }
    };
}
