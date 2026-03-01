#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct MonoBehaviourStatic$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonoBehaviourStatic`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static T get_Instance() {
            static BNM::Method<T> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        T GetInstance() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static T GetGInstance() {
            static BNM::Field<T> _field = GetClass().GetField(O("gInstance"));
            return _field.Get();
        }
        static void SetGInstance(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("gInstance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static T get_Instance_1() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void OnAwake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAwake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
