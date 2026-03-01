#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTSimpleNameID : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSimpleNameID");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* _k_possibleChars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_-";
        static constexpr int _k_maxLength = 41;
        static constexpr uint64_t _k_bitmask6Bits = 63;
        static constexpr uint16_t _k_indexOf_A = 10;
        static constexpr uint16_t _k_indexOf_a = 36;
        static constexpr uint16_t _k_indexOf_underscore = 62;
        static constexpr uint16_t _k_indexOf_hyphen = 63;
        uint64_t GetU0() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetU1() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetU2() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetU3() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetU0(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetU1(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetU2(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetU3(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("U3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static uint64_t _Read6Bits(::GlobalNamespace::GTSimpleNameID& cv, int bitOffset) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("_Read6Bits"), {"cv", "bitOffset"});
            return _m.Call(&cv, bitOffset);
        }
        static ::GlobalNamespace::GTSimpleNameID FromString(::BNM::Structures::Mono::String* input) {
            static BNM::Method<::GlobalNamespace::GTSimpleNameID> _m = GetClass().GetMethod(O("FromString"), {"input"});
            return _m.Call(input);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
