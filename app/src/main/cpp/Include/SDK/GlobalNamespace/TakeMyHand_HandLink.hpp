#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandLinkAuthorityStatus.hpp"
#include "HoldableObject.hpp"

namespace GlobalNamespace {
    struct TakeMyHand_HandLink : ::GlobalNamespace::HoldableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TakeMyHand_HandLink");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr bool DEBUG_GRAB_ANYONE = false;
        bool GetIsLocal() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLocal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsLocal(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsLocal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsTentacleGrab() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsTentacleGrab"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsTentacleGrab(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsTentacleGrab"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetLinkPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_LinkPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetTentacleOffset() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_TentacleOffset"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTentacleOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TentacleOffset"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::AudioClip* GetAudioOnGrab() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("audioOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabbedHandIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedHandIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TakeMyHand_HandLink* GetGrabbedLink() {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("grabbedLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetGrabbedPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("grabbedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGripPressedAtTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("gripPressedAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDurationOnGrab() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDurationOnVicariousTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnVicariousTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrengthOnGrab() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrengthOnVicariousTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnVicariousTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetInteractionPoint() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("interactionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGroundedButt() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedButt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGroundedHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsReadyForGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isReadyForGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastReadGrabbedPlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastReadGrabbedPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaIK* GetMyIK() {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("myIK"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TakeMyHand_HandLink* GetMyOtherHandLink() {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("myOtherHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnHandLinkChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnHandLinkChanged"));
            return _field.Get();
        }
        float GetRejectGrabsUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("rejectGrabsUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSnapPositionCalculatedAtFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("snapPositionCalculatedAtFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasGripPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGripPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioOnGrab(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("audioOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedHandIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedHandIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedLink(::GlobalNamespace::TakeMyHand_HandLink* value) {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("grabbedLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("grabbedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripPressedAtTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gripPressedAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDurationOnGrab(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDurationOnVicariousTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDurationOnVicariousTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrengthOnGrab(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrengthOnVicariousTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthOnVicariousTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractionPoint(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("interactionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGroundedButt(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedButt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGroundedHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsReadyForGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isReadyForGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReadGrabbedPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastReadGrabbedPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyIK(::GlobalNamespace::GorillaIK* value) {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("myIK"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyOtherHandLink(::GlobalNamespace::TakeMyHand_HandLink* value) {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("myOtherHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnHandLinkChanged(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnHandLinkChanged"));
            _field.Set(value);
        }
        void SetRejectGrabsUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rejectGrabsUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapPositionCalculatedAtFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("snapPositionCalculatedAtFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasGripPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGripPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BreakLink() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BreakLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BreakLinkTo(::GlobalNamespace::TakeMyHand_HandLink* targetLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BreakLinkTo"), {"targetLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetLink);
        }
        bool CanBeGrabbed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanBeGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckFormLinkWithRemoteGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFormLinkWithRemoteGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropItemCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItemCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsTentacleGrab() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsTentacleGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_LinkPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_LinkPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_TentacleOffset() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_TentacleOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandLinkAuthorityStatus GetChainAuthority(int& stepsToAuth) {
            static BNM::Method<::GlobalNamespace::HandLinkAuthorityStatus> _m = GetClass().GetMethod(O("GetChainAuthority"), {"stepsToAuth"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&stepsToAuth);
        }
        static bool IsHandInChainWithOtherPlayer(::GlobalNamespace::TakeMyHand_HandLink* startingLink, int targetPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHandInChainWithOtherPlayer"), {"startingLink", "targetPlayer"});
            return _m.Call(startingLink, targetPlayer);
        }
        bool IsLinkActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLinkActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsLocalGrabInRange(bool grabbedLeftHand, ::BNM::Structures::Unity::Vector3 handLocalPos, ::BNM::Structures::Unity::Quaternion bodyWorldRot, ::BNM::Structures::Unity::Vector3 bodyWorldPos, float tolerance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalGrabInRange"), {"grabbedLeftHand", "handLocalPos", "bodyWorldRot", "bodyWorldPos", "tolerance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabbedLeftHand, handLocalPos, bodyWorldRot, bodyWorldPos, tolerance);
        }
        void LocalCreateLink(::GlobalNamespace::TakeMyHand_HandLink* remoteLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalCreateLink"), {"remoteLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remoteLink);
        }
        void LocalUpdate(bool isGroundedHand, bool isGroundedButt, bool isGripPressed, bool isReadyForGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalUpdate"), {"isGroundedHand", "isGroundedButt", "isGripPressed", "isReadyForGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isGroundedHand, isGroundedButt, isGripPressed, isReadyForGrabbing);
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
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnHover(::GlobalNamespace::InteractionPoint* pointHovered, ::GameObject* hoveringHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"pointHovered", "hoveringHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointHovered, hoveringHand);
        }
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void PlayVicariousTapHaptic() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVicariousTapHaptic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Read(::BNM::Structures::Unity::Vector3 remoteHandLocalPos, ::BNM::Structures::Unity::Quaternion remoteBodyWorldRot, ::BNM::Structures::Unity::Vector3 remoteBodyWorldPos, bool isGroundedHand, bool isGroundedButt, bool isReadyForGrabbing, bool isTentacleGrab, int grabbedPlayerActorNumber, bool grabbedHandIsLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Read"), {"remoteHandLocalPos", "remoteBodyWorldRot", "remoteBodyWorldPos", "isGroundedHand", "isGroundedButt", "isReadyForGrabbing", "isTentacleGrab", "grabbedPlayerActorNumber", "grabbedHandIsLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remoteHandLocalPos, remoteBodyWorldRot, remoteBodyWorldPos, isGroundedHand, isGroundedButt, isReadyForGrabbing, isTentacleGrab, grabbedPlayerActorNumber, grabbedHandIsLeft);
        }
        void RejectGrabsFor(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RejectGrabsFor"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        void set_IsLocal(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsLocal"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsTentacleGrab(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsTentacleGrab"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TentacleOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TentacleOffset"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TentacleTryCreateLink(::GlobalNamespace::TakeMyHand_HandLink* remoteLink) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TentacleTryCreateLink"), {"remoteLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(remoteLink);
        }
        void VisuallySnapHandsTogether() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VisuallySnapHandsTogether"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Write(bool& isGroundedHand, bool& isGroundedButt, int& grabbedPlayerActorNumber, bool& grabbedHandIsLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"isGroundedHand", "isGroundedButt", "grabbedPlayerActorNumber", "grabbedHandIsLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&isGroundedHand, &isGroundedButt, &grabbedPlayerActorNumber, &grabbedHandIsLeft);
        }
    };
}
