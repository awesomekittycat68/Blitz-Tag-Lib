#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct ZTree : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "ZTree");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int Buf_size = 16;
        static ::BNM::Structures::Mono::Array<int8_t>* GetDistCode() {
            static BNM::Field<::BNM::Structures::Mono::Array<int8_t>*> _field = GetClass().GetField(O("_dist_code"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int8_t>* GetBlOrder() {
            static BNM::Field<::BNM::Structures::Mono::Array<int8_t>*> _field = GetClass().GetField(O("bl_order"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetDistanceBase() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("DistanceBase"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetDynTree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("dyn_tree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetExtraBlbits() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("extra_blbits"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetExtraDistanceBits() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("ExtraDistanceBits"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetExtraLengthBits() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("ExtraLengthBits"));
            return _field.Get();
        }
        static int GetHEAPSIZE() {
            static BNM::Field<int> _field = GetClass().GetField(O("HEAP_SIZE"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetLengthBase() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("LengthBase"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int8_t>* GetLengthCode() {
            static BNM::Field<::BNM::Structures::Mono::Array<int8_t>*> _field = GetClass().GetField(O("LengthCode"));
            return _field.Get();
        }
        int GetMaxCode() {
            static BNM::Field<int> _field = GetClass().GetField(O("max_code"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::StaticTree* GetStaticTree() {
            static BNM::Field<::Ionic_Zlib::StaticTree*> _field = GetClass().GetField(O("staticTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDynTree(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("dyn_tree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("max_code"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticTree(::Ionic_Zlib::StaticTree* value) {
            static BNM::Field<::Ionic_Zlib::StaticTree*> _field = GetClass().GetField(O("staticTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static int bi_reverse(int code, int len) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("bi_reverse"), {"code", "len"});
            return _m.Call(code, len);
        }
        void build_tree(::Ionic_Zlib::DeflateManager* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("build_tree"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        static int DistanceCode(int dist) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DistanceCode"), {"dist"});
            return _m.Call(dist);
        }
        void gen_bitlen(::Ionic_Zlib::DeflateManager* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("gen_bitlen"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        static void gen_codes(::BNM::Structures::Mono::Array<int16_t>* tree, int max_code, ::BNM::Structures::Mono::Array<int16_t>* bl_count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("gen_codes"), {"tree", "max_code", "bl_count"});
            _m.Call(tree, max_code, bl_count);
        }
    };
}
