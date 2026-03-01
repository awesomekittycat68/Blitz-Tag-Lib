#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"

namespace GlobalNamespace {
    struct GRDebugUpgradeKiosk : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRDebugUpgradeKiosk");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetEnemySpawnNode() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("enemySpawnNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGrManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>* GetSpawnedEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>*> _field = GetClass().GetField(O("spawnedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetToolSpawnNode() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("toolSpawnNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUpgradeSpawnNode() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("upgradeSpawnNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnemySpawnNode(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("enemySpawnNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityId>*> _field = GetClass().GetField(O("spawnedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolSpawnNode(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("toolSpawnNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeSpawnNode(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("upgradeSpawnNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Init(::GlobalNamespace::GhostReactorManager* grManager, ::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"grManager", "reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grManager, reactor);
        }
        void KillAllEnemies() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KillAllEnemies"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonKillAllEnemies() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonKillAllEnemies"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnChaosSeed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnChaosSeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnChaser() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnChaser"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnClub() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnClub"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnCollector() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnCollector"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnDirectionalShield() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnDirectionalShield"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnDockWrist() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnDockWrist"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnEntity(::BNM::Structures::Mono::String* entityName, ::Transform* location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnEntity"), {"entityName", "location"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityName, location);
        }
        void OnButtonSpawnFlash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnFlash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnIceRanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnIceRanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnLantern() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnLantern"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnPest() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnPest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnPhantom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnPhantom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnRanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnRanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnRevive() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnRevive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnShieldGun() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnShieldGun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnSmallBackpack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnSmallBackpack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnStatusWatch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnStatusWatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnSummoner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnSummoner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgBatonDmg1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgBatonDmg1"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgBatonDmg2() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgBatonDmg2"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgBatonDmg3() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgBatonDmg3"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgEff1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgEff1"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgEff2() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgEff2"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgEff3() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgEff3"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgEfficiency1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgEfficiency1"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgEfficiency2() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgEfficiency2"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonSpawnUpgEfficiency3() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSpawnUpgEfficiency3"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
