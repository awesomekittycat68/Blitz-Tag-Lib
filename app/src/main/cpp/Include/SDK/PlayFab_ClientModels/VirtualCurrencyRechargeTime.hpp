#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct VirtualCurrencyRechargeTime : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "VirtualCurrencyRechargeTime");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetRechargeMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("RechargeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRechargeTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("RechargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSecondsToRecharge() {
            static BNM::Field<int> _field = GetClass().GetField(O("SecondsToRecharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRechargeMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RechargeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRechargeTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("RechargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsToRecharge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SecondsToRecharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
