#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameHitData.hpp"
#include "../GorillaTagScripts_GhostReactor/GREnemyType.hpp"

namespace GlobalNamespace {
    struct GREnemy : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemy");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRDamageFlash* GetDamageFlash() {
            static BNM::Field<::GlobalNamespace::GRDamageFlash*> _field = GetClass().GetField(O("damageFlash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_GhostReactor::GREnemyType GetEnemyType() {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GREnemyType> _field = GetClass().GetField(O("enemyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRHealthMeter* GetHealthMeter() {
            static BNM::Field<::GlobalNamespace::GRHealthMeter*> _field = GetClass().GetField(O("healthMeter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDamageFlash(::GlobalNamespace::GRDamageFlash* value) {
            static BNM::Field<::GlobalNamespace::GRDamageFlash*> _field = GetClass().GetField(O("damageFlash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnemyType(::GorillaTagScripts_GhostReactor::GREnemyType value) {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GREnemyType> _field = GetClass().GetField(O("enemyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHealthMeter(::GlobalNamespace::GRHealthMeter* value) {
            static BNM::Field<::GlobalNamespace::GRHealthMeter*> _field = GetClass().GetField(O("healthMeter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void HideObjects(::BNM::Structures::Mono::List<::GameObject*>* objects, bool hide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideObjects"), {"objects", "hide"});
            _m.Call(objects, hide);
        }
        static void HideRenderers(::BNM::Structures::Mono::List<::Renderer*>* renderers, bool hide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideRenderers"), {"renderers", "hide"});
            _m.Call(renderers, hide);
        }
        bool IsHitValid(::GlobalNamespace::GameHitData hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHitValid"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hit);
        }
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnHit(::GlobalNamespace::GameHitData hit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHit"), {"hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hit);
        }
        void OnUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetHP(int newHp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHP"), {"newHp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newHp);
        }
        void SetMaxHP(int maxHp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaxHP"), {"maxHp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maxHp);
        }
    };
}
