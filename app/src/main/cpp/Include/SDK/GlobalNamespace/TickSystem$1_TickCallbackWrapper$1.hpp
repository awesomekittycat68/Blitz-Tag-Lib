#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T, typename U>
    struct TickSystem$1_TickCallbackWrapper$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TickSystem`1").GetInnerClass("TickCallbackWrapper`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        U GetTarget() {
            static BNM::Method<U> _method = GetClass().GetMethod(O("get_target"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTarget(U value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_target"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        U GetMTarget() {
            static BNM::Field<U> _field = GetClass().GetField(O("m_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMTarget(U value) {
            static BNM::Field<U> _field = GetClass().GetField(O("m_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CallBack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallBack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        U get_target() {
            static BNM::Method<U> _m = GetClass().GetMethod(O("get_target"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnReturned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTaken() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTaken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_target(U value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_target"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
