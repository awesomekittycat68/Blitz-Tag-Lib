#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderTableSubMesh.hpp"
#include "MonoBehaviourPostTick.hpp"

namespace GlobalNamespace {
    struct BuilderRenderer : ::GlobalNamespace::MonoBehaviourPostTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderRenderer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int TEX_SIZE = 256;
        static constexpr const char* texturePropName = "_BaseMap";
        static constexpr const char* textureArrayPropName = "_BaseMapArray";
        static constexpr const char* textureArrayIndexPropName = "_BaseMapArrayIndex";
        static constexpr const char* transformMatrixPropName = "_TransformMatrix";
        static constexpr const char* texIndexPropName = "_TexIndex";
        static constexpr const char* tintPropName = "_Tint";
        static constexpr int MAX_STATIC_INSTANCES = 8192;
        static constexpr int MAX_DYNAMIC_INSTANCES = 8192;
        static constexpr int INSTANCES_PER_TRANSFORM = 1;
        static constexpr int MAX_TOTAL_VERTS = 65536;
        static constexpr int MAX_TOTAL_TRIS = 65536;
        bool GetBuilt() {
            static BNM::Field<bool> _field = GetClass().GetField(O("built"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::MeshRenderer*>* GetMeshRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("meshRenderers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetNormals() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("normals"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetNormalsAll() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("normalsAll"));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderTableDataRenderData* GetRenderData() {
            static BNM::Field<::GlobalNamespace::BuilderTableDataRenderData*> _field = GetClass().GetField(O("renderData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSerializeMeshes() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("serializeMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetSerializeMeshInstanceCount() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("serializeMeshInstanceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSerializeMeshToIndexKeys() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("serializeMeshToIndexKeys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetSerializeMeshToIndexValues() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("serializeMeshToIndexValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetSerializePerTextureMaterial() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("serializePerTextureMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSerializePerTexturePropertyBlock() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("serializePerTexturePropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSerializeSharedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("serializeSharedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSerializeSharedMaterialIndirect() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("serializeSharedMaterialIndirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSerializeSharedMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("serializeSharedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSerializeSharedTexArray() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("serializeSharedTexArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderTableSubMesh>* GetSerializeSubMeshes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderTableSubMesh>*> _field = GetClass().GetField(O("serializeSubMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Texture2D*>* GetSerializeTextures() {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("serializeTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Texture2D*>* GetSerializeTextureToIndexKeys() {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("serializeTextureToIndexKeys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetSerializeTextureToIndexValues() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("serializeTextureToIndexValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSharedMaterialBase() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterialBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSharedMaterialIndirectBase() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterialIndirectBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetSnapPieceShader() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("snapPieceShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTriangles() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("triangles"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTrianglesAll() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trianglesAll"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>* GetUv1() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("uv1"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>* GetUv1All() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("uv1All"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetVertices() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("vertices"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetVerticesAll() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("verticesAll"));
            return _field.Get();
        }
        void SetBuilt(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("built"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMeshRenderers(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("meshRenderers"));
            _field.Set(value);
        }
        static void SetNormals(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("normals"));
            _field.Set(value);
        }
        static void SetNormalsAll(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("normalsAll"));
            _field.Set(value);
        }
        void SetRenderData(::GlobalNamespace::BuilderTableDataRenderData* value) {
            static BNM::Field<::GlobalNamespace::BuilderTableDataRenderData*> _field = GetClass().GetField(O("renderData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeMeshes(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("serializeMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeMeshInstanceCount(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("serializeMeshInstanceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeMeshToIndexKeys(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("serializeMeshToIndexKeys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeMeshToIndexValues(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("serializeMeshToIndexValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializePerTextureMaterial(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("serializePerTextureMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializePerTexturePropertyBlock(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("serializePerTexturePropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeSharedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("serializeSharedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeSharedMaterialIndirect(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("serializeSharedMaterialIndirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeSharedMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("serializeSharedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeSharedTexArray(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("serializeSharedTexArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeSubMeshes(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderTableSubMesh>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderTableSubMesh>*> _field = GetClass().GetField(O("serializeSubMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeTextures(::BNM::Structures::Mono::List<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("serializeTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeTextureToIndexKeys(::BNM::Structures::Mono::List<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("serializeTextureToIndexKeys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializeTextureToIndexValues(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("serializeTextureToIndexValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMaterialBase(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterialBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMaterialIndirectBase(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("sharedMaterialIndirectBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapPieceShader(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("snapPieceShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTriangles(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("triangles"));
            _field.Set(value);
        }
        static void SetTrianglesAll(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trianglesAll"));
            _field.Set(value);
        }
        static void SetUv1(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("uv1"));
            _field.Set(value);
        }
        static void SetUv1All(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("uv1All"));
            _field.Set(value);
        }
        static void SetVertices(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("vertices"));
            _field.Set(value);
        }
        static void SetVerticesAll(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("verticesAll"));
            _field.Set(value);
        }
        bool AddMaterial(::Material* material, bool suppressWarnings) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AddMaterial"), {"material", "suppressWarnings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(material, suppressWarnings);
        }
        void AddPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void AddPrefab(::GlobalNamespace::BuilderPiece* prefab) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPrefab"), {"prefab"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prefab);
        }
        void ApplySerializedData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySerializedData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void BuildBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch* indirectBatch, int meshCount, int maxInstances, ::Material* sharedMaterialIndirect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildBatch"), {"indirectBatch", "meshCount", "maxInstances", "sharedMaterialIndirect"});
            _m.Call(indirectBatch, meshCount, maxInstances, sharedMaterialIndirect);
        }
        void BuildBuffer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildBuffer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildRenderer(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* piecePrefabs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildRenderer"), {"piecePrefabs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piecePrefabs);
        }
        void BuildSharedMaterial() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildSharedMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildSharedMesh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildSharedMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangePieceIndirectMaterial(::GlobalNamespace::BuilderPiece* piece, ::BNM::Structures::Mono::List<::MeshRenderer*>* targetRenderers, ::Material* targetMaterial) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangePieceIndirectMaterial"), {"piece", "targetRenderers", "targetMaterial"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, targetRenderers, targetMaterial);
        }
        static void DestroyBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch* indirectBatch) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyBatch"), {"indirectBatch"});
            _m.Call(indirectBatch);
        }
        void DestroyBuffer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyBuffer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitIfNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIfNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LogDraws() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogDraws"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PreRenderIndirect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreRenderIndirect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RemoveAt(TP0 a, int i) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveAt"), {"a", "i"});
            _m.Call(a, i);
        }
        void RemovePiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RenderIndirect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderIndirect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RenderIndirectBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch* indirectBatch) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderIndirectBatch"), {"indirectBatch"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(indirectBatch);
        }
        void SetPieceTint(::GlobalNamespace::BuilderPiece* piece, float tint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPieceTint"), {"piece", "tint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, tint);
        }
        template <typename TP1 = void*>
        static void SetupIndirectBatchArgs(::GlobalNamespace::BuilderTableDataRenderIndirectBatch* indirectBatch, TP1 subMeshes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupIndirectBatchArgs"), {"indirectBatch", "subMeshes"});
            _m.Call(indirectBatch, subMeshes);
        }
        void Show(bool show) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"), {"show"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(show);
        }
        void WriteSerializedData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSerializedData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
