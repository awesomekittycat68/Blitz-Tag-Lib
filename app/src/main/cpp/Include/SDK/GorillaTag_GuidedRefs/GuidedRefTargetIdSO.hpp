#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GuidedRefIdBaseSO.hpp"

namespace GorillaTag_GuidedRefs {
    struct GuidedRefTargetIdSO : ::GorillaTag_GuidedRefs::GuidedRefIdBaseSO {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefTargetIdSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
