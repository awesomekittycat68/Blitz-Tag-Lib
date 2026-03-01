#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HeldItemButtonConsumeMode.hpp"
#include "HeldItemButtonMode.hpp"

namespace GlobalNamespace {
    struct GorillaHeldItemPressableButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaHeldItemPressableButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_onPressed(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onPressed(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onReleased(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onReleased(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetAcceptAnyHoldableThatMatchesType() {
            static BNM::Field<bool> _field = GetClass().GetField(O("acceptAnyHoldableThatMatchesType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* GetAcceptedHoldables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("acceptedHoldables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::MonoType*>* GetAcceptedTypes() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::MonoType*>*> _field = GetClass().GetField(O("acceptedTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeldItemButtonConsumeMode GetConsumeItem() {
            static BNM::Field<::GlobalNamespace::HeldItemButtonConsumeMode> _field = GetClass().GetField(O("consumeItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelayBetweenSuccessfulPresses() {
            static BNM::Field<float> _field = GetClass().GetField(O("delayBetweenSuccessfulPresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeldItemButtonMode GetMode() {
            static BNM::Field<::GlobalNamespace::HeldItemButtonMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnPressButton() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onPressButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* GetOnPressed() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>*> _field = GetClass().GetField(O("onPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnReleaseButton() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onReleaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* GetOnReleased() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>*> _field = GetClass().GetField(O("onReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPressButtonSoundIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("pressButtonSoundIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTouchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("touchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAcceptAnyHoldableThatMatchesType(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("acceptAnyHoldableThatMatchesType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAcceptedHoldables(::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("acceptedHoldables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAcceptedTypes(::BNM::Structures::Mono::List<::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::MonoType*>*> _field = GetClass().GetField(O("acceptedTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsumeItem(::GlobalNamespace::HeldItemButtonConsumeMode value) {
            static BNM::Field<::GlobalNamespace::HeldItemButtonConsumeMode> _field = GetClass().GetField(O("consumeItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayBetweenSuccessfulPresses(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delayBetweenSuccessfulPresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::HeldItemButtonMode value) {
            static BNM::Field<::GlobalNamespace::HeldItemButtonMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressButton(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onPressButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPressed(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>*> _field = GetClass().GetField(O("onPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleaseButton(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onReleaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleased(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>*> _field = GetClass().GetField(O("onReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressButtonSoundIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pressButtonSoundIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("touchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_onPressed_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPressed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onReleased_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onReleased"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ButtonActivation(::GlobalNamespace::TransferrableObject* holdable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"), {"holdable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable);
        }
        void ButtonActivationWithHand(::GlobalNamespace::TransferrableObject* holdable, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivationWithHand"), {"holdable", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable, isLeftHand);
        }
        void OnDelayedAction(int contextIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDelayedAction"), {"contextIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(contextIndex);
        }
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void remove_onPressed_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPressed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onReleased_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaHeldItemPressableButton*, ::GlobalNamespace::TransferrableObject*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onReleased"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
