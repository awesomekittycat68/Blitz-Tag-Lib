#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace AA {
    struct Spring : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("AA", "Spring");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float CopySign(float a, float s) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CopySign"), {"a", "s"});
            return _m.Call(a, s);
        }
        static float critical_frequency(float halflife) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("critical_frequency"), {"halflife"});
            return _m.Call(halflife);
        }
        static float critical_halflife(float frequency) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("critical_halflife"), {"frequency"});
            return _m.Call(frequency);
        }
        static void CriticalSpringDamperExact(float& x, float& v, float x_goal, float v_goal, float halflife, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CriticalSpringDamperExact"), {"x", "v", "x_goal", "v_goal", "halflife", "dt"});
            _m.Call(&x, &v, x_goal, v_goal, halflife, dt);
        }
        static float Damper(float x, float g, float factor) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Damper"), {"x", "g", "factor"});
            return _m.Call(x, g, factor);
        }
        static float DamperDecayExact(float x, float halflife, float dt, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DamperDecayExact"), {"x", "halflife", "dt", "eps"});
            return _m.Call(x, halflife, dt, eps);
        }
        static float DamperExact(float x, float g, float halflife, float dt, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DamperExact"), {"x", "g", "halflife", "dt", "eps"});
            return _m.Call(x, g, halflife, dt, eps);
        }
        static float DamperExponential(float x, float g, float damping, float dt, float ft) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DamperExponential"), {"x", "g", "damping", "dt", "ft"});
            return _m.Call(x, g, damping, dt, ft);
        }
        static float DampingRatioToDamping(float ratio, float stiffness) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DampingRatioToDamping"), {"ratio", "stiffness"});
            return _m.Call(ratio, stiffness);
        }
        static float DampingRatioToStiffness(float ratio, float damping) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DampingRatioToStiffness"), {"ratio", "damping"});
            return _m.Call(ratio, damping);
        }
        static float DampingToHalflife(float damping, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DampingToHalflife"), {"damping", "eps"});
            return _m.Call(damping, eps);
        }
        static void DecaySringDamperExact(float& x, float& v, float halflife, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecaySringDamperExact"), {"x", "v", "halflife", "dt"});
            _m.Call(&x, &v, halflife, dt);
        }
        static float FastAtan(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FastAtan"), {"x"});
            return _m.Call(x);
        }
        static float FastNegExp(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FastNegExp"), {"x"});
            return _m.Call(x);
        }
        static float FrequencyToStiffness(float frequency) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("FrequencyToStiffness"), {"frequency"});
            return _m.Call(frequency);
        }
        static float HalflifeToDamping(float halflife, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("HalflifeToDamping"), {"halflife", "eps"});
            return _m.Call(halflife, eps);
        }
        static void SimpleSpringDamperExact(float& x, float& v, float x_goal, float halflife, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SimpleSpringDamperExact"), {"x", "v", "x_goal", "halflife", "dt"});
            _m.Call(&x, &v, x_goal, halflife, dt);
        }
        static void SpringDamperExact(float& x, float& v, float x_goal, float v_goal, float frequency, float halflife, float dt, float eps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpringDamperExact"), {"x", "v", "x_goal", "v_goal", "frequency", "halflife", "dt", "eps"});
            _m.Call(&x, &v, x_goal, v_goal, frequency, halflife, dt, eps);
        }
        static void SpringDamperExactRatio(float& x, float& v, float x_goal, float v_goal, float damping_ratio, float halflife, float dt, float eps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpringDamperExactRatio"), {"x", "v", "x_goal", "v_goal", "damping_ratio", "halflife", "dt", "eps"});
            _m.Call(&x, &v, x_goal, v_goal, damping_ratio, halflife, dt, eps);
        }
        static void SpringDamperExactStiffnessDamping(float& x, float& v, float x_goal, float v_goal, float stiffness, float damping, float dt, float eps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpringDamperExactStiffnessDamping"), {"x", "v", "x_goal", "v_goal", "stiffness", "damping", "dt", "eps"});
            _m.Call(&x, &v, x_goal, v_goal, stiffness, damping, dt, eps);
        }
        static float Square(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Square"), {"x"});
            return _m.Call(x);
        }
        static float stiffness_to_frequency(float stiffness) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("stiffness_to_frequency"), {"stiffness"});
            return _m.Call(stiffness);
        }
    };
}
