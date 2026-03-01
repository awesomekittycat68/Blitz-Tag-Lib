#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression_Utilities {
    struct ByteConverter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression.Utilities", "ByteConverter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint8_t GetItem() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_Item"));
            return _method.Call();
        }
        uint8_t GetByte0() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte1() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte2() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte3() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte4() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte5() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte6() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte6"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetByte7() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte7"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        char GetCharacter() {
            static BNM::Field<char> _field = GetClass().GetField(O("character"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFloat32() {
            static BNM::Field<float> _field = GetClass().GetField(O("float32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetFloat64() {
            static BNM::Field<double> _field = GetClass().GetField(O("float64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetInt16() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("int16"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInt32() {
            static BNM::Field<int> _field = GetClass().GetField(O("int32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetInt64() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("int64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int8_t GetInt8() {
            static BNM::Field<int8_t> _field = GetClass().GetField(O("int8"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetUint16() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("uint16"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetUint16B() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("uint16_B"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetUint32() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("uint32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetUint64() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("uint64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetByte0(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte1(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte2(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte3(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte4(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte5(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte6(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte6"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByte7(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("byte7"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCharacter(char value) {
            static BNM::Field<char> _field = GetClass().GetField(O("character"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat32(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("float32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat64(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("float64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt16(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("int16"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt32(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("int32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt64(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("int64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt8(int8_t value) {
            static BNM::Field<int8_t> _field = GetClass().GetField(O("int8"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUint16(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("uint16"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUint16B(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("uint16_B"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUint32(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("uint32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUint64(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("uint64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ExtractByteArray(::BNM::Structures::Mono::Array<uint8_t>* targetArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExtractByteArray"), {"targetArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetArray);
        }
        uint8_t get_Item(int index) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_Item"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
    };
}
