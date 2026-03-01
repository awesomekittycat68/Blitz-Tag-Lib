#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RuntimeMeshCombiner_AfterMerge.hpp"
#include "RuntimeMeshCombiner_CombineOnStart.hpp"

namespace MTAssets_EasyMeshCombiner {
    struct RuntimeMeshCombiner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAddMeshColliderAfter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("addMeshColliderAfter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_AfterMerge GetAfterMerge() {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_AfterMerge> _field = GetClass().GetField(O("afterMerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCombineInactives() {
            static BNM::Field<bool> _field = GetClass().GetField(O("combineInactives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCombineInChildren() {
            static BNM::Field<bool> _field = GetClass().GetField(O("combineInChildren"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_CombineOnStart GetCombineMeshesAtStartUp() {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_CombineOnStart> _field = GetClass().GetField(O("combineMeshesAtStartUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGarbageCollectorAfterUndo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("garbageCollectorAfterUndo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMAXVERTICESFOR16BITSMESH() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_VERTICES_FOR_16BITS_MESH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnDoneMerge() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onDoneMerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnDoneUnmerge() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onDoneUnmerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOptimizeResultingMesh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("optimizeResultingMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOriginalEulerAngles() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("originalEulerAngles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>* GetOriginalGameObjectsWithMeshToRestore() {
            static BNM::Field<::BNM::Structures::Mono::List<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*> _field = GetClass().GetField(O("originalGameObjectsWithMeshToRestore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOriginalPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("originalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOriginalScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("originalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecalculateNormals() {
            static BNM::Field<bool> _field = GetClass().GetField(O("recalculateNormals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecalculateTangents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("recalculateTangents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowDebugLogs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showDebugLogs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetTargetMeshes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("targetMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTargetMeshesMerged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("targetMeshesMerged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAddMeshColliderAfter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("addMeshColliderAfter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAfterMerge(::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_AfterMerge value) {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_AfterMerge> _field = GetClass().GetField(O("afterMerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCombineInactives(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("combineInactives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCombineInChildren(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("combineInChildren"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCombineMeshesAtStartUp(::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_CombineOnStart value) {
            static BNM::Field<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_CombineOnStart> _field = GetClass().GetField(O("combineMeshesAtStartUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGarbageCollectorAfterUndo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("garbageCollectorAfterUndo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAXVERTICESFOR16BITSMESH(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_VERTICES_FOR_16BITS_MESH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDoneMerge(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onDoneMerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDoneUnmerge(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onDoneUnmerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptimizeResultingMesh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("optimizeResultingMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalEulerAngles(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("originalEulerAngles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalGameObjectsWithMeshToRestore(::BNM::Structures::Mono::List<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*> _field = GetClass().GetField(O("originalGameObjectsWithMeshToRestore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("originalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalScale(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("originalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecalculateNormals(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("recalculateNormals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecalculateTangents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("recalculateTangents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowDebugLogs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showDebugLogs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetMeshes(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("targetMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetMeshesMerged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("targetMeshesMerged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CombineMeshes() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CombineMeshes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*>* GetValidatedTargetGameObjects() {
            static BNM::Method<::BNM::Structures::Mono::Array<::MTAssets_EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*>*> _m = GetClass().GetMethod(O("GetValidatedTargetGameObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool isTargetMeshesMerged() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("isTargetMeshesMerged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool UndoMerge() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UndoMerge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
