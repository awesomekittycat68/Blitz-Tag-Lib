#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterAction.hpp"
#include "NetworkSceneObject.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterManager : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CosmeticCritterManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::CosmeticCritterManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        ::GlobalNamespace::CosmeticCritterManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::CosmeticCritterManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::CosmeticCritterManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritter*>* GetActiveCritters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritter*>*> _field = GetClass().GetField(O("activeCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CosmeticCritter*>* GetActiveCrittersBySeed() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CosmeticCritter*>*> _field = GetClass().GetField(O("activeCrittersBySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, int>* GetActiveCrittersPerType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, int>*> _field = GetClass().GetField(O("activeCrittersPerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>* GetInactiveCrittersByType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>*> _field = GetClass().GetField(O("inactiveCrittersByType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>* GetLocalCritterCatchers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>*> _field = GetClass().GetField(O("localCritterCatchers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>* GetLocalCritterSpawners() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>*> _field = GetClass().GetField(O("localCritterSpawners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterHoldable*>* GetLocalHoldables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterHoldable*>*> _field = GetClass().GetField(O("localHoldables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>* GetRemoteCritterCatchers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>*> _field = GetClass().GetField(O("remoteCritterCatchers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>* GetRemoteCritterSpawners() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>*> _field = GetClass().GetField(O("remoteCritterSpawners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<void*>*>* GetTickForEachCritterOfType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<void*>*>*> _field = GetClass().GetField(O("tickForEachCritterOfType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveCritters(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritter*>*> _field = GetClass().GetField(O("activeCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveCrittersBySeed(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CosmeticCritter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CosmeticCritter*>*> _field = GetClass().GetField(O("activeCrittersBySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveCrittersPerType(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, int>*> _field = GetClass().GetField(O("activeCrittersPerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInactiveCrittersByType(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>*> _field = GetClass().GetField(O("inactiveCrittersByType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalCritterCatchers(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>*> _field = GetClass().GetField(O("localCritterCatchers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalCritterSpawners(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>*> _field = GetClass().GetField(O("localCritterSpawners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalHoldables(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterHoldable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterHoldable*>*> _field = GetClass().GetField(O("localHoldables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteCritterCatchers(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterCatcher*>*> _field = GetClass().GetField(O("remoteCritterCatchers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteCritterSpawners(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>*> _field = GetClass().GetField(O("remoteCritterSpawners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTickForEachCritterOfType(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<void*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::List<void*>*>*> _field = GetClass().GetField(O("tickForEachCritterOfType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CatchCosmeticCritterRPC(::GlobalNamespace::CosmeticCritterAction catchAction, int catcherID, int seed, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CatchCosmeticCritterRPC"), {"catchAction", "catcherID", "seed", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(catchAction, catcherID, seed, info);
        }
        void CosmeticCritterRPC(::GlobalNamespace::CosmeticCritterAction action, int holdableID, int seed, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CosmeticCritterRPC"), {"action", "holdableID", "seed", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action, holdableID, seed, info);
        }
        void FreeCritter(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FreeCritter"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        static ::GlobalNamespace::CosmeticCritterManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::CosmeticCritterManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterCatcher(::GlobalNamespace::CosmeticCritterCatcher* catcher) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterCatcher"), {"catcher"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(catcher);
        }
        void RegisterIndependentSpawner(::GlobalNamespace::CosmeticCritterSpawnerIndependent* spawner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterIndependentSpawner"), {"spawner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawner);
        }
        void RegisterLocalHoldable(::GlobalNamespace::CosmeticCritterHoldable* holdable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterLocalHoldable"), {"holdable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable);
        }
        template <typename TP1 = void*>
        void RegisterTickForEachCritter(::BNM::MonoType* type, TP1 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterTickForEachCritter"), {"type", "target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, target);
        }
        void ResetCosmeticCritters(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetCosmeticCritters"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void ResetLocalCallLimiters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetLocalCallLimiters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReuseOrSpawnNewCritter(::GlobalNamespace::CosmeticCritterSpawner* spawner, int seed, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReuseOrSpawnNewCritter"), {"spawner", "seed", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawner, seed, time);
        }
        static void set_Instance(::GlobalNamespace::CosmeticCritterManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SpawnCosmeticCritterRPC(int spawnerID, int seed, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnCosmeticCritterRPC"), {"spawnerID", "seed", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawnerID, seed, info);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnregisterCatcher(::GlobalNamespace::CosmeticCritterCatcher* catcher) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterCatcher"), {"catcher"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(catcher);
        }
        void UnregisterIndependentSpawner(::GlobalNamespace::CosmeticCritterSpawnerIndependent* spawner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterIndependentSpawner"), {"spawner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawner);
        }
        template <typename TP1 = void*>
        void UnregisterTickForEachCritter(::BNM::MonoType* type, TP1 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterTickForEachCritter"), {"type", "target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, target);
        }
    };
}
