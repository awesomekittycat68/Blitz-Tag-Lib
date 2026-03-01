#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RealWorldDateTimeWindow : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RealWorldDateTimeWindow");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::UniLabs_Time::UDateTime* GetEndTime() {
            static BNM::Field<::UniLabs_Time::UDateTime*> _field = GetClass().GetField(O("endTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::UniLabs_Time::UDateTime* GetStartTime() {
            static BNM::Field<::UniLabs_Time::UDateTime*> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndTime(::UniLabs_Time::UDateTime* value) {
            static BNM::Field<::UniLabs_Time::UDateTime*> _field = GetClass().GetField(O("endTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(::UniLabs_Time::UDateTime* value) {
            static BNM::Field<::UniLabs_Time::UDateTime*> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool MatchesDate(TP0 utcDate) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MatchesDate"), {"utcDate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(utcDate);
        }
    };
}
