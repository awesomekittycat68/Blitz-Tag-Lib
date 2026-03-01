#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterSpawnerTimed.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterSpawnerShadeHidden : ::GlobalNamespace::CosmeticCritterSpawnerTimed {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterSpawnerShadeHidden");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector2 GetOrbitHeightOffsetMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("orbitHeightOffsetMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetOrbitRadiusMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("orbitRadiusMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOrbitHeightOffsetMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("orbitHeightOffsetMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrbitRadiusMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("orbitRadiusMinMax"));
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
