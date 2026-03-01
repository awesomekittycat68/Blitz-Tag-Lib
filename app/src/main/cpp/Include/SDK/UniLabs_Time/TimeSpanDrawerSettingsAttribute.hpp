#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeUnit.hpp"

namespace UniLabs_Time {
    struct TimeSpanDrawerSettingsAttribute : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UniLabs.Time", "TimeSpanDrawerSettingsAttribute");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::UniLabs_Time::TimeUnit GetHighestUnit() {
            static BNM::Field<::UniLabs_Time::TimeUnit> _field = GetClass().GetField(O("HighestUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::UniLabs_Time::TimeUnit GetLowestUnit() {
            static BNM::Field<::UniLabs_Time::TimeUnit> _field = GetClass().GetField(O("LowestUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHighestUnit(::UniLabs_Time::TimeUnit value) {
            static BNM::Field<::UniLabs_Time::TimeUnit> _field = GetClass().GetField(O("HighestUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestUnit(::UniLabs_Time::TimeUnit value) {
            static BNM::Field<::UniLabs_Time::TimeUnit> _field = GetClass().GetField(O("LowestUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
