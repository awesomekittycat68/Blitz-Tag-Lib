#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NonAllocDictionary$2_KeyIterator.hpp"
#include "NonAllocDictionary$2_Node.hpp"
#include "NonAllocDictionary$2_PairIterator.hpp"
#include "NonAllocDictionary$2_ValueIterator.hpp"

namespace ExitGames_Client_Photon {
    template <typename K, typename V>
    struct NonAllocDictionary$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "NonAllocDictionary`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint32_t GetCapacity() {
            static BNM::Method<uint32_t> _method = GetClass().GetMethod(O("get_Capacity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
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
        V GetItem() {
            static BNM::Method<V> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetItem(V value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<int>* GetBuckets() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("_buckets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetCapacity_f() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_capacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFreeCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_freeCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFreeHead() {
            static BNM::Field<int> _field = GetClass().GetField(O("_freeHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint32_t>* GetPrimeTableUInt() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("_primeTableUInt"));
            return _field.Get();
        }
        int GetUsedCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_usedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsReadOnly_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isReadOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetKeys() {
            static BNM::Field<void*> _field = GetClass().GetField(O("keys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetValues() {
            static BNM::Field<void*> _field = GetClass().GetField(O("values"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuckets(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("_buckets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCapacity(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_capacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreeCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_freeCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreeHead(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_freeHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPrimeTableUInt(::BNM::Structures::Mono::Array<uint32_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("_primeTableUInt"));
            _field.Set(value);
        }
        void SetUsedCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_usedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsReadOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isReadOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeys(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("keys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValues(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("values"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void Add(TP0 item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void Add(K key, V val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"key", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, val);
        }
        static void Assert(bool condition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Assert"), {"condition"});
            _m.Call(condition);
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
        bool ContainsKey(K key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsKey"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void Expand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Expand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int FindNode(K key) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindNode"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        uint32_t get_Capacity() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("get_Capacity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        V get_Item(K key) {
            static BNM::Method<V> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        static uint32_t GetNextPrime(uint32_t value) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("GetNextPrime"), {"value"});
            return _m.Call(value);
        }
        void Insert(K key, V val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Insert"), {"key", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, val);
        }
        static bool IsPrimeFromList(uint32_t value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPrimeFromList"), {"value"});
            return _m.Call(value);
        }
        bool Remove(K key) {
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
        void Set(K key, V val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"key", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, val);
        }
        void set_Item(K key, V value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        bool TryGetValue(K key, V& val) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetValue"), {"key", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, &val);
        }
    };
}
