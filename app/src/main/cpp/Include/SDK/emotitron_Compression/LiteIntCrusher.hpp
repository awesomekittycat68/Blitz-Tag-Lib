#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LiteCrusher$1.hpp"
#include "LiteIntCompressType.hpp"

namespace emotitron_Compression {
    struct LiteIntCrusher : ::emotitron_Compression::LiteCrusher$1<int> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "LiteIntCrusher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBiggest() {
            static BNM::Field<int> _field = GetClass().GetField(O("biggest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::emotitron_Compression::LiteIntCompressType GetCompressType() {
            static BNM::Field<::emotitron_Compression::LiteIntCompressType> _field = GetClass().GetField(O("compressType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMin() {
            static BNM::Field<int> _field = GetClass().GetField(O("min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSmallest() {
            static BNM::Field<int> _field = GetClass().GetField(O("smallest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBiggest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("biggest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressType(::emotitron_Compression::LiteIntCompressType value) {
            static BNM::Field<::emotitron_Compression::LiteIntCompressType> _field = GetClass().GetField(O("compressType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("smallest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int Decode(uint32_t cvalue) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Decode"), {"cvalue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cvalue);
        }
        uint64_t Encode(int value) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Encode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        int ReadValue(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadValue"), {"buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, &bitposition);
        }
        static void Recalculate(int min, int max, int& smallest, int& biggest, int& bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Recalculate"), {"min", "max", "smallest", "biggest", "bits"});
            _m.Call(min, max, &smallest, &biggest, &bits);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void WriteCValue(uint32_t cval, ::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCValue"), {"cval", "buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cval, buffer, &bitposition);
        }
        uint64_t WriteValue(int val, ::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WriteValue"), {"val", "buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val, buffer, &bitposition);
        }
    };
}
