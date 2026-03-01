#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GameObjectScheduling {
    struct GameObjectSchedule_$$c : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GameObjectScheduling", "GameObjectSchedule").GetInnerClass("<>c");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
