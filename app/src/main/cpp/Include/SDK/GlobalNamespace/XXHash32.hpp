#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct XXHash32 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "XXHash32");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint32_t Prime32_1 = 2654435761;
        static constexpr uint32_t Prime32_2 = 2246822519;
        static constexpr uint32_t Prime32_3 = 3266489917;
        static constexpr uint32_t Prime32_4 = 668265263;
        static constexpr uint32_t Prime32_5 = 374761393;
        static constexpr int StripeSize = 16;
        static int Compute(::BNM::Structures::Mono::String* s, uint32_t seed) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"s", "seed"});
            return _m.Call(s, seed);
        }
        template <typename TP0 = void*>
        static uint32_t Compute(TP0 input, uint32_t seed) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Compute"), {"input", "seed"});
            return _m.Call(input, seed);
        }
    };
}
