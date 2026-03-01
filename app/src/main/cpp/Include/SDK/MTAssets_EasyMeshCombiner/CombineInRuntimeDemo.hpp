#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace MTAssets_EasyMeshCombiner {
    struct CombineInRuntimeDemo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("MTAssets.EasyMeshCombiner", "CombineInRuntimeDemo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetCombineButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("combineButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner* GetRuntimeCombiner() {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner*> _field = GetClass().GetField(O("runtimeCombiner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUndoButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("undoButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCombineButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("combineButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRuntimeCombiner(::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner* value) {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner*> _field = GetClass().GetField(O("runtimeCombiner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUndoButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("undoButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CombineMeshes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CombineMeshes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UndoMerge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UndoMerge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
