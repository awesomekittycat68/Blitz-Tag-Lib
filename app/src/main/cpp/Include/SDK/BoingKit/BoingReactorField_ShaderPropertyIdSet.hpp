#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct BoingReactorField_ShaderPropertyIdSet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingReactorField").GetInnerClass("ShaderPropertyIdSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetComputeCells() {
            static BNM::Field<int> _field = GetClass().GetField(O("ComputeCells"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetComputeFieldParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("ComputeFieldParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEffectorIndices() {
            static BNM::Field<int> _field = GetClass().GetField(O("EffectorIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEffectors() {
            static BNM::Field<int> _field = GetClass().GetField(O("Effectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMoveParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("MoveParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPositionSampleMultiplier() {
            static BNM::Field<int> _field = GetClass().GetField(O("PositionSampleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPropagationParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("PropagationParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReactorParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("ReactorParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRenderCells() {
            static BNM::Field<int> _field = GetClass().GetField(O("RenderCells"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRenderFieldParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("RenderFieldParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRotationSampleMultiplier() {
            static BNM::Field<int> _field = GetClass().GetField(O("RotationSampleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWrapParams() {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetComputeCells(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ComputeCells"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputeFieldParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ComputeFieldParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectorIndices(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("EffectorIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectors(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Effectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MoveParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionSampleMultiplier(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PositionSampleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropagationParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PropagationParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactorParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ReactorParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderCells(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RenderCells"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderFieldParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RenderFieldParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSampleMultiplier(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RotationSampleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrapParams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
