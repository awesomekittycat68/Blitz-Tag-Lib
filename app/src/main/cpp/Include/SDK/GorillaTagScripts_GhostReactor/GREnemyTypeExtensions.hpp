#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GREnemyType.hpp"

namespace GorillaTagScripts_GhostReactor {
    struct GREnemyTypeExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.GhostReactor", "GREnemyTypeExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts_GhostReactor::GREnemyType GetEnemyType(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<::GorillaTagScripts_GhostReactor::GREnemyType> _m = GetClass().GetMethod(O("GetEnemyType"), {"entity"});
            return _m.Call(entity);
        }
        static ::BNM::Structures::Mono::String* Pluralize(::GorillaTagScripts_GhostReactor::GREnemyType t) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Pluralize"), {"t"});
            return _m.Call(t);
        }
    };
}
