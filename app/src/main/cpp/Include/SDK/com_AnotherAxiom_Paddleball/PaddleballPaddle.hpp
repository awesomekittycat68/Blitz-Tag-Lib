#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace com_AnotherAxiom_Paddleball {
    struct PaddleballPaddle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("com.AnotherAxiom.Paddleball", "PaddleballPaddle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetRight() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Right"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRight_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("right"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("right"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_Right() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Right"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
