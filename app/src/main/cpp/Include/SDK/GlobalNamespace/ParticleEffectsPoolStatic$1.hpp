#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ParticleEffectsPool.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct ParticleEffectsPoolStatic$1 : ::GlobalNamespace::ParticleEffectsPool {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ParticleEffectsPoolStatic`1");
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
        static T get_Instance_1() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void OnPoolAwake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPoolAwake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
