#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_EmailSuccess : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_EmailSuccess");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetEmailTxt() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MainScreen* GetMainScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEmailTxt(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_emailTxt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainScreen(::GlobalNamespace::KIDUI_MainScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnClose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnClose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCloseGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCloseGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowSuccessScreen(::BNM::Structures::Mono::String* email) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowSuccessScreen"), {"email"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(email);
        }
        void ShowSuccessScreenAppeal(::BNM::Structures::Mono::String* email) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowSuccessScreenAppeal"), {"email"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(email);
        }
    };
}
