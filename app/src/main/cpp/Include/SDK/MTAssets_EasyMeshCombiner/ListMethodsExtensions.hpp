#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace MTAssets_EasyMeshCombiner {
    struct ListMethodsExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("MTAssets.EasyMeshCombiner", "ListMethodsExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static void RemoveAllNullItems(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveAllNullItems"), {"list"});
            _m.Call(list);
        }
    };
}
