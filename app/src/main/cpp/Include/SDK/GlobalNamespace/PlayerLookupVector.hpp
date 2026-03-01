#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PlayerLookupVector : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerLookupVector");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCapacity() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Capacity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCapacity(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Capacity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFixedSize() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFixedSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReadOnly() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReadOnly"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSynchronized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSynchronized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::PlayerLookupEntry* GetItem() {
            static BNM::Method<::GlobalNamespace::PlayerLookupEntry*> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetItem(::GlobalNamespace::PlayerLookupEntry* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSwigCMemOwn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("swigCMemOwn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCMemOwn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("swigCMemOwn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Add(::GlobalNamespace::PlayerLookupEntry* x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(x);
        }
        void AddRange(::GlobalNamespace::PlayerLookupVector* values) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRange"), {"values"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(values);
        }
        uint32_t capacity() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("capacity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyTo(::BNM::Structures::Mono::Array<::GlobalNamespace::PlayerLookupEntry*>* array) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(array);
        }
        void CopyTo(::BNM::Structures::Mono::Array<::GlobalNamespace::PlayerLookupEntry*>* array, int arrayIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"array", "arrayIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(array, arrayIndex);
        }
        void CopyTo(int index, ::BNM::Structures::Mono::Array<::GlobalNamespace::PlayerLookupEntry*>* array, int arrayIndex, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"index", "array", "arrayIndex", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, array, arrayIndex, count);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Capacity() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Capacity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFixedSize() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFixedSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsReadOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReadOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSynchronized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSynchronized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::PlayerLookupEntry* get_Item(int index) {
            static BNM::Method<::GlobalNamespace::PlayerLookupEntry*> _m = GetClass().GetMethod(O("get_Item"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        static void* getCPtr(::GlobalNamespace::PlayerLookupVector* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        ::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator* GetEnumerator() {
            static BNM::Method<::GlobalNamespace::PlayerLookupVector_PlayerLookupVectorEnumerator*> _m = GetClass().GetMethod(O("GetEnumerator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::PlayerLookupEntry* getitem(int index) {
            static BNM::Method<::GlobalNamespace::PlayerLookupEntry*> _m = GetClass().GetMethod(O("getitem"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::GlobalNamespace::PlayerLookupEntry* getitemcopy(int index) {
            static BNM::Method<::GlobalNamespace::PlayerLookupEntry*> _m = GetClass().GetMethod(O("getitemcopy"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::GlobalNamespace::PlayerLookupVector* GetRange(int index, int count) {
            static BNM::Method<::GlobalNamespace::PlayerLookupVector*> _m = GetClass().GetMethod(O("GetRange"), {"index", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index, count);
        }
        void Insert(int index, ::GlobalNamespace::PlayerLookupEntry* x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Insert"), {"index", "x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, x);
        }
        void InsertRange(int index, ::GlobalNamespace::PlayerLookupVector* values) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InsertRange"), {"index", "values"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, values);
        }
        void RemoveAt(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveAt"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void RemoveRange(int index, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRange"), {"index", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, count);
        }
        static ::GlobalNamespace::PlayerLookupVector* Repeat(::GlobalNamespace::PlayerLookupEntry* value, int count) {
            static BNM::Method<::GlobalNamespace::PlayerLookupVector*> _m = GetClass().GetMethod(O("Repeat"), {"value", "count"});
            return _m.Call(value, count);
        }
        void reserve(uint32_t n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("reserve"), {"n"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(n);
        }
        void Reverse() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reverse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reverse(int index, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reverse"), {"index", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, count);
        }
        void set_Capacity(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Capacity"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Item(int index, ::GlobalNamespace::PlayerLookupEntry* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"index", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, value);
        }
        void setitem(int index, ::GlobalNamespace::PlayerLookupEntry* val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("setitem"), {"index", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, val);
        }
        void SetRange(int index, ::GlobalNamespace::PlayerLookupVector* values) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRange"), {"index", "values"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, values);
        }
        uint32_t size() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("size"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* swigRelease(::GlobalNamespace::PlayerLookupVector* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::PlayerLookupEntry*>* ToArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::PlayerLookupEntry*>*> _m = GetClass().GetMethod(O("ToArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
