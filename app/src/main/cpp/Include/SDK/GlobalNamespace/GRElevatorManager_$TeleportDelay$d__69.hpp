#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRElevatorManager_ElevatorLocation.hpp"

namespace GlobalNamespace {
    struct GRElevatorManager_$TeleportDelay$d__69 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRElevatorManager").GetInnerClass("<TeleportDelay>d__69");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRElevatorManager_ElevatorLocation GetDestination() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowestActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSentServerTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("sentServerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevatorManager_ElevatorLocation GetStart() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestination(::GlobalNamespace::GRElevatorManager_ElevatorLocation value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentServerTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("sentServerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStart(::GlobalNamespace::GRElevatorManager_ElevatorLocation value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
