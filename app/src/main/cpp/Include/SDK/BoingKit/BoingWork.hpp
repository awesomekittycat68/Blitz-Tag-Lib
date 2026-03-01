#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct BoingWork : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWork");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 ComputeTranslationalResults(::Transform* t, ::BNM::Structures::Unity::Vector3 src, ::BNM::Structures::Unity::Vector3 dst, ::BoingKit::BoingBehavior* b) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ComputeTranslationalResults"), {"t", "src", "dst", "b"});
            return _m.Call(t, src, dst, b);
        }
    };
}
