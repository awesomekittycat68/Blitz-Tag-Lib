#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct CurrentServerStats : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "CurrentServerStats");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActive() {
            static BNM::Field<int> _field = GetClass().GetField(O("Active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPropping() {
            static BNM::Field<int> _field = GetClass().GetField(O("Propping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStandingBy() {
            static BNM::Field<int> _field = GetClass().GetField(O("StandingBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotal() {
            static BNM::Field<int> _field = GetClass().GetField(O("Total"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActive(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropping(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Propping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandingBy(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StandingBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Total"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
