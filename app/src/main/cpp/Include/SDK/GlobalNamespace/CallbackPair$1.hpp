#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct CallbackPair$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CallbackPair`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* GetErrorCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>*> _field = GetClass().GetField(O("errorCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<T>* GetSuccessCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<T>*> _field = GetClass().GetField(O("successCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetErrorCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipError*, int>*> _field = GetClass().GetField(O("errorCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessCallback(::BNM::Structures::Mono::Action<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<T>*> _field = GetClass().GetField(O("successCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
