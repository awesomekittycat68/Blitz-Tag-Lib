#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ControllerInputPoller__EPressCadence.hpp"
#include "ControllerInputPoller__InputCallbacksCadenceInfo.hpp"
#include "EControllerInputPressFlags.hpp"
#include "EHandednessFlags.hpp"
#include "GorillaControllerType.hpp"

namespace GlobalNamespace {
    struct ControllerInputPoller : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ControllerInputPoller");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ControllerInputPoller* GetInstance() {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int k_defaultExecutionOrder = -400;
        ::GlobalNamespace::GorillaControllerType GetControllerType() {
            static BNM::Method<::GlobalNamespace::GorillaControllerType> _method = GetClass().GetMethod(O("get_controllerType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetControllerType(::GlobalNamespace::GorillaControllerType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_controllerType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetLeftAngularVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_leftAngularVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLeftIndexPressed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_leftIndexPressed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLeftIndexPressedThisFrame() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_leftIndexPressedThisFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLeftIndexReleased() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_leftIndexReleased"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLeftIndexReleasedThisFrame() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_leftIndexReleasedThisFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::EControllerInputPressFlags GetLeftPressFlags() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _method = GetClass().GetMethod(O("get_leftPressFlags"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftPressFlags(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_leftPressFlags"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::EControllerInputPressFlags GetLeftPressFlagsLastFrame() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _method = GetClass().GetMethod(O("get_leftPressFlagsLastFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_leftPressFlagsLastFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetLeftVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_leftVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetRightAngularVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_rightAngularVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRightIndexPressed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_rightIndexPressed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRightIndexPressedThisFrame() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_rightIndexPressedThisFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRightIndexReleased() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_rightIndexReleased"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRightIndexReleasedThisFrame() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_rightIndexReleasedThisFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::EControllerInputPressFlags GetRightPressFlags() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _method = GetClass().GetMethod(O("get_rightPressFlags"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightPressFlags(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rightPressFlags"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::EControllerInputPressFlags GetRightPressFlagsLastFrame() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _method = GetClass().GetMethod(O("get_rightPressFlagsLastFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rightPressFlagsLastFrame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetRightVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_rightVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo GetGCallbacksOnPressEnd() {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo> _field = GetClass().GetField(O("_g_callbacks_onPressEnd"));
            return _field.Get();
        }
        static ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo GetGCallbacksOnPressStart() {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo> _field = GetClass().GetField(O("_g_callbacks_onPressStart"));
            return _field.Get();
        }
        static ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo GetGCallbacksOnPressUpdate() {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo> _field = GetClass().GetField(O("_g_callbacks_onPressUpdate"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftAngularVelocity_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftAngularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftIndexPressed_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftIndexPressedThisFrame_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexPressedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftIndexReleased_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftIndexReleasedThisFrame_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexReleasedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftVelocity_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightAngularVelocity_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightAngularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightIndexPressed_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightIndexPressedThisFrame_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexPressedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightIndexReleased_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightIndexReleasedThisFrame_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexReleasedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightVelocity_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidModifyOnUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didModifyOnUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHeadDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("headDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHeadPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetHeadRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("headRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ControllerInputPoller* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void* GetLeftControllerDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftControllerDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftControllerGripFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftControllerGripFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftControllerIndexFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftControllerIndexFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftControllerIndexTouch() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftControllerIndexTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftControllerPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftControllerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetLeftControllerPrimary2DAxis() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("leftControllerPrimary2DAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftControllerPrimaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftControllerPrimaryButtonTouch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerPrimaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLeftControllerRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("leftControllerRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftControllerSecondaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftControllerSecondaryButtonTouch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerSecondaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftControllerTriggerButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerTriggerButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftGrabMomentary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftGrabRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftGrabReleaseMomentary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabReleaseMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>* GetOnUpdate() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>*> _field = GetClass().GetField(O("onUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>* GetOnUpdateNext() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>*> _field = GetClass().GetField(O("onUpdateNext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightControllerDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightControllerDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightControllerGripFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightControllerGripFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightControllerIndexFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightControllerIndexFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightControllerIndexTouch() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightControllerIndexTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightControllerPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightControllerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRightControllerPrimary2DAxis() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("rightControllerPrimary2DAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightControllerPrimaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightControllerPrimaryButtonTouch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerPrimaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRightControllerRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rightControllerRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightControllerSecondaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightControllerSecondaryButtonTouch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerSecondaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightControllerTriggerButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerTriggerButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightGrabMomentary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightGrabRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightGrabReleaseMomentary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabReleaseMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightStickLRFloat() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightStickLRFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetGCallbacksOnPressEnd(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo value) {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo> _field = GetClass().GetField(O("_g_callbacks_onPressEnd"));
            _field.Set(value);
        }
        static void SetGCallbacksOnPressStart(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo value) {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo> _field = GetClass().GetField(O("_g_callbacks_onPressStart"));
            _field.Set(value);
        }
        static void SetGCallbacksOnPressUpdate(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo value) {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo> _field = GetClass().GetField(O("_g_callbacks_onPressUpdate"));
            _field.Set(value);
        }
        void SetLeftAngularVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftAngularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftIndexPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftIndexPressedThisFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexPressedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftIndexReleased(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftIndexReleasedThisFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leftIndexReleasedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightAngularVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightAngularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightIndexPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightIndexPressedThisFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexPressedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightIndexReleased(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightIndexReleasedThisFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rightIndexReleasedThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidModifyOnUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didModifyOnUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("headDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("headRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ControllerInputPoller* value) {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLeftControllerDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftControllerDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerGripFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftControllerGripFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerIndexFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftControllerIndexFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerIndexTouch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftControllerIndexTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftControllerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerPrimary2DAxis(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("leftControllerPrimary2DAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerPrimaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerPrimaryButtonTouch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerPrimaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("leftControllerRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerSecondaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerSecondaryButtonTouch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerSecondaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerTriggerButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftControllerTriggerButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftGrabMomentary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftGrabRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftGrabReleaseMomentary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabReleaseMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnUpdate(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>*> _field = GetClass().GetField(O("onUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnUpdateNext(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>*> _field = GetClass().GetField(O("onUpdateNext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightControllerDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerGripFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightControllerGripFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerIndexFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightControllerIndexFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerIndexTouch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightControllerIndexTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightControllerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerPrimary2DAxis(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("rightControllerPrimary2DAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerPrimaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerPrimaryButtonTouch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerPrimaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rightControllerRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerSecondaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerSecondaryButtonTouch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerSecondaryButtonTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerTriggerButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightControllerTriggerButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGrabMomentary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGrabRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGrabReleaseMomentary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabReleaseMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightStickLRFloat(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightStickLRFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void _AddInputStateCallback(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo& ref_callbacksInfo, ::GlobalNamespace::EControllerInputPressFlags flags, ::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_AddInputStateCallback"), {"ref_callbacksInfo", "flags", "callback"});
            _m.Call(&ref_callbacksInfo, flags, callback);
        }
        static ::GlobalNamespace::EHandednessFlags _IsHandContributingToPressCadence(::GlobalNamespace::EHandednessFlags hand, ::GlobalNamespace::ControllerInputPoller__EPressCadence pressCadence, ::GlobalNamespace::EControllerInputPressFlags cbFlags, ::GlobalNamespace::EControllerInputPressFlags flags_now, ::GlobalNamespace::EControllerInputPressFlags flags_old) {
            static BNM::Method<::GlobalNamespace::EHandednessFlags> _m = GetClass().GetMethod(O("_IsHandContributingToPressCadence"), {"hand", "pressCadence", "cbFlags", "flags_now", "flags_old"});
            return _m.Call(hand, pressCadence, cbFlags, flags_now, flags_old);
        }
        static void _RemoveInputStateCallback(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo& ref_callbacksInfo, ::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_RemoveInputStateCallback"), {"ref_callbacksInfo", "callback"});
            _m.Call(&ref_callbacksInfo, callback);
        }
        void _UpdatePressFlags() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_UpdatePressFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void _UpdatePressFlags_Callbacks(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo& callbacksInfo, ::GlobalNamespace::ControllerInputPoller__EPressCadence cadence, ::GlobalNamespace::EControllerInputPressFlags lFlags_now, ::GlobalNamespace::EControllerInputPressFlags lFlags_old, ::GlobalNamespace::EControllerInputPressFlags rFlags_now, ::GlobalNamespace::EControllerInputPressFlags rFlags_old) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_UpdatePressFlags_Callbacks"), {"callbacksInfo", "cadence", "lFlags_now", "lFlags_old", "rFlags_now", "rFlags_old"});
            _m.Call(&callbacksInfo, cadence, lFlags_now, lFlags_old, rFlags_now, rFlags_old);
        }
        static void AddCallbackOnPressEnd(::GlobalNamespace::EControllerInputPressFlags flags, ::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnPressEnd"), {"flags", "callback"});
            _m.Call(flags, callback);
        }
        static void AddCallbackOnPressStart(::GlobalNamespace::EControllerInputPressFlags flags, ::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnPressStart"), {"flags", "callback"});
            _m.Call(flags, callback);
        }
        static void AddCallbackOnPressUpdate(::GlobalNamespace::EControllerInputPressFlags flags, ::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnPressUpdate"), {"flags", "callback"});
            _m.Call(flags, callback);
        }
        static void AddUpdateCallback(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUpdateCallback"), {"callback"});
            _m.Call(callback);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalculateGrabState(float grabValue, bool& grab, bool& grabRelease, bool& grabMomentary, bool& grabReleaseMomentary, float grabThreshold, float grabReleaseThreshold) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateGrabState"), {"grabValue", "grab", "grabRelease", "grabMomentary", "grabReleaseMomentary", "grabThreshold", "grabReleaseThreshold"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabValue, &grab, &grabRelease, &grabMomentary, &grabReleaseMomentary, grabThreshold, grabReleaseThreshold);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector3 DeviceAngularVelocity(TP0 node) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("DeviceAngularVelocity"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector3 DevicePosition(TP0 node) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("DevicePosition"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Quaternion DeviceRotation(TP0 node) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("DeviceRotation"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector3 DeviceVelocity(TP0 node) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("DeviceVelocity"), {"node"});
            return _m.Call(node);
        }
        ::GlobalNamespace::GorillaControllerType get_controllerType() {
            static BNM::Method<::GlobalNamespace::GorillaControllerType> _m = GetClass().GetMethod(O("get_controllerType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_leftAngularVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_leftAngularVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_leftIndexPressed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_leftIndexPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_leftIndexPressedThisFrame() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_leftIndexPressedThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_leftIndexReleased() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_leftIndexReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_leftIndexReleasedThisFrame() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_leftIndexReleasedThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EControllerInputPressFlags get_leftPressFlags() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _m = GetClass().GetMethod(O("get_leftPressFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EControllerInputPressFlags get_leftPressFlagsLastFrame() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _m = GetClass().GetMethod(O("get_leftPressFlagsLastFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_leftVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_leftVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_rightAngularVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_rightAngularVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_rightIndexPressed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_rightIndexPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_rightIndexPressedThisFrame() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_rightIndexPressedThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_rightIndexReleased() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_rightIndexReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_rightIndexReleasedThisFrame() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_rightIndexReleasedThisFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EControllerInputPressFlags get_rightPressFlags() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _m = GetClass().GetMethod(O("get_rightPressFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EControllerInputPressFlags get_rightPressFlagsLastFrame() {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _m = GetClass().GetMethod(O("get_rightPressFlagsLastFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_rightVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_rightVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static bool GetGrab(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetGrab"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetGrabMomentary(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetGrabMomentary"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetGrabRelease(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetGrabRelease"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetGrabReleaseMomentary(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetGrabReleaseMomentary"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetIndexPressed(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIndexPressed"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetIndexPressedThisFrame(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIndexPressedThisFrame"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetIndexReleased(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIndexReleased"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool GetIndexReleasedThisFrame(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIndexReleasedThisFrame"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static ::GlobalNamespace::EControllerInputPressFlags GetInputStateFlags(TP0 node) {
            static BNM::Method<::GlobalNamespace::EControllerInputPressFlags> _m = GetClass().GetMethod(O("GetInputStateFlags"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static float GripFloat(TP0 node) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GripFloat"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool HasPressFlags(TP0 node, ::GlobalNamespace::EControllerInputPressFlags inputStateFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasPressFlags"), {"node", "inputStateFlags"});
            return _m.Call(node, inputStateFlags);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static bool PositionValid(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PositionValid"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector2 Primary2DAxis(TP0 node) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("Primary2DAxis"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool PrimaryButtonPress(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PrimaryButtonPress"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool PrimaryButtonTouch(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PrimaryButtonTouch"), {"node"});
            return _m.Call(node);
        }
        void RecalculateGrabState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecalculateGrabState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RemoveCallbackOnPressEnd(::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnPressEnd"), {"callback"});
            _m.Call(callback);
        }
        static void RemoveCallbackOnPressStart(::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnPressStart"), {"callback"});
            _m.Call(callback);
        }
        static void RemoveCallbackOnPressUpdate(::BNM::Structures::Mono::Action<::GlobalNamespace::EHandednessFlags>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnPressUpdate"), {"callback"});
            _m.Call(callback);
        }
        static void RemoveUpdateCallback(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveUpdateCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static bool SecondaryButtonPress(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SecondaryButtonPress"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static bool SecondaryButtonTouch(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SecondaryButtonTouch"), {"node"});
            return _m.Call(node);
        }
        void set_controllerType(::GlobalNamespace::GorillaControllerType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_controllerType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_leftPressFlags(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftPressFlags"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_leftPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftPressFlagsLastFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_rightPressFlags(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightPressFlags"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_rightPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightPressFlagsLastFrame"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        static float TriggerFloat(TP0 node) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TriggerFloat"), {"node"});
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        static float TriggerTouch(TP0 node) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TriggerTouch"), {"node"});
            return _m.Call(node);
        }
    };
}
