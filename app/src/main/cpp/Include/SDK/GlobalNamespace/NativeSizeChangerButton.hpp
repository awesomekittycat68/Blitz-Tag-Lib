#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct NativeSizeChangerButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NativeSizeChangerButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::NativeSizeChanger* GetNativeSizeChanger() {
            static BNM::Field<::GlobalNamespace::NativeSizeChanger*> _field = GetClass().GetField(O("nativeSizeChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NativeSizeChangerSettings* GetSettings() {
            static BNM::Field<::GlobalNamespace::NativeSizeChangerSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNativeSizeChanger(::GlobalNamespace::NativeSizeChanger* value) {
            static BNM::Field<::GlobalNamespace::NativeSizeChanger*> _field = GetClass().GetField(O("nativeSizeChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::GlobalNamespace::NativeSizeChangerSettings* value) {
            static BNM::Field<::GlobalNamespace::NativeSizeChangerSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
