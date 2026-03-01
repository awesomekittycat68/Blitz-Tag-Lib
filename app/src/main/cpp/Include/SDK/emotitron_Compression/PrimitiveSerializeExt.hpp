#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../emotitron_Compression_Utilities/ByteConverter.hpp"

namespace emotitron_Compression {
    struct PrimitiveSerializeExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "PrimitiveSerializeExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* overrunerror = "Write buffer overrun. writepos + bits exceeds target length. Data loss will occur.";
        static uint64_t Extract(uint64_t value, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bits"});
            return _m.Call(value, bits);
        }
        static uint32_t Extract(uint32_t value, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bits"});
            return _m.Call(value, bits);
        }
        static uint8_t Extract(uint8_t value, int bits) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bits"});
            return _m.Call(value, bits);
        }
        static uint64_t Extract(uint64_t value, int bits, int& bitposition) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bits", "bitposition"});
            return _m.Call(value, bits, &bitposition);
        }
        static uint64_t Extract(uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static uint32_t Extract(uint32_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static uint32_t Extract(uint16_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static uint32_t Extract(uint8_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Extract"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static float ExtractFloat(uint64_t buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ExtractFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static float ExtractHalfFloat(uint64_t buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ExtractHalfFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static float ExtractHalfFloat(uint32_t buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ExtractHalfFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static void Inject(bool value, uint64_t& buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition"});
            _m.Call(value, &buffer, &bitposition);
        }
        static void Inject(bool value, uint32_t& buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition"});
            _m.Call(value, &buffer, &bitposition);
        }
        static void Inject(bool value, uint16_t& buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition"});
            _m.Call(value, &buffer, &bitposition);
        }
        static void Inject(bool value, uint8_t& buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition"});
            _m.Call(value, &buffer, &bitposition);
        }
        static void Inject(float f, uint64_t& buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"f", "buffer", "bitposition"});
            _m.Call(f, &buffer, &bitposition);
        }
        static void Inject(::emotitron_Compression_Utilities::ByteConverter value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(::emotitron_Compression_Utilities::ByteConverter value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(::emotitron_Compression_Utilities::ByteConverter value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(::emotitron_Compression_Utilities::ByteConverter value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint64_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint64_t value, uint64_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint32_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint32_t value, uint64_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint16_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint16_t value, uint64_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint8_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint8_t value, uint64_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint64_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint64_t value, uint32_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint32_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint32_t value, uint32_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint16_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint16_t value, uint32_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint8_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint8_t value, uint32_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint64_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint64_t value, uint16_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint32_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint32_t value, uint16_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint16_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint16_t value, uint16_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint8_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint8_t value, uint16_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint64_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint64_t value, uint8_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint32_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint32_t value, uint8_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint16_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint16_t value, uint8_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint8_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void Inject(uint8_t value, uint8_t& buffer, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, bitposition, bits);
        }
        static void Inject(uint64_t value, uint32_t& buffer, int bits, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bits", "bitposition"});
            _m.Call(value, &buffer, bits, &bitposition);
        }
        static void Inject(uint64_t value, uint64_t& buffer, int bits, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "buffer", "bits", "bitposition"});
            _m.Call(value, &buffer, bits, &bitposition);
        }
        static uint16_t InjectAsHalfFloat(float f, uint64_t& buffer, int& bitposition) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("InjectAsHalfFloat"), {"f", "buffer", "bitposition"});
            return _m.Call(f, &buffer, &bitposition);
        }
        static uint16_t InjectAsHalfFloat(float f, uint32_t& buffer, int& bitposition) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("InjectAsHalfFloat"), {"f", "buffer", "bitposition"});
            return _m.Call(f, &buffer, &bitposition);
        }
        static void InjectSigned(int64_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int16_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int8_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int64_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int16_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int8_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int64_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int16_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int8_t value, uint16_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int64_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int16_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectSigned(int8_t value, uint8_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int64_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int16_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int8_t value, uint64_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int64_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int16_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static void InjectUnsigned(int8_t value, uint32_t& buffer, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "buffer", "bitposition", "bits"});
            _m.Call(value, &buffer, &bitposition, bits);
        }
        static uint64_t Read(uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static uint32_t Read(uint32_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Read"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static uint32_t Read(uint16_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Read"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static uint32_t Read(uint8_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Read"), {"value", "bitposition", "bits"});
            return _m.Call(value, &bitposition, bits);
        }
        static bool ReadBool(uint64_t buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static bool ReadBool(uint16_t buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static bool ReadBool(uint8_t buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static float ReadFloat(uint64_t buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ReadFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static float ReadHalfFloat(uint64_t buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ReadHalfFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static float ReadHalfFloat(uint32_t buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ReadHalfFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static int ReadSigned(uint64_t buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSigned(uint32_t buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSigned(uint16_t buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSigned(uint8_t buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static bool ReadtBool(uint32_t buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadtBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static uint64_t Write(uint64_t buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint32_t Write(uint32_t buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint16_t Write(uint16_t buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint8_t Write(uint8_t buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint64_t WriteSigned(uint64_t buffer, int value, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint32_t WriteSigned(uint32_t buffer, int value, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint16_t WriteSigned(uint16_t buffer, int value, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint8_t WriteSigned(uint8_t buffer, int value, int& bitposition, int bits) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            return _m.Call(buffer, value, &bitposition, bits);
        }
        static uint64_t WritetBool(uint64_t buffer, bool value, int& bitposition) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WritetBool"), {"buffer", "value", "bitposition"});
            return _m.Call(buffer, value, &bitposition);
        }
        static uint32_t WritetBool(uint32_t buffer, bool value, int& bitposition) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("WritetBool"), {"buffer", "value", "bitposition"});
            return _m.Call(buffer, value, &bitposition);
        }
        static uint16_t WritetBool(uint16_t buffer, bool value, int& bitposition) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("WritetBool"), {"buffer", "value", "bitposition"});
            return _m.Call(buffer, value, &bitposition);
        }
        static uint8_t WritetBool(uint8_t buffer, bool value, int& bitposition) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("WritetBool"), {"buffer", "value", "bitposition"});
            return _m.Call(buffer, value, &bitposition);
        }
    };
}
