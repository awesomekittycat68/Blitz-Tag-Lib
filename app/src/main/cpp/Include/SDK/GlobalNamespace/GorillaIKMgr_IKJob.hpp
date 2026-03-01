#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaIKMgr_IKConstantInput.hpp"
#include "GorillaIKMgr_IKInput.hpp"
#include "GorillaIKMgr_IKOutput.hpp"

namespace GlobalNamespace {
    struct GorillaIKMgr_IKJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaIKMgr").GetInnerClass("IKJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetConstantInput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("constantInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetForearmLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("forearmLocalPos"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetHandLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handLocalPos"));
            return _field.Get();
        }
        void* GetInput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOutput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetUpperArmLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("upperArmLocalPos"));
            return _field.Get();
        }
        void SetConstantInput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("constantInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Execute(int i) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"i"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(i);
        }
    };
}
