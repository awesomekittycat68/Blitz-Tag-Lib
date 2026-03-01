#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct RandomContainer$1 : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RandomContainer`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetLastItem() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_lastItem"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLastItemIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_lastItemIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        T GetLastItem_f() {
            static BNM::Field<T> _field = GetClass().GetField(O("_lastItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastItemIndex_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastItemIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SRand GetRnd() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("_rnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDistinct() {
            static BNM::Field<bool> _field = GetClass().GetField(O("distinct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetItems() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSeed_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStaticSeed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("staticSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastItem(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("_lastItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastItemIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastItemIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRnd(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("_rnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistinct(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("distinct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItems(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeed_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticSeed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("staticSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        T get_lastItem() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_lastItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_lastItemIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_lastItemIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T GetItem(int index) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetItem"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        T NextItem() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("NextItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void ResetRandom(TP0 seedValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetRandom"), {"seedValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seedValue);
        }
    };
}
