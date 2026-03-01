#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct ZigZagExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "ZigZagExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int64_t UnZigZag(uint64_t u) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("UnZigZag"), {"u"});
            return _m.Call(u);
        }
        static int UnZigZag(uint32_t u) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UnZigZag"), {"u"});
            return _m.Call(u);
        }
        static int16_t UnZigZag(uint16_t u) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("UnZigZag"), {"u"});
            return _m.Call(u);
        }
        static int8_t UnZigZag(uint8_t u) {
            static BNM::Method<int8_t> _m = GetClass().GetMethod(O("UnZigZag"), {"u"});
            return _m.Call(u);
        }
        static uint64_t ZigZag(int64_t s) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ZigZag"), {"s"});
            return _m.Call(s);
        }
        static uint32_t ZigZag(int s) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ZigZag"), {"s"});
            return _m.Call(s);
        }
        static uint16_t ZigZag(int16_t s) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("ZigZag"), {"s"});
            return _m.Call(s);
        }
        static uint8_t ZigZag(int8_t s) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ZigZag"), {"s"});
            return _m.Call(s);
        }
    };
}
