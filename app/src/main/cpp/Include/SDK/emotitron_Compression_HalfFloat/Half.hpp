#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression_HalfFloat {
    struct Half : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression.HalfFloat", "Half");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int PrecisionDigits = 3;
        static constexpr int MantissaBits = 11;
        static constexpr int MaximumDecimalExponent = 4;
        static constexpr int MaximumBinaryExponent = 15;
        static constexpr int MinimumDecimalExponent = -4;
        static constexpr int MinimumBinaryExponent = -14;
        static constexpr int ExponentRadix = 2;
        static constexpr int AdditionRounding = 1;
        uint16_t GetRawValue() {
            static BNM::Method<uint16_t> _method = GetClass().GetMethod(O("get_RawValue"));
            return _method.Call();
        }
        static ::emotitron_Compression_HalfFloat::Half GetEpsilon() {
            static BNM::Field<::emotitron_Compression_HalfFloat::Half> _field = GetClass().GetField(O("Epsilon"));
            return _field.Get();
        }
        static ::emotitron_Compression_HalfFloat::Half GetMaxValue() {
            static BNM::Field<::emotitron_Compression_HalfFloat::Half> _field = GetClass().GetField(O("MaxValue"));
            return _field.Get();
        }
        static ::emotitron_Compression_HalfFloat::Half GetMinValue() {
            static BNM::Field<::emotitron_Compression_HalfFloat::Half> _field = GetClass().GetField(O("MinValue"));
            return _field.Get();
        }
        static ::emotitron_Compression_HalfFloat::Half GetNaN() {
            static BNM::Field<::emotitron_Compression_HalfFloat::Half> _field = GetClass().GetField(O("NaN"));
            return _field.Get();
        }
        static ::emotitron_Compression_HalfFloat::Half GetNegativeInfinity() {
            static BNM::Field<::emotitron_Compression_HalfFloat::Half> _field = GetClass().GetField(O("NegativeInfinity"));
            return _field.Get();
        }
        static ::emotitron_Compression_HalfFloat::Half GetPositiveInfinity() {
            static BNM::Field<::emotitron_Compression_HalfFloat::Half> _field = GetClass().GetField(O("PositiveInfinity"));
            return _field.Get();
        }
        uint16_t GetValue() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetValue(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CompareTo(::emotitron_Compression_HalfFloat::Half value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        template <typename TP0 = void*>
        int CompareTo(TP0 value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        static ::BNM::Structures::Mono::Array<float>* ConvertToFloat(::BNM::Structures::Mono::Array<::emotitron_Compression_HalfFloat::Half>* values) {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("ConvertToFloat"), {"values"});
            return _m.Call(values);
        }
        static ::BNM::Structures::Mono::Array<::emotitron_Compression_HalfFloat::Half>* ConvertToHalf(::BNM::Structures::Mono::Array<float>* values) {
            static BNM::Method<::BNM::Structures::Mono::Array<::emotitron_Compression_HalfFloat::Half>*> _m = GetClass().GetMethod(O("ConvertToHalf"), {"values"});
            return _m.Call(values);
        }
        bool Equals_1(::emotitron_Compression_HalfFloat::Half other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        static bool Equals_1(::emotitron_Compression_HalfFloat::Half& value1, ::emotitron_Compression_HalfFloat::Half& value2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"value1", "value2"});
            return _m.Call(&value1, &value2);
        }
        uint16_t get_RawValue() {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("get_RawValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetTypeCode() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetTypeCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsInfinity(::emotitron_Compression_HalfFloat::Half half) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInfinity"), {"half"});
            return _m.Call(half);
        }
        static bool IsNaN(::emotitron_Compression_HalfFloat::Half half) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNaN"), {"half"});
            return _m.Call(half);
        }
        static bool IsNegativeInfinity(::emotitron_Compression_HalfFloat::Half half) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNegativeInfinity"), {"half"});
            return _m.Call(half);
        }
        static bool IsPositiveInfinity(::emotitron_Compression_HalfFloat::Half half) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPositiveInfinity"), {"half"});
            return _m.Call(half);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1(::BNM::Structures::Mono::String* format) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"), {"format"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(format);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::String* ToString_1(TP0 formatProvider) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"), {"formatProvider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(formatProvider);
        }
        template <typename TP1 = void*>
        ::BNM::Structures::Mono::String* ToString_1(::BNM::Structures::Mono::String* format, TP1 formatProvider) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"), {"format", "formatProvider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(format, formatProvider);
        }
    };
}
