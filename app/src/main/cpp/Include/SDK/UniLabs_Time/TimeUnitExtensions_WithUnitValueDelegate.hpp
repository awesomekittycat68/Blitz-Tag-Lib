#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeUnit.hpp"

namespace UniLabs_Time {
    struct TimeUnitExtensions_WithUnitValueDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UniLabs.Time", "TimeUnitExtensions").GetInnerClass("WithUnitValueDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*, typename TP4 = void*>
        void* BeginInvoke(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, double value, ::BNM::IL2CPP::Il2CppObject* callback, TP4 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"timeSpan", "timeUnit", "value", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timeSpan, timeUnit, value, callback, object);
        }
        template <typename TP0 = void*>
        void* EndInvoke(TP0 result) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        template <typename TP0 = void*>
        void* Invoke(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, double value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Invoke"), {"timeSpan", "timeUnit", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timeSpan, timeUnit, value);
        }
    };
}
