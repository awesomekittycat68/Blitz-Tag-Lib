#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OrientedBounds.hpp"

namespace GlobalNamespace {
    struct OrientedBoundsEditorUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OrientedBoundsEditorUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::OrientedBounds ComputeBounds(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* points) {
            static BNM::Method<::GlobalNamespace::OrientedBounds> _m = GetClass().GetMethod(O("ComputeBounds"), {"points"});
            return _m.Call(points);
        }
    };
}
