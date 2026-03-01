#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"

namespace GlobalNamespace {
    struct GameDockable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameDockable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetDockablePoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("dockablePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDockableRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("dockableRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDockablePoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("dockablePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDockableRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dockableRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GameEntityId BestDock() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("BestDock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetDockablePoint_1() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetDockablePoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDock(::GlobalNamespace::GameEntity* gameEntity, ::GlobalNamespace::GameEntity* attachedToGameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDock"), {"gameEntity", "attachedToGameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity, attachedToGameEntity);
        }
        void OnUndock(::GlobalNamespace::GameEntity* gameEntity, ::GlobalNamespace::GameEntity* attachedToGameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUndock"), {"gameEntity", "attachedToGameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity, attachedToGameEntity);
        }
    };
}
