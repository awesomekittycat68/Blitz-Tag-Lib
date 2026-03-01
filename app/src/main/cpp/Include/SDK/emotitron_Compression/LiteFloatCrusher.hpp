#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LiteCrusher$1.hpp"
#include "LiteFloatCompressType.hpp"

namespace emotitron_Compression {
    struct LiteFloatCrusher : ::emotitron_Compression::LiteCrusher$1<float> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression", "LiteFloatCrusher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAccurateCenter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("accurateCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::emotitron_Compression::LiteFloatCompressType GetCompressType() {
            static BNM::Field<::emotitron_Compression::LiteFloatCompressType> _field = GetClass().GetField(O("compressType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDecoder() {
            static BNM::Field<float> _field = GetClass().GetField(O("decoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEncoder() {
            static BNM::Field<float> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetMaxCVal() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("maxCVal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccurateCenter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("accurateCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressType(::emotitron_Compression::LiteFloatCompressType value) {
            static BNM::Field<::emotitron_Compression::LiteFloatCompressType> _field = GetClass().GetField(O("compressType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDecoder(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("decoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncoder(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCVal(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("maxCVal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float Decode(uint32_t cval) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Decode"), {"cval"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cval);
        }
        uint64_t Encode(float val) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Encode"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val);
        }
        float ReadValue(::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ReadValue"), {"buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, &bitposition);
        }
        static void Recalculate(::emotitron_Compression::LiteFloatCompressType compressType, float min, float max, bool accurateCenter, int& bits, float& encoder, float& decoder, uint64_t& maxCVal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Recalculate"), {"compressType", "min", "max", "accurateCenter", "bits", "encoder", "decoder", "maxCVal"});
            _m.Call(compressType, min, max, accurateCenter, &bits, &encoder, &decoder, &maxCVal);
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
        uint64_t WriteValue(float val, ::BNM::Structures::Mono::Array<uint8_t>* buffer, int& bitposition) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("WriteValue"), {"val", "buffer", "bitposition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val, buffer, &bitposition);
        }
    };
}
