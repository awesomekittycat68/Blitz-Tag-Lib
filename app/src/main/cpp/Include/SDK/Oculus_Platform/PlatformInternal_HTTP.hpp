#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct PlatformInternal_HTTP : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "PlatformInternal").GetInnerClass("HTTP");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
