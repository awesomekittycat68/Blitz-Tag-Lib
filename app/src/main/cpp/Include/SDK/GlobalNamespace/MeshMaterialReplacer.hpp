#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MeshMaterialReplacer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MeshMaterialReplacer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObjectScheduling::MeshMaterialReplacement* GetMeshMaterialReplacement() {
            static BNM::Field<::GameObjectScheduling::MeshMaterialReplacement*> _field = GetClass().GetField(O("meshMaterialReplacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMeshMaterialReplacement(::GameObjectScheduling::MeshMaterialReplacement* value) {
            static BNM::Field<::GameObjectScheduling::MeshMaterialReplacement*> _field = GetClass().GetField(O("meshMaterialReplacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
