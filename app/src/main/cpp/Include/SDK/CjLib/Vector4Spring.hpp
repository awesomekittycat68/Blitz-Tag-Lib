#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CjLib {
    struct Vector4Spring : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "Vector4Spring");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetValue() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("Value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("Velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetValue(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("Value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("Velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset(::BNM::Structures::Unity::Vector4 initValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue);
        }
        void Reset(::BNM::Structures::Unity::Vector4 initValue, ::BNM::Structures::Unity::Vector4 initVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue", "initVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue, initVelocity);
        }
        ::BNM::Structures::Unity::Vector4 TrackDampingRatio(::BNM::Structures::Unity::Vector4 targetValue, float angularFrequency, float dampingRatio, float deltaTime) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("TrackDampingRatio"), {"targetValue", "angularFrequency", "dampingRatio", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, angularFrequency, dampingRatio, deltaTime);
        }
        ::BNM::Structures::Unity::Vector4 TrackExponential(::BNM::Structures::Unity::Vector4 targetValue, float halfLife, float deltaTime) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("TrackExponential"), {"targetValue", "halfLife", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, halfLife, deltaTime);
        }
        ::BNM::Structures::Unity::Vector4 TrackHalfLife(::BNM::Structures::Unity::Vector4 targetValue, float frequencyHz, float halfLife, float deltaTime) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("TrackHalfLife"), {"targetValue", "frequencyHz", "halfLife", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, frequencyHz, halfLife, deltaTime);
        }
    };
}
