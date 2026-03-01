#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DeserializableList$1.hpp"

namespace Oculus_Platform_Models {
    struct PidList : ::Oculus_Platform_Models::DeserializableList$1<::Oculus_Platform_Models::Pid*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "PidList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
