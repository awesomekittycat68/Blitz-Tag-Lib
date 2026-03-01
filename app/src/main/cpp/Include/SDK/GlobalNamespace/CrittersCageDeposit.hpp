#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActorDeposit.hpp"

namespace GlobalNamespace {
    struct CrittersCageDeposit : ::GlobalNamespace::CrittersActorDeposit {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersCageDeposit");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnDepositCritter(::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDepositCritter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDepositCritter(::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDepositCritter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::CrittersActor* GetCurrentCage() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("currentCage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDepositAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("depositAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDepositCritterSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("depositCritterSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDepositEmptySound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("depositEmptySound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDepositEndLocation() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("depositEndLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDepositStartLocation() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("depositStartLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDepositStartSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("depositStartSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHandlingDeposit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandlingDeposit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>* GetOnDepositCritter() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>*> _field = GetClass().GetField(O("OnDepositCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReturnDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("returnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSubmitDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("submitDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentCage(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("currentCage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("depositAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositCritterSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("depositCritterSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositEmptySound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("depositEmptySound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositEndLocation(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("depositEndLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositStartLocation(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("depositStartLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositStartSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("depositStartSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHandlingDeposit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandlingDeposit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDepositCritter(::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>*> _field = GetClass().GetField(O("OnDepositCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("returnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubmitDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("submitDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnDepositCritter_1(::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDepositCritter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanDeposit(::GlobalNamespace::CrittersActor* depositActor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDeposit"), {"depositActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(depositActor);
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ProcessCage() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ProcessCage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void remove_OnDepositCritter_1(::BNM::Structures::Mono::Action<::GlobalNamespace::Menagerie_CritterData*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDepositCritter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StartProcessCage(::GlobalNamespace::CrittersActor* depositedActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartProcessCage"), {"depositedActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(depositedActor);
        }
    };
}
