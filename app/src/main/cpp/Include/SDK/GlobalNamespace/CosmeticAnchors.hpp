#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject_PositionState.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticSlots.hpp"

namespace GlobalNamespace {
    struct CosmeticAnchors : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticAnchors");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAnchorEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anchorEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigAnchorOverrides* GetAnchorOverrides() {
            static BNM::Field<::GlobalNamespace::VRRigAnchorOverrides*> _field = GetClass().GetField(O("anchorOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBadgeAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("badgeAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBadgeAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("badgeAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBuilderWatchAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("builderWatchAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBuilderWatchAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("builderWatchAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetChestAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("chestAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetChestAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("chestAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDeprecatedWarning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("deprecatedWarning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFriendshipBraceletLeftOverride() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("friendshipBraceletLeftOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFriendshipBraceletLeftOverridePath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("friendshipBraceletLeftOverride_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFriendshipBraceletRightOverride() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("friendshipBraceletRightOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFriendshipBraceletRightOverridePath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("friendshipBraceletRightOverride_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHuntComputerAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("huntComputerAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHuntComputerAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("huntComputerAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag::GTLogErrorLimiter* GetKDebugLogErrorAnchorOverridesNull() {
            static BNM::Field<::GorillaTag::GTLogErrorLimiter*> _field = GetClass().GetField(O("k_debugLogError_anchorOverridesNull"));
            return _field.Get();
        }
        ::GameObject* GetLeftArmAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftArmAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeftArmAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftArmAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNameAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nameAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNameAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nameAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightArmAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightArmAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRightArmAnchorPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightArmAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetSlot() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchorEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anchorEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnchorOverrides(::GlobalNamespace::VRRigAnchorOverrides* value) {
            static BNM::Field<::GlobalNamespace::VRRigAnchorOverrides*> _field = GetClass().GetField(O("anchorOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("badgeAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("badgeAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderWatchAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("builderWatchAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderWatchAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("builderWatchAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("chestAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("chestAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeprecatedWarning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("deprecatedWarning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletLeftOverride(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("friendshipBraceletLeftOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletLeftOverridePath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("friendshipBraceletLeftOverride_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletRightOverride(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("friendshipBraceletRightOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletRightOverridePath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("friendshipBraceletRightOverride_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntComputerAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("huntComputerAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntComputerAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("huntComputerAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetKDebugLogErrorAnchorOverridesNull(::GorillaTag::GTLogErrorLimiter* value) {
            static BNM::Field<::GorillaTag::GTLogErrorLimiter*> _field = GetClass().GetField(O("k_debugLogError_anchorOverridesNull"));
            _field.Set(value);
        }
        void SetLeftArmAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftArmAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftArmAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftArmAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nameAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nameAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightArmAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightArmAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightArmAnchorPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightArmAnchor_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot(::GorillaNetworking::CosmeticsController_CosmeticSlots value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AffectedByBuilder() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AffectedByBuilder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool AffectedByHunt() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AffectedByHunt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void AssignAnchorToPath(::GameObject*& anchorGObjRef, ::BNM::Structures::Mono::String* path) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignAnchorToPath"), {"anchorGObjRef", "path"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&anchorGObjRef, path);
        }
        void EnableAnchor(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableAnchor"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        ::Transform* GetNameAnchor_1() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetNameAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetPositionAnchor(::GlobalNamespace::TransferrableObject_PositionState pos) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetPositionAnchor"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBuilderWatchAnchor_1(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBuilderWatchAnchor"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void SetCustomAnchor(::Transform* target, bool enable, ::GameObject* overrideAnchor, ::Transform* defaultAnchor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCustomAnchor"), {"target", "enable", "overrideAnchor", "defaultAnchor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, enable, overrideAnchor, defaultAnchor);
        }
        void SetHuntComputerAnchor_1(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHuntComputerAnchor"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void TryUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
