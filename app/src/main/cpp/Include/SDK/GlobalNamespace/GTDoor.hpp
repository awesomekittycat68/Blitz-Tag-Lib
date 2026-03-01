#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../BoingKit/FloatSpring.hpp"
#include "GTDoor_DoorState.hpp"
#include "NetworkSceneObject.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GTDoor : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTDoor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButtonTriggeredThisFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonTriggeredThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCloseSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("closeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTDoor_DoorState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::GTDoor_DoorState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>* GetDoorButtonTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>*> _field = GetClass().GetField(O("doorButtonTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorCloseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetDoorColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("doorColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>* GetDoorHoldOpenTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>*> _field = GetClass().GetField(O("doorHoldOpenTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorOpenSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::FloatSpring GetDoorSpring() {
            static BNM::Field<::BoingKit::FloatSpring> _field = GetClass().GetField(O("doorSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDoorTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGTDoorID() {
            static BNM::Field<int> _field = GetClass().GetField(O("GTDoorID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastChecked() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetOpenSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("openSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPeopleInHoldOpenVolume() {
            static BNM::Field<bool> _field = GetClass().GetField(O("peopleInHoldOpenVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSecondsCheck() {
            static BNM::Field<float> _field = GetClass().GetField(O("secondsCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeUntilDoorCloses() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUntilDoorCloses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTLastOpened() {
            static BNM::Field<float> _field = GetClass().GetField(O("tLastOpened"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonTriggeredThisFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonTriggeredThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("closeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::GTDoor_DoorState value) {
            static BNM::Field<::GlobalNamespace::GTDoor_DoorState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorButtonTriggers(::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>*> _field = GetClass().GetField(O("doorButtonTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("doorColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorHoldOpenTriggers(::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTDoorTrigger*>*> _field = GetClass().GetField(O("doorHoldOpenTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorSpring(::BoingKit::FloatSpring value) {
            static BNM::Field<::BoingKit::FloatSpring> _field = GetClass().GetField(O("doorSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGTDoorID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("GTDoorID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastChecked(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("openSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeopleInHoldOpenVolume(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("peopleInHoldOpenVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsCheck(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("secondsCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUntilDoorCloses(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUntilDoorCloses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTLastOpened(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tLastOpened"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ChangeDoorState(::GlobalNamespace::GTDoor_DoorState shouldOpenState, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeDoorState"), {"shouldOpenState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shouldOpenState, info);
        }
        void ChangeDoorStateShared(::GlobalNamespace::GTDoor_DoorState shouldOpenState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeDoorStateShared"), {"shouldOpenState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shouldOpenState);
        }
        void CloseDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoorButtonTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoorButtonTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OpenDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetDoorOpenedTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetDoorOpenedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RPC_ChangeDoorState(::BNM::IL2CPP::Il2CppObject* runner, ::GlobalNamespace::GTDoor_DoorState shouldOpenState, int doorId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ChangeDoorState"), {"runner", "shouldOpenState", "doorId"});
            _m.Call(runner, shouldOpenState, doorId);
        }
        static void RPC_ChangeDoorState$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ChangeDoorState@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        void SetupDoorIDs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupDoorIDs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDoorAnimation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDoorAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDoorState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDoorState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
