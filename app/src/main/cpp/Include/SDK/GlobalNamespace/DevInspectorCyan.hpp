#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DevInspectorColor.hpp"

namespace GlobalNamespace {
    struct DevInspectorCyan : ::GlobalNamespace::DevInspectorColor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevInspectorCyan");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
