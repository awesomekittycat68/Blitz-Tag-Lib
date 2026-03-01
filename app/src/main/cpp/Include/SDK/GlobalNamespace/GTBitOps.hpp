#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTBitOps_BitWriteInfo.hpp"

namespace GlobalNamespace {
    struct GTBitOps : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTBitOps");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetClearMask(int index, int valueMask) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetClearMask"), {"index", "valueMask"});
            return _m.Call(index, valueMask);
        }
        static int GetClearMaskByCount(int index, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetClearMaskByCount"), {"index", "count"});
            return _m.Call(index, count);
        }
        static int GetValueMask(int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetValueMask"), {"count"});
            return _m.Call(count);
        }
        static bool ReadBit(int bits, int index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBit"), {"bits", "index"});
            return _m.Call(bits, index);
        }
        static int ReadBits(int bits, ::GlobalNamespace::GTBitOps_BitWriteInfo info) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadBits"), {"bits", "info"});
            return _m.Call(bits, info);
        }
        static int ReadBits(int bits, int index, int valueMask) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadBits"), {"bits", "index", "valueMask"});
            return _m.Call(bits, index, valueMask);
        }
        static int ReadBitsByCount(int bits, int index, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadBitsByCount"), {"bits", "index", "count"});
            return _m.Call(bits, index, count);
        }
        static ::BNM::Structures::Mono::String* ToBinaryString(int number) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToBinaryString"), {"number"});
            return _m.Call(number);
        }
        static void WriteBit(int& bits, int index, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBit"), {"bits", "index", "value"});
            _m.Call(&bits, index, value);
        }
        static int WriteBit(int bits, int index, bool value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("WriteBit"), {"bits", "index", "value"});
            return _m.Call(bits, index, value);
        }
        static void WriteBits(int& bits, ::GlobalNamespace::GTBitOps_BitWriteInfo info, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBits"), {"bits", "info", "value"});
            _m.Call(&bits, info, value);
        }
        static int WriteBits(int bits, ::GlobalNamespace::GTBitOps_BitWriteInfo info, int value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("WriteBits"), {"bits", "info", "value"});
            return _m.Call(bits, info, value);
        }
        static void WriteBits(int& bits, int index, int valueMask, int clearMask, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBits"), {"bits", "index", "valueMask", "clearMask", "value"});
            _m.Call(&bits, index, valueMask, clearMask, value);
        }
        static int WriteBits(int bits, int index, int valueMask, int clearMask, int value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("WriteBits"), {"bits", "index", "valueMask", "clearMask", "value"});
            return _m.Call(bits, index, valueMask, clearMask, value);
        }
        static void WriteBitsByCount(int& bits, int index, int count, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBitsByCount"), {"bits", "index", "count", "value"});
            _m.Call(&bits, index, count, value);
        }
        static int WriteBitsByCount(int bits, int index, int count, int value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("WriteBitsByCount"), {"bits", "index", "count", "value"});
            return _m.Call(bits, index, count, value);
        }
    };
}
