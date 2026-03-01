#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SharedBlocksTerminal_ScreenType.hpp"
#include "SharedBlocksTerminal_TerminalState.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksTerminal_SharedBlocksTerminalState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksTerminal").GetInnerClass("SharedBlocksTerminalState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType GetCurrentScreen() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType> _field = GetClass().GetField(O("currentScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDriverID() {
            static BNM::Field<int> _field = GetClass().GetField(O("driverID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksTerminal_TerminalState GetState() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_TerminalState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentScreen(::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType> _field = GetClass().GetField(O("currentScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDriverID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("driverID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GorillaTagScripts_Builder::SharedBlocksTerminal_TerminalState value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_TerminalState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
