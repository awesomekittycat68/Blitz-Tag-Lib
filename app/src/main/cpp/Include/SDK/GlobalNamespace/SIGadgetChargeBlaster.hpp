#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadgetChargeBlaster_BlasterChargeLevel.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetChargeBlaster : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetChargeBlaster");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIGadgetBlaster* GetBlaster() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("blaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>* GetChargeLevels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>*> _field = GetClass().GetField(O("chargeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeRatePerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRatePerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetChargingClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chargingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentCharge() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireRateGracePercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireRateGracePercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxChargeDiff() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxChargeDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlaster(::GlobalNamespace::SIGadgetBlaster* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlaster*> _field = GetClass().GetField(O("blaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeLevels(::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>*> _field = GetClass().GetField(O("chargeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeRatePerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeRatePerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargingClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chargingClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCharge(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireRateGracePercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireRateGracePercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxChargeDiff(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxChargeDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        bool CheckInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int CurrentBlasterChargeLevel() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CurrentBlasterChargeLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FireProjectile(float firedAtChargeLevel, int fireId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireProjectile"), {"firedAtChargeLevel", "fireId", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(firedAtChargeLevel, fireId, position, rotation);
        }
        void NetworkFireProjectile(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkFireProjectile"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetStateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateChargingVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateChargingVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
