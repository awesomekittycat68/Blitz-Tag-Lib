#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct ArraySegmentExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "ArraySegmentExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static void Append(TP0 buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void Append_1(TP0 buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void Append_1(TP0 buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Append"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        static void* ExtractArraySegment(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ExtractArraySegment"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static void* ExtractArraySegment(::BNM::Structures::Mono::Array<uint16_t>* buffer, int& bitposition) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ExtractArraySegment"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static void* ExtractArraySegment(::BNM::Structures::Mono::Array<uint32_t>* buffer, int& bitposition) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ExtractArraySegment"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        static void* ExtractArraySegment(::BNM::Structures::Mono::Array<uint64_t>* buffer, int& bitposition) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ExtractArraySegment"), {"buffer", "bitposition"});
            return _m.Call(buffer, &bitposition);
        }
        template <typename TP0 = void*>
        static uint64_t Read(TP0 buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static uint64_t Read_1(TP0 buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static uint64_t Read_1(TP0 buffer, int& bitposition, int bits) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Read"), {"buffer", "bitposition", "bits"});
            return _m.Call(buffer, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void ReadOutSafe(TP0 source, int srcStartPos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void ReadOutSafe(TP0 source, int srcStartPos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void ReadOutSafe_1(TP0 source, int srcStartPos, ::BNM::Structures::Mono::Array<uint8_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void ReadOutSafe_1(TP0 source, int srcStartPos, ::BNM::Structures::Mono::Array<uint64_t>* target, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadOutSafe"), {"source", "srcStartPos", "target", "bitposition", "bits"});
            _m.Call(source, srcStartPos, target, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void Write(TP0 buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void Write_1(TP0 buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
        template <typename TP0 = void*>
        static void Write_1(TP0 buffer, uint64_t value, int& bitposition, int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "value", "bitposition", "bits"});
            _m.Call(buffer, value, &bitposition, bits);
        }
    };
}
