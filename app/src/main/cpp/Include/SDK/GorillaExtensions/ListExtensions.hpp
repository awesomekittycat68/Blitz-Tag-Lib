#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct ListExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "ListExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TCol, typename TVal>
        static TCol ShuffleIntoCollection(::BNM::Structures::Mono::List<TVal>* list) {
            static BNM::Method<TCol> _m = GetClass().GetMethod(O("ShuffleIntoCollection"), {"list"});
            return _m.Call(list);
        }
    };
}
