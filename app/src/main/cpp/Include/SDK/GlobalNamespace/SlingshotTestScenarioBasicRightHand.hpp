#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SlingshotTestScenario.hpp"

namespace GlobalNamespace {
    struct SlingshotTestScenarioBasicRightHand : ::GlobalNamespace::SlingshotTestScenario {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotTestScenarioBasicRightHand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
