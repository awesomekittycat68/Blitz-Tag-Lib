#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ArrayUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ArrayUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static int BinarySearch(::BNM::Structures::Mono::Array<T>* array, T value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("BinarySearch"), {"array", "value"});
            return _m.Call(array, value);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* Clone(::BNM::Structures::Mono::Array<T>* source) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("Clone"), {"source"});
            return _m.Call(source);
        }
        template <typename T>
        static ::BNM::Structures::Mono::List<T>* Clone(::BNM::Structures::Mono::List<T>* source) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("Clone"), {"source"});
            return _m.Call(source);
        }
        template <typename T>
        static bool GTEnsureNoNulls(T& unityObjs) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GTEnsureNoNulls"), {"unityObjs"});
            return _m.Call(&unityObjs);
        }
        template <typename T>
        static int IndexOfRef(::BNM::Structures::Mono::Array<T>* array, T value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IndexOfRef"), {"array", "value"});
            return _m.Call(array, value);
        }
        template <typename T>
        static int IndexOfRef(::BNM::Structures::Mono::List<T>* list, T value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IndexOfRef"), {"list", "value"});
            return _m.Call(list, value);
        }
        template <typename T>
        static bool IsNullOrEmpty(::BNM::Structures::Mono::Array<T>* array) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNullOrEmpty"), {"array"});
            return _m.Call(array);
        }
        template <typename T>
        static bool IsNullOrEmpty(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNullOrEmpty"), {"list"});
            return _m.Call(list);
        }
        template <typename T>
        static void Swap(::BNM::Structures::Mono::Array<T>* array, int from, int to) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Swap"), {"array", "from", "to"});
            _m.Call(array, from, to);
        }
        template <typename T>
        static void Swap(::BNM::Structures::Mono::List<T>* list, int from, int to) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Swap"), {"list", "from", "to"});
            _m.Call(list, from, to);
        }
    };
}
