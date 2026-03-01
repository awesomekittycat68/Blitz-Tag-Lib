#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkSystemPUN_InternalState.hpp"

namespace GlobalNamespace {
    struct NetworkSystemPUN_$WaitForState$d__60 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkSystemPUN").GetInnerClass("<WaitForState>d__60");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetCt() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkSystemPUN_InternalState>* GetDesiredStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkSystemPUN_InternalState>*> _field = GetClass().GetField(O("desiredStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCt(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesiredStates(::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkSystemPUN_InternalState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkSystemPUN_InternalState>*> _field = GetClass().GetField(O("desiredStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void MoveNext() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SetStateMachine(TP0 stateMachine) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateMachine"), {"stateMachine"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateMachine);
        }
    };
}
