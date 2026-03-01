#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OnPlayChange_BaseAttribute.hpp"

namespace GlobalNamespace {
    struct OnExitPlay_Attribute : ::GlobalNamespace::OnPlayChange_BaseAttribute {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OnExitPlay_Attribute");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
