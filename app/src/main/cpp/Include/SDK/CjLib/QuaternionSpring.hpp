#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CjLib {
    struct QuaternionSpring : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "QuaternionSpring");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Quaternion GetValueQuat() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_ValueQuat"));
            return _method.Call();
        }
        void SetValueQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ValueQuat"));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Quaternion GetVelocityQuat() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_VelocityQuat"));
            return _method.Call();
        }
        void SetVelocityQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VelocityQuat"));
            _method.Call(value);
        }
        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetValueVec() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("ValueVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetVelocityVec() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("VelocityVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetValueVec(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("ValueVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityVec(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("VelocityVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Unity::Quaternion get_ValueQuat() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_ValueQuat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion get_VelocityQuat() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_VelocityQuat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void Reset(::BNM::Structures::Unity::Quaternion initValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue);
        }
        void Reset(::BNM::Structures::Unity::Vector4 initValue, ::BNM::Structures::Unity::Vector4 initVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue", "initVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue, initVelocity);
        }
        void Reset(::BNM::Structures::Unity::Quaternion initValue, ::BNM::Structures::Unity::Quaternion initVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"initValue", "initVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initValue, initVelocity);
        }
        void set_ValueQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ValueQuat"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VelocityQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VelocityQuat"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Unity::Quaternion TrackDampingRatio(::BNM::Structures::Unity::Quaternion targetValue, float angularFrequency, float dampingRatio, float deltaTime) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("TrackDampingRatio"), {"targetValue", "angularFrequency", "dampingRatio", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, angularFrequency, dampingRatio, deltaTime);
        }
        ::BNM::Structures::Unity::Quaternion TrackExponential(::BNM::Structures::Unity::Quaternion targetValue, float halfLife, float deltaTime) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("TrackExponential"), {"targetValue", "halfLife", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, halfLife, deltaTime);
        }
        ::BNM::Structures::Unity::Quaternion TrackHalfLife(::BNM::Structures::Unity::Quaternion targetValue, float frequencyHz, float halfLife, float deltaTime) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("TrackHalfLife"), {"targetValue", "frequencyHz", "halfLife", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetValue, frequencyHz, halfLife, deltaTime);
        }
    };
}
