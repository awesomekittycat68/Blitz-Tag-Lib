#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DictArrayUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DictArrayUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TKey, typename TValue>
        static void TryGetOrAddArray(::BNM::Structures::Mono::Dictionary<TKey, ::BNM::Structures::Mono::Array<TValue>*>* dict, TKey key, TValue& array, int size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryGetOrAddArray"), {"dict", "key", "array", "size"});
            _m.Call(dict, key, &array, size);
        }
        template <typename TKey, typename TValue>
        static void TryGetOrAddList(::BNM::Structures::Mono::Dictionary<TKey, ::BNM::Structures::Mono::List<TValue>*>* dict, TKey key, ::BNM::IL2CPP::Il2CppObject*& list, int capacity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryGetOrAddList"), {"dict", "key", "list", "capacity"});
            _m.Call(dict, key, &list, capacity);
        }
    };
}
