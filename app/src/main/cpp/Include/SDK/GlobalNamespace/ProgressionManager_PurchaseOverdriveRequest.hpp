#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipUserDataWriteRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_PurchaseOverdriveRequest : ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("PurchaseOverdriveRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
