#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BeeSwarmData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BeeSwarmData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentSpeed"));
            return _method.Call();
        }
        void SetCurrentSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentSpeed"));
            _method.Call(value);
        }
        int GetCurrentState() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentState"));
            return _method.Call();
        }
        void SetCurrentState(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentState"));
            _method.Call(value);
        }
        int GetTargetActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TargetActorNumber"));
            return _method.Call();
        }
        void SetTargetActorNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TargetActorNumber"));
            _method.Call(value);
        }
        float get_CurrentSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurrentState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TargetActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TargetActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentState(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TargetActorNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TargetActorNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
