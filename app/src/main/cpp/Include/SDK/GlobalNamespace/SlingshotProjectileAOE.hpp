#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SlingshotProjectile.hpp"

namespace GlobalNamespace {
    struct SlingshotProjectileAOE : ::GlobalNamespace::SlingshotProjectile {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotProjectileAOE");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
