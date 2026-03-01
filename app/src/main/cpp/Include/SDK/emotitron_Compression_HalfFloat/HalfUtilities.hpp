#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression_HalfFloat {
    struct HalfUtilities : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression.HalfFloat", "HalfUtilities");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<uint16_t>* GetFloatToHalfBaseTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint16_t>*> _field = GetClass().GetField(O("FloatToHalfBaseTable"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetFloatToHalfShiftTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("FloatToHalfShiftTable"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint32_t>* GetHalfToFloatExponentTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("HalfToFloatExponentTable"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint32_t>* GetHalfToFloatMantissaTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("HalfToFloatMantissaTable"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint32_t>* GetHalfToFloatOffsetTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("HalfToFloatOffsetTable"));
            return _field.Get();
        }
        static uint16_t Pack(float value) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("Pack"), {"value"});
            return _m.Call(value);
        }
        static float Unpack(uint16_t value) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Unpack"), {"value"});
            return _m.Call(value);
        }
    };
}
