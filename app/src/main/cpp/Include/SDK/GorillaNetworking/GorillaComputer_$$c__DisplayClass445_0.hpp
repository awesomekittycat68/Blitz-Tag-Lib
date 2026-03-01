#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaComputer_ComputerState.hpp"

namespace GorillaNetworking {
    struct GorillaComputer_$$c__DisplayClass445_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaComputer").GetInnerClass("<>c__DisplayClass445_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking::GorillaComputer_ComputerState GetState() {
            static BNM::Field<::GorillaNetworking::GorillaComputer_ComputerState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetState(::GorillaNetworking::GorillaComputer_ComputerState value) {
            static BNM::Field<::GorillaNetworking::GorillaComputer_ComputerState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
