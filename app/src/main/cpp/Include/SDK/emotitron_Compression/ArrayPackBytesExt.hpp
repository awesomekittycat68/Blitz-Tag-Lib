#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct ArrayPackBytesExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "ArrayPackBytesExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static uint64_t ReadPackedBytes(uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBytes"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, &bitposition, bits);
        }
        static uint64_t ReadPackedBytes(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBytes(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBytes(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBytes(uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBytes"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, &bitposition, bits);
        }
        static int ReadSignedPackedBytes(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBytes(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBytes(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int64_t ReadSignedPackedBytes64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadSignedPackedBytes64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static void WritePackedBytes(uint64_t* uPtr, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBytes"), {"uPtr", "value", "bitposition", "bits"});
            _m.Call(uPtr, value, &bitposition, bits);
        }
        static void WritePackedBytes(::BNM::Structures::Mono::Array<uint64_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBytes"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WritePackedBytes(::BNM::Structures::Mono::Array<uint32_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBytes"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WritePackedBytes(::BNM::Structures::Mono::Array<uint8_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePackedBytes"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBytes(uint64_t* uPtr, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBytes"), {"uPtr", "value", "bitposition", "bits"});
            _m.Call(uPtr, value, &bitposition, bits);
        }
        static void WriteSignedPackedBytes(::BNM::Structures::Mono::Array<uint64_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBytes"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBytes(::BNM::Structures::Mono::Array<uint32_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBytes"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBytes(::BNM::Structures::Mono::Array<uint8_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBytes"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSignedPackedBytes64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSignedPackedBytes64"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
    };
}
