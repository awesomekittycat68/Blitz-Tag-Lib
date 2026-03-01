#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_CompressionTests {
    struct BenchmarkTests : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.CompressionTests", "BenchmarkTests");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int BYTE_CNT = 128;
        static constexpr int LOOP = 1000000;
        static ::BNM::Structures::Mono::Array<uint8_t>* GetBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("buffer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint32_t>* GetIbuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("ibuffer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint64_t>* GetUbuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint64_t>*> _field = GetClass().GetField(O("ubuffer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint64_t>* GetUbuffer2() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint64_t>*> _field = GetClass().GetField(O("ubuffer2"));
            return _field.Get();
        }
        static void SetBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("buffer"));
            _field.Set(value);
        }
        static void SetIbuffer(::BNM::Structures::Mono::Array<uint32_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("ibuffer"));
            _field.Set(value);
        }
        static void SetUbuffer(::BNM::Structures::Mono::Array<uint64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint64_t>*> _field = GetClass().GetField(O("ubuffer"));
            _field.Set(value);
        }
        static void SetUbuffer2(::BNM::Structures::Mono::Array<uint64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint64_t>*> _field = GetClass().GetField(O("ubuffer2"));
            _field.Set(value);
        }
        static void ArrayCopy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ArrayCopy"));
            _m.Call();
        }
        static void ArrayCopySafe() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ArrayCopySafe"));
            _m.Call();
        }
        static void BitpackBytesEven() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BitpackBytesEven"));
            _m.Call();
        }
        static void BitpackBytesToULongUneven() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BitpackBytesToULongUneven"));
            _m.Call();
        }
        static void BitpackBytesUnEven() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BitpackBytesUnEven"));
            _m.Call();
        }
        static void ByteForByteWrite() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ByteForByteWrite"));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void TestLog2() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestLog2"));
            _m.Call();
        }
        static void TestWriterIntegrity() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestWriterIntegrity"));
            _m.Call();
        }
    };
}
