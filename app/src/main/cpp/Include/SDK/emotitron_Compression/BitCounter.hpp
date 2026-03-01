#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    struct BitCounter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "BitCounter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint64_t MULTIPLICATOR = 7783611145303519083;
        static ::BNM::Structures::Mono::Array<int>* GetBitPatternToLog2() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("bitPatternToLog2"));
            return _field.Get();
        }
        static int UsedBitCount(uint64_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedBitCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedBitCount(uint32_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedBitCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedBitCount(int val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedBitCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedBitCount(uint16_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedBitCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedBitCount(uint8_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedBitCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedByteCount(uint64_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedByteCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedByteCount(uint32_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedByteCount"), {"val"});
            return _m.Call(val);
        }
        static int UsedByteCount(uint16_t val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UsedByteCount"), {"val"});
            return _m.Call(val);
        }
    };
}
