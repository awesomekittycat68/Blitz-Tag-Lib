#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_CustomMapSupport {
    struct CMSTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.CustomMapSupport", "CMSTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t INVALID_TRIGGER_ID = 255;
        static constexpr double MAX_PHOTON_SERVER_TIME = 4294967.295;
        static constexpr float MINIMUM_VALIDATION_DISTANCE = 2.0f;
        double GetEnabledTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("enabledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetGeneralRetriggerDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("generalRetriggerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetId() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastTriggerTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastTriggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetNumAllowedTriggers() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("numAllowedTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetNumTimesTriggered() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("numTimesTriggered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetOnEnableTriggerDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("onEnableTriggerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRetriggerAfterDuration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("retriggerAfterDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetRetriggerStayDuration() {
            static BNM::Field<double> _field = GetClass().GetField(O("retriggerStayDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSyncedToAllPlayers() {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncedToAllPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTriggeredBy() {
            static BNM::Field<void*> _field = GetClass().GetField(O("triggeredBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetValidationDistanceSquared() {
            static BNM::Field<float> _field = GetClass().GetField(O("validationDistanceSquared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnabledTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("enabledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeneralRetriggerDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("generalRetriggerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTriggerTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastTriggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumAllowedTriggers(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("numAllowedTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumTimesTriggered(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("numTimesTriggered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnableTriggerDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("onEnableTriggerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetriggerAfterDuration(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("retriggerAfterDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetriggerStayDuration(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("retriggerStayDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncedToAllPlayers(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncedToAllPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggeredBy(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("triggeredBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidationDistanceSquared(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("validationDistanceSquared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanTrigger() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CopyTriggerSettings(::BNM::IL2CPP::Il2CppObject* settings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTriggerSettings"), {"settings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(settings);
        }
        uint8_t GetID() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerActivation(::Collider* activatingCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerActivation"), {"activatingCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(activatingCollider);
        }
        void OnTriggerEnter(::Collider* triggeringCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"triggeringCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggeringCollider);
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void ResetTrigger(bool onlyResetTriggerCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTrigger"), {"onlyResetTriggerCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onlyResetTriggerCount);
        }
        void SetLastTriggerTime_1(double value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLastTriggerTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetTriggerCount(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTriggerCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Trigger(double triggerTime, bool originatedLocally, bool ignoreTriggerCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Trigger"), {"triggerTime", "originatedLocally", "ignoreTriggerCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerTime, originatedLocally, ignoreTriggerCount);
        }
        bool ValidateCollider(::Collider* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateCollider"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
    };
}
