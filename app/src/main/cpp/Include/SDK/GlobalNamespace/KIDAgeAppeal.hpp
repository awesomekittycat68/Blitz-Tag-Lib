#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDAgeAppeal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDAgeAppeal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDUI_AgeAppealEmailScreen* GetAgeAppealEmailScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*> _field = GetClass().GetField(O("_ageAppealEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AgeSliderWithProgressBar* GetAgeSlider() {
            static BNM::Field<::GlobalNamespace::AgeSliderWithProgressBar*> _field = GetClass().GetField(O("_ageSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetAgeText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_ageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetInputsContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_inputsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMonkeLoader() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_monkeLoader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgeAppealEmailScreen(::GlobalNamespace::KIDUI_AgeAppealEmailScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*> _field = GetClass().GetField(O("_ageAppealEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgeSlider(::GlobalNamespace::AgeSliderWithProgressBar* value) {
            static BNM::Field<::GlobalNamespace::AgeSliderWithProgressBar*> _field = GetClass().GetField(O("_ageSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAgeText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_ageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputsContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_inputsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonkeLoader(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_monkeLoader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnNewAgeConfirmed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNewAgeConfirmed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowAgeAppealScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowAgeAppealScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
