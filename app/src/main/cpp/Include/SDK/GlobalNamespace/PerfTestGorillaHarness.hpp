#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PerfTestGorillaHarness : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PerfTestGorillaHarness");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsRecording() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRecording"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextRandomMoveTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextRandomMoveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PerfTestGorillaSlot* GetVrSlot() {
            static BNM::Field<::GlobalNamespace::PerfTestGorillaSlot*> _field = GetClass().GetField(O("_vrSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBounceAmplitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBounceSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::PerfTestGorillaSlot*>* GetDummySlots() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PerfTestGorillaSlot*>*> _field = GetClass().GetField(O("dummySlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsRecording(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRecording"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextRandomMoveTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextRandomMoveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrSlot(::GlobalNamespace::PerfTestGorillaSlot* value) {
            static BNM::Field<::GlobalNamespace::PerfTestGorillaSlot*> _field = GetClass().GetField(O("_vrSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounceAmplitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounceSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummySlots(::BNM::Structures::Mono::List<::GlobalNamespace::PerfTestGorillaSlot*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PerfTestGorillaSlot*>*> _field = GetClass().GetField(O("dummySlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartRecording() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopRecording() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
