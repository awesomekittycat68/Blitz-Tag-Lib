#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename TSource, typename TResult>
    struct LinqUtils_$SelectManyNullSafe$d__0$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LinqUtils").GetInnerClass("<SelectManyNullSafe>d__0`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Func<TSource, void*>* GetSelector() {
            static BNM::Field<::BNM::Structures::Mono::Func<TSource, void*>*> _field = GetClass().GetField(O("selector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSources() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSelector(::BNM::Structures::Mono::Func<TSource, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<TSource, void*>*> _field = GetClass().GetField(O("selector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSources(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sources"));
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
