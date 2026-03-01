#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CallLimitType$1.hpp"

namespace GlobalNamespace {
    struct CooldownType : ::GlobalNamespace::CallLimitType$1<::GlobalNamespace::CallLimiterWithCooldown*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CooldownType");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
