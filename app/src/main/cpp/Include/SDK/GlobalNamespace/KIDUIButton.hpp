#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KIDAudioManager_KIDSoundType.hpp"

namespace GlobalNamespace {
    struct KIDUIButton : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUIButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetInputModule() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_InputModule"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBorderImage() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_borderImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetButtonText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::UXSettings* GetCbUXSettings() {
            static BNM::Field<::GlobalNamespace::UXSettings*> _field = GetClass().GetField(O("_cbUXSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDisabledBorderColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_disabledBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDisabledBorderSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_disabledBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDisabledTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_disabledTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetFillImageRef() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_fillImageRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetHighlightedBorderColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_highlightedBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHighlightedBorderSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_highlightedBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHighlightedIcon() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_highlightedIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetHighlightedTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_highlightedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHighlightedVibrationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_highlightedVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHighlightedVibrationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_highlightedVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNormalBorderColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNormalBorderSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_normalBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNormalIcon() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_normalIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNormalTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetPressedBorderColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_pressedBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPressedBorderSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressedBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetPressedTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_pressedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPressedVibrationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressedVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPressedVibrationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressedVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetSelectedBorderColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_selectedBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSelectedBorderSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("_selectedBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetSelectedTextColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_selectedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDAudioManager_KIDSoundType GetOnClickSound() {
            static BNM::Field<::GlobalNamespace::KIDAudioManager_KIDSoundType> _field = GetClass().GetField(O("onClickSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBorderImage(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_borderImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCbUXSettings(::GlobalNamespace::UXSettings* value) {
            static BNM::Field<::GlobalNamespace::UXSettings*> _field = GetClass().GetField(O("_cbUXSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledBorderColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_disabledBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledBorderSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_disabledBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_disabledTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFillImageRef(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_fillImageRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlightedBorderColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_highlightedBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlightedBorderSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_highlightedBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlightedIcon(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_highlightedIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlightedTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_highlightedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlightedVibrationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_highlightedVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlightedVibrationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_highlightedVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalBorderColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalBorderSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_normalBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalIcon(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_normalIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedBorderColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_pressedBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedBorderSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressedBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_pressedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedVibrationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressedVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedVibrationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pressedVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedBorderColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_selectedBorderColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedBorderSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_selectedBorderSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedTextColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_selectedTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnClickSound(::GlobalNamespace::KIDAudioManager_KIDSoundType value) {
            static BNM::Field<::GlobalNamespace::KIDAudioManager_KIDSoundType> _field = GetClass().GetField(O("onClickSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void DoStateTransition(TP0 state, bool instant) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoStateTransition"), {"state", "instant"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, instant);
        }
        void FixStuckPressedState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixStuckPressedState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_InputModule() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_InputModule"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPointerDown(::BNM::IL2CPP::Il2CppObject* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPointerDown"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        void OnPointerEnter(::BNM::IL2CPP::Il2CppObject* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPointerEnter"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        void ResetButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBorderImage_1(::Sprite* newImg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBorderImage"), {"newImg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newImg);
        }
        void SetFont(::BNM::IL2CPP::Il2CppObject* font) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFont"), {"font"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(font);
        }
        void SetIcons(bool normalEnabled, bool highlightedEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIcons"), {"normalEnabled", "highlightedEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(normalEnabled, highlightedEnabled);
        }
        void SetText(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
    };
}
