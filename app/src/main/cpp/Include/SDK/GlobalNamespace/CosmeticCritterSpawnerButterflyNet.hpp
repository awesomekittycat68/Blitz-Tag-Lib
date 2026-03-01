#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterSpawnerTimed.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterSpawnerButterflyNet : ::GlobalNamespace::CosmeticCritterSpawnerTimed {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterSpawnerButterflyNet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetSpawnRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpawnRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomVariables(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRandomVariables"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
    };
}
