#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DictionaryEntryEnumerator.hpp"

namespace ExitGames_Client_Photon {
    struct Hashtable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "Hashtable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<void*>* GetBoxedByte() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("boxedByte"));
            return _field.Get();
        }
        template <typename TP1 = void*>
        void Add(uint8_t k, TP1 v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"k", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(k, v);
        }
        void* Clone() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Clone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ContainsKey(uint8_t key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsKey"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        template <typename TP0 = void*>
        void* get_Item(TP0 key) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        void* get_Item(uint8_t key) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        static void* GetBoxedByte_1(uint8_t value) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetBoxedByte"), {"value"});
            return _m.Call(value);
        }
        ::ExitGames_Client_Photon::DictionaryEntryEnumerator GetEnumerator() {
            static BNM::Method<::ExitGames_Client_Photon::DictionaryEntryEnumerator> _m = GetClass().GetMethod(O("GetEnumerator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Remove(uint8_t k) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Remove"), {"k"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(k);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void set_Item(TP0 key, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        template <typename TP1 = void*>
        void set_Item(uint8_t key, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
