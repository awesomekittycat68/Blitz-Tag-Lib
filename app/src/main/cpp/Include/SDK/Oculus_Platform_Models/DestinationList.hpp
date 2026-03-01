#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DeserializableList$1.hpp"

namespace Oculus_Platform_Models {
    struct DestinationList : ::Oculus_Platform_Models::DeserializableList$1<::Oculus_Platform_Models::Destination*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "DestinationList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
