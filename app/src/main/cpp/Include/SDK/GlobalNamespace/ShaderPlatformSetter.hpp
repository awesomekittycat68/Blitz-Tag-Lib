#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ShaderPlatformSetter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ShaderPlatformSetter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void HandleRuntimeInitializeOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRuntimeInitializeOnLoad"));
            _m.Call();
        }
    };
}
