#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps_UI/CustomMapsKeyButton.hpp"

namespace GlobalNamespace {
    struct CustomMapsKeyToggleButton : ::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapsKeyButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsKeyToggleButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PressButtonColourUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButtonColourUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetButtonStatus(bool newIsPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetButtonStatus"), {"newIsPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newIsPressed);
        }
    };
}
