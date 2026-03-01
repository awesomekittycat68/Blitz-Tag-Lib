#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct DictionaryExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "DictionaryExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TKey, typename TValue, typename TP0 = void*>
        static TValue GetOrCreate(TP0 dict, TKey key) {
            static BNM::Method<TValue> _m = GetClass().GetMethod(O("GetOrCreate"), {"dict", "key"});
            return _m.Call(dict, key);
        }
    };
}
