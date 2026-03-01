#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaIKMgr_IKTransformJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaIKMgr").GetInnerClass("IKTransformJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetTransformPositions() {
            static BNM::Field<void*> _field = GetClass().GetField(O("transformPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTransformRotations() {
            static BNM::Field<void*> _field = GetClass().GetField(O("transformRotations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTransformPositions(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("transformPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformRotations(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("transformRotations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void Execute(int index, TP1 xform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"index", "xform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, xform);
        }
    };
}
