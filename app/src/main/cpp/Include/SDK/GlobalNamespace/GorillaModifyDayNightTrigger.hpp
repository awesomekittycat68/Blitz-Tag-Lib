#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BetterDayNightManager_WeatherType.hpp"
#include "GorillaTriggerBox.hpp"

namespace GlobalNamespace {
    struct GorillaModifyDayNightTrigger : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaModifyDayNightTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetClearModifiedTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("clearModifiedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager_WeatherType GetFixedWeather() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_WeatherType> _field = GetClass().GetField(O("fixedWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetFixedWeather() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setFixedWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeOfDayIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeOfDayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClearModifiedTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("clearModifiedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_WeatherType> _field = GetClass().GetField(O("fixedWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetFixedWeather(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setFixedWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOfDayIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("timeOfDayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
