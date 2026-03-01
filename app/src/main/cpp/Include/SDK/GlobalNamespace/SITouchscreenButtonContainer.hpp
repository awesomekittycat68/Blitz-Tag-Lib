#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"

namespace GlobalNamespace {
    struct SITouchscreenButtonContainer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITouchscreenButtonContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsUsable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isUsable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsUsable(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isUsable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Color GetCachedForegroundColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_cachedForegroundColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoConfigure() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoConfigure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetBackGround() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("backGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetBackgroundShadow() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("backgroundShadow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButton* GetButton() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetButtonText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetButtonTextString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buttonTextString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetData() {
            static BNM::Field<int> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetForeGround() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("foreGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStation() {
            static BNM::Field<void*> _field = GetClass().GetField(O("station"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetToggleOffColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("toggleOffColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetToggleOffText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toggleOffText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetToggleOnColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("toggleOnColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetToggleOnText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toggleOnText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType GetType_f() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedForegroundColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_cachedForegroundColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoConfigure(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoConfigure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackGround(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("backGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackgroundShadow(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("backgroundShadow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton(::GlobalNamespace::SITouchscreenButton* value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonTextString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buttonTextString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForeGround(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("foreGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStation(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("station"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOffColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("toggleOffColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOffText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toggleOffText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOnColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("toggleOnColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOnText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("toggleOnText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_isUsable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isUsable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnToggleStateChanged(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType type, int data, int actorNr, bool isToggledOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToggleStateChanged"), {"type", "data", "actorNr", "isToggledOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, data, actorNr, isToggledOn);
        }
        void set_isUsable(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isUsable"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetUsable(bool newIsUsable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUsable"), {"newIsUsable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newIsUsable);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateToggleVisual(bool isToggledOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateToggleVisual"), {"isToggledOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isToggledOn);
        }
    };
}
