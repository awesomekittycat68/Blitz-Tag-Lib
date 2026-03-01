#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PerformanceSystems {
    struct FastRemoveExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PerformanceSystems", "FastRemoveExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static bool FastRemove(::BNM::Structures::Mono::List<T>* list, T itemToRemove) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FastRemove"), {"list", "itemToRemove"});
            return _m.Call(list, itemToRemove);
        }
        template <typename T, typename TP1 = void*>
        static bool FastRemove(::BNM::Structures::Mono::List<T>* list, TP1 setToRemove) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FastRemove"), {"list", "setToRemove"});
            return _m.Call(list, setToRemove);
        }
    };
}
