#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CoolDownHelper.hpp"

namespace GorillaTag {
    struct TickSystemTimerAbstract : ::GorillaTag::CoolDownHelper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "TickSystemTimerAbstract");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Running"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRegistered() {
            static BNM::Field<bool> _field = GetClass().GetField(O("registered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRegistered(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("registered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_Running() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Running"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCheckPass() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCheckPass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTimedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
