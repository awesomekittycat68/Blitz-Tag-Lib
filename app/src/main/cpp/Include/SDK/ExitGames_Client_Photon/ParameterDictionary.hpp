#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NonAllocDictionary$2_PairIterator.hpp"

namespace ExitGames_Client_Photon {
    struct ParameterDictionary : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "ParameterDictionary");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon_StructWrapping::StructWrapperPools* GetWrapperPools() {
            static BNM::Field<::ExitGames_Client_Photon_StructWrapping::StructWrapperPools*> _field = GetClass().GetField(O("wrapperPools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Add(uint8_t code, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Add(uint8_t code, ::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Add(uint8_t code, uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Add(uint8_t code, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Add(uint8_t code, int16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Add(uint8_t code, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Add(uint8_t code, int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        template <typename TP1 = void*>
        void Add(uint8_t code, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"code", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, value);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ContainsKey(uint8_t key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsKey"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        template <typename T>
        T Get(uint8_t key) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Get"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Item(uint8_t key) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        template <typename TP1 = void*>
        void set_Item(uint8_t key, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        ::BNM::Structures::Mono::String* ToStringFull(bool includeTypes) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"), {"includeTypes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(includeTypes);
        }
        void* TryGetObject(uint8_t key) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryGetObject"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        bool TryGetValue(uint8_t key, void*& value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetValue"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, &value);
        }
        template <typename T>
        bool TryGetValue(uint8_t key, T& value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetValue"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, &value);
        }
        template <typename T>
        T Unwrap(uint8_t key) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Unwrap"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
    };
}
