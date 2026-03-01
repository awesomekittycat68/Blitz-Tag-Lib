#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevWatch : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevWatch");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetDestroyObjectButton() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("DestroyObjectButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFoundNetworkObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("FoundNetworkObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DevWatchSelectableItem*>* GetItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevWatchSelectableItem*>*> _field = GetClass().GetField(O("Items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetItemsFoundContainer() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ItemsFoundContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPanel1() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Panel1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPanel2() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Panel2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRayCastDirection() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("RayCastDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRayCastStartPos() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("RayCastStartPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevWatchButton* GetSearchButton() {
            static BNM::Field<::GlobalNamespace::DevWatchButton*> _field = GetClass().GetField(O("SearchButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevWatchSelectableItem* GetSelectableItemPrefab() {
            static BNM::Field<::GlobalNamespace::DevWatchSelectableItem*> _field = GetClass().GetField(O("SelectableItemPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevWatchSelectableItem* GetSelectedItem() {
            static BNM::Field<::GlobalNamespace::DevWatchSelectableItem*> _field = GetClass().GetField(O("SelectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSelectedItemName() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("SelectedItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTakeOwnershipButton() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("TakeOwnershipButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestroyObjectButton(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("DestroyObjectButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoundNetworkObjects(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("FoundNetworkObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItems(::BNM::Structures::Mono::List<::GlobalNamespace::DevWatchSelectableItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevWatchSelectableItem*>*> _field = GetClass().GetField(O("Items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemsFoundContainer(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ItemsFoundContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPanel1(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Panel1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPanel2(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Panel2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayCastDirection(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("RayCastDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayCastStartPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("RayCastStartPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchButton(::GlobalNamespace::DevWatchButton* value) {
            static BNM::Field<::GlobalNamespace::DevWatchButton*> _field = GetClass().GetField(O("SearchButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectableItemPrefab(::GlobalNamespace::DevWatchSelectableItem* value) {
            static BNM::Field<::GlobalNamespace::DevWatchSelectableItem*> _field = GetClass().GetField(O("SelectableItemPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedItem(::GlobalNamespace::DevWatchSelectableItem* value) {
            static BNM::Field<::GlobalNamespace::DevWatchSelectableItem*> _field = GetClass().GetField(O("SelectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedItemName(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("SelectedItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTakeOwnershipButton(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("TakeOwnershipButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Cleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Cleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ItemSelected(::GlobalNamespace::DevWatchSelectableItem* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ItemSelected"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void SearchItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SearchItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TakeOwneshipOfItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeOwneshipOfItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryDestroyItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDestroyItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
