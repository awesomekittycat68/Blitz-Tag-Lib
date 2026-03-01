#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GTMathUtil {
    struct CriticalSpringDamper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GTMathUtil", "CriticalSpringDamper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("curVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("halfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetX() {
            static BNM::Field<float> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetXGoal() {
            static BNM::Field<float> _field = GetClass().GetField(O("xGoal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("curVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("halfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXGoal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("xGoal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static float fast_negexp(float x) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("fast_negexp"), {"x"});
            return _m.Call(x);
        }
        static float halflife_to_damping(float halflife, float eps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("halflife_to_damping"), {"halflife", "eps"});
            return _m.Call(halflife, eps);
        }
        float Update(float dt) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Update"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dt);
        }
    };
}
