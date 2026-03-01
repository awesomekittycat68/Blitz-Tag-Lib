#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ModIORequestResult.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct ModIORequestResultAnd$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModIORequestResultAnd`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetData() {
            static BNM::Field<T> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ModIORequestResult GetResult() {
            static BNM::Field<::GlobalNamespace::ModIORequestResult> _field = GetClass().GetField(O("result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResult(::GlobalNamespace::ModIORequestResult value) {
            static BNM::Field<::GlobalNamespace::ModIORequestResult> _field = GetClass().GetField(O("result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
