#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderRenderer_SetupInstanceDataForMesh : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderRenderer").GetInnerClass("SetupInstanceDataForMesh");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetCameraPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cameraPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCommandData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("commandData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInstanceTexIndex() {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceTexIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInstanceTint() {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLodDirty() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lodDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLodLevel() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lodLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObjectToWorld() {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectToWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTexIndex() {
            static BNM::Field<void*> _field = GetClass().GetField(O("texIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTint() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCameraPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cameraPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCommandData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("commandData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceTexIndex(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceTexIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceTint(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLodDirty(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lodDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLodLevel(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lodLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectToWorld(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectToWorld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexIndex(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("texIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTint(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tint"));
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
