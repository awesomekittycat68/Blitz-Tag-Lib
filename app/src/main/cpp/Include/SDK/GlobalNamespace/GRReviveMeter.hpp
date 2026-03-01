#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GRReviveMeter : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRReviveMeter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetMeter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("meter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRReviveStation* GetReviveStation() {
            static BNM::Field<::GlobalNamespace::GRReviveStation*> _field = GetClass().GetField(O("reviveStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMeter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("meter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReviveStation(::GlobalNamespace::GRReviveStation* value) {
            static BNM::Field<::GlobalNamespace::GRReviveStation*> _field = GetClass().GetField(O("reviveStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
