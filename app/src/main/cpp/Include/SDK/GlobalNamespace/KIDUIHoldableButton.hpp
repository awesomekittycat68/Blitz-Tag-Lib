#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUIHoldableButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUIHoldableButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetHoldPercentage() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_HoldPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* GetOnHoldComplete() {
            static BNM::Method<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*> _method = GetClass().GetMethod(O("get_onHoldComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOnHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_onHoldComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::KIDUIButton* GetButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::UXSettings* GetCbUXSettings() {
            static BNM::Field<::GlobalNamespace::UXSettings*> _field = GetClass().GetField(O("_cbUXSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetElapsedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_elapsedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoldDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_holdDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHoldProgressFill() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_holdProgressFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHoldingButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isHoldingButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* GetMOnHoldComplete() {
            static BNM::Field<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*> _field = GetClass().GetField(O("m_OnHoldComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent* GetMOnHoldRelease() {
            static BNM::Field<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*> _field = GetClass().GetField(O("m_OnHoldRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent* GetMOnHoldStart() {
            static BNM::Field<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*> _field = GetClass().GetField(O("m_OnHoldStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCbUXSettings(::GlobalNamespace::UXSettings* value) {
            static BNM::Field<::GlobalNamespace::UXSettings*> _field = GetClass().GetField(O("_cbUXSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElapsedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_elapsedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_holdDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldProgressFill(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_holdProgressFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHoldingButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isHoldingButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOnHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* value) {
            static BNM::Field<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*> _field = GetClass().GetField(O("m_OnHoldComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOnHoldRelease(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent* value) {
            static BNM::Field<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*> _field = GetClass().GetField(O("m_OnHoldRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOnHoldStart(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent* value) {
            static BNM::Field<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*> _field = GetClass().GetField(O("m_OnHoldStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_HoldPercentage() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_HoldPercentage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* get_onHoldComplete() {
            static BNM::Method<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*> _m = GetClass().GetMethod(O("get_onHoldComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HoldComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HoldComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ManageButtonInteraction(bool isPointerUp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ManageButtonInteraction"), {"isPointerUp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isPointerUp);
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
        void OnPointerDown(::BNM::IL2CPP::Il2CppObject* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPointerDown"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        void OnPointerUp(::BNM::IL2CPP::Il2CppObject* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPointerUp"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        void ResetButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_onHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_onHoldComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ToggleHoldingButton(bool isPointerDown) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleHoldingButton"), {"isPointerDown"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isPointerDown);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
