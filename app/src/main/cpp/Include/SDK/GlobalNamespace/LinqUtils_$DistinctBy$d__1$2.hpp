#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename TSource, typename TResult>
    struct LinqUtils_$DistinctBy$d__1$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LinqUtils").GetInnerClass("<DistinctBy>d__1`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Func<TSource, TResult>* GetSelector() {
            static BNM::Field<::BNM::Structures::Mono::Func<TSource, TResult>*> _field = GetClass().GetField(O("selector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSource() {
            static BNM::Field<void*> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSelector(::BNM::Structures::Mono::Func<TSource, TResult>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<TSource, TResult>*> _field = GetClass().GetField(O("selector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSource(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
