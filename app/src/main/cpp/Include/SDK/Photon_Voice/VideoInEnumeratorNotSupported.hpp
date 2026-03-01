#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DeviceEnumeratorNotSupported.hpp"

namespace Photon_Voice {
    struct VideoInEnumeratorNotSupported : ::Photon_Voice::DeviceEnumeratorNotSupported {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "VideoInEnumeratorNotSupported");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
