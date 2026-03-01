#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject_PositionState.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticSlots.hpp"
#include "../GorillaTag/XformOffset.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticAnchorAntiClipEntry.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticAnchorAntiIntersectOffsets.hpp"

namespace GlobalNamespace {
    struct VRRigAnchorOverrides : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigAnchorOverrides");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBuilderWatch() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_BuilderWatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetBuilderWatchAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_BuilderWatchAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetCurrentBadgeTransform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_CurrentBadgeTransform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentBadgeTransform(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentBadgeTransform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetHuntComputer() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_HuntComputer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetHuntDefaultAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_HuntDefaultAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetActiveAntiClippingOffsets() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("activeAntiClippingOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetBadgeAnchors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("badgeAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBadgeDefaultPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("badgeDefaultPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetBadgeDefaultRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("badgeDefaultRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>* GetBadgeOffsets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>*> _field = GetClass().GetField(O("badgeOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBuilderResizeButton() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("builderResizeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBuilderResizeButtonDefaultAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("builderResizeButtonDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBuilderResizeButtonDefaultTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("builderResizeButtonDefaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetChestDefaultTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestDefaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetClippingOffsetTransforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("clippingOffsetTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCurrentBadgeTransform_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentBadgeTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFriendshipBraceletLeftAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletLeftAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFriendshipBraceletLeftDefaultAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletLeftDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFriendshipBraceletRightAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletRightAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFriendshipBraceletRightDefaultAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletRightDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHuntComputer_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("huntComputer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHuntComputerDefaultAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("huntComputerDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHuntDefaultTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("huntDefaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetNameAnchors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("nameAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNameDefaultAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("nameDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNameLastObjectToAttach() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nameLastObjectToAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>* GetNameOffsets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>*> _field = GetClass().GetField(O("nameOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNameTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("nameTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetOverrideAnchors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("overrideAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveAntiClippingOffsets(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("activeAntiClippingOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeAnchors(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("badgeAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeDefaultPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("badgeDefaultPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeDefaultRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("badgeDefaultRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeOffsets(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>*> _field = GetClass().GetField(O("badgeOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderResizeButton(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("builderResizeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderResizeButtonDefaultAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("builderResizeButtonDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderResizeButtonDefaultTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("builderResizeButtonDefaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestDefaultTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestDefaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClippingOffsetTransforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("clippingOffsetTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBadgeTransform_fs(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentBadgeTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletLeftAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletLeftAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletLeftDefaultAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletLeftDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletRightAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletRightAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletRightDefaultAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("friendshipBraceletRightDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntComputer(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("huntComputer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntComputerDefaultAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("huntComputerDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntDefaultTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("huntDefaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameAnchors(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("nameAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameDefaultAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("nameDefaultAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameLastObjectToAttach(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nameLastObjectToAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameOffsets(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry>*> _field = GetClass().GetField(O("nameOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("nameTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Transform* AnchorOverride(::GlobalNamespace::TransferrableObject_PositionState pos, ::Transform* fallback) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("AnchorOverride"), {"pos", "fallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos, fallback);
        }
        void ApplyAntiClippingOffsets(::GlobalNamespace::TransferrableObject_PositionState pos, ::GorillaTag::XformOffset offset, bool enable, ::Transform* defaultAnchor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAntiClippingOffsets"), {"pos", "offset", "enable", "defaultAnchor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos, offset, enable, defaultAnchor);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Transform* get_BuilderWatch() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_BuilderWatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_BuilderWatchAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_BuilderWatchAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_CurrentBadgeTransform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_CurrentBadgeTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_HuntComputer() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_HuntComputer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_HuntDefaultAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_HuntDefaultAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int MapPositionToIndex(::GlobalNamespace::TransferrableObject_PositionState pos) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MapPositionToIndex"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OverrideAnchor(::GlobalNamespace::TransferrableObject_PositionState pos, ::Transform* anchor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OverrideAnchor"), {"pos", "anchor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos, anchor);
        }
        void ResetBadge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetBadge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CurrentBadgeTransform(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentBadgeTransform"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateBadge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBadge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateBadgeAnchor(::GameObject* badgeAnchor, ::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBadgeAnchor"), {"badgeAnchor", "slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(badgeAnchor, slot);
        }
        void UpdateBadgeOffset(::GorillaTag::XformOffset offset, bool enable, ::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBadgeOffset"), {"offset", "enable", "slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(offset, enable, slot);
        }
        void UpdateBuilderWatchOffset(::GorillaTag::XformOffset offset, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBuilderWatchOffset"), {"offset", "enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(offset, enable);
        }
        void UpdateFriendshipBraceletOffset(::GorillaTag::XformOffset offset, bool left, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFriendshipBraceletOffset"), {"offset", "left", "enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(offset, left, enable);
        }
        void UpdateHuntWatchOffset(::GorillaTag::XformOffset offset, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHuntWatchOffset"), {"offset", "enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(offset, enable);
        }
        void UpdateName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateNameAnchor(::GameObject* nameAnchor, ::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNameAnchor"), {"nameAnchor", "slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameAnchor, slot);
        }
        void UpdateNameTagOffset(::GorillaTag::XformOffset offset, bool enable, ::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNameTagOffset"), {"offset", "enable", "slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(offset, enable, slot);
        }
    };
}
