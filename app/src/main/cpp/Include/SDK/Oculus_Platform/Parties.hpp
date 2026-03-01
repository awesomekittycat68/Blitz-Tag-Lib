#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Parties : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Parties");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
