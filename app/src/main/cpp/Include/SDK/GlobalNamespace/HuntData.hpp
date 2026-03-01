#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$20.hpp"

namespace GlobalNamespace {
    struct HuntData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HuntData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCountDownTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("countDownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHuntStarted() {
            static BNM::Field<void*> _field = GetClass().GetField(O("huntStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWaitingToStartNextHuntGame() {
            static BNM::Field<void*> _field = GetClass().GetField(O("waitingToStartNextHuntGame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCountDownTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("countDownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntStarted(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("huntStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingToStartNextHuntGame(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("waitingToStartNextHuntGame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_currentHuntedArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_currentHuntedArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_currentTargetArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_currentTargetArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
