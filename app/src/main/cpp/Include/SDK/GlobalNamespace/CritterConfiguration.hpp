#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CritterAppearance.hpp"
#include "CritterConfiguration_AnimalType.hpp"
#include "CrittersBiome.hpp"

namespace GlobalNamespace {
    struct CritterConfiguration : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CritterConfiguration");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CritterConfiguration_AnimalType GetAnimalType() {
            static BNM::Field<::GlobalNamespace::CritterConfiguration_AnimalType> _field = GetClass().GetField(O("animalType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterTemplate* GetBehaviour() {
            static BNM::Field<::GlobalNamespace::CritterTemplate*> _field = GetClass().GetField(O("behaviour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersBiome GetBiome() {
            static BNM::Field<::GlobalNamespace::CrittersBiome> _field = GetClass().GetField(O("biome"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetCritterMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("critterMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCritterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("critterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RealWorldDateTimeWindow* GetDateLimit() {
            static BNM::Field<::GlobalNamespace::RealWorldDateTimeWindow*> _field = GetClass().GetField(O("dateLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInternalDescription() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("internalDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterSpawnCriteria* GetSpawnCriteria() {
            static BNM::Field<::GlobalNamespace::CritterSpawnCriteria*> _field = GetClass().GetField(O("spawnCriteria"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimalType(::GlobalNamespace::CritterConfiguration_AnimalType value) {
            static BNM::Field<::GlobalNamespace::CritterConfiguration_AnimalType> _field = GetClass().GetField(O("animalType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehaviour(::GlobalNamespace::CritterTemplate* value) {
            static BNM::Field<::GlobalNamespace::CritterTemplate*> _field = GetClass().GetField(O("behaviour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBiome(::GlobalNamespace::CrittersBiome value) {
            static BNM::Field<::GlobalNamespace::CrittersBiome> _field = GetClass().GetField(O("biome"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("critterMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("critterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDateLimit(::GlobalNamespace::RealWorldDateTimeWindow* value) {
            static BNM::Field<::GlobalNamespace::RealWorldDateTimeWindow*> _field = GetClass().GetField(O("dateLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternalDescription(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("internalDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnCriteria(::GlobalNamespace::CritterSpawnCriteria* value) {
            static BNM::Field<::GlobalNamespace::CritterSpawnCriteria*> _field = GetClass().GetField(O("spawnCriteria"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyToCreature(::GlobalNamespace::CrittersPawn* crittersPawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyToCreature"), {"crittersPawn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(crittersPawn);
        }
        void ApplyVisualsTo(::GlobalNamespace::CrittersPawn* critter, bool generateAppearance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVisualsTo"), {"critter", "generateAppearance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, generateAppearance);
        }
        void ApplyVisualsTo(::GlobalNamespace::CritterVisuals* visuals, bool generateAppearance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVisualsTo"), {"visuals", "generateAppearance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visuals, generateAppearance);
        }
        bool CanSpawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanSpawn(::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSpawn"), {"region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(region);
        }
        template <typename TP0 = void*>
        bool DateConditionsMet(TP0 utcDate) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DateConditionsMet"), {"utcDate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(utcDate);
        }
        ::GlobalNamespace::CritterAppearance GenerateAppearance() {
            static BNM::Method<::GlobalNamespace::CritterAppearance> _m = GetClass().GetMethod(O("GenerateAppearance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool RegionMatches(::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RegionMatches"), {"region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(region);
        }
        bool ShouldDespawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool SpawnCriteriaMatches() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SpawnCriteriaMatches"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
