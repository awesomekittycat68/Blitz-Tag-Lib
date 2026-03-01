#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_AgeDiscrepancyScreen_$ShowAgeDiscrepancyScreenWithAwait$d__9 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_AgeDiscrepancyScreen").GetInnerClass("<ShowAgeDiscrepancyScreenWithAwait>d__9");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAccAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("accAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowestAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUserAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("userAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("accAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("userAge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void MoveNext() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SetStateMachine(TP0 stateMachine) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateMachine"), {"stateMachine"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateMachine);
        }
    };
}
