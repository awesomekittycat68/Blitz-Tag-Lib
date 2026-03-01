#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    template <typename T>
    struct EnumerableExtensions_$Peek$d__1$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "EnumerableExtensions").GetInnerClass("<Peek>d__1`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<T>* GetAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<T>*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAction(::BNM::Structures::Mono::Action<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<T>*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTs(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ts"));
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
