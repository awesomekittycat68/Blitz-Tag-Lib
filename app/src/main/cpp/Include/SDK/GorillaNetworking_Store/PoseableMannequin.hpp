#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct PoseableMannequin : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "PoseableMannequin");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetBakedColliderMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("BakedColliderMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTPosRotConstraints*>* GetCosmeticConstraints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTPosRotConstraints*>*> _field = GetClass().GetField(O("cosmeticConstraints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPrefabAssetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prefabAssetName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPrefabAssetPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prefabAssetPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPrefabFolderPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prefabFolderPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSkinnedMeshCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("skinnedMeshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetSkinnedMeshRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("skinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStaticGorillaMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("staticGorillaMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStaticGorillaMeshCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("staticGorillaMeshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetStaticGorillaMeshRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("staticGorillaMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBakedColliderMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("BakedColliderMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticConstraints(::BNM::Structures::Mono::Array<::GlobalNamespace::GTPosRotConstraints*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTPosRotConstraints*>*> _field = GetClass().GetField(O("cosmeticConstraints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabAssetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prefabAssetName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabAssetPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prefabAssetPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabFolderPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prefabFolderPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkinnedMeshCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("skinnedMeshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkinnedMeshRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("skinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticGorillaMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("staticGorillaMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticGorillaMeshCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("staticGorillaMeshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticGorillaMeshRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("staticGorillaMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BakeAndSaveMeshInPath(::BNM::Structures::Mono::String* meshPath) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BakeAndSaveMeshInPath"), {"meshPath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(meshPath);
        }
        void BakeSkinnedMesh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BakeSkinnedMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreasteTestClip() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreasteTestClip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Transform* FindBone(::BNM::Structures::Mono::String* boneName) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("FindBone"), {"boneName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(boneName);
        }
        ::BNM::Structures::Mono::String* GetMeshPathFromPrefabPath(::BNM::Structures::Mono::String* prefabPath) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetMeshPathFromPrefabPath"), {"prefabPath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefabPath);
        }
        ::BNM::Structures::Mono::String* GetPrefabPathFromCurrentPrefabStage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPrefabPathFromCurrentPrefabStage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HookupCosmeticConstraints() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HookupCosmeticConstraints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadPoseOntoMannequin(::BNM::IL2CPP::Il2CppObject* clip, float frameTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadPoseOntoMannequin"), {"clip", "frameTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, frameTime);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* SaveLocalPlayerPose() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SaveLocalPlayerPose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SerializeOutBonesFromSkinnedMesh(::SkinnedMeshRenderer* paramSkinnedMeshRenderer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeOutBonesFromSkinnedMesh"), {"paramSkinnedMeshRenderer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(paramSkinnedMeshRenderer);
        }
        void SerializeVRRig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeVRRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCurvesForBone(::SkinnedMeshRenderer* paramSkinnedMeshRenderer, ::BNM::IL2CPP::Il2CppObject* clip, ::Transform* bone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCurvesForBone"), {"paramSkinnedMeshRenderer", "clip", "bone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(paramSkinnedMeshRenderer, clip, bone);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateGTPosRotConstraints() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGTPosRotConstraints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePrefabWithAnimationClip(::BNM::Structures::Mono::String* AnimationFileName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePrefabWithAnimationClip"), {"AnimationFileName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(AnimationFileName);
        }
        void UpdateSkinnedMeshCollider() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSkinnedMeshCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStaticMeshMannequin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStaticMeshMannequin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
