#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct BoingReactorField_ComputeKernelId : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingReactorField").GetInnerClass("ComputeKernelId");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetExecuteKernel() {
            static BNM::Field<int> _field = GetClass().GetField(O("ExecuteKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInitKernel() {
            static BNM::Field<int> _field = GetClass().GetField(O("InitKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMoveKernel() {
            static BNM::Field<int> _field = GetClass().GetField(O("MoveKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWrapXKernel() {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapXKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWrapYKernel() {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapYKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWrapZKernel() {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapZKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExecuteKernel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ExecuteKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitKernel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("InitKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveKernel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MoveKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrapXKernel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapXKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrapYKernel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapYKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrapZKernel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WrapZKernel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
