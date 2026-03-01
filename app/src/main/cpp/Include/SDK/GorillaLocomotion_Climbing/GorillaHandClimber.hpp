#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Climbing {
    struct GorillaHandClimber : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Climbing", "GorillaHandClimber");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float DIST_FOR_CLEAR_RELEASE = 0.35f;
        static constexpr float DIST_FOR_GRAB = 0.15f;
        bool GetIsClimbingOrGrabbing() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isClimbingOrGrabbing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCol() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("col"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetDontReclimbLast() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("dontReclimbLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EquipmentInteractor* GetEquipmentInteractor() {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("equipmentInteractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaGrabber* GetGrabber() {
            static BNM::Field<::GlobalNamespace::GorillaGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHandRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsClimbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isClimbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastAutoReleasePos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastAutoReleasePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Climbing::GorillaClimbable*>* GetPotentialClimbables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Climbing::GorillaClimbable*>*> _field = GetClass().GetField(O("potentialClimbables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetQueuedToBecomeValidToGrabAgain() {
            static BNM::Field<bool> _field = GetClass().GetField(O("queuedToBecomeValidToGrabAgain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetXrNode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("xrNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCanRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCol(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("col"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDontReclimbLast(::GorillaLocomotion_Climbing::GorillaClimbable* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("dontReclimbLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEquipmentInteractor(::GlobalNamespace::EquipmentInteractor* value) {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("equipmentInteractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabber(::GlobalNamespace::GorillaGrabber* value) {
            static BNM::Field<::GlobalNamespace::GorillaGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsClimbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isClimbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAutoReleasePos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastAutoReleasePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialClimbables(::BNM::Structures::Mono::List<::GorillaLocomotion_Climbing::GorillaClimbable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Climbing::GorillaClimbable*>*> _field = GetClass().GetField(O("potentialClimbables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedToBecomeValidToGrabAgain(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("queuedToBecomeValidToGrabAgain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXrNode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("xrNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanInitiateClimb() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanInitiateClimb"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckHandClimber() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckHandClimber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ForceStopClimbing(bool startingNewClimb, bool doDontReclimb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceStopClimbing"), {"startingNewClimb", "doDontReclimb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startingNewClimb, doDontReclimb);
        }
        bool get_isClimbingOrGrabbing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isClimbingOrGrabbing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetClosestClimbable() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaClimbable*> _m = GetClass().GetMethod(O("GetClosestClimbable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void SetCanRelease_1(bool canRelease) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCanRelease"), {"canRelease"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(canRelease);
        }
    };
}
