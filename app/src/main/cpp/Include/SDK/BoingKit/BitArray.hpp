#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct BitArray : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BitArray");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<int>* GetBlocks() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _method = GetClass().GetMethod(O("get_Blocks"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<int>* GetMABlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("m_aBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMABlock(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("m_aBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<int>* get_Blocks() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("get_Blocks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int GetBlockIndex(int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBlockIndex"), {"index"});
            return _m.Call(index);
        }
        static int GetSubIndex(int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSubIndex"), {"index"});
            return _m.Call(index);
        }
        bool IsBitSet(int index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsBitSet"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        static bool IsBitSet(int index, ::BNM::Structures::Mono::Array<int>* blocks) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsBitSet"), {"index", "blocks"});
            return _m.Call(index, blocks);
        }
        void Resize(int capacity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Resize"), {"capacity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(capacity);
        }
        void SetAllBits(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAllBits"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetBit(int index, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBit"), {"index", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, value);
        }
        static void SetBit(int index, bool value, ::BNM::Structures::Mono::Array<int>* blocks) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBit"), {"index", "value", "blocks"});
            _m.Call(index, value, blocks);
        }
    };
}
