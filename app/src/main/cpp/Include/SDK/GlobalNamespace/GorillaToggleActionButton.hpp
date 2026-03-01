#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct GorillaToggleActionButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaToggleActionButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Func<bool>* GetToggleFunc() {
            static BNM::Field<::BNM::Structures::Mono::Func<bool>*> _field = GetClass().GetField(O("toggleFunc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetToggleFunc(::BNM::Structures::Mono::Func<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<bool>*> _field = GetClass().GetField(O("toggleFunc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BindToggleAction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BindToggleAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExecuteToggleAction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteToggleAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
