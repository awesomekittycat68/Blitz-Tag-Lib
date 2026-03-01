#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    template <typename K, typename V>
    struct NonAllocDictionary$2_Node : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "NonAllocDictionary`2").GetInnerClass("Node");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint32_t GetHash() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        K GetKey() {
            static BNM::Field<K> _field = GetClass().GetField(O("Key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNext() {
            static BNM::Field<int> _field = GetClass().GetField(O("Next"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Used"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        V GetVal() {
            static BNM::Field<V> _field = GetClass().GetField(O("Val"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHash(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKey(K value) {
            static BNM::Field<K> _field = GetClass().GetField(O("Key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNext(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Next"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Used"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVal(V value) {
            static BNM::Field<V> _field = GetClass().GetField(O("Val"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
