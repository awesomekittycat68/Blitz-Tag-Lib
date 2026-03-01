#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WarningButtonResult.hpp"

namespace GlobalNamespace {
    struct WarningScreens : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WarningScreens");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::WarningScreens* GetActiveReference() {
            static BNM::Field<::GlobalNamespace::WarningScreens*> _field = GetClass().GetField(O("_activeReference"));
            return _field.Get();
        }
        static bool GetClosedMessageBox() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_closedMessageBox"));
            return _field.Get();
        }
        ::GameObject* GetImageContainerAfter() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_imageContainerAfter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetImageContainerBefore() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_imageContainerBefore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::WarningButtonResult GetLeftButtonResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("_leftButtonResult"));
            return _field.Get();
        }
        ::GlobalNamespace::MessageBox* GetMessageBox() {
            static BNM::Field<::GlobalNamespace::MessageBox*> _field = GetClass().GetField(O("_messageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetNoImageText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_noImageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnLeftButtonPressedAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onLeftButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnRightButtonPressedAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onRightButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::WarningButtonResult GetResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("_result"));
            return _field.Get();
        }
        static ::GlobalNamespace::WarningButtonResult GetRightButtonResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("_rightButtonResult"));
            return _field.Get();
        }
        ::TMP_Text* GetWithImageTextAfter() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_withImageTextAfter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetWithImageTextBefore() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_withImageTextBefore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetActiveReference(::GlobalNamespace::WarningScreens* value) {
            static BNM::Field<::GlobalNamespace::WarningScreens*> _field = GetClass().GetField(O("_activeReference"));
            _field.Set(value);
        }
        static void SetClosedMessageBox(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_closedMessageBox"));
            _field.Set(value);
        }
        void SetImageContainerAfter(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_imageContainerAfter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImageContainerBefore(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_imageContainerBefore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLeftButtonResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("_leftButtonResult"));
            _field.Set(value);
        }
        void SetMessageBox(::GlobalNamespace::MessageBox* value) {
            static BNM::Field<::GlobalNamespace::MessageBox*> _field = GetClass().GetField(O("_messageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoImageText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_noImageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLeftButtonPressedAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onLeftButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRightButtonPressedAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("_onRightButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("_result"));
            _field.Set(value);
        }
        static void SetRightButtonResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("_rightButtonResult"));
            _field.Set(value);
        }
        void SetWithImageTextAfter(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_withImageTextAfter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWithImageTextBefore(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_withImageTextBefore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnLeftButtonClicked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftButtonClicked"));
            _m.Call();
        }
        static void OnRightButtonClicked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRightButtonClicked"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void* StartOptInFollowUpScreen(TP0 cancellationToken) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("StartOptInFollowUpScreen"), {"cancellationToken"});
            return _m.Call(cancellationToken);
        }
        template <typename TP0 = void*>
        void* StartOptInFollowUpScreenInternal(TP0 cancellationToken) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("StartOptInFollowUpScreenInternal"), {"cancellationToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cancellationToken);
        }
        template <typename TP0 = void*>
        static void* StartWarningScreen(TP0 cancellationToken) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("StartWarningScreen"), {"cancellationToken"});
            return _m.Call(cancellationToken);
        }
        template <typename TP0 = void*>
        void* StartWarningScreenInternal(TP0 cancellationToken) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("StartWarningScreenInternal"), {"cancellationToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cancellationToken);
        }
        template <typename TP0 = void*>
        static ::BNM::IL2CPP::Il2CppObject* WaitForResponse(TP0 cancellationToken) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForResponse"), {"cancellationToken"});
            return _m.Call(cancellationToken);
        }
    };
}
