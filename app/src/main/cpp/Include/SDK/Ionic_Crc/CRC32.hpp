#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Crc {
    struct CRC32 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Crc", "CRC32");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int BUFFER_SIZE = 8192;
        int GetCrc32Result() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Crc32Result"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetTotalBytesRead() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_TotalBytesRead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint32_t GetRegister() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_register"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTotalBytesRead_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_TotalBytesRead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint32_t>* GetCrc32Table() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("crc32Table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetDwPolynomial() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("dwPolynomial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseBits() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRegister(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_register"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalBytesRead(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_TotalBytesRead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrc32Table(::BNM::Structures::Mono::Array<uint32_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("crc32Table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDwPolynomial(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("dwPolynomial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseBits(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int _InternalComputeCrc32(uint32_t W, uint8_t B) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("_InternalComputeCrc32"), {"W", "B"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(W, B);
        }
        void Combine(int crc, int length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Combine"), {"crc", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(crc, length);
        }
        int ComputeCrc32(int W, uint8_t B) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComputeCrc32"), {"W", "B"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(W, B);
        }
        void GenerateLookupTable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateLookupTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Crc32Result() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Crc32Result"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_TotalBytesRead() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_TotalBytesRead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCrc32(::BNM::IL2CPP::Il2CppObject* input) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCrc32"), {"input"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input);
        }
        int GetCrc32AndCopy(::BNM::IL2CPP::Il2CppObject* input, ::BNM::IL2CPP::Il2CppObject* output) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCrc32AndCopy"), {"input", "output"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, output);
        }
        void gf2_matrix_square(::BNM::Structures::Mono::Array<uint32_t>* square, ::BNM::Structures::Mono::Array<uint32_t>* mat) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("gf2_matrix_square"), {"square", "mat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(square, mat);
        }
        uint32_t gf2_matrix_times(::BNM::Structures::Mono::Array<uint32_t>* matrix, uint32_t vec) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("gf2_matrix_times"), {"matrix", "vec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(matrix, vec);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static uint32_t ReverseBits(uint32_t data) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ReverseBits"), {"data"});
            return _m.Call(data);
        }
        static uint8_t ReverseBits(uint8_t data) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ReverseBits"), {"data"});
            return _m.Call(data);
        }
        void SlurpBlock(::BNM::Structures::Mono::Array<uint8_t>* block, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SlurpBlock"), {"block", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(block, offset, count);
        }
        void UpdateCRC(uint8_t b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCRC"), {"b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(b);
        }
        void UpdateCRC(uint8_t b, int n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCRC"), {"b", "n"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(b, n);
        }
    };
}
