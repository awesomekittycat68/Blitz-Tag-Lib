#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SharedBlocksTerminal_ScreenType.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType GetScreenType() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType> _field = GetClass().GetField(O("screenType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksTerminal* GetTerminal() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal*> _field = GetClass().GetField(O("terminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetScreenType(::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_ScreenType> _field = GetClass().GetField(O("screenType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTerminal(::GorillaTagScripts_Builder::SharedBlocksTerminal* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal*> _field = GetClass().GetField(O("terminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Hide() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDeletePressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeletePressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDownPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDownPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLetterPressed(::BNM::Structures::Mono::String* letter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLetterPressed"), {"letter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(letter);
        }
        void OnNumberPressed(int number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNumberPressed"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void OnSelectPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSelectPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Show() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
