#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaPressableButton.hpp"

namespace GorillaTagScripts {
    struct BuilderOptionButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderOptionButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GorillaTagScripts::BuilderOptionButton*, bool>* GetOnPressed() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaTagScripts::BuilderOptionButton*, bool>*> _field = GetClass().GetField(O("onPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnPressed(::BNM::Structures::Mono::Action<::GorillaTagScripts::BuilderOptionButton*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaTagScripts::BuilderOptionButton*, bool>*> _field = GetClass().GetField(O("onPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivationWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivationWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetPressed(bool pressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPressed"), {"pressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressed);
        }
        void Setup(::BNM::Structures::Mono::Action<::GorillaTagScripts::BuilderOptionButton*, bool>* onPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"onPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onPressed);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
