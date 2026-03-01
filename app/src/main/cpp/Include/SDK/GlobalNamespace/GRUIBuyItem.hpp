#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRUIBuyItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIBuyItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaPressableButton* GetBuyItemButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("buyItemButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntityPrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entityPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEntityTypeId() {
            static BNM::Field<int> _field = GetClass().GetField(O("entityTypeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetItemInfoLabel() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("itemInfoLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStandId() {
            static BNM::Field<int> _field = GetClass().GetField(O("standId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuyItemButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("buyItemButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityPrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entityPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityTypeId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("entityTypeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemInfoLabel(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("itemInfoLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("standId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Transform* GetSpawnMarker_1() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetSpawnMarker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBuyItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBuyItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup(int standId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"standId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(standId);
        }
    };
}
