#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GradientHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GradientHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Gradient* FromColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<::Gradient*> _m = GetClass().GetMethod(O("FromColor"), {"color"});
            return _m.Call(color);
        }
    };
}
