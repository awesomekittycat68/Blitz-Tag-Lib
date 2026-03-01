#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LeaderboardFilterType.hpp"
#include "LeaderboardStartAt.hpp"

namespace Oculus_Platform {
    struct Challenges : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Challenges");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* Delete(uint64_t challengeID) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("Delete"), {"challengeID"});
            return _m.Call(challengeID);
        }
    };
}
