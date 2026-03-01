#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterSpawner.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterSpawnerShadeFleeing : ::GlobalNamespace::CosmeticCritterSpawner {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterSpawnerShadeFleeing");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetSpawnPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpawnPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnSpawn(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void SetSpawnPosition_1(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSpawnPosition"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos);
        }
    };
}
