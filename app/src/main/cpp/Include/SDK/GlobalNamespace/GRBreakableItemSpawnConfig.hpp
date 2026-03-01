#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRBreakableItemSpawnConfig_ItemProbability.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct GRBreakableItemSpawnConfig : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRBreakableItemSpawnConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>* GetPerItemProbabilities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*> _field = GetClass().GetField(O("perItemProbabilities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPrecomputedItemTotalWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("precomputedItemTotalWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnAnythingProbability() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnAnythingProbability"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPerItemProbabilities(::BNM::Structures::Mono::List<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*> _field = GetClass().GetField(O("perItemProbabilities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrecomputedItemTotalWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("precomputedItemTotalWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnAnythingProbability(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnAnythingProbability"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetOverride(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<::GlobalNamespace::GRBreakableItemSpawnConfig*> _m = GetClass().GetMethod(O("GetOverride"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entity);
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetOverride(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<::GlobalNamespace::GRBreakableItemSpawnConfig*> _m = GetClass().GetMethod(O("GetOverride"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reactor);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryForRandomItem(::GlobalNamespace::GameEntity* spawnFromEntity, ::GlobalNamespace::GameEntity*& entity, int sanity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryForRandomItem"), {"spawnFromEntity", "entity", "sanity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(spawnFromEntity, &entity, sanity);
        }
        bool TryForRandomItem(::GlobalNamespace::GhostReactor* reactor, ::GlobalNamespace::SRand& srand, ::GlobalNamespace::GameEntity*& entity, int sanity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryForRandomItem"), {"reactor", "srand", "entity", "sanity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reactor, &srand, &entity, sanity);
        }
    };
}
