#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct Collision : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "Collision");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool SphereBox(::BNM::Structures::Unity::Vector3 centerOffsetA, float radiusA, ::BNM::Structures::Unity::Vector3 halfExtentB, ::BNM::Structures::Unity::Vector3& push) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SphereBox"), {"centerOffsetA", "radiusA", "halfExtentB", "push"});
            return _m.Call(centerOffsetA, radiusA, halfExtentB, &push);
        }
        static bool SphereBoxInverse(::BNM::Structures::Unity::Vector3 centerOffsetA, float radiusA, ::BNM::Structures::Unity::Vector3 halfExtentB, ::BNM::Structures::Unity::Vector3& push) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SphereBoxInverse"), {"centerOffsetA", "radiusA", "halfExtentB", "push"});
            return _m.Call(centerOffsetA, radiusA, halfExtentB, &push);
        }
        static bool SphereCapsule(::BNM::Structures::Unity::Vector3 centerA, float radiusA, ::BNM::Structures::Unity::Vector3 headB, ::BNM::Structures::Unity::Vector3 tailB, float radiusB, ::BNM::Structures::Unity::Vector3& push) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SphereCapsule"), {"centerA", "radiusA", "headB", "tailB", "radiusB", "push"});
            return _m.Call(centerA, radiusA, headB, tailB, radiusB, &push);
        }
        static bool SphereCapsuleInverse(::BNM::Structures::Unity::Vector3 centerA, float radiusA, ::BNM::Structures::Unity::Vector3 headB, ::BNM::Structures::Unity::Vector3 tailB, float radiusB, ::BNM::Structures::Unity::Vector3& push) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SphereCapsuleInverse"), {"centerA", "radiusA", "headB", "tailB", "radiusB", "push"});
            return _m.Call(centerA, radiusA, headB, tailB, radiusB, &push);
        }
        static bool SphereSphere(::BNM::Structures::Unity::Vector3 centerA, float radiusA, ::BNM::Structures::Unity::Vector3 centerB, float radiusB, ::BNM::Structures::Unity::Vector3& push) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SphereSphere"), {"centerA", "radiusA", "centerB", "radiusB", "push"});
            return _m.Call(centerA, radiusA, centerB, radiusB, &push);
        }
        static bool SphereSphereInverse(::BNM::Structures::Unity::Vector3 centerA, float radiusA, ::BNM::Structures::Unity::Vector3 centerB, float radiusB, ::BNM::Structures::Unity::Vector3& push) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SphereSphereInverse"), {"centerA", "radiusA", "centerB", "radiusB", "push"});
            return _m.Call(centerA, radiusA, centerB, radiusB, &push);
        }
    };
}
