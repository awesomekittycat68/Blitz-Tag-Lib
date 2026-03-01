#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CallLimiter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CallLimiter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr double k_serverMaxTime = 4294967.295;
        bool GetBlockCall() {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlockStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("blockStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCallHistoryLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("callHistoryLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetCallTimeHistory() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("callTimeHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMaxLatency() {
            static BNM::Field<double> _field = GetClass().GetField(O("maxLatency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOldTimeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("oldTimeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlockCall(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blockStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallHistoryLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("callHistoryLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallTimeHistory(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("callTimeHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLatency(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("maxLatency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldTimeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("oldTimeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckCallServerTime(double time) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCallServerTime"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(time);
        }
        bool CheckCallTime(float time) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCallTime"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(time);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
