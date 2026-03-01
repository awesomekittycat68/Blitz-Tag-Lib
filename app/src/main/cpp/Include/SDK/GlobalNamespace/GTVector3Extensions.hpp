#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTVector3Extensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTVector3Extensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector3 Average(TP0 vecs) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Average"), {"vecs"});
            return _m.Call(vecs);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector3 Sum(TP0 vecs) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Sum"), {"vecs"});
            return _m.Call(vecs);
        }
        static ::BNM::Structures::Unity::Vector3 X_Z(::BNM::Structures::Unity::Vector3 vector) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("X_Z"), {"vector"});
            return _m.Call(vector);
        }
    };
}
