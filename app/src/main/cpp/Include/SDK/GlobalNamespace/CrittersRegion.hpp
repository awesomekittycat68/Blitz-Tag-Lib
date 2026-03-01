#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersBiome.hpp"

namespace GlobalNamespace {
    struct CrittersRegion : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersRegion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCritterCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CritterCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetID(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>* GetRegions() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>*> _method = GetClass().GetMethod(O("get_Regions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>* GetCritters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>*> _field = GetClass().GetField(O("_critters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersRegion*>* GetRegionLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersRegion*>*> _field = GetClass().GetField(O("_regionLookup"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>* GetRegions_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>*> _field = GetClass().GetField(O("_regions"));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersBiome GetBiome() {
            static BNM::Field<::GlobalNamespace::CrittersBiome> _field = GetClass().GetField(O("Biome"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxCritters() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCritters(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersPawn*>*> _field = GetClass().GetField(O("_critters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRegionLookup(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersRegion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CrittersRegion*>*> _field = GetClass().GetField(O("_regionLookup"));
            _field.Set(value);
        }
        static void SetRegions(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>*> _field = GetClass().GetField(O("_regions"));
            _field.Set(value);
        }
        void SetBiome(::GlobalNamespace::CrittersBiome value) {
            static BNM::Field<::GlobalNamespace::CrittersBiome> _field = GetClass().GetField(O("Biome"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCritters(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCritter(::GlobalNamespace::CrittersPawn* pawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCritter"), {"pawn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pawn);
        }
        static void AddCritterToRegion(::GlobalNamespace::CrittersPawn* critter, int regionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCritterToRegion"), {"critter", "regionId"});
            _m.Call(critter, regionId);
        }
        int get_CritterCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CritterCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>* get_Regions() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersRegion*>*> _m = GetClass().GetMethod(O("get_Regions"));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetSpawnPoint() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetSpawnPoint"));
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
        static void RegisterRegion(::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterRegion"), {"region"});
            _m.Call(region);
        }
        void RemoveCritter(::GlobalNamespace::CrittersPawn* pawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCritter"), {"pawn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pawn);
        }
        static void RemoveCritterFromRegion(::GlobalNamespace::CrittersPawn* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCritterFromRegion"), {"critter"});
            _m.Call(critter);
        }
        void set_ID(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void UnregisterRegion(::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterRegion"), {"region"});
            _m.Call(region);
        }
    };
}
