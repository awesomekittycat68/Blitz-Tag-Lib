#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BodyDockPositions_DropPositions.hpp"
#include "../GlobalNamespace/EHandedness.hpp"
#include "../GlobalNamespace/TransferrableObject_PositionState.hpp"
#include "GTHardCodedBones_EBone.hpp"

namespace GorillaTag_CosmeticSystem {
    struct GTHardCodedBones : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "GTHardCodedBones");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int kBoneCount = 53;
        static constexpr int64_t kLeftSideMask = 1728432283058160;
        static constexpr int64_t kRightSideMask = 1769114204897280;
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<::Transform*>*>* GetGInstIdsToBoneXforms() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<::Transform*>*>*> _field = GetClass().GetField(O("_gInstIds_To_boneXforms"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<::Transform*>*>* GetGInstIdsToSlotXforms() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<::Transform*>*>*> _field = GetClass().GetField(O("_gInstIds_To_slotXforms"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetGMissingBonesReport() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("_gMissingBonesReport"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::BodyDockPositions_DropPositions, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>* GetKBodyDockDropPositionToEBone() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::BodyDockPositions_DropPositions, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>*> _field = GetClass().GetField(O("_k_bodyDockDropPosition_to_eBone"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone, ::GlobalNamespace::TransferrableObject_PositionState>* GetKEBoneToTransferrablePosState() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone, ::GlobalNamespace::TransferrableObject_PositionState>*> _field = GetClass().GetField(O("_k_eBone_to_transferrablePosState"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::TransferrableObject_PositionState, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>* GetKTransferrablePosStateToEBone() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::TransferrableObject_PositionState, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>*> _field = GetClass().GetField(O("_k_transferrablePosState_to_eBone"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetKBoneNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("kBoneNames"));
            return _field.Get();
        }
        static ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone GetBone(::BNM::Structures::Mono::String* name) {
            static BNM::Method<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone> _m = GetClass().GetMethod(O("GetBone"), {"name"});
            return _m.Call(name);
        }
        static int64_t GetBoneBitFlag(::BNM::Structures::Mono::String* name) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetBoneBitFlag"), {"name"});
            return _m.Call(name);
        }
        static int64_t GetBoneBitFlag(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone bone) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetBoneBitFlag"), {"bone"});
            return _m.Call(bone);
        }
        static ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone GetBoneEnumOfCosmeticPosStateFlag(::GlobalNamespace::TransferrableObject_PositionState positionState) {
            static BNM::Method<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone> _m = GetClass().GetMethod(O("GetBoneEnumOfCosmeticPosStateFlag"), {"positionState"});
            return _m.Call(positionState);
        }
        static ::BNM::Structures::Mono::List<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>* GetBoneEnumsFromCosmeticBodyDockDropPosFlags(::GlobalNamespace::BodyDockPositions_DropPositions enumFlags) {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>*> _m = GetClass().GetMethod(O("GetBoneEnumsFromCosmeticBodyDockDropPosFlags"), {"enumFlags"});
            return _m.Call(enumFlags);
        }
        static ::BNM::Structures::Mono::List<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>* GetBoneEnumsFromCosmeticTransferrablePosStateFlags(::GlobalNamespace::TransferrableObject_PositionState enumFlags) {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone>*> _m = GetClass().GetMethod(O("GetBoneEnumsFromCosmeticTransferrablePosStateFlags"), {"enumFlags"});
            return _m.Call(enumFlags);
        }
        static int GetBoneIndex(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone bone) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBoneIndex"), {"bone"});
            return _m.Call(bone);
        }
        static int GetBoneIndex(::BNM::Structures::Mono::String* name) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBoneIndex"), {"name"});
            return _m.Call(name);
        }
        static ::BNM::Structures::Mono::String* GetBoneName(int boneIndex) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetBoneName"), {"boneIndex"});
            return _m.Call(boneIndex);
        }
        static ::BNM::Structures::Mono::String* GetBoneName(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone bone) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetBoneName"), {"bone"});
            return _m.Call(bone);
        }
        static ::Transform* GetBoneXformOfCosmeticPosStateFlag(::GlobalNamespace::TransferrableObject_PositionState anchorPosState, ::BNM::Structures::Mono::Array<::Transform*>* bones) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetBoneXformOfCosmeticPosStateFlag"), {"anchorPosState", "bones"});
            return _m.Call(anchorPosState, bones);
        }
        static ::GlobalNamespace::EHandedness GetHandednessFromBone(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone bone) {
            static BNM::Method<::GlobalNamespace::EHandedness> _m = GetClass().GetMethod(O("GetHandednessFromBone"), {"bone"});
            return _m.Call(bone);
        }
        static void HandleRuntimeInitialize_OnBeforeSceneLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRuntimeInitialize_OnBeforeSceneLoad"));
            _m.Call();
        }
        static void HandleVRRigCache_OnPostInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleVRRigCache_OnPostInitialize"));
            _m.Call();
        }
        static void HandleVRRigCache_OnPostSpawnRig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleVRRigCache_OnPostSpawnRig"));
            _m.Call();
        }
        static bool TryGetBoneByName(::BNM::Structures::Mono::String* name, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone& out_eBone) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneByName"), {"name", "out_eBone"});
            return _m.Call(name, &out_eBone);
        }
        static bool TryGetBoneIndexByName(::BNM::Structures::Mono::String* name, int& out_index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneIndexByName"), {"name", "out_index"});
            return _m.Call(name, &out_index);
        }
        static bool TryGetBoneName(int boneIndex, ::BNM::Structures::Mono::String*& out_name) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneName"), {"boneIndex", "out_name"});
            return _m.Call(boneIndex, &out_name);
        }
        static bool TryGetBoneName(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone bone, ::BNM::Structures::Mono::String*& out_name) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneName"), {"bone", "out_name"});
            return _m.Call(bone, &out_name);
        }
        static bool TryGetBoneXform(::BNM::Structures::Mono::Array<::Transform*>* boneXforms, ::BNM::Structures::Mono::String* boneName, ::Transform*& boneXform) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneXform"), {"boneXforms", "boneName", "boneXform"});
            return _m.Call(boneXforms, boneName, &boneXform);
        }
        static bool TryGetBoneXform(::BNM::Structures::Mono::Array<::Transform*>* boneXforms, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone eBone, ::Transform*& boneXform) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneXform"), {"boneXforms", "eBone", "boneXform"});
            return _m.Call(boneXforms, eBone, &boneXform);
        }
        static bool TryGetBoneXforms(::GlobalNamespace::VRRig* vrRig, ::Transform*& outBoneXforms, ::BNM::Structures::Mono::String*& outErrorMsg) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneXforms"), {"vrRig", "outBoneXforms", "outErrorMsg"});
            return _m.Call(vrRig, &outBoneXforms, &outErrorMsg);
        }
        static bool TryGetBoneXforms(::SkinnedMeshRenderer* skinnedMeshRenderer, ::Transform*& outBoneXforms, ::BNM::Structures::Mono::String*& outErrorMsg) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBoneXforms"), {"skinnedMeshRenderer", "outBoneXforms", "outErrorMsg"});
            return _m.Call(skinnedMeshRenderer, &outBoneXforms, &outErrorMsg);
        }
        static bool TryGetFirstBoneInParents(::Transform* transform, ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone& eBone, ::Transform*& boneXform) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetFirstBoneInParents"), {"transform", "eBone", "boneXform"});
            return _m.Call(transform, &eBone, &boneXform);
        }
        static bool TryGetSlotAnchorXforms(::GlobalNamespace::VRRig* vrRig, ::Transform*& outSlotXforms, ::BNM::Structures::Mono::String*& outErrorMsg) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetSlotAnchorXforms"), {"vrRig", "outSlotXforms", "outErrorMsg"});
            return _m.Call(vrRig, &outSlotXforms, &outErrorMsg);
        }
        static bool TryGetTransferrablePosStateFromBoneEnum(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone eBone, ::GlobalNamespace::TransferrableObject_PositionState& outPosState) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTransferrablePosStateFromBoneEnum"), {"eBone", "outPosState"});
            return _m.Call(eBone, &outPosState);
        }
    };
}
