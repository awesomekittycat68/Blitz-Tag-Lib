#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct CollectionExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "CollectionExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T, typename TP0 = void*, typename TP1 = void*>
        static void AddAll(TP0 collection, TP1 ts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddAll"), {"collection", "ts"});
            _m.Call(collection, ts);
        }
        template <typename TP0 = void*>
        static void CopyStringKeepDelimiterAtEnd(TP0 hash, ::BNM::Structures::Mono::String* str, char delimiter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStringKeepDelimiterAtEnd"), {"hash", "str", "delimiter"});
            _m.Call(hash, str, delimiter);
        }
    };
}
