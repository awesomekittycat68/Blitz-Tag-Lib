#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace UniLabs_Time {
    struct UTimeSpanRange : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UniLabs.Time", "UTimeSpanRange");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::UniLabs_Time::UTimeSpan* GetEnd() {
            static BNM::Field<::UniLabs_Time::UTimeSpan*> _field = GetClass().GetField(O("_End"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::UniLabs_Time::UTimeSpan* GetStart() {
            static BNM::Field<::UniLabs_Time::UTimeSpan*> _field = GetClass().GetField(O("_Start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnd(::UniLabs_Time::UTimeSpan* value) {
            static BNM::Field<::UniLabs_Time::UTimeSpan*> _field = GetClass().GetField(O("_End"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStart(::UniLabs_Time::UTimeSpan* value) {
            static BNM::Field<::UniLabs_Time::UTimeSpan*> _field = GetClass().GetField(O("_Start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_Duration() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Duration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_End() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_End"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Start() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        bool IsInRange(TP0 time) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInRange"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(time);
        }
        void OnEndChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEndChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStartChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStartChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void set_End(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_End"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_Start(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Start"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
