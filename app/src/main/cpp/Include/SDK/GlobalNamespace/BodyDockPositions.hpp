#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BodyDockPositions_DropPositions.hpp"
#include "TransferrableObject_PositionState.hpp"

namespace GlobalNamespace {
    struct BodyDockPositions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BodyDockPositions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>* GetAllObjects() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>*> _method = GetClass().GetMethod(O("get_allObjects"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllObjects(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_allObjects"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetPreviousLeftHandThrowableDisabledTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_PreviousLeftHandThrowableDisabledTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPreviousLeftHandThrowableIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PreviousLeftHandThrowableIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetPreviousRightHandThrowableDisabledTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_PreviousRightHandThrowableDisabledTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPreviousRightHandThrowableIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PreviousRightHandThrowableIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>* GetAllObjects_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("_allObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetChestTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftArmTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftArmTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WorldShareableItem* GetLeftBackSharableItem() {
            static BNM::Field<::GlobalNamespace::WorldShareableItem*> _field = GetClass().GetField(O("leftBackSharableItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftBackTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftBackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetLeftHandThrowables() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("leftHandThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetObjectsToDisable() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("objectsToDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetObjectsToEnable() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("objectsToEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightArmTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightArmTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WorldShareableItem* GetRightBackShareableItem() {
            static BNM::Field<::GlobalNamespace::WorldShareableItem*> _field = GetClass().GetField(O("rightBackShareableItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightBackTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightBackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetRightHandThrowables() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("rightHandThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSharableItemInstance() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("SharableItemInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetThrowableDisabledIndex() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("throwableDisabledIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetThrowableDisabledTime() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("throwableDisabledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllObjects_fs(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("_allObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftArmTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftArmTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftBackSharableItem(::GlobalNamespace::WorldShareableItem* value) {
            static BNM::Field<::GlobalNamespace::WorldShareableItem*> _field = GetClass().GetField(O("leftBackSharableItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftBackTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftBackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandThrowables(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("leftHandThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsToDisable(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("objectsToDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsToEnable(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("objectsToEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightArmTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightArmTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightBackShareableItem(::GlobalNamespace::WorldShareableItem* value) {
            static BNM::Field<::GlobalNamespace::WorldShareableItem*> _field = GetClass().GetField(O("rightBackShareableItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightBackTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightBackTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandThrowables(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("rightHandThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharableItemInstance(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("SharableItemInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowableDisabledIndex(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("throwableDisabledIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowableDisabledTime(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("throwableDisabledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AllItemsIndexValid(int allItemsIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AllItemsIndexValid"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        ::GlobalNamespace::WorldShareableItem* AllocateSharableInstance(::GlobalNamespace::BodyDockPositions_DropPositions position, ::GlobalNamespace::NetPlayer* owner) {
            static BNM::Method<::GlobalNamespace::WorldShareableItem*> _m = GetClass().GetMethod(O("AllocateSharableInstance"), {"position", "owner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position, owner);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeallocateSharableInstance(::GlobalNamespace::WorldShareableItem* worldShareable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeallocateSharableInstance"), {"worldShareable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(worldShareable);
        }
        void DeallocateSharableInstances() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeallocateSharableInstances"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableAllTransferableItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableAllTransferableItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableTransferrableItem(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableTransferrableItem"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        bool DisableTransferrableItem(::BNM::Structures::Mono::String* transferrableItemName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DisableTransferrableItem"), {"transferrableItemName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transferrableItemName);
        }
        int DropZoneStorageUsed(::GlobalNamespace::BodyDockPositions_DropPositions dropPosition) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DropZoneStorageUsed"), {"dropPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dropPosition);
        }
        void EnableTransferrableGameObject(int allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions dropZone, ::GlobalNamespace::TransferrableObject_PositionState startingPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableTransferrableGameObject"), {"allItemsIndex", "dropZone", "startingPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allItemsIndex, dropZone, startingPosition);
        }
        int EnableTransferrableItem(int allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions startingPosition, ::GlobalNamespace::TransferrableObject_PositionState startingState) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EnableTransferrableItem"), {"allItemsIndex", "startingPosition", "startingState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex, startingPosition, startingState);
        }
        ::GlobalNamespace::BodyDockPositions_DropPositions FirstAvailablePosition(int allItemIndex) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("FirstAvailablePosition"), {"allItemIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemIndex);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>* get_allObjects() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>*> _m = GetClass().GetMethod(O("get_allObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_PreviousLeftHandThrowableDisabledTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_PreviousLeftHandThrowableDisabledTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PreviousLeftHandThrowableIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PreviousLeftHandThrowableIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_PreviousRightHandThrowableDisabledTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_PreviousRightHandThrowableDisabledTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PreviousRightHandThrowableIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PreviousRightHandThrowableIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* GetLeftHandThrowable() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetLeftHandThrowable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* GetLeftHandThrowable(int throwableIndex) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetLeftHandThrowable"), {"throwableIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(throwableIndex);
        }
        ::GameObject* GetRightHandThrowable() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetRightHandThrowable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* GetRightHandThrowable(int throwableIndex) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetRightHandThrowable"), {"throwableIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(throwableIndex);
        }
        static bool IsPositionLeft(::GlobalNamespace::BodyDockPositions_DropPositions pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPositionLeft"), {"pos"});
            return _m.Call(pos);
        }
        ::GlobalNamespace::BodyDockPositions_DropPositions ItemActive(int allItemsIndex) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("ItemActive"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        ::GlobalNamespace::TransferrableObject* ItemPositionInUse(::GlobalNamespace::BodyDockPositions_DropPositions dropPosition) {
            static BNM::Method<::GlobalNamespace::TransferrableObject*> _m = GetClass().GetMethod(O("ItemPositionInUse"), {"dropPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dropPosition);
        }
        ::GlobalNamespace::TransferrableObject_PositionState MapDropPositionToState(::GlobalNamespace::BodyDockPositions_DropPositions pos) {
            static BNM::Method<::GlobalNamespace::TransferrableObject_PositionState> _m = GetClass().GetMethod(O("MapDropPositionToState"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        void MoveTransferableItem(int allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions newPosition, ::GlobalNamespace::TransferrableObject_PositionState newPositionState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveTransferableItem"), {"allItemsIndex", "newPosition", "newPositionState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allItemsIndex, newPosition, newPositionState);
        }
        static ::GlobalNamespace::BodyDockPositions_DropPositions OfflineItemActive(int allItemsIndex) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("OfflineItemActive"), {"allItemsIndex"});
            return _m.Call(allItemsIndex);
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        ::GlobalNamespace::BodyDockPositions_DropPositions OppositePosition(::GlobalNamespace::BodyDockPositions_DropPositions pos) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("OppositePosition"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        bool PositionAvailable(int allItemIndex, ::GlobalNamespace::BodyDockPositions_DropPositions startPos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PositionAvailable"), {"allItemIndex", "startPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemIndex, startPos);
        }
        void RefreshTransferrableItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTransferrableItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int ReturnTransferrableItemIndex(int allItemsIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReturnTransferrableItemIndex"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        void set_allObjects(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_allObjects"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::GlobalNamespace::BodyDockPositions_DockingResult* ToggleTransferrableItem(::BNM::Structures::Mono::String* transferrableItemName, ::GlobalNamespace::BodyDockPositions_DropPositions startingPos, bool bothHands) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DockingResult*> _m = GetClass().GetMethod(O("ToggleTransferrableItem"), {"transferrableItemName", "startingPos", "bothHands"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transferrableItemName, startingPos, bothHands);
        }
        ::GlobalNamespace::BodyDockPositions_DockingResult* ToggleWithHandedness(::BNM::Structures::Mono::String* transferrableItemName, bool isLeftHand, bool bothHands) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DockingResult*> _m = GetClass().GetMethod(O("ToggleWithHandedness"), {"transferrableItemName", "isLeftHand", "bothHands"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transferrableItemName, isLeftHand, bothHands);
        }
        ::GlobalNamespace::TransferrableObject* TransferrableItem(int allItemsIndex) {
            static BNM::Method<::GlobalNamespace::TransferrableObject*> _m = GetClass().GetMethod(O("TransferrableItem"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        bool TransferrableItemActive(::BNM::Structures::Mono::String* transferrableItemName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TransferrableItemActive"), {"transferrableItemName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transferrableItemName);
        }
        bool TransferrableItemActive(int allItemsIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TransferrableItemActive"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        bool TransferrableItemActiveAtPos(::BNM::Structures::Mono::String* transferrableItemName, ::GlobalNamespace::BodyDockPositions_DropPositions dropPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TransferrableItemActiveAtPos"), {"transferrableItemName", "dropPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transferrableItemName, dropPosition);
        }
        int TransferrableItemDisable(int allItemsIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TransferrableItemDisable"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        void TransferrableItemDisableAtPosition(::GlobalNamespace::BodyDockPositions_DropPositions dropPositions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferrableItemDisableAtPosition"), {"dropPositions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dropPositions);
        }
        void TransferrableItemEnableAtPosition(::BNM::Structures::Mono::String* itemName, ::GlobalNamespace::BodyDockPositions_DropPositions dropPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferrableItemEnableAtPosition"), {"itemName", "dropPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(itemName, dropPosition);
        }
        ::GlobalNamespace::BodyDockPositions_DropPositions TransferrableItemPosition(int allItemsIndex) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("TransferrableItemPosition"), {"allItemsIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(allItemsIndex);
        }
        ::BNM::Structures::Mono::List<int>* TransferrableObjectIndexFromName(::BNM::Structures::Mono::String* transObjectName) {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _m = GetClass().GetMethod(O("TransferrableObjectIndexFromName"), {"transObjectName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transObjectName);
        }
        void UpdateHandState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
