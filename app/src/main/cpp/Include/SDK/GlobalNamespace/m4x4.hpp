#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "m4x4_$data_f$e__FixedBuffer.hpp"
#include "m4x4_$data_h$e__FixedBuffer.hpp"
#include "m4x4_$data_i$e__FixedBuffer.hpp"

namespace GlobalNamespace {
    struct m4x4 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "m4x4");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint16_t GetH00A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h00_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH00B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h00_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH01A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h01_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH01B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h01_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH02A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h02_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH02B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h02_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH03A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h03_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH03B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h03_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH10A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h10_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH10B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h10_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH11A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h11_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH11B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h11_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH12A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h12_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH12B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h12_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH13A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h13_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH13B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h13_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH20A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h20_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH20B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h20_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH21A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h21_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH21B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h21_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH22A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h22_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH22B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h22_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH23A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h23_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH23B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h23_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH30A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h30_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH30B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h30_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH31A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h31_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH31B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h31_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH32A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h32_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH32B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h32_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH33A() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h33_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint16_t GetH33B() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h33_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI00() {
            static BNM::Field<int> _field = GetClass().GetField(O("i00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI01() {
            static BNM::Field<int> _field = GetClass().GetField(O("i01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI02() {
            static BNM::Field<int> _field = GetClass().GetField(O("i02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI03() {
            static BNM::Field<int> _field = GetClass().GetField(O("i03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI10() {
            static BNM::Field<int> _field = GetClass().GetField(O("i10"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI11() {
            static BNM::Field<int> _field = GetClass().GetField(O("i11"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI12() {
            static BNM::Field<int> _field = GetClass().GetField(O("i12"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI13() {
            static BNM::Field<int> _field = GetClass().GetField(O("i13"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI20() {
            static BNM::Field<int> _field = GetClass().GetField(O("i20"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI21() {
            static BNM::Field<int> _field = GetClass().GetField(O("i21"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI22() {
            static BNM::Field<int> _field = GetClass().GetField(O("i22"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI23() {
            static BNM::Field<int> _field = GetClass().GetField(O("i23"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI30() {
            static BNM::Field<int> _field = GetClass().GetField(O("i30"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI31() {
            static BNM::Field<int> _field = GetClass().GetField(O("i31"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI32() {
            static BNM::Field<int> _field = GetClass().GetField(O("i32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI33() {
            static BNM::Field<int> _field = GetClass().GetField(O("i33"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM00() {
            static BNM::Field<float> _field = GetClass().GetField(O("m00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM01() {
            static BNM::Field<float> _field = GetClass().GetField(O("m01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM02() {
            static BNM::Field<float> _field = GetClass().GetField(O("m02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM03() {
            static BNM::Field<float> _field = GetClass().GetField(O("m03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM10() {
            static BNM::Field<float> _field = GetClass().GetField(O("m10"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM11() {
            static BNM::Field<float> _field = GetClass().GetField(O("m11"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM12() {
            static BNM::Field<float> _field = GetClass().GetField(O("m12"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM13() {
            static BNM::Field<float> _field = GetClass().GetField(O("m13"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM20() {
            static BNM::Field<float> _field = GetClass().GetField(O("m20"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM21() {
            static BNM::Field<float> _field = GetClass().GetField(O("m21"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM22() {
            static BNM::Field<float> _field = GetClass().GetField(O("m22"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM23() {
            static BNM::Field<float> _field = GetClass().GetField(O("m23"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM30() {
            static BNM::Field<float> _field = GetClass().GetField(O("m30"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM31() {
            static BNM::Field<float> _field = GetClass().GetField(O("m31"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM32() {
            static BNM::Field<float> _field = GetClass().GetField(O("m32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetM33() {
            static BNM::Field<float> _field = GetClass().GetField(O("m33"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetR0() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetR1() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetR2() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector4 GetR3() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetH00A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h00_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH00B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h00_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH01A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h01_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH01B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h01_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH02A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h02_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH02B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h02_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH03A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h03_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH03B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h03_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH10A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h10_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH10B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h10_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH11A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h11_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH11B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h11_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH12A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h12_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH12B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h12_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH13A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h13_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH13B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h13_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH20A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h20_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH20B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h20_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH21A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h21_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH21B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h21_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH22A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h22_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH22B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h22_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH23A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h23_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH23B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h23_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH30A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h30_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH30B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h30_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH31A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h31_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH31B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h31_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH32A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h32_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH32B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h32_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH33A(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h33_a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH33B(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("h33_b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI00(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI01(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI02(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI03(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI10(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i10"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI11(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i11"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI12(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i12"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI13(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i13"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI20(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i20"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI21(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i21"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI22(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i22"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI23(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i23"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI30(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i30"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI31(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i31"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI32(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI33(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i33"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM00(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m00"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM01(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m01"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM02(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m02"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM03(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m03"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM10(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m10"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM11(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m11"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM12(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m12"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM13(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m13"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM20(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m20"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM21(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m21"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM22(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m22"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM23(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m23"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM30(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m30"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM31(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m31"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM32(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetM33(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m33"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetR0(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetR1(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetR2(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetR3(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("r3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::m4x4& From(::BNM::Structures::Unity::Matrix4x4& src) {
            static BNM::Method<::GlobalNamespace::m4x4&> _m = GetClass().GetMethod(O("From"), {"src"});
            return _m.Call(&src);
        }
        void Push(::BNM::Structures::Unity::Matrix4x4& x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Push"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&x);
        }
        void PushTransposed(::BNM::Structures::Unity::Matrix4x4& x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PushTransposed"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&x);
        }
        void Set(::BNM::Structures::Unity::Matrix4x4& x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&x);
        }
        void Set(::BNM::Structures::Unity::Vector4& row0, ::BNM::Structures::Unity::Vector4& row1, ::BNM::Structures::Unity::Vector4& row2, ::BNM::Structures::Unity::Vector4& row3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"row0", "row1", "row2", "row3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&row0, &row1, &row2, &row3);
        }
        void SetRow0(::BNM::Structures::Unity::Vector4& v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRow0"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&v);
        }
        void SetRow1(::BNM::Structures::Unity::Vector4& v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRow1"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&v);
        }
        void SetRow2(::BNM::Structures::Unity::Vector4& v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRow2"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&v);
        }
        void SetRow3(::BNM::Structures::Unity::Vector4& v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRow3"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&v);
        }
        void SetTransposed(::BNM::Structures::Unity::Matrix4x4& x) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransposed"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&x);
        }
        void SetTransposed(::BNM::Structures::Unity::Vector4& row0, ::BNM::Structures::Unity::Vector4& row1, ::BNM::Structures::Unity::Vector4& row2, ::BNM::Structures::Unity::Vector4& row3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransposed"), {"row0", "row1", "row2", "row3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&row0, &row1, &row2, &row3);
        }
        void Transpose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Transpose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
