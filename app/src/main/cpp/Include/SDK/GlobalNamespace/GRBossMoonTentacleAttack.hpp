#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityAttackSimple.hpp"

namespace GlobalNamespace {
    struct GRBossMoonTentacleAttack : ::GlobalNamespace::GRAbilityAttackSimple {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRBossMoonTentacleAttack");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
