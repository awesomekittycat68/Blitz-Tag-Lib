#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct UberCombiner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UberCombiner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ShaderHashId GetBaseMap() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BaseMap"));
            return _field.Get();
        }
        ::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner* GetCombiner() {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner*> _field = GetClass().GetField(O("_combiner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIncludeInactive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetInvalidObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("invalidObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMeshSources() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("meshSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetObjectsToIgnore() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("objectsToIgnore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetRenderersToCombine() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("renderersToCombine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetBaseMap(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BaseMap"));
            _field.Set(value);
        }
        void SetCombiner(::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner* value) {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner*> _field = GetClass().GetField(O("_combiner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeInactive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvalidObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("invalidObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshSources(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("meshSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsToIgnore(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("objectsToIgnore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderersToCombine(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("renderersToCombine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CollectRenderers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CollectRenderers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void* FilterRenderers(TP0 renderers) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FilterRenderers"), {"renderers"});
            return _m.Call(renderers);
        }
        void MergeAndExtractPerMaterialMeshes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MergeAndExtractPerMaterialMeshes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MergeMeshes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MergeMeshes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPostMerge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPostMerge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void QuickMerge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuickMerge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendToCombiner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendToCombiner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UndoMerge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UndoMerge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateRenderers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateRenderers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
