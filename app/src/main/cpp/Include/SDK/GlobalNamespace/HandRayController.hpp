#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandRayController_HandSide.hpp"

namespace GlobalNamespace {
    struct HandRayController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandRayController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::HandRayController* get_Instance() {
            static BNM::Method<::GlobalNamespace::HandRayController*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::HandRayController* GetInstance() {
            static BNM::Field<::GlobalNamespace::HandRayController*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::GlobalNamespace::HandRayController* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::HandRayController*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetActivationCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("_activationCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetActiveHandRay() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_activeHandRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasInitialised() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasInitialised"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLeftHandRay() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_leftHandRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRightHandRay() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_rightHandRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandRayController_HandSide GetActiveHand() {
            static BNM::Field<::GlobalNamespace::HandRayController_HandSide> _field = GetClass().GetField(O("ActiveHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::HandRayController* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::HandRayController*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void SetActivationCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_activationCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveHandRay(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_activeHandRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasInitialised(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasInitialised"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandRay(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_leftHandRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandRay(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_rightHandRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveHand(::GlobalNamespace::HandRayController_HandSide value) {
            static BNM::Field<::GlobalNamespace::HandRayController_HandSide> _field = GetClass().GetField(O("ActiveHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::HandRayController* value) {
            static BNM::Field<::GlobalNamespace::HandRayController*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableHandRays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableHandRays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableHandRays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableHandRays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::HandRayController* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::HandRayController*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void HideHands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitialiseHands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PostUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PulseActiveHandray(float vibrationStrength, float vibrationDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PulseActiveHandray"), {"vibrationStrength", "vibrationDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vibrationStrength, vibrationDuration);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleHands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleLeftHandRay(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleLeftHandRay"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        void ToggleRightHandRay(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleRightHandRay"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
    };
}
