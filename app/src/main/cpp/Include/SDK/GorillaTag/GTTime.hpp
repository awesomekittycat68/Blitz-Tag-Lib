#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct GTTime : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "GTTime");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GTTime]  ";
        static constexpr const char* preErr = "[GTTime]  ERROR!!!  ";
        ::BNM::IL2CPP::Il2CppObject* GetTimeZoneInfoLA() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_timeZoneInfoLA"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimeZoneInfoLA(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_timeZoneInfoLA"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUsingServerTime() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_usingServerTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUsingServerTime(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_usingServerTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static bool GetIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            return _field.Get();
        }
        static void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.Set(value);
        }
        static void _Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Init"));
            _m.Call();
        }
        static bool _TryCreateCustomPST(::BNM::IL2CPP::Il2CppObject*& out_tz) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_TryCreateCustomPST"), {"out_tz"});
            return _m.Call(&out_tz);
        }
        static void* ConvertDateTimeHumanReadableLongToDateTime(int64_t humanReadableLong) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ConvertDateTimeHumanReadableLongToDateTime"), {"humanReadableLong"});
            return _m.Call(humanReadableLong);
        }
        static ::BNM::IL2CPP::Il2CppObject* get_timeZoneInfoLA() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_timeZoneInfoLA"));
            return _m.Call();
        }
        static bool get_usingServerTime() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_usingServerTime"));
            return _m.Call();
        }
        static void* GetAAxiomDateTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAAxiomDateTime"));
            return _m.Call();
        }
        static int64_t GetAAxiomDateTimeAsHumanReadableLong() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetAAxiomDateTimeAsHumanReadableLong"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetAAxiomDateTimeAsStringForDisplay() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAAxiomDateTimeAsStringForDisplay"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetAAxiomDateTimeAsStringForFilename() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAAxiomDateTimeAsStringForFilename"));
            return _m.Call();
        }
        static int64_t GetDeviceStartupTimeAsMilliseconds() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetDeviceStartupTimeAsMilliseconds"));
            return _m.Call();
        }
        static int64_t GetServerStartupTimeAsMilliseconds() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetServerStartupTimeAsMilliseconds"));
            return _m.Call();
        }
        static int64_t GetStartupTimeAsMilliseconds() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetStartupTimeAsMilliseconds"));
            return _m.Call();
        }
        static void set_timeZoneInfoLA(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_timeZoneInfoLA"), {"value"});
            _m.Call(value);
        }
        static void set_usingServerTime(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_usingServerTime"), {"value"});
            _m.Call(value);
        }
        static double TimeAsDouble() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("TimeAsDouble"));
            return _m.Call();
        }
        static int64_t TimeAsMilliseconds() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("TimeAsMilliseconds"));
            return _m.Call();
        }
    };
}
