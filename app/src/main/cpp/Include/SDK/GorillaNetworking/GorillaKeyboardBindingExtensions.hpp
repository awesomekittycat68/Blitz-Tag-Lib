#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaKeyboardBindings.hpp"

namespace GorillaNetworking {
    struct GorillaKeyboardBindingExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaKeyboardBindingExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool FromNumberBindingToInt(::GorillaNetworking::GorillaKeyboardBindings binding, int& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FromNumberBindingToInt"), {"binding", "result"});
            return _m.Call(binding, &result);
        }
    };
}
