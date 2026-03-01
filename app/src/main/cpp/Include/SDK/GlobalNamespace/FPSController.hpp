#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FPSController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FPSController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStartEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStartEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStopEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStopEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetBaseMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClampGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("clampGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetControlRightHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("controlRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCtrlMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("ctrlMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHandMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("HandMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftControllerPosOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftControllerPosOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftControllerRotationOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftControllerRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookHorizontal() {
            static BNM::Field<float> _field = GetClass().GetField(O("lookHorizontal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookVertical() {
            static BNM::Field<float> _field = GetClass().GetField(O("lookVertical"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FPSController_OnStateChangeEventHandler* GetOnStartEvent() {
            static BNM::Field<::GlobalNamespace::FPSController_OnStateChangeEventHandler*> _field = GetClass().GetField(O("OnStartEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FPSController_OnStateChangeEventHandler* GetOnStopEvent() {
            static BNM::Field<::GlobalNamespace::FPSController_OnStateChangeEventHandler*> _field = GetClass().GetField(O("OnStopEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightControllerPosOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightControllerPosOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightControllerRotationOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightControllerRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShiftMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("shiftMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetToggleGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("toggleGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClampGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("clampGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControlRightHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("controlRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCtrlMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ctrlMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("HandMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerPosOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftControllerPosOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftControllerRotationOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftControllerRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookHorizontal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lookHorizontal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookVertical(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lookVertical"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler* value) {
            static BNM::Field<::GlobalNamespace::FPSController_OnStateChangeEventHandler*> _field = GetClass().GetField(O("OnStartEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler* value) {
            static BNM::Field<::GlobalNamespace::FPSController_OnStateChangeEventHandler*> _field = GetClass().GetField(O("OnStopEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerPosOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightControllerPosOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightControllerRotationOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightControllerRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shiftMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("toggleGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnStartEvent_1(::GlobalNamespace::FPSController_OnStateChangeEventHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStartEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnStopEvent_1(::GlobalNamespace::FPSController_OnStateChangeEventHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStopEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnStartEvent_1(::GlobalNamespace::FPSController_OnStateChangeEventHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStartEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnStopEvent_1(::GlobalNamespace::FPSController_OnStateChangeEventHandler* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStopEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
