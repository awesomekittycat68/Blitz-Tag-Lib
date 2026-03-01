#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeUnit.hpp"

namespace UniLabs_Time {
    struct TimeUnitExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UniLabs.Time", "TimeUnitExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static void* FromSingleUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, double value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FromSingleUnitValue"), {"timeSpan", "timeUnit", "value"});
            return _m.Call(timeSpan, timeUnit, value);
        }
        template <typename TP0 = void*>
        static double GetHighestUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetHighestUnitValue"), {"timeSpan", "timeUnit"});
            return _m.Call(timeSpan, timeUnit);
        }
        template <typename TP0 = void*>
        static double GetLowestUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetLowestUnitValue"), {"timeSpan", "timeUnit"});
            return _m.Call(timeSpan, timeUnit);
        }
        template <typename TP0 = void*>
        static double GetSingleUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetSingleUnitValue"), {"timeSpan", "timeUnit"});
            return _m.Call(timeSpan, timeUnit);
        }
        template <typename TP0 = void*>
        static double GetUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetUnitValue"), {"timeSpan", "timeUnit"});
            return _m.Call(timeSpan, timeUnit);
        }
        template <typename TP0 = void*>
        static void* SnapToUnit(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SnapToUnit"), {"timeSpan", "timeUnit"});
            return _m.Call(timeSpan, timeUnit);
        }
        static ::BNM::Structures::Mono::String* ToSeparatorString(::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToSeparatorString"), {"timeUnit"});
            return _m.Call(timeUnit);
        }
        static ::BNM::Structures::Mono::String* ToShortString(::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToShortString"), {"timeUnit"});
            return _m.Call(timeUnit);
        }
        template <typename TP0 = void*>
        static void* WithHighestUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, double value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WithHighestUnitValue"), {"timeSpan", "timeUnit", "value"});
            return _m.Call(timeSpan, timeUnit, value);
        }
        template <typename TP0 = void*>
        static void* WithLowestUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, double value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WithLowestUnitValue"), {"timeSpan", "timeUnit", "value"});
            return _m.Call(timeSpan, timeUnit, value);
        }
        template <typename TP0 = void*>
        static void* WithUnitValue(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, double value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WithUnitValue"), {"timeSpan", "timeUnit", "value"});
            return _m.Call(timeSpan, timeUnit, value);
        }
    };
}
