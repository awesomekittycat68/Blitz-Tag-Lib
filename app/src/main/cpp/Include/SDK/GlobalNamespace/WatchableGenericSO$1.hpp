#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EnterPlayID.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct WatchableGenericSO$1 : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WatchableGenericSO`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetValue() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get__value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetValue(T value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        T GetValue_pg() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_Value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetValue_ps(T value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<T>*>* GetCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<T>*>*> _field = GetClass().GetField(O("callbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EnterPlayID GetEnterPlayID() {
            static BNM::Field<::GlobalNamespace::EnterPlayID> _field = GetClass().GetField(O("enterPlayID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T GetInitialValue() {
            static BNM::Field<T> _field = GetClass().GetField(O("InitialValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallbacks(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<T>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<T>*>*> _field = GetClass().GetField(O("callbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterPlayID(::GlobalNamespace::EnterPlayID value) {
            static BNM::Field<::GlobalNamespace::EnterPlayID> _field = GetClass().GetField(O("enterPlayID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialValue(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("InitialValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCallback(::BNM::Structures::Mono::Action<T>* callback, bool shouldCallbackNow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallback"), {"callback", "shouldCallbackNow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback, shouldCallbackNow);
        }
        void EnsureInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        T get__value() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get__value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T get_Value() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RemoveCallback(::BNM::Structures::Mono::Action<T>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void set__value(T value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__value"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Value(T value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Value"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
