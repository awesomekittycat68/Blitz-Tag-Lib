#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AverageVector3_Sample.hpp"

namespace GlobalNamespace {
    struct AverageVector3 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AverageVector3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::AverageVector3_Sample>* GetSamples() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AverageVector3_Sample>*> _field = GetClass().GetField(O("samples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeWindow() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSamples(::BNM::Structures::Mono::List<::GlobalNamespace::AverageVector3_Sample>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AverageVector3_Sample>*> _field = GetClass().GetField(O("samples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeWindow(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSample(::BNM::Structures::Unity::Vector3 sample, float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSample"), {"sample", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sample, time);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetAverage() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetAverage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RefreshSamples() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshSamples"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
