#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"

namespace GorillaTagScripts {
    struct MenorahCandle : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "MenorahCandle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActiveTimeEventDay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activeTimeEventDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCandle() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("candle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCurrentDate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDay() {
            static BNM::Field<int> _field = GetClass().GetField(O("day"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFlame() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLitDate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("litDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMonth() {
            static BNM::Field<int> _field = GetClass().GetField(O("month"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetYear() {
            static BNM::Field<int> _field = GetClass().GetField(O("year"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveTimeEventDay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activeTimeEventDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCandle(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("candle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("day"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlame(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("flame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLitDate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("litDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("month"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("year"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CandleShouldBeVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CandleShouldBeVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void EnableCandle(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableCandle"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void EnableFlame(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableFlame"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTimeChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTimeEventEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeEventEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTimeEventStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeEventStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldLightCandle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldLightCandle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldSnuffCandle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSnuffCandle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMenorah() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMenorah"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
