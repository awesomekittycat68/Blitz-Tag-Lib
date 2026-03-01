#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    template <typename T0, typename T1>
    struct ExclusionZoneStateEvent$2_TypedEvent : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ExclusionZoneStateEvent`2").GetInnerClass("TypedEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
