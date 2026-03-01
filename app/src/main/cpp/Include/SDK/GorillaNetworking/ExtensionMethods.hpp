#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct ExtensionMethods : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "ExtensionMethods");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TKey, typename TValue>
        static void AddOrUpdate(::BNM::Structures::Mono::Dictionary<TKey, TValue>* dict, TKey key, TValue value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddOrUpdate"), {"dict", "key", "value"});
            _m.Call(dict, key, value);
        }
        template <typename T>
        static void SafeInvoke(::BNM::Structures::Mono::Action<T>* action, T data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SafeInvoke"), {"action", "data"});
            _m.Call(action, data);
        }
    };
}
