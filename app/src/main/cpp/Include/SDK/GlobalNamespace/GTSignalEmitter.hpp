#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTSignal_EmitMode.hpp"
#include "GTSignalID.hpp"

namespace GlobalNamespace {
    struct GTSignalEmitter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSignalEmitter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GTSignal_EmitMode GetEmitMode() {
            static BNM::Field<::GlobalNamespace::GTSignal_EmitMode> _field = GetClass().GetField(O("emitMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTSignalID GetSignal() {
            static BNM::Field<::GlobalNamespace::GTSignalID> _field = GetClass().GetField(O("signal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEmitMode(::GlobalNamespace::GTSignal_EmitMode value) {
            static BNM::Field<::GlobalNamespace::GTSignal_EmitMode> _field = GetClass().GetField(O("emitMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSignal(::GlobalNamespace::GTSignalID value) {
            static BNM::Field<::GlobalNamespace::GTSignalID> _field = GetClass().GetField(O("signal"));
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
