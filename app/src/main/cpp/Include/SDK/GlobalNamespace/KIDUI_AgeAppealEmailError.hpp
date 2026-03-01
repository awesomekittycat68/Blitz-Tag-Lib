#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_AgeAppealEmailError : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_AgeAppealEmailError");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDUI_AgeAppealEmailScreen* GetAgeAppealEmailScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*> _field = GetClass().GetField(O("_ageAppealEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetEmailText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasChallenge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNewAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("newAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgeAppealEmailScreen(::GlobalNamespace::KIDUI_AgeAppealEmailScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*> _field = GetClass().GetField(O("_ageAppealEmailScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmailText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasChallenge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasChallenge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("newAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void onBackPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onBackPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowAgeAppealEmailErrorScreen(bool hasChallenge, int newAge, ::BNM::Structures::Mono::String* email) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowAgeAppealEmailErrorScreen"), {"hasChallenge", "newAge", "email"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hasChallenge, newAge, email);
        }
    };
}
