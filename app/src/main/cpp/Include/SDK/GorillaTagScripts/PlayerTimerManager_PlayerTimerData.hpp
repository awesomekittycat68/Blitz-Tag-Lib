#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct PlayerTimerManager_PlayerTimerData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "PlayerTimerManager").GetInnerClass("PlayerTimerData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetEndTimeStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("endTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetLastTimerDuration() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("lastTimerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartTimeStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("startTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndTimeStamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("endTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTimerDuration(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("lastTimerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTimeStamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
