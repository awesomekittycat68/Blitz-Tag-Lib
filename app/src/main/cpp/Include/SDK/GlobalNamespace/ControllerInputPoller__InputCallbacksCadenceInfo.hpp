#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ControllerInputPoller__InputCallback.hpp"

namespace GlobalNamespace {
    struct ControllerInputPoller__InputCallbacksCadenceInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ControllerInputPoller").GetInnerClass("_InputCallbacksCadenceInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::ControllerInputPoller__InputCallback>* GetList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ControllerInputPoller__InputCallback>*> _field = GetClass().GetField(O("list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
