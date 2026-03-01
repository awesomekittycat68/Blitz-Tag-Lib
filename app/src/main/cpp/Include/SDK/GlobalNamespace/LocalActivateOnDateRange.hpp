#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LocalActivateOnDateRange : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalActivateOnDateRange");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActivationDay() {
            static BNM::Field<int> _field = GetClass().GetField(O("activationDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivationHour() {
            static BNM::Field<int> _field = GetClass().GetField(O("activationHour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivationMinute() {
            static BNM::Field<int> _field = GetClass().GetField(O("activationMinute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivationMonth() {
            static BNM::Field<int> _field = GetClass().GetField(O("activationMonth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivationSecond() {
            static BNM::Field<int> _field = GetClass().GetField(O("activationSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetActivationTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActivationYear() {
            static BNM::Field<int> _field = GetClass().GetField(O("activationYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDbgTimeUntilActivation() {
            static BNM::Field<double> _field = GetClass().GetField(O("dbgTimeUntilActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDbgTimeUntilDeactivation() {
            static BNM::Field<double> _field = GetClass().GetField(O("dbgTimeUntilDeactivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeactivationDay() {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeactivationHour() {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationHour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeactivationMinute() {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationMinute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeactivationMonth() {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationMonth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeactivationSecond() {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDeactivationTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("deactivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeactivationYear() {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetGameObjectsToActivate() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gameObjectsToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationDay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activationDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationHour(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activationHour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationMinute(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activationMinute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationMonth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activationMonth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationSecond(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activationSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationYear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activationYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDbgTimeUntilActivation(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("dbgTimeUntilActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDbgTimeUntilDeactivation(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("dbgTimeUntilDeactivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationDay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationHour(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationHour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationMinute(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationMinute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationMonth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationMonth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationSecond(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("deactivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeactivationYear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deactivationYear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameObjectsToActivate(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gameObjectsToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitActiveTimes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitActiveTimes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
