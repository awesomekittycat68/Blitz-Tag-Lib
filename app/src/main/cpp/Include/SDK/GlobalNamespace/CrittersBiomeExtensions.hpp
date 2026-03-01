#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersBiome.hpp"

namespace GlobalNamespace {
    struct CrittersBiomeExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersBiomeExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>* GetAllScannableBiomes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>*> _field = GetClass().GetField(O("_allScannableBiomes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>* GetHabitatBiomes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>*> _field = GetClass().GetField(O("_habitatBiomes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersBiome, ::BNM::Structures::Mono::String*>* GetHabitatLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersBiome, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_habitatLookup"));
            return _field.Get();
        }
        static void SetAllScannableBiomes(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>*> _field = GetClass().GetField(O("_allScannableBiomes"));
            _field.Set(value);
        }
        static void SetHabitatBiomes(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersBiome>*> _field = GetClass().GetField(O("_habitatBiomes"));
            _field.Set(value);
        }
        static void SetHabitatLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersBiome, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersBiome, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_habitatLookup"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* GetHabitatDescription(::GlobalNamespace::CrittersBiome biome) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetHabitatDescription"), {"biome"});
            return _m.Call(biome);
        }
    };
}
