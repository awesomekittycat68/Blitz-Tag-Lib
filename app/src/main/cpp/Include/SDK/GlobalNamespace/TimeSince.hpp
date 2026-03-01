#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TimeSince : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TimeSince");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr double INT32_MAX = 2147483647.0;
        double GetSecondsElapsed() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_secondsElapsed"));
            return _method.Call();
        }
        float GetSecondsElapsedFloat() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_secondsElapsedFloat"));
            return _method.Call();
        }
        int GetSecondsElapsedInt() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_secondsElapsedInt"));
            return _method.Call();
        }
        int64_t GetSecondsElapsedLong() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_secondsElapsedLong"));
            return _method.Call();
        }
        uint32_t GetSecondsElapsedUint() {
            static BNM::Method<uint32_t> _method = GetClass().GetMethod(O("get_secondsElapsedUint"));
            return _method.Call();
        }
        void* GetDt() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_dt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDt(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_dt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        double get_secondsElapsed() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_secondsElapsed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_secondsElapsedFloat() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_secondsElapsedFloat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_secondsElapsedInt() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_secondsElapsedInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_secondsElapsedLong() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_secondsElapsedLong"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_secondsElapsedSpan() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_secondsElapsedSpan"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint32_t get_secondsElapsedUint() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("get_secondsElapsedUint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasElapsed(int seconds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds);
        }
        bool HasElapsed(uint32_t seconds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds);
        }
        bool HasElapsed(float seconds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds);
        }
        bool HasElapsed(double seconds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds);
        }
        bool HasElapsed(int64_t seconds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds);
        }
        template <typename TP0 = void*>
        bool HasElapsed(TP0 seconds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds);
        }
        bool HasElapsed(int seconds, bool resetOnElapsed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds", "resetOnElapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds, resetOnElapsed);
        }
        bool HasElapsed(uint32_t seconds, bool resetOnElapsed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds", "resetOnElapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds, resetOnElapsed);
        }
        bool HasElapsed(float seconds, bool resetOnElapsed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds", "resetOnElapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds, resetOnElapsed);
        }
        bool HasElapsed(double seconds, bool resetOnElapsed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds", "resetOnElapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds, resetOnElapsed);
        }
        bool HasElapsed(int64_t seconds, bool resetOnElapsed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds", "resetOnElapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds, resetOnElapsed);
        }
        template <typename TP0 = void*>
        bool HasElapsed(TP0 seconds, bool resetOnElapsed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElapsed"), {"seconds", "resetOnElapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(seconds, resetOnElapsed);
        }
        static ::GlobalNamespace::TimeSince Now() {
            static BNM::Method<::GlobalNamespace::TimeSince> _m = GetClass().GetMethod(O("Now"));
            return _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
