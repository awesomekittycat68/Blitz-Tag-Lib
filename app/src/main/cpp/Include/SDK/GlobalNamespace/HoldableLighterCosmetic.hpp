#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HoldableLighterCosmetic_LighterResult.hpp"

namespace GlobalNamespace {
    struct HoldableLighterCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HoldableLighterCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetExplodeWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("explodeWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlickerWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("flickerWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastCheckTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheckTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLightWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("lightWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnExplode() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnExplode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnFlicker() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFlicker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnLight() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTriggerRelease() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTriggerRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOwnerID() {
            static BNM::Field<int> _field = GetClass().GetField(O("OwnerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetParentTransferable() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>* GetResultTimeline() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>*> _field = GetClass().GetField(O("resultTimeline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExplodeWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("explodeWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickerWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flickerWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCheckTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheckTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lightWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnExplode(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnExplode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFlicker(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFlicker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLight(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTriggerRelease(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTriggerRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("OwnerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultTimeline(::BNM::Structures::Mono::Array<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>*> _field = GetClass().GetField(O("resultTimeline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugPull() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugPull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::HoldableLighterCosmetic_LighterResult GetResultAtTime(double photonTime, int seed) {
            static BNM::Method<::GlobalNamespace::HoldableLighterCosmetic_LighterResult> _m = GetClass().GetMethod(O("GetResultAtTime"), {"photonTime", "seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(photonTime, seed);
        }
        bool IsMyItem() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMyItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerPulled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerPulled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrySetID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrySetID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
