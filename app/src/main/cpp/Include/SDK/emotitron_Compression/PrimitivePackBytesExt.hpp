#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct PrimitivePackBytesExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "PrimitivePackBytesExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void InjectPackedBytes(uint64_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectPackedBytes"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectPackedBytes(uint32_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectPackedBytes"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static uint64_t ReadPackedBytes(uint64_t buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint32_t ReadPackedBytes(uint32_t buffer, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ReadPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSignedPackedBytes(uint64_t buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSignedPackedBytes"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t WritePackedBytes(uint64_t buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WritePackedBytes"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint32_t WritePackedBytes(uint32_t buffer, uint32_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("WritePackedBytes"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint64_t WriteSignedPackedBytes(uint64_t buffer, int value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WriteSignedPackedBytes"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
    };
}
