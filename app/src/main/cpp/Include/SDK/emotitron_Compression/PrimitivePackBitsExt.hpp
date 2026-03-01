#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct PrimitivePackBitsExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "PrimitivePackBitsExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static uint64_t ReadPackedBits(uint64_t buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBits(uint32_t buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBits(uint16_t buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBits(uint64_t buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int16_t ReadSignedPackedBits(uint32_t buffer, int& bitposition, int bits) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int8_t ReadSignedPackedBits(uint16_t buffer, int& bitposition, int bits) {
            static BNM::Method<int8_t> _m = GetClass().GetMethod(O("ReadSignedPackedBits"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t WritePackedBits(uint64_t buffer, uint32_t value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WritePackedBits"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint32_t WritePackedBits(uint32_t buffer, uint16_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("WritePackedBits"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint16_t WritePackedBits(uint16_t buffer, uint8_t value, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("WritePackedBits"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint64_t WriteSignedPackedBits(uint64_t buffer, int value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint32_t WriteSignedPackedBits(uint32_t buffer, int16_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint16_t WriteSignedPackedBits(uint16_t buffer, int8_t value, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("WriteSignedPackedBits"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
    };
}
