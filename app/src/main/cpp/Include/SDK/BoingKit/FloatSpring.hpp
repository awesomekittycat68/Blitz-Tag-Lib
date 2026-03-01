#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct FloatSpring : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "FloatSpring");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        float GetValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("Value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("Velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset(float initValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue);
        }
        void Reset(float initValue, float initVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue", "initVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue, initVelocity);
        }
        float TrackDampingRatio(float targetValue, float angularFrequency, float dampingRatio, float deltaTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TrackDampingRatio"), {"targetValue", "angularFrequency", "dampingRatio", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, angularFrequency, dampingRatio, deltaTime);
        }
        float TrackExponential(float targetValue, float halfLife, float deltaTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TrackExponential"), {"targetValue", "halfLife", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, halfLife, deltaTime);
        }
        float TrackHalfLife(float targetValue, float frequencyHz, float halfLife, float deltaTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TrackHalfLife"), {"targetValue", "frequencyHz", "halfLife", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, frequencyHz, halfLife, deltaTime);
        }
    };
}
