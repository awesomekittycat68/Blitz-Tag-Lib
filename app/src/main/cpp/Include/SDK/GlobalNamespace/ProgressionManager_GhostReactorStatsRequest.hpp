#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_GhostReactorStatsRequest : ::GlobalNamespace::ProgressionManager_MothershipRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("GhostReactorStatsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
