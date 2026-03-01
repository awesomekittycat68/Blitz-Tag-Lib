#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct MagicIngredient : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicIngredient");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetGrabPtInitParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPtInitParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicIngredientType* GetIngredientTypeSO() {
            static BNM::Field<::GlobalNamespace::MagicIngredientType*> _field = GetClass().GetField(O("IngredientTypeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WorldShareableItem* GetItem() {
            static BNM::Field<::GlobalNamespace::WorldShareableItem*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRootParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rootParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabPtInitParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPtInitParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIngredientTypeSO(::GlobalNamespace::MagicIngredientType* value) {
            static BNM::Field<::GlobalNamespace::MagicIngredientType*> _field = GetClass().GetField(O("IngredientTypeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItem(::GlobalNamespace::WorldShareableItem* value) {
            static BNM::Field<::GlobalNamespace::WorldShareableItem*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRootParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rootParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Disable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void ReParent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReParent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
