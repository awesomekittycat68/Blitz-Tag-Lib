#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    struct FsmContext : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "FsmContext");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::LitJson::Lexer* GetL() {
            static BNM::Field<::LitJson::Lexer*> _field = GetClass().GetField(O("L"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextState() {
            static BNM::Field<int> _field = GetClass().GetField(O("NextState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReturn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Return"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStateStack() {
            static BNM::Field<int> _field = GetClass().GetField(O("StateStack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetL(::LitJson::Lexer* value) {
            static BNM::Field<::LitJson::Lexer*> _field = GetClass().GetField(O("L"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NextState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Return"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStack(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StateStack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
