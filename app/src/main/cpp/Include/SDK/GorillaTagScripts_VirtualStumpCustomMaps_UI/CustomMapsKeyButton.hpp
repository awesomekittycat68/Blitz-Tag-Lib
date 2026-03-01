#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaKeyButton$1.hpp"
#include "CustomMapKeyboardBinding.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps_UI {
    struct CustomMapsKeyButton : ::GlobalNamespace::GorillaKeyButton$1<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapsKeyButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetButtonDisplayNameTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_buttonDisplayNameTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocalized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocalized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLocalizedName() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_localizedName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonDisplayNameTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_buttonDisplayNameTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocalized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocalized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalizedName(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_localizedName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* BindingToString(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding binding) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("BindingToString"), {"binding"});
            return _m.Call(binding);
        }
        void OnButtonPressedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisableEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisableEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnableEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnableEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLanguageChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
