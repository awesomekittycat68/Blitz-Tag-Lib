#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LegacyTransferrableObject.hpp"

namespace GlobalNamespace {
    struct LegacyBalloonHoldable : ::GlobalNamespace::LegacyTransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LegacyBalloonHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
