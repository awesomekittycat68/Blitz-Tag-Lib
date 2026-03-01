#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct IAP : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "IAP");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* ConsumePurchase(::BNM::Structures::Mono::String* sku) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("ConsumePurchase"), {"sku"});
            return _m.Call(sku);
        }
    };
}
