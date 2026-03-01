#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct InflateCodes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "InflateCodes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int START = 0;
        static constexpr int LEN = 1;
        static constexpr int LENEXT = 2;
        static constexpr int DIST = 3;
        static constexpr int DISTEXT = 4;
        static constexpr int COPY = 5;
        static constexpr int LIT = 6;
        static constexpr int WASH = 7;
        static constexpr int END = 8;
        static constexpr int BADCODE = 9;
        int GetBitsToGet() {
            static BNM::Field<int> _field = GetClass().GetField(O("bitsToGet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetDbits() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("dbits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDist() {
            static BNM::Field<int> _field = GetClass().GetField(O("dist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetDtree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("dtree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDtreeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("dtree_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetLbits() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("lbits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLen() {
            static BNM::Field<int> _field = GetClass().GetField(O("len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLit() {
            static BNM::Field<int> _field = GetClass().GetField(O("lit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetLtree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("ltree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLtreeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("ltree_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("need"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetTree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("tree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTreeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("tree_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBitsToGet(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bitsToGet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDbits(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("dbits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDist(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtree(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("dtree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtreeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dtree_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLbits(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("lbits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLen(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLtree(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("ltree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLtreeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ltree_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("need"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTree(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("tree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tree_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int InflateFast(int bl, int bd, ::BNM::Structures::Mono::Array<int>* tl, int tl_index, ::BNM::Structures::Mono::Array<int>* td, int td_index, ::Ionic_Zlib::InflateBlocks* s, ::Ionic_Zlib::ZlibCodec* z) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InflateFast"), {"bl", "bd", "tl", "tl_index", "td", "td_index", "s", "z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bl, bd, tl, tl_index, td, td_index, s, z);
        }
        void Init(int bl, int bd, ::BNM::Structures::Mono::Array<int>* tl, int tl_index, ::BNM::Structures::Mono::Array<int>* td, int td_index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"bl", "bd", "tl", "tl_index", "td", "td_index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bl, bd, tl, tl_index, td, td_index);
        }
        int Process(::Ionic_Zlib::InflateBlocks* blocks, int r) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Process"), {"blocks", "r"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(blocks, r);
        }
    };
}
