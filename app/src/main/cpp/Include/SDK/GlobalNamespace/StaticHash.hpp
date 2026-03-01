#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StaticHash : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StaticHash");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int Compute(int i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"i"});
            return _m.Call(i);
        }
        static int Compute(uint32_t u) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"u"});
            return _m.Call(u);
        }
        static int Compute(float f) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"f"});
            return _m.Call(f);
        }
        static int Compute(int64_t l) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"l"});
            return _m.Call(l);
        }
        static int Compute(double d) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"d"});
            return _m.Call(d);
        }
        static int Compute(bool b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"b"});
            return _m.Call(b);
        }
        template <typename TP0 = void*>
        static int Compute(TP0 dt) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"dt"});
            return _m.Call(dt);
        }
        static int Compute(::BNM::Structures::Mono::String* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"s"});
            return _m.Call(s);
        }
        static int Compute(::BNM::Structures::Mono::Array<uint8_t>* bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"bytes"});
            return _m.Call(bytes);
        }
        static int Compute(::BNM::Structures::Mono::Array<int>* values) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"values"});
            return _m.Call(values);
        }
        static int Compute(::BNM::Structures::Mono::Array<uint32_t>* values) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"values"});
            return _m.Call(values);
        }
        static int Compute(float f1, float f2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"f1", "f2"});
            return _m.Call(f1, f2);
        }
        static int Compute(int64_t l1, int64_t l2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"l1", "l2"});
            return _m.Call(l1, l2);
        }
        static int Compute(double d1, double d2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"d1", "d2"});
            return _m.Call(d1, d2);
        }
        static int Compute(bool b1, bool b2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"b1", "b2"});
            return _m.Call(b1, b2);
        }
        static int Compute(::BNM::Structures::Mono::String* s1, ::BNM::Structures::Mono::String* s2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"s1", "s2"});
            return _m.Call(s1, s2);
        }
        static int Compute(int i1, int i2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"i1", "i2"});
            return _m.Call(i1, i2);
        }
        static int Compute(uint32_t u1, uint32_t u2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"u1", "u2"});
            return _m.Call(u1, u2);
        }
        static int Compute(float f1, float f2, float f3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"f1", "f2", "f3"});
            return _m.Call(f1, f2, f3);
        }
        static int Compute(int64_t l1, int64_t l2, int64_t l3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"l1", "l2", "l3"});
            return _m.Call(l1, l2, l3);
        }
        static int Compute(double d1, double d2, double d3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"d1", "d2", "d3"});
            return _m.Call(d1, d2, d3);
        }
        static int Compute(bool b1, bool b2, bool b3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"b1", "b2", "b3"});
            return _m.Call(b1, b2, b3);
        }
        static int Compute(::BNM::Structures::Mono::String* s1, ::BNM::Structures::Mono::String* s2, ::BNM::Structures::Mono::String* s3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"s1", "s2", "s3"});
            return _m.Call(s1, s2, s3);
        }
        static int Compute(int i1, int i2, int i3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"i1", "i2", "i3"});
            return _m.Call(i1, i2, i3);
        }
        static int Compute(uint32_t u1, uint32_t u2, uint32_t u3) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"u1", "u2", "u3"});
            return _m.Call(u1, u2, u3);
        }
        static int Compute(float f1, float f2, float f3, float f4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"f1", "f2", "f3", "f4"});
            return _m.Call(f1, f2, f3, f4);
        }
        static int Compute(int64_t l1, int64_t l2, int64_t l3, int64_t l4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"l1", "l2", "l3", "l4"});
            return _m.Call(l1, l2, l3, l4);
        }
        static int Compute(double d1, double d2, double d3, double d4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"d1", "d2", "d3", "d4"});
            return _m.Call(d1, d2, d3, d4);
        }
        static int Compute(bool b1, bool b2, bool b3, bool b4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"b1", "b2", "b3", "b4"});
            return _m.Call(b1, b2, b3, b4);
        }
        static int Compute(::BNM::Structures::Mono::String* s1, ::BNM::Structures::Mono::String* s2, ::BNM::Structures::Mono::String* s3, ::BNM::Structures::Mono::String* s4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"s1", "s2", "s3", "s4"});
            return _m.Call(s1, s2, s3, s4);
        }
        static int Compute(int i1, int i2, int i3, int i4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"i1", "i2", "i3", "i4"});
            return _m.Call(i1, i2, i3, i4);
        }
        static int Compute(uint32_t u1, uint32_t u2, uint32_t u3, uint32_t u4) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compute"), {"u1", "u2", "u3", "u4"});
            return _m.Call(u1, u2, u3, u4);
        }
        static int64_t Compute128To64(int64_t a, int64_t b) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Compute128To64"), {"a", "b"});
            return _m.Call(a, b);
        }
        static int64_t Compute128To64(uint64_t a, uint64_t b) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Compute128To64"), {"a", "b"});
            return _m.Call(a, b);
        }
        static int ComputeOrderAgnostic(::BNM::Structures::Mono::Array<int>* values) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComputeOrderAgnostic"), {"values"});
            return _m.Call(values);
        }
        static int ComputeTriple32(int i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComputeTriple32"), {"i"});
            return _m.Call(i);
        }
        static void Finalize_1(uint32_t& a, uint32_t& b, uint32_t& c) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"), {"a", "b", "c"});
            _m.Call(&a, &b, &c);
        }
        static void Mix(uint32_t& a, uint32_t& b, uint32_t& c) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Mix"), {"a", "b", "c"});
            _m.Call(&a, &b, &c);
        }
        static int ReverseTriple32(int i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReverseTriple32"), {"i"});
            return _m.Call(i);
        }
        static uint32_t Rotate(uint32_t x, int k) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Rotate"), {"x", "k"});
            return _m.Call(x, k);
        }
    };
}
