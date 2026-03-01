#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorSpawnConfig_EntitySpawnGroup.hpp"

namespace GlobalNamespace {
    struct GhostReactorSpawnConfig : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorSpawnConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>* GetEntitySpawnGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*> _field = GetClass().GetField(O("entitySpawnGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntitySpawnGroups(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*> _field = GetClass().GetField(O("entitySpawnGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
