#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CallLimitType$1.hpp"

namespace GlobalNamespace {
    struct LimiterType : ::GlobalNamespace::CallLimitType$1<::GlobalNamespace::CallLimiter*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LimiterType");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
