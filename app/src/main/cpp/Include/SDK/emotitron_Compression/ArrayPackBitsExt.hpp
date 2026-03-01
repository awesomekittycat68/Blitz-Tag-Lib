#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct ArrayPackBitsExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "ArrayPackBitsExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static uint64_t ReadPackedBits(uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, &bitposition, bits);
        }
        static uint64_t ReadPackedBits(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBits(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBits(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBits(uint64_t* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBits(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBits(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBits(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int64_t ReadSignedPackedBits64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadSignedPackedBits64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static void WritePackedBits(uint64_t* uPtr, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBits"), {"uPtr", "value", "bitposition", "bits"});
            _m.Call(uPtr, value, &bitposition, bits);
        }
        static void WritePackedBits(::BNM::Structures::Mono::Array<uint64_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBits"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WritePackedBits(::BNM::Structures::Mono::Array<uint32_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBits"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WritePackedBits(::BNM::Structures::Mono::Array<uint8_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBits"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBits(uint64_t* uPtr, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"uPtr", "value", "bitposition", "bits"});
            _m.Call(uPtr, value, &bitposition, bits);
        }
        static void WriteSignedPackedBits(::BNM::Structures::Mono::Array<uint64_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBits(::BNM::Structures::Mono::Array<uint32_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBits(::BNM::Structures::Mono::Array<uint8_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBits64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBits64"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
    };
}
