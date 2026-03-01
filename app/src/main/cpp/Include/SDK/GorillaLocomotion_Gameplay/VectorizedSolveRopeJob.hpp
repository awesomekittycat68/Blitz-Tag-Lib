#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VectorizedBurstRopeData.hpp"

namespace GorillaLocomotion_Gameplay {
    struct VectorizedSolveRopeJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "VectorizedSolveRopeJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetApplyConstraintIterations() {
            static BNM::Field<int> _field = GetClass().GetField(O("applyConstraintIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::VectorizedBurstRopeData GetData() {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedBurstRopeData> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFinalPassIterations() {
            static BNM::Field<int> _field = GetClass().GetField(O("finalPassIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravity() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNodeDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("nodeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyConstraintIterations(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("applyConstraintIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GorillaLocomotion_Gameplay::VectorizedBurstRopeData value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedBurstRopeData> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalPassIterations(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("finalPassIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nodeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyConstraint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyConstraint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConstrainRoots() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConstrainRoots"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void dot4(void*& ax, void*& ay, void*& az, void*& bx, void*& by, void*& bz, void*& output) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("dot4"), {"ax", "ay", "az", "bx", "by", "bz", "output"});
            _m.Call(&ax, &ay, &az, &bx, &by, &bz, &output);
        }
        void Execute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FinalPass() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinalPass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void length4(void*& xVals, void*& yVals, void*& zVals, void*& output) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("length4"), {"xVals", "yVals", "zVals", "output"});
            _m.Call(&xVals, &yVals, &zVals, &output);
        }
        void Simulate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Simulate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
