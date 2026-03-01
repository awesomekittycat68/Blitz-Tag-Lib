#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ControllerBehaviour : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ControllerBehaviour");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ControllerBehaviour* get_Instance() {
            static BNM::Method<::GlobalNamespace::ControllerBehaviour*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        bool GetButtonDown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ButtonDown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::ControllerBehaviour* GetInstance() {
            static BNM::Method<::GlobalNamespace::ControllerBehaviour*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::ControllerBehaviour* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsDownStick() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDownStick"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLeftStick() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLeftStick"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRightStick() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRightStick"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsUpStick() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsUpStick"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLeftButtonDown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LeftButtonDown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::ControllerInputPoller* GetPoller() {
            static BNM::Method<::GlobalNamespace::ControllerInputPoller*> _method = GetClass().GetMethod(O("get_Poller"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRightButtonDown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RightButtonDown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetStickXValue() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_StickXValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetStickYValue() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_StickYValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTriggerDown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TriggerDown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetActionDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("actionDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActionRepeatDelayReduction() {
            static BNM::Field<float> _field = GetClass().GetField(O("actionRepeatDelayReduction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActionTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("actionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ControllerBehaviour_OnActionEvent* GetOnAction() {
            static BNM::Field<::GlobalNamespace::ControllerBehaviour_OnActionEvent*> _field = GetClass().GetField(O("OnAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ControllerInputPoller* GetPoller_f() {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller*> _field = GetClass().GetField(O("poller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRepeatAction() {
            static BNM::Field<float> _field = GetClass().GetField(O("repeatAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseTriggersAsSticks() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useTriggersAsSticks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::UXSettings* GetUxSettings() {
            static BNM::Field<::GlobalNamespace::UXSettings*> _field = GetClass().GetField(O("uxSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasDownStick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasDownStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasLeftStick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasLeftStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasRightStick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasRightStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasUpStick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasUpStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActionDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("actionDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActionRepeatDelayReduction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("actionRepeatDelayReduction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActionTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("actionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent* value) {
            static BNM::Field<::GlobalNamespace::ControllerBehaviour_OnActionEvent*> _field = GetClass().GetField(O("OnAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoller(::GlobalNamespace::ControllerInputPoller* value) {
            static BNM::Field<::GlobalNamespace::ControllerInputPoller*> _field = GetClass().GetField(O("poller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepeatAction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("repeatAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseTriggersAsSticks(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useTriggersAsSticks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUxSettings(::GlobalNamespace::UXSettings* value) {
            static BNM::Field<::GlobalNamespace::UXSettings*> _field = GetClass().GetField(O("uxSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasDownStick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasDownStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasLeftStick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasLeftStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasRightStick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasRightStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasUpStick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasUpStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnAction_1(::GlobalNamespace::ControllerBehaviour_OnActionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAction"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::ControllerBehaviour* CreateNewControllerBehaviour(::GameObject* gameObject, ::GlobalNamespace::UXSettings* settings) {
            static BNM::Method<::GlobalNamespace::ControllerBehaviour*> _m = GetClass().GetMethod(O("CreateNewControllerBehaviour"), {"gameObject", "settings"});
            return _m.Call(gameObject, settings);
        }
        bool get_ButtonDown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ButtonDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::ControllerBehaviour* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::ControllerBehaviour*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        bool get_IsDownStick() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDownStick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLeftStick() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLeftStick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRightStick() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRightStick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsUpStick() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsUpStick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_LeftButtonDown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LeftButtonDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ControllerInputPoller* get_Poller() {
            static BNM::Method<::GlobalNamespace::ControllerInputPoller*> _m = GetClass().GetMethod(O("get_Poller"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RightButtonDown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RightButtonDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_StickXValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_StickXValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_StickYValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_StickYValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TriggerDown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TriggerDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void remove_OnAction_1(::GlobalNamespace::ControllerBehaviour_OnActionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAction"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_Instance(::GlobalNamespace::ControllerBehaviour* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
