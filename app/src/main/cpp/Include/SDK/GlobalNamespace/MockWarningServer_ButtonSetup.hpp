#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WarningButtonResult.hpp"

namespace GlobalNamespace {
    struct MockWarningServer_ButtonSetup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MockWarningServer").GetInnerClass("ButtonSetup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::WarningButtonResult GetButtonResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("buttonResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetButtonText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("buttonResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
