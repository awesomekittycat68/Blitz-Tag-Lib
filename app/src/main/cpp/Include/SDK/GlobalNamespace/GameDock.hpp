#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameDockType.hpp"

namespace GlobalNamespace {
    struct GameDock : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameDock");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetDocked() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("docked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilityHaptic* GetDockHaptic() {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("dockHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDockMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("dockMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDockRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("dockRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetDockSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("dockSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameDockType GetDockType() {
            static BNM::Field<::GlobalNamespace::GameDockType> _field = GetClass().GetField(O("dockType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetUndockSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("undockSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDocked(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("docked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockHaptic(::GlobalNamespace::AbilityHaptic* value) {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("dockHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("dockMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dockRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("dockSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockType(::GlobalNamespace::GameDockType value) {
            static BNM::Field<::GlobalNamespace::GameDockType> _field = GetClass().GetField(O("dockType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUndockSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("undockSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanDock(::GlobalNamespace::GameDockable* dockable) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDock"), {"dockable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dockable);
        }
        int GetDockedCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDockedCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDock(::GlobalNamespace::GameEntity* attachedGameEntity, ::GlobalNamespace::GameEntity* attachedToGameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDock"), {"attachedGameEntity", "attachedToGameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(attachedGameEntity, attachedToGameEntity);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUndock(::GlobalNamespace::GameEntity* gameEntity, ::GlobalNamespace::GameEntity* attachedToGameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUndock"), {"gameEntity", "attachedToGameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity, attachedToGameEntity);
        }
    };
}
