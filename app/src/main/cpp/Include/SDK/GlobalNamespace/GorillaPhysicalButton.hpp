#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaPhysicalButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaPhysicalButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_onPressedOn(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPressedOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onPressedOn(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPressedOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onToggledOff(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onToggledOff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onToggledOff(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onToggledOff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetButtonDepthForTrigger() {
            static BNM::Field<float> _field = GetClass().GetField(O("buttonDepthForTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetButtonPushDepth() {
            static BNM::Field<float> _field = GetClass().GetField(O("buttonPushDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetButtonRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("buttonRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetButtonTestCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("buttonTestCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanToggleOff() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canToggleOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanToggleOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canToggleOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentButtonDepthFromPressing() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentButtonDepthFromPressing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetMoveableChildren() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("moveableChildren"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetMoveableChildrenStartPositions() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("moveableChildrenStartPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOffText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnPressButtonOn() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onPressButtonOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnPressButtonToggleOff() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onPressButtonToggleOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* GetOnPressedOn() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>*> _field = GetClass().GetField(O("onPressedOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOnText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("onText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* GetOnToggledOff() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>*> _field = GetClass().GetField(O("onToggledOff"));
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
        ::Collider* GetRecentFingerCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("recentFingerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartButtonPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startButtonPosition"));
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
        ::TMP_Text* GetTextField() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("textField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetUnpressedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unpressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingForReleaseAfterStateChange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForReleaseAfterStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonDepthForTrigger(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buttonDepthForTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonPushDepth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buttonPushDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("buttonRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonTestCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("buttonTestCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanToggleOff(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canToggleOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanToggleOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canToggleOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentButtonDepthFromPressing(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentButtonDepthFromPressing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveableChildren(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("moveableChildren"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveableChildrenStartPositions(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("moveableChildrenStartPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressButtonOn(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onPressButtonOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressButtonToggleOff(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onPressButtonToggleOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressedOn(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>*> _field = GetClass().GetField(O("onPressedOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("onText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnToggledOff(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>*> _field = GetClass().GetField(O("onToggledOff"));
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
        void SetRecentFingerCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("recentFingerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartButtonPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startButtonPosition"));
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
        void SetTextField(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("textField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnpressedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unpressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForReleaseAfterStateChange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForReleaseAfterStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_onPressedOn_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPressedOn"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onToggledOff_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onToggledOff"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ButtonPressedOn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonPressedOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ButtonPressedOnWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonPressedOnWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void ButtonToggledOff() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonToggledOff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ButtonToggledOffWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonToggledOffWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        ::BNM::Coroutine::IEnumerator* ButtonUpdate() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ButtonUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetSurfaceDistanceFromKeyToCollider(::Collider* collider) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSurfaceDistanceFromKeyToCollider"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider);
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
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_onPressedOn_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPressedOn"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onToggledOff_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaPhysicalButton*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onToggledOff"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetButtonState(bool setToOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetButtonState"), {"setToOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setToOn);
        }
        void SetText(::BNM::Structures::Mono::String* newText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"newText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newText);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestForButtonStateChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestForButtonStateChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateButtonFromCollider() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateButtonFromCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateButtonVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateButtonVisuals"));
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
