#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderRenderer_SetupInstanceDataForMeshStatic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderRenderer").GetInnerClass("SetupInstanceDataForMeshStatic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetObjectToWorld() {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectToWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTransformIndexToDataIndex() {
            static BNM::Field<void*> _field = GetClass().GetField(O("transformIndexToDataIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetObjectToWorld(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectToWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformIndexToDataIndex(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("transformIndexToDataIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void Execute(int index, TP1 transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"index", "transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, transform);
        }
    };
}
