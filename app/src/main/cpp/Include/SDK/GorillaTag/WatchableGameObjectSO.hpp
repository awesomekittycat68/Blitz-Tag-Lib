#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/WatchableGenericSO$1.hpp"

namespace GorillaTag {
    struct WatchableGameObjectSO : ::GlobalNamespace::WatchableGenericSO$1<::GameObject*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "WatchableGameObjectSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
