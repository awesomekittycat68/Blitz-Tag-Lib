#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct RingBuffer$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RingBuffer`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCapacity() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Capacity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsEmpty() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsEmpty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFull() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFull"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Size"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCapacity_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_capacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHead() {
            static BNM::Field<int> _field = GetClass().GetField(O("_head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetItems() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("_items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSize_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTail() {
            static BNM::Field<int> _field = GetClass().GetField(O("_tail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHead(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItems(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("_items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTail(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_tail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* AsSegment() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("AsSegment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Capacity() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Capacity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsEmpty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsEmpty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFull() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Size() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Size"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T& PeekFirst() {
            static BNM::Method<T&> _m = GetClass().GetMethod(O("PeekFirst"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T& PeekLast() {
            static BNM::Method<T&> _m = GetClass().GetMethod(O("PeekLast"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T Pop() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Pop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Push(T item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Push"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item);
        }
        bool TryGet(int i, T& item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGet"), {"i", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(i, &item);
        }
        bool TryPop(T& item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPop"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&item);
        }
    };
}
