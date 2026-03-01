#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct WorldShareableItemManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WorldShareableItemManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::WorldShareableItemManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::WorldShareableItemManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::WorldShareableItemManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::WorldShareableItemManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::WorldShareableItem*>* GetWorldShareableItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::WorldShareableItem*>*> _field = GetClass().GetField(O("worldShareableItems"));
            return _field.Get();
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::WorldShareableItemManager* value) {
            static BNM::Field<::GlobalNamespace::WorldShareableItemManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GlobalNamespace::WorldShareableItem* worldShareableItem) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"worldShareableItem"});
            _m.Call(worldShareableItem);
        }
        static void SetInstance_1(::GlobalNamespace::WorldShareableItemManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void Unregister(::GlobalNamespace::WorldShareableItem* worldShareableItem) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"worldShareableItem"});
            _m.Call(worldShareableItem);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
