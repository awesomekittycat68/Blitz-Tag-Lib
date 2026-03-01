#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct ArraySerializeExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "ArraySerializeExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* bufferOverrunMsg = "Byte buffer length exceeded by write or read. Dataloss will occur. Likely due to a Read/Write mismatch.";
        static void Append(::BNM::Structures::Mono::Array<uint8_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Append(::BNM::Structures::Mono::Array<uint32_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Append(::BNM::Structures::Mono::Array<uint32_t>* buffer, uint32_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Append(::BNM::Structures::Mono::Array<uint64_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static uint32_t IndexAsUInt32(::BNM::Structures::Mono::Array<uint8_t>* buffer, int index) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("IndexAsUInt32"), {"buffer", "index"});
            return _m.Call(buffer, index);
        }
        static uint32_t IndexAsUInt32(::BNM::Structures::Mono::Array<uint64_t>* buffer, int index) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("IndexAsUInt32"), {"buffer", "index"});
            return _m.Call(buffer, index);
        }
        static uint64_t IndexAsUInt64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int index) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("IndexAsUInt64"), {"buffer", "index"});
            return _m.Call(buffer, index);
        }
        static uint64_t IndexAsUInt64(::BNM::Structures::Mono::Array<uint32_t>* buffer, int index) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("IndexAsUInt64"), {"buffer", "index"});
            return _m.Call(buffer, index);
        }
        static uint8_t IndexAsUInt8(::BNM::Structures::Mono::Array<uint64_t>* buffer, int index) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("IndexAsUInt8"), {"buffer", "index"});
            return _m.Call(buffer, index);
        }
        static uint8_t IndexAsUInt8(::BNM::Structures::Mono::Array<uint32_t>* buffer, int index) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("IndexAsUInt8"), {"buffer", "index"});
            return _m.Call(buffer, index);
        }
        static uint64_t Read(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t Read(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t Read(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static bool ReadBool(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static bool ReadBool(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static bool ReadBool(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBool"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static uint8_t ReadByte(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ReadByte"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint8_t ReadByte(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ReadByte"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint8_t ReadByte(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ReadByte"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static char ReadChar(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition) {
            static BNM::Method<char> _m = GetClass().GetMethod(O("ReadChar"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static char ReadChar(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition) {
            static BNM::Method<char> _m = GetClass().GetMethod(O("ReadChar"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static char ReadChar(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<char> _m = GetClass().GetMethod(O("ReadChar"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static float ReadFloat(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ReadFloat"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static void ReadOutSafe(::BNM::Structures::Mono::Array<uint64_t>* source, int srcStartPos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        static void ReadOutSafe(::BNM::Structures::Mono::Array<uint64_t>* source, int srcStartPos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        static void ReadOutSafe(::BNM::Structures::Mono::Array<uint8_t>* source, int srcStartPos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        static void ReadOutSafe(::BNM::Structures::Mono::Array<uint8_t>* source, int srcStartPos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        static int ReadSigned(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSigned(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int ReadSigned(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int64_t ReadSigned64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadSigned64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int64_t ReadSigned64(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadSigned64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static int64_t ReadSigned64(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadSigned64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint16_t ReadUInt16(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("ReadUInt16"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint16_t ReadUInt16(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("ReadUInt16"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint16_t ReadUInt16(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("ReadUInt16"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint32_t ReadUInt32(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ReadUInt32"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint32_t ReadUInt32(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ReadUInt32"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint32_t ReadUInt32(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ReadUInt32"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadUInt64(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadUInt64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadUInt64(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadUInt64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static uint64_t ReadUInt64(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadUInt64"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        static void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Write(::BNM::Structures::Mono::Array<uint32_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Write(::BNM::Structures::Mono::Array<uint64_t>* buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteBool(::BNM::Structures::Mono::Array<uint64_t>* buffer, bool b, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBool"), {"buffer", "b", "bitposition"});
            _m.Call(buffer, b, &bitposition);
        }
        static void WriteBool(::BNM::Structures::Mono::Array<uint32_t>* buffer, bool b, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBool"), {"buffer", "b", "bitposition"});
            _m.Call(buffer, b, &bitposition);
        }
        static void WriteBool(::BNM::Structures::Mono::Array<uint8_t>* buffer, bool b, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBool"), {"buffer", "b", "bitposition"});
            _m.Call(buffer, b, &bitposition);
        }
        static void WriteFloat(::BNM::Structures::Mono::Array<uint8_t>* buffer, float value, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteFloat"), {"buffer", "value", "bitposition"});
            _m.Call(buffer, value, &bitposition);
        }
        static void WriteSigned(::BNM::Structures::Mono::Array<uint8_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSigned(::BNM::Structures::Mono::Array<uint32_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSigned(::BNM::Structures::Mono::Array<uint64_t>* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSigned(::BNM::Structures::Mono::Array<uint8_t>* buffer, int64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSigned(::BNM::Structures::Mono::Array<uint32_t>* buffer, int64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void WriteSigned(::BNM::Structures::Mono::Array<uint64_t>* buffer, int64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint8_t>* buffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer"});
            _m.Call(buffer);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint16_t>* buffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer"});
            _m.Call(buffer);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint32_t>* buffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer"});
            _m.Call(buffer);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint64_t>* buffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer"});
            _m.Call(buffer);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint8_t>* buffer, int startByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte"});
            _m.Call(buffer, startByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint16_t>* buffer, int startByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte"});
            _m.Call(buffer, startByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint32_t>* buffer, int startByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte"});
            _m.Call(buffer, startByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint64_t>* buffer, int startByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte"});
            _m.Call(buffer, startByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint8_t>* buffer, int startByte, int endByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte", "endByte"});
            _m.Call(buffer, startByte, endByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint16_t>* buffer, int startByte, int endByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte", "endByte"});
            _m.Call(buffer, startByte, endByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint32_t>* buffer, int startByte, int endByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte", "endByte"});
            _m.Call(buffer, startByte, endByte);
        }
        static void Zero(::BNM::Structures::Mono::Array<uint64_t>* buffer, int startByte, int endByte) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Zero"), {"buffer", "startByte", "endByte"});
            _m.Call(buffer, startByte, endByte);
        }
    };
}
