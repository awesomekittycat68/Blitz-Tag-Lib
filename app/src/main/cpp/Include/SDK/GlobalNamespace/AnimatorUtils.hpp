#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AnimatorUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnimatorUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void ResetToEntryState(::Animator* a) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToEntryState"), {"a"});
            _m.Call(a);
        }
    };
}
