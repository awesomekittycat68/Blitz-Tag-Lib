#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EmitSignalToBiter_EdibleState.hpp"
#include "GTSignalEmitter.hpp"

namespace GlobalNamespace {
    struct EmitSignalToBiter : ::GlobalNamespace::GTSignalEmitter {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EmitSignalToBiter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::EmitSignalToBiter_EdibleState GetOnEdibleState() {
            static BNM::Field<::GlobalNamespace::EmitSignalToBiter_EdibleState> _field = GetClass().GetField(O("onEdibleState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EdibleHoldable* GetTargetEdible() {
            static BNM::Field<::GlobalNamespace::EdibleHoldable*> _field = GetClass().GetField(O("targetEdible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnEdibleState(::GlobalNamespace::EmitSignalToBiter_EdibleState value) {
            static BNM::Field<::GlobalNamespace::EmitSignalToBiter_EdibleState> _field = GetClass().GetField(O("onEdibleState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetEdible(::GlobalNamespace::EdibleHoldable* value) {
            static BNM::Field<::GlobalNamespace::EdibleHoldable*> _field = GetClass().GetField(O("targetEdible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Emit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Emit(int targetActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"targetActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetActor);
        }
        void Emit(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
    };
}
