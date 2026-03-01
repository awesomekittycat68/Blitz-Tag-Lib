#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/TransferrableObject.hpp"

namespace GorillaTag {
    struct DrinkableHoldable : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "DrinkableHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::ContainerLiquid* GetContainerLiquid() {
            static BNM::Field<::GorillaTag::ContainerLiquid*> _field = GetClass().GetField(O("containerLiquid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCoolingDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("coolingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHeadToMouthOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headToMouthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTimeSipSoundPlayed() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTimeSipSoundPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMyByteArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("myByteArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSipRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("sipRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSipRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("sipRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSipSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("sipSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSipSoundCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("sipSoundCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasCoolingDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasCoolingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasSipping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSipping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetContainerLiquid(::GorillaTag::ContainerLiquid* value) {
            static BNM::Field<::GorillaTag::ContainerLiquid*> _field = GetClass().GetField(O("containerLiquid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolingDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("coolingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadToMouthOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headToMouthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTimeSipSoundPlayed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTimeSipSoundPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyByteArray(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("myByteArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSipRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sipRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSipRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sipRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSipSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("sipSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSipSoundCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sipSoundCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasCoolingDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasCoolingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasSipping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSipping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void GetBytes(int value, uint8_t& bytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBytes"), {"value", "bytes"});
            _m.Call(value, &bytes);
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateReplicated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int PackValues(float cooldownStartTime, float fillAmount, bool coolingDown) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PackValues"), {"cooldownStartTime", "fillAmount", "coolingDown"});
            return _m.Call(cooldownStartTime, fillAmount, coolingDown);
        }
        void UnpackValuesNonstatic(int& packed, float& cooldownStartTime, float& fillAmount, bool& coolingDown) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackValuesNonstatic"), {"packed", "cooldownStartTime", "fillAmount", "coolingDown"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&packed, &cooldownStartTime, &fillAmount, &coolingDown);
        }
        static void UnpackValuesStatic(int& packed, float& cooldownStartTime, float& fillAmount, bool& coolingDown) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackValuesStatic"), {"packed", "cooldownStartTime", "fillAmount", "coolingDown"});
            _m.Call(&packed, &cooldownStartTime, &fillAmount, &coolingDown);
        }
    };
}
