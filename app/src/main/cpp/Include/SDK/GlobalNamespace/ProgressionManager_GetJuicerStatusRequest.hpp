#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipUserDataWriteRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_GetJuicerStatusRequest : ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("GetJuicerStatusRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
