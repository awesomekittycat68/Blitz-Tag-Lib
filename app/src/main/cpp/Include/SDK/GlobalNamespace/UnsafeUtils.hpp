#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UnsafeUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnsafeUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static T& GetInternalArray(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<T&> _m = GetClass().GetMethod(O("GetInternalArray"), {"list"});
            return _m.Call(list);
        }
        template <typename T>
        static T& GetInvocationListUnsafe(T delegate) {
            static BNM::Method<T&> _m = GetClass().GetMethod(O("GetInvocationListUnsafe"), {"delegate"});
            return _m.Call(delegate);
        }
    };
}
