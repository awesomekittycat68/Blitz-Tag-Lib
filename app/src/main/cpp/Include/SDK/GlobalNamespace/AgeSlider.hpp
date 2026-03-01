#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AgeSlider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AgeSlider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MIN_AGE = 10;
        ::GlobalNamespace::AgeSlider_SliderHeldEvent* GetOnHoldComplete() {
            static BNM::Method<::GlobalNamespace::AgeSlider_SliderHeldEvent*> _method = GetClass().GetMethod(O("get_onHoldComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOnHoldComplete(::GlobalNamespace::AgeSlider_SliderHeldEvent* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_onHoldComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static bool GetAgeGateActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ageGateActive"));
            return _field.Get();
        }
        ::TMP_Text* GetAgeValueTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_ageValueTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetConfirmButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_confirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoldTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("holdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AgeSlider_SliderHeldEvent* GetMOnHoldComplete() {
            static BNM::Field<::GlobalNamespace::AgeSlider_SliderHeldEvent*> _field = GetClass().GetField(O("m_OnHoldComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetProgressBar() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAgeGateActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ageGateActive"));
            _field.Set(value);
        }
        void SetAgeValueTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_ageValueTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_confirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("holdTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOnHoldComplete(::GlobalNamespace::AgeSlider_SliderHeldEvent* value) {
            static BNM::Field<::GlobalNamespace::AgeSlider_SliderHeldEvent*> _field = GetClass().GetField(O("m_OnHoldComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBar(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("progressBar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::AgeSlider_SliderHeldEvent* get_onHoldComplete() {
            static BNM::Method<::GlobalNamespace::AgeSlider_SliderHeldEvent*> _m = GetClass().GetMethod(O("get_onHoldComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void PostUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_onHoldComplete(::GlobalNamespace::AgeSlider_SliderHeldEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_onHoldComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void ToggleAgeGate(bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleAgeGate"), {"state"});
            _m.Call(state);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
