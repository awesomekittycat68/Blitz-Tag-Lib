#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RandomContainer$1.hpp"

namespace GlobalNamespace {
    struct RandomStrings : ::GlobalNamespace::RandomContainer$1<::BNM::Structures::Mono::String*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RandomStrings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
