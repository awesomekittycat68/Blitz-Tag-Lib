#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct MathUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "MathUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float GetDeg2Rad() {
            static BNM::Field<float> _field = GetClass().GetField(O("Deg2Rad"));
            return _field.Get();
        }
        static float GetEpsilon() {
            static BNM::Field<float> _field = GetClass().GetField(O("Epsilon"));
            return _field.Get();
        }
        static float GetHalfPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("HalfPi"));
            return _field.Get();
        }
        static float GetPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("Pi"));
            return _field.Get();
        }
        static float GetQuaterPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("QuaterPi"));
            return _field.Get();
        }
        static float GetRad2Deg() {
            static BNM::Field<float> _field = GetClass().GetField(O("Rad2Deg"));
            return _field.Get();
        }
        static float GetSixthPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("SixthPi"));
            return _field.Get();
        }
        static float GetSqrt2() {
            static BNM::Field<float> _field = GetClass().GetField(O("Sqrt2"));
            return _field.Get();
        }
        static float GetSqrt2Inv() {
            static BNM::Field<float> _field = GetClass().GetField(O("Sqrt2Inv"));
            return _field.Get();
        }
        static float GetSqrt3() {
            static BNM::Field<float> _field = GetClass().GetField(O("Sqrt3"));
            return _field.Get();
        }
        static float GetSqrt3Inv() {
            static BNM::Field<float> _field = GetClass().GetField(O("Sqrt3Inv"));
            return _field.Get();
        }
        static float GetTwoPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("TwoPi"));
            return _field.Get();
        }
        static float AcosSafe(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("AcosSafe"), {"x"});
            return _m.Call(x);
        }
        static float AsinSafe(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("AsinSafe"), {"x"});
            return _m.Call(x);
        }
        static float InvSafe(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("InvSafe"), {"x"});
            return _m.Call(x);
        }
        static float Modulo(float a, float b) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Modulo"), {"a", "b"});
            return _m.Call(a, b);
        }
        static int Modulo(int a, int b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Modulo"), {"a", "b"});
            return _m.Call(a, b);
        }
        static float PointLineDist(::BNM::Structures::Unity::Vector2 point, ::BNM::Structures::Unity::Vector2 linePos, ::BNM::Structures::Unity::Vector2 lineDir) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PointLineDist"), {"point", "linePos", "lineDir"});
            return _m.Call(point, linePos, lineDir);
        }
        static float PointSegmentDist(::BNM::Structures::Unity::Vector2 point, ::BNM::Structures::Unity::Vector2 segmentPosA, ::BNM::Structures::Unity::Vector2 segmentPosB) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PointSegmentDist"), {"point", "segmentPosA", "segmentPosB"});
            return _m.Call(point, segmentPosA, segmentPosB);
        }
        static float Remainder(float a, float b) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Remainder"), {"a", "b"});
            return _m.Call(a, b);
        }
        static int Remainder(int a, int b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Remainder"), {"a", "b"});
            return _m.Call(a, b);
        }
        static float Seek(float current, float target, float maxDelta) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Seek"), {"current", "target", "maxDelta"});
            return _m.Call(current, target, maxDelta);
        }
        static ::BNM::Structures::Unity::Vector2 Seek(::BNM::Structures::Unity::Vector2 current, ::BNM::Structures::Unity::Vector2 target, float maxDelta) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("Seek"), {"current", "target", "maxDelta"});
            return _m.Call(current, target, maxDelta);
        }
    };
}
