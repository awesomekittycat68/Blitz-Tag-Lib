#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaConstants : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaConstants");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* redValue = "redValue";
        static constexpr const char* greenValue = "greenValue";
        static constexpr const char* blueValue = "blueValue";
        static constexpr float PlayerColorMin = 0.0f;
        static constexpr const char* PlayerLocalRigName = "Local Gorilla Player";
    };
}
