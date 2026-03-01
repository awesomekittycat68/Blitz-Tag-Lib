#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_CompressionTests {
    struct BasicWriter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.CompressionTests", "BasicWriter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetPos() {
            static BNM::Field<int> _field = GetClass().GetField(O("pos"));
            return _field.Get();
        }
        static void SetPos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pos"));
            _field.Set(value);
        }
        static uint8_t BasicRead(::BNM::Structures::Mono::Array<uint8_t>* buffer) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("BasicRead"), {"buffer"});
            return _m.Call(buffer);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* BasicWrite(::BNM::Structures::Mono::Array<uint8_t>* buffer, uint8_t value) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("BasicWrite"), {"buffer", "value"});
            return _m.Call(buffer, value);
        }
        static void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.Call();
        }
    };
}
