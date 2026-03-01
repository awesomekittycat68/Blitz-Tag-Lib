#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$10.hpp"
#include "../Fusion_CodeGen/FixedStorage$18.hpp"

namespace GorillaTag {
    struct ScienceExperimentManager_ScienceManagerData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ScienceExperimentManager").GetInnerClass("ScienceManagerData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetActivationProgress() {
            static BNM::Field<double> _field = GetClass().GetField(O("activationProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInGamePlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("inGamePlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastWinnerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastWinnerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextRoundRiseSpeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextRoundRiseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReliableState() {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateStartLiquidProgressLinear() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartLiquidProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationProgress(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("activationProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInGamePlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("inGamePlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWinnerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastWinnerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextRoundRiseSpeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextRoundRiseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartLiquidProgressLinear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartLiquidProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_initialAngleArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_initialAngleArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_playerIdArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_playerIdArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_resultingAngleArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_resultingAngleArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_touchedLiquidArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_touchedLiquidArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_touchedLiquidAtProgressArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_touchedLiquidAtProgressArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
