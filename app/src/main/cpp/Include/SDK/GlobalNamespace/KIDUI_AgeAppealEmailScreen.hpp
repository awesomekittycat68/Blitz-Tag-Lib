#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_AgeAppealEmailScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_AgeAppealEmailScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation* GetConfirmationScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation*> _field = GetClass().GetField(O("_confirmationScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetConfirmButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_confirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetEmailText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_emailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetEnterEmailText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_enterEmailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetParentPermissionNotice() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_parentPermissionNotice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasChallenge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNewAgeToAppeal() {
            static BNM::Field<int> _field = GetClass().GetField(O("newAgeToAppeal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPARENTEMAILDESCRIPTION() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PARENT_EMAIL_DESCRIPTION"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVERIFYAGEEMAILDESCRIPTION() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VERIFY_AGE_EMAIL_DESCRIPTION"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConfirmationScreen(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation*> _field = GetClass().GetField(O("_confirmationScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("_confirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmailText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_emailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterEmailText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_enterEmailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentPermissionNotice(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_parentPermissionNotice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasChallenge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewAgeToAppeal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("newAgeToAppeal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPARENTEMAILDESCRIPTION(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PARENT_EMAIL_DESCRIPTION"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVERIFYAGEEMAILDESCRIPTION(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VERIFY_AGE_EMAIL_DESCRIPTION"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnConfirmPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConfirmPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnInputChanged(::BNM::Structures::Mono::String* newVal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInputChanged"), {"newVal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newVal);
        }
        void ShowAgeAppealEmailScreen(bool receivedChallenge, int newAge) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowAgeAppealEmailScreen"), {"receivedChallenge", "newAge"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(receivedChallenge, newAge);
        }
    };
}
