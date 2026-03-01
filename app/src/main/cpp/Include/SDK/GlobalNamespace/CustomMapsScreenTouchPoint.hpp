#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsScreenTouchPoint_TouchPointDirections.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps_UI/CustomMapKeyboardBinding.hpp"

namespace GlobalNamespace {
    struct CustomMapsScreenTouchPoint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsScreenTouchPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::ButtonColorSettings* GetButtonColorSettings() {
            static BNM::Field<::GorillaTag::ButtonColorSettings*> _field = GetClass().GetField(O("buttonColorSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetColorUpdateCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("colorUpdateCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections GetForwardDirection() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections> _field = GetClass().GetField(O("forwardDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding GetKeyBinding() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding> _field = GetClass().GetField(O("keyBinding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetPressedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("pressedTime"));
            return _field.Get();
        }
        static float GetPressTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("pressTime"));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsTerminalScreen* GetScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminalScreen*> _field = GetClass().GetField(O("screen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTouchPointRenderer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("touchPointRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonColorSettings(::GorillaTag::ButtonColorSettings* value) {
            static BNM::Field<::GorillaTag::ButtonColorSettings*> _field = GetClass().GetField(O("buttonColorSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUpdateCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("colorUpdateCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForwardDirection(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections> _field = GetClass().GetField(O("forwardDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyBinding(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding> _field = GetClass().GetField(O("keyBinding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPressedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pressedTime"));
            _field.Set(value);
        }
        static void SetPressTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pressTime"));
            _field.Set(value);
        }
        void SetScreen(::GlobalNamespace::CustomMapsTerminalScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminalScreen*> _field = GetClass().GetField(O("screen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchPointRenderer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("touchPointRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetForwardDirection_1() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetForwardDirection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnButtonPressedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void PressButtonColourUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButtonColourUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
