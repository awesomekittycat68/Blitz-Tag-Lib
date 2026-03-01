#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct SoundPostMuteButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SoundPostMuteButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SoundPostMuteButton* GetTargetMuteButton() {
            static BNM::Field<::GlobalNamespace::SoundPostMuteButton*> _field = GetClass().GetField(O("_targetMuteButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDummyButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsDummyButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController*>* GetMusicControllers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController*>*> _field = GetClass().GetField(O("musicControllers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTargetMuteButton(::GlobalNamespace::SoundPostMuteButton* value) {
            static BNM::Field<::GlobalNamespace::SoundPostMuteButton*> _field = GetClass().GetField(O("_targetMuteButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDummyButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsDummyButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMusicControllers(::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController*>*> _field = GetClass().GetField(O("musicControllers"));
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
