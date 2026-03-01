#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SITouchscreenButton_ButtonMode.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"

namespace GlobalNamespace {
    struct SITouchscreenButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITouchscreenButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float DEBOUNCE_TIME = 0.2f;
        bool GetIsReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsToggledOn() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsToggledOn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetEnableTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_enableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsToggledOn_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isToggledOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPressSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_pressSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPressSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIScreenRegion* GetScreenRegion() {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("_screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartToggledOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_startToggledOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButton_ButtonMode GetButtonMode() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton_ButtonMode> _field = GetClass().GetField(O("buttonMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetButtonPressed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("buttonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetButtonToggled() {
            static BNM::Field<void*> _field = GetClass().GetField(O("buttonToggled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType GetButtonType() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType> _field = GetClass().GetField(O("buttonType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetData() {
            static BNM::Field<int> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsUsable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUsable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnableTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_enableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsToggledOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isToggledOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_pressSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenRegion(::GlobalNamespace::SIScreenRegion* value) {
            static BNM::Field<::GlobalNamespace::SIScreenRegion*> _field = GetClass().GetField(O("_screenRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartToggledOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_startToggledOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonMode(::GlobalNamespace::SITouchscreenButton_ButtonMode value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton_ButtonMode> _field = GetClass().GetField(O("buttonMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonPressed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("buttonPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonToggled(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("buttonToggled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonType(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType> _field = GetClass().GetField(O("buttonType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsUsable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUsable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Click(bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Click"), {"leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand);
        }
        bool get_IsReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsToggledOn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsToggledOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void PressButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetToggleState(bool state, bool invokeEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetToggleState"), {"state", "invokeEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, invokeEvent);
        }
    };
}
