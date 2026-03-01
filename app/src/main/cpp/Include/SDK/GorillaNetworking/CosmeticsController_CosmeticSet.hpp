#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsController_CosmeticCategory.hpp"
#include "CosmeticsController_CosmeticItem.hpp"
#include "CosmeticsController_CosmeticSlots.hpp"

namespace GorillaNetworking {
    struct CosmeticsController_CosmeticSet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController").GetInnerClass("CosmeticSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetEmptySet() {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSet*> _method = GetClass().GetMethod(O("get_EmptySet"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_onSetActivatedEvent(::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onSetActivatedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onSetActivatedEvent(::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onSetActivatedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::GorillaNetworking::CosmeticsController_CosmeticSet* GetEmptySet_f() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("_emptySet"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetIntArrays() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("intArrays"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetItems() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<char>* GetNameScratchSpace() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("nameScratchSpace"));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler* GetOnSetActivatedEvent() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler*> _field = GetClass().GetField(O("onSetActivatedEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetReturnArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("returnArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetEmptySet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("_emptySet"));
            _field.Set(value);
        }
        static void SetIntArrays(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("intArrays"));
            _field.Set(value);
        }
        void SetItems(::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNameScratchSpace(::BNM::Structures::Mono::Array<char>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("nameScratchSpace"));
            _field.Set(value);
        }
        void SetOnSetActivatedEvent(::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler*> _field = GetClass().GetField(O("onSetActivatedEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnArray(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("returnArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateCosmetic(::GorillaNetworking::CosmeticsController_CosmeticSet* prevSet, ::GlobalNamespace::VRRig* rig, int slotIndex, ::GorillaNetworking::CosmeticItemRegistry* cosmeticsObjectRegistry, ::GlobalNamespace::BodyDockPositions* bDock) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateCosmetic"), {"prevSet", "rig", "slotIndex", "cosmeticsObjectRegistry", "bDock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevSet, rig, slotIndex, cosmeticsObjectRegistry, bDock);
        }
        void ActivateCosmetics(::GorillaNetworking::CosmeticsController_CosmeticSet* prevSet, ::GlobalNamespace::VRRig* rig, ::GlobalNamespace::BodyDockPositions* bDock, ::GorillaNetworking::CosmeticItemRegistry* cosmeticsObjectRegistry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateCosmetics"), {"prevSet", "rig", "bDock", "cosmeticsObjectRegistry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevSet, rig, bDock, cosmeticsObjectRegistry);
        }
        void add_onSetActivatedEvent_1(::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onSetActivatedEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ClearSet(::GorillaNetworking::CosmeticsController_CosmeticItem nullItem) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSet"), {"nullItem"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nullItem);
        }
        void CopyItems(::GorillaNetworking::CosmeticsController_CosmeticSet* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyItems"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void CopyItemsIntoEmpty(::GorillaNetworking::CosmeticsController_CosmeticSet* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyItemsIntoEmpty"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void DeactivateAllCosmetcs(::GlobalNamespace::BodyDockPositions* bDock, ::GorillaNetworking::CosmeticsController_CosmeticItem nullItem, ::GorillaNetworking::CosmeticItemRegistry* cosmeticObjectRegistry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateAllCosmetcs"), {"bDock", "nullItem", "cosmeticObjectRegistry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bDock, nullItem, cosmeticObjectRegistry);
        }
        static ::GorillaNetworking::CosmeticsController_CosmeticSet* get_EmptySet() {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSet*> _m = GetClass().GetMethod(O("get_EmptySet"));
            return _m.Call();
        }
        bool HasAnyItems() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasItem(::BNM::Structures::Mono::String* name) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasItem"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name);
        }
        bool HasItemOfCategory(::GorillaNetworking::CosmeticsController_CosmeticCategory category) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasItemOfCategory"), {"category"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(category);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* HoldableDisplayNames(bool leftHoldables) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("HoldableDisplayNames"), {"leftHoldables"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(leftHoldables);
        }
        bool IsActive(::BNM::Structures::Mono::String* name) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsActive"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name);
        }
        static bool IsHoldable(::GorillaNetworking::CosmeticsController_CosmeticItem item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldable"), {"item"});
            return _m.Call(item);
        }
        static bool IsSlotLeftHanded(::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlotLeftHanded"), {"slot"});
            return _m.Call(slot);
        }
        static bool IsSlotRightHanded(::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlotRightHanded"), {"slot"});
            return _m.Call(slot);
        }
        void LoadFromPlayerPreferences(::GorillaNetworking::CosmeticsController* controller) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadFromPlayerPreferences"), {"controller"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(controller);
        }
        template <typename TP2 = void*>
        void MergeInSets(::GorillaNetworking::CosmeticsController_CosmeticSet* playerPref, ::GorillaNetworking::CosmeticsController_CosmeticSet* tempOverrideSet, TP2 predicate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MergeInSets"), {"playerPref", "tempOverrideSet", "predicate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerPref, tempOverrideSet, predicate);
        }
        void MergeSets(::GorillaNetworking::CosmeticsController_CosmeticSet* tryOn, ::GorillaNetworking::CosmeticsController_CosmeticSet* current) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MergeSets"), {"tryOn", "current"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tryOn, current);
        }
        void OnSetActivated(::GorillaNetworking::CosmeticsController_CosmeticSet* prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet* currentSet, ::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetActivated"), {"prevSet", "currentSet", "netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevSet, currentSet, netPlayer);
        }
        static ::GorillaNetworking::CosmeticsController_CosmeticSlots OppositeSlot(::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSlots> _m = GetClass().GetMethod(O("OppositeSlot"), {"slot"});
            return _m.Call(slot);
        }
        void ParseSetFromString(::GorillaNetworking::CosmeticsController* controller, ::BNM::Structures::Mono::String* setString, ::BNM::Structures::Unity::Vector3& color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseSetFromString"), {"controller", "setString", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(controller, setString, &color);
        }
        void remove_onSetActivatedEvent_1(::GorillaNetworking::CosmeticsController_CosmeticSet_OnSetActivatedHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onSetActivatedEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static ::BNM::Structures::Mono::String* SlotPlayerPreferenceName(::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SlotPlayerPreferenceName"), {"slot"});
            return _m.Call(slot);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* ToDisplayNameArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("ToDisplayNameArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<bool>* ToOnRightSideArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<bool>*> _m = GetClass().GetMethod(O("ToOnRightSideArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<int>* ToPackedIDArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("ToPackedIDArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
