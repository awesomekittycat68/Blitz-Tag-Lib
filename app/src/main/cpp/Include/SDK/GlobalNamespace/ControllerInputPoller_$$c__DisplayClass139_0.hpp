#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EHandednessFlags.hpp"

namespace GlobalNamespace {
    struct ControllerInputPoller_$$c__DisplayClass139_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ControllerInputPoller").GetInnerClass("<>c__DisplayClass139_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
