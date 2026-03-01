#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LinqUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LinqUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<T>* AsArray(TP0 source) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("AsArray"), {"source"});
            return _m.Call(source);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* AsList(TP0 source) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("AsList"), {"source"});
            return _m.Call(source);
        }
        template <typename TSource, typename TResult, typename TP0 = void*>
        static void* DistinctBy(TP0 source, ::BNM::Structures::Mono::Func<TSource, TResult>* selector) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DistinctBy"), {"source", "selector"});
            return _m.Call(source, selector);
        }
        template <typename T, typename TP0 = void*>
        static void* ForEach(TP0 source, ::BNM::Structures::Mono::Action<T>* action) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ForEach"), {"source", "action"});
            return _m.Call(source, action);
        }
        template <typename TSource, typename TResult, typename TP0 = void*>
        static void* SelectManyNullSafe(TP0 sources, ::BNM::Structures::Mono::Func<TSource, void*>* selector) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SelectManyNullSafe"), {"sources", "selector"});
            return _m.Call(sources, selector);
        }
        template <typename T>
        static void* Self(T value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Self"), {"value"});
            return _m.Call(value);
        }
        template <typename T, typename TP0 = void*>
        static void* Transform(TP0 list, ::BNM::Structures::Mono::Func<T, T>* action) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Transform"), {"list", "action"});
            return _m.Call(list, action);
        }
    };
}
