#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct GameModeSelectorButtonLayout : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameModeSelectorButtonLayout");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GT/GameModeSelectorButtonLayout]  ";
        static constexpr const char* preErr = "ERROR!!!  ";
        ::BNM::Structures::Mono::List<::GlobalNamespace::ModeSelectButton*>* GetCurrentButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ModeSelectButton*>*> _field = GetClass().GetField(O("currentButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ModeSelectButton* GetPfButton() {
            static BNM::Field<::GlobalNamespace::ModeSelectButton*> _field = GetClass().GetField(O("pf_button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetSuperToggleButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("superToggleButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PartyGameModeWarning* GetWarningScreen() {
            static BNM::Field<::GlobalNamespace::PartyGameModeWarning*> _field = GetClass().GetField(O("warningScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentButtons(::BNM::Structures::Mono::List<::GlobalNamespace::ModeSelectButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ModeSelectButton*>*> _field = GetClass().GetField(O("currentButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPfButton(::GlobalNamespace::ModeSelectButton* value) {
            static BNM::Field<::GlobalNamespace::ModeSelectButton*> _field = GetClass().GetField(O("pf_button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuperToggleButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("superToggleButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningScreen(::GlobalNamespace::PartyGameModeWarning* value) {
            static BNM::Field<::GlobalNamespace::PartyGameModeWarning*> _field = GetClass().GetField(O("warningScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _OnPressedSuperToggleButton(::GlobalNamespace::GorillaPressableButton* btn, bool isLeftHandPress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnPressedSuperToggleButton"), {"btn", "isLeftHandPress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(btn, isLeftHandPress);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetupButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
