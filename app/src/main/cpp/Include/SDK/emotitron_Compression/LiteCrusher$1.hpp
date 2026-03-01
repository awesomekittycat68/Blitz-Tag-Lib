#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LiteCrusher.hpp"

namespace emotitron_Compression {
    template <typename T>
    struct LiteCrusher$1 : ::emotitron_Compression::LiteCrusher {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "LiteCrusher`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T Decode(uint32_t val) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Decode"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val);
        }
        uint64_t Encode(T val) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Encode"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val);
        }
        T ReadValue(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("ReadValue"), {"buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, &bitposition);
        }
        void WriteCValue(uint32_t val, ::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCValue"), {"val", "buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(val, buffer, &bitposition);
        }
        uint64_t WriteValue(T val, ::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WriteValue"), {"val", "buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val, buffer, &bitposition);
        }
    };
}
