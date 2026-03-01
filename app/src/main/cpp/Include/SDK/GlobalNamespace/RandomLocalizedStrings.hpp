#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RandomContainer$1.hpp"

namespace GlobalNamespace {
    struct RandomLocalizedStrings : ::GlobalNamespace::RandomContainer$1<::BNM::IL2CPP::Il2CppObject*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RandomLocalizedStrings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
