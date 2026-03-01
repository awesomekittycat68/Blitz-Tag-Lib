#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostLab_EntranceDoorsState.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GhostLab : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostLab");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDoorMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetDoorOpen() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("doorOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostLab_EntranceDoorsState GetDoorState() {
            static BNM::Field<::GlobalNamespace::GhostLab_EntranceDoorsState> _field = GetClass().GetField(O("doorState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDoorTravelDistance() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("doorTravelDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetInnerDoor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("innerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOuterDoor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("outerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostLabReliableState* GetRelState() {
            static BNM::Field<::GlobalNamespace::GhostLabReliableState*> _field = GetClass().GetField(O("relState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSingleDoorMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("singleDoorMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSingleDoorTravelDistance() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("singleDoorTravelDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetSlidingDoor() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("slidingDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDoorMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpen(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("doorOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState value) {
            static BNM::Field<::GlobalNamespace::GhostLab_EntranceDoorsState> _field = GetClass().GetField(O("doorState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorTravelDistance(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("doorTravelDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerDoor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("innerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOuterDoor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("outerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRelState(::GlobalNamespace::GhostLabReliableState* value) {
            static BNM::Field<::GlobalNamespace::GhostLabReliableState*> _field = GetClass().GetField(O("relState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSingleDoorMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("singleDoorMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSingleDoorTravelDistance(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("singleDoorTravelDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlidingDoor(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("slidingDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void DoorButtonPress(int buttonIndex, bool forSingleDoor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoorButtonPress"), {"buttonIndex", "forSingleDoor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonIndex, forSingleDoor);
        }
        bool IsDoorMoving(bool singleDoor, int index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDoorMoving"), {"singleDoor", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(singleDoor, index);
        }
        void SynchStates() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SynchStates"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDoorState(int buttonIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDoorState"), {"buttonIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonIndex);
        }
        void UpdateEntranceDoorsState(int buttonIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEntranceDoorsState"), {"buttonIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonIndex);
        }
    };
}
