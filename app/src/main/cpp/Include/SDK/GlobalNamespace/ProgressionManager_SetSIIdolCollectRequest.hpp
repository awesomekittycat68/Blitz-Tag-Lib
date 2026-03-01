#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_RewardRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_SetSIIdolCollectRequest : ::GlobalNamespace::ProgressionManager_RewardRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("SetSIIdolCollectRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
