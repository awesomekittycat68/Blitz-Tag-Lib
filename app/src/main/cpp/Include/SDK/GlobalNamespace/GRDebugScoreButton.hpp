#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRDebugScoreButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRDebugScoreButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void AddScore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttemptPurchaseShiftCredit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptPurchaseShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttemptPurchaseShiftCreditIncrease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptPurchaseShiftCreditIncrease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetShiftCredit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
