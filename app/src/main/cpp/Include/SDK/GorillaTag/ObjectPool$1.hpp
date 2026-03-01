#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    template <typename T>
    struct ObjectPool$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ObjectPool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMaxInstances() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxInstances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxInstances(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxInstances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPool(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        T CreateInstance() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("CreateInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializePool(int initialAmount, int maxAmount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializePool"), {"initialAmount", "maxAmount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialAmount, maxAmount);
        }
        void Return(T instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Return"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        T Take() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Take"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
