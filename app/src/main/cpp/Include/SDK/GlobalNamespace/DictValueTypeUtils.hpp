#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DictValueTypeUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DictValueTypeUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TKey, typename TValue>
        static void TryGetOrAdd(::BNM::Structures::Mono::Dictionary<TKey, TValue>* dict, TKey key, TValue& value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryGetOrAdd"), {"dict", "key", "value"});
            _m.Call(dict, key, &value);
        }
    };
}
