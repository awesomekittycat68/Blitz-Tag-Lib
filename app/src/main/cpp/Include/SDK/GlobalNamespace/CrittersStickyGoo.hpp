#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"

namespace GlobalNamespace {
    struct CrittersStickyGoo : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersStickyGoo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDestroyOnApply() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnApply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReadyToDisable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("readyToDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowModifier() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowModifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestroyOnApply(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnApply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReadyToDisable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("readyToDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowModifier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowModifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanAffect(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanAffect"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position);
        }
        void EffectApplied(::GlobalNamespace::CrittersPawn* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EffectApplied"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ProcessLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
