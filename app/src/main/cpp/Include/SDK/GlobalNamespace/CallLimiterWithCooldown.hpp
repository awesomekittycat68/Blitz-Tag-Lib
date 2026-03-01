#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CallLimiter.hpp"

namespace GlobalNamespace {
    struct CallLimiterWithCooldown : ::GlobalNamespace::CallLimiter {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CallLimiterWithCooldown");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetSpamCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("spamCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpamCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spamCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckCallTime(float time) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCallTime"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(time);
        }
    };
}
