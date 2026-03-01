#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaBodyType.hpp"

namespace GlobalNamespace {
    struct GorillaBodyRenderer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaBodyRenderer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::SkinnedMeshRenderer* GetActiveBody() {
            static BNM::Method<::SkinnedMeshRenderer*> _method = GetClass().GetMethod(O("get_ActiveBody"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GorillaBodyType GetBodyType() {
            static BNM::Method<::GlobalNamespace::GorillaBodyType> _method = GetClass().GetMethod(O("get_bodyType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBodyType(::GlobalNamespace::GorillaBodyType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_bodyType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetForceSkeleton() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ForceSkeleton"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GorillaBodyType GetGameModeBodyType() {
            static BNM::Method<::GlobalNamespace::GorillaBodyType> _method = GetClass().GetMethod(O("get_gameModeBodyType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGameModeBodyType(::GlobalNamespace::GorillaBodyType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_gameModeBodyType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Material* GetMyDefaultSkinMaterialInstance() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_myDefaultSkinMaterialInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyDefaultSkinMaterialInstance(::Material* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_myDefaultSkinMaterialInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRenderFace() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_renderFace"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetApplySkinToHeadlessMesh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_applySkinToHeadlessMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaBodyType GetBodyType_f() {
            static BNM::Field<::GlobalNamespace::GorillaBodyType> _field = GetClass().GetField(O("_bodyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetCachedSkinMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_cachedSkinMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetDefaultSkinMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_defaultSkinMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastMatIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastMatIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>* GetRenderersCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("_renderersCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRenderFace_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_renderFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetBodyDefault() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("bodyDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetBodyNoHead() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("bodyNoHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetBodySkeleton() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("bodySkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaBodyType GetCosmeticBodyType() {
            static BNM::Field<::GlobalNamespace::GorillaBodyType> _field = GetClass().GetField(O("cosmeticBodyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultBodyMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultBodyMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetFaceRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("faceRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Material*>* GetGEmptyDefaultMats() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("gEmptyDefaultMats"));
            return _field.Get();
        }
        static bool GetOopsAllSkeletons() {
            static BNM::Field<bool> _field = GetClass().GetField(O("oopsAllSkeletons"));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplySkinToHeadlessMesh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_applySkinToHeadlessMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyType_fs(::GlobalNamespace::GorillaBodyType value) {
            static BNM::Field<::GlobalNamespace::GorillaBodyType> _field = GetClass().GetField(O("_bodyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedSkinMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_cachedSkinMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSkinMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_defaultSkinMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMatIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastMatIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderersCache(::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("_renderersCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderFace(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_renderFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyDefault(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("bodyDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyNoHead(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("bodyNoHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodySkeleton(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("bodySkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticBodyType(::GlobalNamespace::GorillaBodyType value) {
            static BNM::Field<::GlobalNamespace::GorillaBodyType> _field = GetClass().GetField(O("cosmeticBodyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultBodyMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultBodyMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("faceRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOopsAllSkeletons(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("oopsAllSkeletons"));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCosmeticBodyMesh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmeticBodyMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnsureInstantiatedMaterial() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureInstantiatedMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::SkinnedMeshRenderer* get_ActiveBody() {
            static BNM::Method<::SkinnedMeshRenderer*> _m = GetClass().GetMethod(O("get_ActiveBody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaBodyType get_bodyType() {
            static BNM::Method<::GlobalNamespace::GorillaBodyType> _m = GetClass().GetMethod(O("get_bodyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool get_ForceSkeleton() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ForceSkeleton"));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaBodyType get_gameModeBodyType() {
            static BNM::Method<::GlobalNamespace::GorillaBodyType> _m = GetClass().GetMethod(O("get_gameModeBodyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* get_myDefaultSkinMaterialInstance() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_myDefaultSkinMaterialInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_renderFace() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_renderFace"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaBodyType GetActiveBodyType() {
            static BNM::Method<::GlobalNamespace::GorillaBodyType> _m = GetClass().GetMethod(O("GetActiveBodyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::SkinnedMeshRenderer* GetBody(::GlobalNamespace::GorillaBodyType type) {
            static BNM::Method<::SkinnedMeshRenderer*> _m = GetClass().GetMethod(O("GetBody"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetBodyMaterial() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetBodyMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_bodyType(::GlobalNamespace::GorillaBodyType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_bodyType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_gameModeBodyType(::GlobalNamespace::GorillaBodyType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_gameModeBodyType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_myDefaultSkinMaterialInstance(::Material* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_myDefaultSkinMaterialInstance"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void SetAllSkeletons(bool allSkeletons) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAllSkeletons"), {"allSkeletons"});
            _m.Call(allSkeletons);
        }
        void SetBodyEnabled(::GlobalNamespace::GorillaBodyType bodyType, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBodyEnabled"), {"bodyType", "enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bodyType, enabled);
        }
        void SetBodyType_1(::GlobalNamespace::GorillaBodyType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBodyType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        void SetCosmeticBodyMesh(::BNM::IL2CPP::Il2CppObject* mesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticBodyMesh"), {"mesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mesh);
        }
        void SetCosmeticBodyType_1(::GlobalNamespace::GorillaBodyType bodyType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticBodyType"), {"bodyType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bodyType);
        }
        void SetDefaults() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDefaults"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetGameModeBodyType_1(::GlobalNamespace::GorillaBodyType bodyType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGameModeBodyType"), {"bodyType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bodyType);
        }
        void SetMaterialIndex(int materialIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaterialIndex"), {"materialIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(materialIndex);
        }
        void SetSkeletonBodyActive(bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSkeletonBodyActive"), {"active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(active);
        }
        void SetSkinMaterials(::Material* bodyMat, ::Material* chestMat, bool allowHeadless) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSkinMaterials"), {"bodyMat", "chestMat", "allowHeadless"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bodyMat, chestMat, allowHeadless);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetupAsLocalPlayerBody() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupAsLocalPlayerBody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SharedStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateBodyMaterialColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBodyMaterialColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void UpdateColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
    };
}
