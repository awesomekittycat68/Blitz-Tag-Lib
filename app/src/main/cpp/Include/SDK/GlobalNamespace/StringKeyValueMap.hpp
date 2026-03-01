#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StringKeyValueMap : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StringKeyValueMap");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReadOnly() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReadOnly"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetItem() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetItem(::BNM::Structures::Mono::String* value) {
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
        template <typename TP0 = void*>
        void Add(TP0 item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void Add(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"key", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, val);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        bool Contains(TP0 item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Contains"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item);
        }
        bool ContainsKey(::BNM::Structures::Mono::String* key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsKey"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void CopyTo(::BNM::Structures::Mono::Array<void*>* array) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(array);
        }
        void CopyTo(::BNM::Structures::Mono::Array<void*>* array, int arrayIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"array", "arrayIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(array, arrayIndex);
        }
        ::BNM::Types::nint create_iterator_begin() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("create_iterator_begin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void destroy_iterator(::BNM::Types::nint swigiterator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("destroy_iterator"), {"swigiterator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(swigiterator);
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
        bool empty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("empty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsReadOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReadOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Item(::BNM::Structures::Mono::String* key) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void* get_Keys() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Keys"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_next_key(::BNM::Types::nint swigiterator) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_next_key"), {"swigiterator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(swigiterator);
        }
        void* get_Values() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Values"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::StringKeyValueMap* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        ::GlobalNamespace::StringKeyValueMap_StringKeyValueMapEnumerator* GetEnumerator() {
            static BNM::Method<::GlobalNamespace::StringKeyValueMap_StringKeyValueMapEnumerator*> _m = GetClass().GetMethod(O("GetEnumerator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* getitem(::BNM::Structures::Mono::String* key) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("getitem"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        template <typename TP0 = void*>
        bool Remove(TP0 item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Remove"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item);
        }
        bool Remove(::BNM::Structures::Mono::String* key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Remove"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void set_Item(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        void setitem(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("setitem"), {"key", "x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, x);
        }
        uint32_t size() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("size"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* swigRelease(::GlobalNamespace::StringKeyValueMap* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool TryGetValue(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String*& value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetValue"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, &value);
        }
    };
}
