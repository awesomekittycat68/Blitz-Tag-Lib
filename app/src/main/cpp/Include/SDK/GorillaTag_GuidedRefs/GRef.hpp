#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRef_EResolveModes.hpp"

namespace GorillaTag_GuidedRefs {
    struct GRef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GRef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool IsAnyResolveModeOn(::GorillaTag_GuidedRefs::GRef_EResolveModes mode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnyResolveModeOn"), {"mode"});
            return _m.Call(mode);
        }
        static bool ShouldResolveNow(::GorillaTag_GuidedRefs::GRef_EResolveModes mode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldResolveNow"), {"mode"});
            return _m.Call(mode);
        }
    };
}
