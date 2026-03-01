#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaPressableButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaPressableButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_onPressed(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onPressed(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetMyTmpTxt2Set() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_myTmpTxt2Set"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMyTmpTxtSet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_myTmpTxtSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMyTxtSet() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_myTxtSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOffLocalizedText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_offLocalizedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnLocalizedText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_onLocalizedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseOnOffText() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_useOnOffText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetButtonRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("buttonRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebounceTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("debounceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetMyText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("myText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMyTmpText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("myTmpText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMyTmpText2() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("myTmpText2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOffText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnPressButton() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onPressButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>* GetOnPressed() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>*> _field = GetClass().GetField(O("onPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOnText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("onText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPressButtonSoundIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("pressButtonSoundIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetPressedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("pressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestHandLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testHandLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestPress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTouchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("touchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetUnpressedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unpressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMyTmpTxt2Set(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_myTmpTxt2Set"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyTmpTxtSet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_myTmpTxtSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyTxtSet(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_myTxtSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffLocalizedText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_offLocalizedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLocalizedText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_onLocalizedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseOnOffText(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_useOnOffText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("buttonRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebounceTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debounceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("myText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyTmpText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("myTmpText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyTmpText2(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("myTmpText2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressButton(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onPressButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressed(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>*> _field = GetClass().GetField(O("onPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("onText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressButtonSoundIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pressButtonSoundIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("pressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestHandLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testHandLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestPress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("touchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnpressedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unpressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_onPressed_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPressed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ButtonActivationWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivationWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void Click(bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Click"), {"leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand);
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
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void PressButton(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void RefreshText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_onPressed_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPressableButton*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPressed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetOffText_1(bool setMyText, bool setMyTmpText, bool setMyTmpText2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOffText"), {"setMyText", "setMyTmpText", "setMyTmpText2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setMyText, setMyTmpText, setMyTmpText2);
        }
        void SetOnText_1(bool setMyText, bool setMyTmpText, bool setMyTmpText2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOnText"), {"setMyText", "setMyTmpText", "setMyTmpText2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setMyText, setMyTmpText, setMyTmpText2);
        }
        void SetPressedMaterial_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPressedMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetRendererMaterial(::Material* mat) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRendererMaterial"), {"mat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mat);
        }
        void SetText(::BNM::Structures::Mono::String* newText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"newText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newText);
        }
        void SetUnpressedMaterial_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUnpressedMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateColor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateColorWithState(bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColorWithState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
    };
}
