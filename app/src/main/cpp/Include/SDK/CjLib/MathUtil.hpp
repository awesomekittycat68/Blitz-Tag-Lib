#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CjLib {
    struct MathUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "MathUtil");
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
        static float GetEpsilonComp() {
            static BNM::Field<float> _field = GetClass().GetField(O("EpsilonComp"));
            return _field.Get();
        }
        static float GetFifthPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("FifthPi"));
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
        static float GetQuarterPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("QuarterPi"));
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
        static float GetThirdPi() {
            static BNM::Field<float> _field = GetClass().GetField(O("ThirdPi"));
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
        static float CatmullRom(float p0, float p1, float p2, float p3, float t) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CatmullRom"), {"p0", "p1", "p2", "p3", "t"});
            return _m.Call(p0, p1, p2, p3, t);
        }
    };
}
