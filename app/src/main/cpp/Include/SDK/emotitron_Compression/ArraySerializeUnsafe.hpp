#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct ArraySerializeUnsafe : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "ArraySerializeUnsafe");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* bufferOverrunMsg = "Byte buffer overrun. Dataloss will occur.";
        static void Add(uint64_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Add(uint32_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Add(uint16_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Add(uint8_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void AddSigned(int value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void AddSigned(int16_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void AddSigned(int8_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void AddUnsigned(int64_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void AddUnsigned(int value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void AddUnsigned(int16_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void AddUnsigned(int8_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Append(uint64_t* uPtr, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"uPtr", "value", "bitposition", "bits"});
            _m.Call(uPtr, value, &bitposition, bits);
        }
        static void AppendSigned(uint64_t* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AppendSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void Inject(uint64_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void Inject(uint32_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void Inject(uint16_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void Inject(uint8_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectSigned(int value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectSigned(int16_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectSigned(int8_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectUnsigned(int64_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectUnsigned(int value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectUnsigned(int16_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void InjectUnsigned(int8_t value, uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, &bitposition, bits);
        }
        static void InjectUnsigned(int64_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void InjectUnsigned(int value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InjectUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static int PeekSigned(uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PeekSigned"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, bitposition, bits);
        }
        static void Poke(uint64_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poke"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Poke(uint32_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poke"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Poke(uint16_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poke"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void Poke(uint8_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poke"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void PokeSigned(int value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PokeSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void PokeSigned(int16_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PokeSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void PokeSigned(int8_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PokeSigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void PokeUnsigned(int16_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PokeUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static void PokeUnsigned(int8_t value, uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PokeUnsigned"), {"value", "uPtr", "bitposition", "bits"});
            _m.Call(value, uPtr, bitposition, bits);
        }
        static uint64_t Read(uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, &bitposition, bits);
        }
        static uint64_t Read(uint64_t* uPtr, int bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, bitposition, bits);
        }
        static void ReadOutUnsafe(uint64_t* sourcePtr, int sourcePos, uint64_t* targetPtr, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"sourcePtr", "sourcePos", "targetPtr", "targetPos", "bits"});
            _m.Call(sourcePtr, sourcePos, targetPtr, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint64_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint64_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint32_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint64_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint32_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint32_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint32_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint32_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint8_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint8_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint32_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static void ReadOutUnsafe(::BNM::Structures::Mono::Array<uint8_t>* source, int sourcePos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& targetPos, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutUnsafe"), {"source", "sourcePos", "target", "targetPos", "bits"});
            _m.Call(source, sourcePos, target, &targetPos, bits);
        }
        static int ReadSigned(uint64_t* uPtr, int& bitposition, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadSigned"), {"uPtr", "bitposition", "bits"});
            return _m.Call(uPtr, &bitposition, bits);
        }
        static void Write(uint64_t* uPtr, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"uPtr", "value", "bitposition", "bits"});
            _m.Call(uPtr, value, &bitposition, bits);
        }
        static void WriteSigned(uint64_t* buffer, int value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSigned"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
    };
}
