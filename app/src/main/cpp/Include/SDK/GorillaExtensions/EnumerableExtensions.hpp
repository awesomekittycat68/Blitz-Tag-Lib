#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct EnumerableExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "EnumerableExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TValue, typename TKey, typename TP0 = void*>
        static TValue MinBy(TP0 ts, ::BNM::Structures::Mono::Func<TValue, TKey>* keyGetter) {
            static BNM::Method<TValue> _m = GetClass().GetMethod(O("MinBy"), {"ts", "keyGetter"});
            return _m.Call(ts, keyGetter);
        }
        template <typename T, typename TP0 = void*>
        static void* Peek(TP0 ts, ::BNM::Structures::Mono::Action<T>* action) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Peek"), {"ts", "action"});
            return _m.Call(ts, action);
        }
    };
}
