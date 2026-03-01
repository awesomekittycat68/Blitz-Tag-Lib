#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct FireworksController_ExplosionEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FireworksController").GetInnerClass("ExplosionEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBurstIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("burstIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExplosionIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("explosionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Firework* GetFirework() {
            static BNM::Field<::GlobalNamespace::Firework*> _field = GetClass().GetField(O("firework"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetTimeSince() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("timeSince"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBurstIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("burstIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExplosionIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("explosionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirework(::GlobalNamespace::Firework* value) {
            static BNM::Field<::GlobalNamespace::Firework*> _field = GetClass().GetField(O("firework"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSince(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("timeSince"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
