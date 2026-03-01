#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GRMetalEnergyGate_DoorParams.hpp"
#include "GRMetalEnergyGate_State.hpp"

namespace GlobalNamespace {
    struct GRMetalEnergyGate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRMetalEnergyGate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetDisableObjectsOnOpen() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("disableObjectsOnOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDoorAnimationCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("doorAnimationCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDoorCloseClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorCloseClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDoorCloseCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("doorCloseCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorCloseTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDoorOpenClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorOpenClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDoorOpenCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("doorOpenCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorOpenTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetEnableObjectsOnOpen() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("enableObjectsOnOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRMetalEnergyGate_DoorParams GetLowerDoor() {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate_DoorParams> _field = GetClass().GetField(O("lowerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOpenProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("openProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRMetalEnergyGate_State GetState() {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool* GetTool() {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRMetalEnergyGate_DoorParams GetUpperDoor() {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate_DoorParams> _field = GetClass().GetField(O("upperDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableObjectsOnOpen(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("disableObjectsOnOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorAnimationCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("doorAnimationCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorCloseClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("doorCloseCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorOpenClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("doorOpenCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableObjectsOnOpen(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("enableObjectsOnOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowerDoor(::GlobalNamespace::GRMetalEnergyGate_DoorParams value) {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate_DoorParams> _field = GetClass().GetField(O("lowerDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("openProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRMetalEnergyGate_State value) {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTool(::GlobalNamespace::GRTool* value) {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpperDoor(::GlobalNamespace::GRMetalEnergyGate_DoorParams value) {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate_DoorParams> _field = GetClass().GetField(O("upperDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CloseGate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseGate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnEnergyChange(::GlobalNamespace::GRTool* tool, int energyChange, ::GlobalNamespace::GameEntityId chargingEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnergyChange"), {"tool", "energyChange", "chargingEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool, energyChange, chargingEntityId);
        }
        void OnEntityStateChanged(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChanged"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OpenGate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenGate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetState_1(::GlobalNamespace::GRMetalEnergyGate_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        ::BNM::Coroutine::IEnumerator* UpdateDoorAnimation() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UpdateDoorAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
