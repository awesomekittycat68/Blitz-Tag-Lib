#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeUnit.hpp"

namespace UniLabs_Time {
    struct TimeUnitExtensions_GetUnitValueDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UniLabs.Time", "TimeUnitExtensions").GetInnerClass("GetUnitValueDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*, typename TP3 = void*>
        void* BeginInvoke(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"timeSpan", "timeUnit", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timeSpan, timeUnit, callback, object);
        }
        template <typename TP0 = void*>
        double EndInvoke(TP0 result) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        template <typename TP0 = void*>
        double Invoke(TP0 timeSpan, ::UniLabs_Time::TimeUnit timeUnit) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("Invoke"), {"timeSpan", "timeUnit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timeSpan, timeUnit);
        }
    };
}
