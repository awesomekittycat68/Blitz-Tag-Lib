#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRElevator_ButtonType.hpp"
#include "GRElevator_ElevatorState.hpp"
#include "GRElevatorManager_ElevatorLocation.hpp"

namespace GlobalNamespace {
    struct GRElevator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRElevator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAdjustedOffsetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("adjustedOffsetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAmbientAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("ambientAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetAmbientLoopClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("ambientLoopClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetButtonBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("buttonBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCloseBeginDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("closeBeginDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetClosedTargetBottom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("closedTargetBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetClosedTargetTop() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("closedTargetTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCloseEndDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("closeEndDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCloseTravelDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("closeTravelDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCollidersAndVisuals() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("collidersAndVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDingClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("dingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDoorAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("doorAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDoorCloseClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorCloseClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorCloseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorMoveBeginTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorMoveBeginTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDoorOpenClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorOpenClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorOpenSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorButton*>* GetElevatorButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorButton*>*> _field = GetClass().GetField(O("elevatorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaFriendCollider* GetFriendCollider() {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("friendCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetInnerText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("innerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetJoinTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevatorManager_ElevatorLocation GetLocation() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("location"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLowerDoor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lowerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMusicAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("musicAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOpenBeginDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("openBeginDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOpenEndDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("openEndDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOpenTargetBottom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("openTargetBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOpenTargetTop() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("openTargetTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOpenTravelDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("openTravelDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetOuterText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("outerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevator_ElevatorState GetState() {
            static BNM::Field<::GlobalNamespace::GRElevator_ElevatorState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTravelDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("travelDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTravellingLoopClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("travellingLoopClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorButton*>* GetTypeButtonDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorButton*>*> _field = GetClass().GetField(O("typeButtonDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUpperDoor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("upperDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetVideoAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("videoAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVideoDisplay() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("videoDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdjustedOffsetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("adjustedOffsetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmbientAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("ambientAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmbientLoopClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("ambientLoopClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("buttonBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseBeginDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("closeBeginDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClosedTargetBottom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("closedTargetBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClosedTargetTop(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("closedTargetTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseEndDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("closeEndDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseTravelDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("closeTravelDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersAndVisuals(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("collidersAndVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDingClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("dingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("doorAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorCloseClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorMoveBeginTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorMoveBeginTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorOpenClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElevatorButtons(::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorButton*>*> _field = GetClass().GetField(O("elevatorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendCollider(::GlobalNamespace::GorillaFriendCollider* value) {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("friendCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("innerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocation(::GlobalNamespace::GRElevatorManager_ElevatorLocation value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("location"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowerDoor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lowerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMusicAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("musicAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenBeginDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("openBeginDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenEndDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("openEndDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenTargetBottom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("openTargetBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenTargetTop(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("openTargetTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenTravelDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("openTravelDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOuterText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("outerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRElevator_ElevatorState value) {
            static BNM::Field<::GlobalNamespace::GRElevator_ElevatorState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTravelDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("travelDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTravellingLoopClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("travellingLoopClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTypeButtonDict(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorButton*>*> _field = GetClass().GetField(O("typeButtonDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpperDoor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("upperDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVideoAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("videoAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVideoDisplay(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("videoDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool DoorIsClosing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoorIsClosing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool DoorIsOpening() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoorIsOpening"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool DoorsFullyClosed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoorsFullyClosed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool DoorsFullyOpen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoorsFullyOpen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void PhysicalElevatorUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhysicalElevatorUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayButtonPress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayButtonPress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayDing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayDoorCloseBegin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDoorCloseBegin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayDoorCloseTravel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDoorCloseTravel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayDoorOpenBegin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDoorOpenBegin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayDoorOpenTravel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDoorOpenTravel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayElevatorMoving() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayElevatorMoving"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayElevatorMusic(float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayElevatorMusic"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void PlayElevatorStopped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayElevatorStopped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressButton(int type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        void PressButtonVisuals(::GlobalNamespace::GRElevator_ButtonType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButtonVisuals"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        void SetDoorClosedBeginTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDoorClosedBeginTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDoorOpenBeginTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDoorOpenBeginTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool StateIsClosingState(::GlobalNamespace::GRElevator_ElevatorState checkState) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StateIsClosingState"), {"checkState"});
            return _m.Call(checkState);
        }
        static bool StateIsOpeningState(::GlobalNamespace::GRElevator_ElevatorState checkState) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StateIsOpeningState"), {"checkState"});
            return _m.Call(checkState);
        }
        void UpdateLocalState(::GlobalNamespace::GRElevator_ElevatorState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLocalState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateRemoteState(::GlobalNamespace::GRElevator_ElevatorState remoteNewState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRemoteState"), {"remoteNewState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remoteNewState);
        }
    };
}
