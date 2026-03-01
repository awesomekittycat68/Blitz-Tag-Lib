#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticSwipeReactor_Axis.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticSwipeReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticSwipeReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCol() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("col"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCooldownEndL() {
            static BNM::Field<double> _field = GetClass().GetField(O("cooldownEndL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCooldownEndR() {
            static BNM::Field<double> _field = GetClass().GetField(O("cooldownEndR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceL() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceR() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GetHandIndicatorL() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("handIndicatorL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GetHandIndicatorR() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("handIndicatorR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandInTriggerL() {
            static BNM::Field<bool> _field = GetClass().GetField(O("handInTriggerL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandInTriggerR() {
            static BNM::Field<bool> _field = GetClass().GetField(O("handInTriggerR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsCoolingDownL() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCoolingDownL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsCoolingDownR() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCoolingDownR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastFramePosL() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFramePosL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastFramePosR() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFramePosR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLateralMovementTolerance() {
            static BNM::Field<float> _field = GetClass().GetField(O("lateralMovementTolerance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticSwipeReactor_Axis GetLocalSwipeAxis() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticSwipeReactor_Axis> _field = GetClass().GetField(O("localSwipeAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaximumVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinimumVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnReverseSwipe() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnReverseSwipe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnSwipe() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSwipe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResetCooldownOnTriggerExit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetCooldownOnTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartPosL() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPosL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartPosR() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPosR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSwipeCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("swipeCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSwipeDir() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("swipeDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSwipeDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("swipeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwipeHaptics() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("swipeHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSwipingUpL() {
            static BNM::Field<bool> _field = GetClass().GetField(O("swipingUpL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSwipingUpR() {
            static BNM::Field<bool> _field = GetClass().GetField(O("swipingUpR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCol(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("col"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownEndL(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("cooldownEndL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownEndR(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("cooldownEndR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceL(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceR(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandIndicatorL(::GlobalNamespace::GorillaTriggerColliderHandIndicator* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("handIndicatorL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandIndicatorR(::GlobalNamespace::GorillaTriggerColliderHandIndicator* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("handIndicatorR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandInTriggerL(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("handInTriggerL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandInTriggerR(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("handInTriggerR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsCoolingDownL(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCoolingDownL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsCoolingDownR(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCoolingDownR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFramePosL(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFramePosL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFramePosR(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastFramePosR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLateralMovementTolerance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lateralMovementTolerance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalSwipeAxis(::GorillaTag_Cosmetics::CosmeticSwipeReactor_Axis value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticSwipeReactor_Axis> _field = GetClass().GetField(O("localSwipeAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaximumVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReverseSwipe(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnReverseSwipe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSwipe(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSwipe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetCooldownOnTriggerExit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetCooldownOnTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPosL(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPosL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPosR(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPosR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwipeCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("swipeCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwipeDir(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("swipeDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwipeDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("swipeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwipeHaptics(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("swipeHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwipingUpL(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("swipingUpL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwipingUpR(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("swipingUpR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetAxisComponent(::BNM::Structures::Unity::Vector3 vec) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAxisComponent"), {"vec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(vec);
        }
        ::BNM::Structures::Unity::Vector2 GetLateralMovement(::BNM::Structures::Unity::Vector3 vec) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("GetLateralMovement"), {"vec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(vec);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void ProcessHandMovement(::GlobalNamespace::GorillaTriggerColliderHandIndicator* hand, ::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3& last, bool& swipingUp, float& dist, bool& isCoolingDown, double& cooldownEndTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessHandMovement"), {"hand", "start", "last", "swipingUp", "dist", "isCoolingDown", "cooldownEndTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand, start, &last, &swipingUp, &dist, &isCoolingDown, &cooldownEndTime);
        }
        void ResetProgress(bool left, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetProgress"), {"left", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(left, pos);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
