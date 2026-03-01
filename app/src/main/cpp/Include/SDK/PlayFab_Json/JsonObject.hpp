#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    struct JsonObject : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "JsonObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int DICTIONARY_DEFAULT_SIZE = 16;
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
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetMembers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("_members"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        template <typename TP0 = void*>
        void Add(TP0 item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        template <typename TP1 = void*>
        void Add(::BNM::Structures::Mono::String* key, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
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
        void CopyTo(::BNM::Structures::Mono::Array<void*>* array, int arrayIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"array", "arrayIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(array, arrayIndex);
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
        void* get_Item(int index) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Item"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        void* get_Item(::BNM::Structures::Mono::String* key) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void* get_Keys() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Keys"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Values() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Values"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static void* GetAtIndex(TP0 obj, int index) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAtIndex"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        void* GetEnumerator() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetEnumerator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Remove(::BNM::Structures::Mono::String* key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Remove"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        template <typename TP0 = void*>
        bool Remove(TP0 item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Remove"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item);
        }
        template <typename TP1 = void*>
        void set_Item(::BNM::Structures::Mono::String* key, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool TryGetValue(::BNM::Structures::Mono::String* key, void*& value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetValue"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, &value);
        }
    };
}
