#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDMessagingController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDMessagingController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::KIDMessagingController* GetInstance() {
            static BNM::Field<::GlobalNamespace::KIDMessagingController*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* SHOWN_CONFIRMATION_SCREEN_PREFIX = "hasShownKIDConfirmationScreen-";
        static constexpr const char* CONFIRMATION_HEADER = "Thank you";
        static constexpr const char* CONFIRMATION_BODY = "k-ID setup is now complete. Thanks and have fun in Gorilla World!";
        static constexpr const char* CONFIRMATION_BUTTON = "Continue";
        static constexpr const char* KID_SETUP_CONFIRMATION_TITLE_KEY = "KID_SETUP_CONFIRMATION_TITLE";
        static constexpr const char* KID_SETUP_CONFIRMATION_BODY_KEY = "KID_SETUP_CONFIRMATION_BODY";
        static constexpr const char* KID_SETUP_CONFIRMATION_BUTTON_KEY = "KID_SETUP_CONFIRMATION_BUTTON";
        static constexpr const char* CONNECTION_ERROR_HEADER = "Connection Error";
        static constexpr const char* CONNECTION_ERROR_BODY = "Unable to connect to the internet. Please restart the game and try again.";
        static constexpr const char* CONNECTION_ERROR_BUTTON = "Quit";
        ::BNM::Structures::Mono::String* GetHasShownConfirmationScreenPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_HasShownConfirmationScreenPlayerPref"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCloseMessageBox() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_closeMessageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::KIDMessagingController* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::KIDMessagingController*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::GlobalNamespace::MessageBox* GetMessageBox() {
            static BNM::Field<::GlobalNamespace::MessageBox*> _field = GetClass().GetField(O("messageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCloseMessageBox(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_closeMessageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::KIDMessagingController* value) {
            static BNM::Field<::GlobalNamespace::KIDMessagingController*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetMessageBox(::GlobalNamespace::MessageBox* value) {
            static BNM::Field<::GlobalNamespace::MessageBox*> _field = GetClass().GetField(O("messageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_HasShownConfirmationScreenPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_HasShownConfirmationScreenPlayerPref"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetConfirmMessageFromTitleDataJson(::BNM::Structures::Mono::String* jsonTxt) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetConfirmMessageFromTitleDataJson"), {"jsonTxt"});
            return _m.Call(jsonTxt);
        }
        static void* GetSetupConfirmationMessage() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSetupConfirmationMessage"));
            return _m.Call();
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
        bool ShouldShowConfirmationScreen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldShowConfirmationScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void ShowConnectionErrorScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowConnectionErrorScreen"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static ::BNM::IL2CPP::Il2CppObject* StartKIDConfirmationScreen(TP0 token) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartKIDConfirmationScreen"), {"token"});
            return _m.Call(token);
        }
        template <typename TP0 = void*>
        ::BNM::IL2CPP::Il2CppObject* StartKIDConfirmationScreenInternal(TP0 token) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartKIDConfirmationScreenInternal"), {"token"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(token);
        }
    };
}
