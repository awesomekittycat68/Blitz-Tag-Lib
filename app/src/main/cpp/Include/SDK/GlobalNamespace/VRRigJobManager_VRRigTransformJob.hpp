#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VRRigJobManager_VRRigTransformInput.hpp"

namespace GlobalNamespace {
    struct VRRigJobManager_VRRigTransformJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigJobManager").GetInnerClass("VRRigTransformJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetInput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void Execute(int i, TP1 tA) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"i", "tA"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(i, tA);
        }
    };
}
