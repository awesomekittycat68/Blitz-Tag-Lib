#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    template <typename T1, typename T2, typename T3, typename T4>
    struct MainThreadDispatcher_$ActionWrapper$d__16$4 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "MainThreadDispatcher").GetInnerClass("<ActionWrapper>d__16`4");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<T1, T2, T3, T4>* GetAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<T1, T2, T3, T4>*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T1 GetParam1() {
            static BNM::Field<T1> _field = GetClass().GetField(O("param1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T2 GetParam2() {
            static BNM::Field<T2> _field = GetClass().GetField(O("param2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T3 GetParam3() {
            static BNM::Field<T3> _field = GetClass().GetField(O("param3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T4 GetParam4() {
            static BNM::Field<T4> _field = GetClass().GetField(O("param4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAction(::BNM::Structures::Mono::Action<T1, T2, T3, T4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<T1, T2, T3, T4>*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParam1(T1 value) {
            static BNM::Field<T1> _field = GetClass().GetField(O("param1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParam2(T2 value) {
            static BNM::Field<T2> _field = GetClass().GetField(O("param2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParam3(T3 value) {
            static BNM::Field<T3> _field = GetClass().GetField(O("param3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParam4(T4 value) {
            static BNM::Field<T4> _field = GetClass().GetField(O("param4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
