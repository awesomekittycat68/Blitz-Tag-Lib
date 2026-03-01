#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct VirtualStumpReturnWatch : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpReturnWatch");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetButtonText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCountdownText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("countdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetCurrentCustomMapProps() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentCustomMapProps"));
            return _field.Get();
        }
        bool GetCurrentlyBeingPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyBeingPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeldButton* GetReturnButton() {
            static BNM::Field<::GlobalNamespace::HeldButton*> _field = GetClass().GetField(O("returnButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartPressingButtonTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("startPressingButtonTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUpdateCountdownCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("updateCountdownCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("countdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetCurrentCustomMapProps(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentCustomMapProps"));
            _field.Set(value);
        }
        void SetCurrentlyBeingPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyBeingPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnButton(::GlobalNamespace::HeldButton* value) {
            static BNM::Field<::GlobalNamespace::HeldButton*> _field = GetClass().GetField(O("returnButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPressingButtonTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startPressingButtonTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateCountdownCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("updateCountdownCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float GetCurrentHoldDuration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetCurrentHoldDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HideCountdownText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideCountdownText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStartedPressingButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStartedPressingButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStoppedPressingButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStoppedPressingButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void SetWatchProperties(TP0 props) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWatchProperties"), {"props"});
            _m.Call(props);
        }
        void ShowCountdownText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowCountdownText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* UpdateCountdownText() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UpdateCountdownText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
