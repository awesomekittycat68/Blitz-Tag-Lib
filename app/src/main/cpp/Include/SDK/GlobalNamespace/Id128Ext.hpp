#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Id128.hpp"

namespace GlobalNamespace {
    struct Id128Ext : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Id128Ext");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static ::GlobalNamespace::Id128 ToId128(TP0 h) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("ToId128"), {"h"});
            return _m.Call(h);
        }
        template <typename TP0 = void*>
        static ::GlobalNamespace::Id128 ToId128_1(TP0 g) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("ToId128"), {"g"});
            return _m.Call(g);
        }
    };
}
