#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderTableSubMesh.hpp"

namespace GlobalNamespace {
    struct BuilderTableDataRenderData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderTableDataRenderData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int NUM_SPLIT_MESH_INSTANCE_GROUPS = 1;
        ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* GetDynamicBatch() {
            static BNM::Field<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*> _field = GetClass().GetField(O("dynamicBatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("materials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Material*, int>* GetMaterialToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Material*, int>*> _field = GetClass().GetField(O("materialToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetMeshes() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("meshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetMeshInstanceCount() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("meshInstanceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, int>* GetMeshToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, int>*> _field = GetClass().GetField(O("meshToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetPerTextureMaterial() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("perTextureMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetPerTexturePropertyBlock() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("perTexturePropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSetupInstancesJobs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("setupInstancesJobs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSharedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSharedMaterialIndirect() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterialIndirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSharedMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sharedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSharedTexArray() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sharedTexArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* GetStaticBatch() {
            static BNM::Field<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*> _field = GetClass().GetField(O("staticBatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSubMeshes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("subMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTexHeight() {
            static BNM::Field<int> _field = GetClass().GetField(O("texHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTextureFormat() {
            static BNM::Field<void*> _field = GetClass().GetField(O("textureFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Texture2D*>* GetTextures() {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("textures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Texture2D*, int>* GetTextureToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Texture2D*, int>*> _field = GetClass().GetField(O("textureToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTexWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("texWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDynamicBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch* value) {
            static BNM::Field<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*> _field = GetClass().GetField(O("dynamicBatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterials(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("materials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialToIndex(::BNM::Structures::Mono::Dictionary<::Material*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Material*, int>*> _field = GetClass().GetField(O("materialToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshes(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("meshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshInstanceCount(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("meshInstanceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshToIndex(::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, int>*> _field = GetClass().GetField(O("meshToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerTextureMaterial(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("perTextureMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerTexturePropertyBlock(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("perTexturePropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetupInstancesJobs(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("setupInstancesJobs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMaterialIndirect(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterialIndirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sharedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedTexArray(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sharedTexArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch* value) {
            static BNM::Field<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*> _field = GetClass().GetField(O("staticBatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubMeshes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("subMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexHeight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("texHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextureFormat(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("textureFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextures(::BNM::Structures::Mono::List<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("textures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextureToIndex(::BNM::Structures::Mono::Dictionary<::Texture2D*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Texture2D*, int>*> _field = GetClass().GetField(O("textureToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexWidth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("texWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
