#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LoadBalancingTransport.hpp"

namespace Photon_Voice {
    struct LoadBalancingFrontend : ::Photon_Voice::LoadBalancingTransport {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LoadBalancingFrontend");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
