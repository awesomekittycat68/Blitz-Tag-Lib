#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct InfTree : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "InfTree");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MANY = 1440;
        static constexpr int Z_OK = 0;
        static constexpr int Z_STREAM_END = 1;
        static constexpr int Z_NEED_DICT = 2;
        static constexpr int Z_ERRNO = -1;
        static constexpr int Z_STREAM_ERROR = -2;
        static constexpr int Z_DATA_ERROR = -3;
        static constexpr int Z_MEM_ERROR = -4;
        static constexpr int Z_BUF_ERROR = -5;
        static constexpr int Z_VERSION_ERROR = -6;
        static constexpr int fixed_bl = 9;
        static constexpr int fixed_bd = 5;
        static constexpr int BMAX = 15;
        ::BNM::Structures::Mono::Array<int>* GetC() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("c"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetCpdext() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("cpdext"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetCpdist() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("cpdist"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetCplens() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("cplens"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetCplext() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("cplext"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetFixedTd() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("fixed_td"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetFixedTl() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("fixed_tl"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetHn() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("hn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetR() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("r"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetU() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("u"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetV() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("v"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetX() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetC(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("c"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHn(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("hn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetR(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("r"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetU(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("u"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetV(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("v"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetX(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int huft_build(::BNM::Structures::Mono::Array<int>* b, int bindex, int n, int s, ::BNM::Structures::Mono::Array<int>* d, ::BNM::Structures::Mono::Array<int>* e, ::BNM::Structures::Mono::Array<int>* t, ::BNM::Structures::Mono::Array<int>* m, ::BNM::Structures::Mono::Array<int>* hp, ::BNM::Structures::Mono::Array<int>* hn, ::BNM::Structures::Mono::Array<int>* v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("huft_build"), {"b", "bindex", "n", "s", "d", "e", "t", "m", "hp", "hn", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(b, bindex, n, s, d, e, t, m, hp, hn, v);
        }
        int inflate_trees_bits(::BNM::Structures::Mono::Array<int>* c, ::BNM::Structures::Mono::Array<int>* bb, ::BNM::Structures::Mono::Array<int>* tb, ::BNM::Structures::Mono::Array<int>* hp, ::Ionic_Zlib::ZlibCodec* z) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("inflate_trees_bits"), {"c", "bb", "tb", "hp", "z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c, bb, tb, hp, z);
        }
        int inflate_trees_dynamic(int nl, int nd, ::BNM::Structures::Mono::Array<int>* c, ::BNM::Structures::Mono::Array<int>* bl, ::BNM::Structures::Mono::Array<int>* bd, ::BNM::Structures::Mono::Array<int>* tl, ::BNM::Structures::Mono::Array<int>* td, ::BNM::Structures::Mono::Array<int>* hp, ::Ionic_Zlib::ZlibCodec* z) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("inflate_trees_dynamic"), {"nl", "nd", "c", "bl", "bd", "tl", "td", "hp", "z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nl, nd, c, bl, bd, tl, td, hp, z);
        }
        static int inflate_trees_fixed(::BNM::Structures::Mono::Array<int>* bl, ::BNM::Structures::Mono::Array<int>* bd, ::BNM::Structures::Mono::Array<int>* tl, ::BNM::Structures::Mono::Array<int>* td, ::Ionic_Zlib::ZlibCodec* z) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("inflate_trees_fixed"), {"bl", "bd", "tl", "td", "z"});
            return _m.Call(bl, bd, tl, td, z);
        }
        void initWorkArea(int vsize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("initWorkArea"), {"vsize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vsize);
        }
    };
}
