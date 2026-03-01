#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    template <typename T>
    struct ListUtilsUnsafe$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "ListUtilsUnsafe`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<T>* GetInternalArray(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("GetInternalArray"), {"list"});
            return _m.Call(list);
        }
    };
}
