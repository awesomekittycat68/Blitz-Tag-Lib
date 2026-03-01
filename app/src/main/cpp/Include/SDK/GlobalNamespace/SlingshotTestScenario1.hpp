#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SlingshotTestScenario.hpp"

namespace GlobalNamespace {
    struct SlingshotTestScenario1 : ::GlobalNamespace::SlingshotTestScenario {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotTestScenario1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
