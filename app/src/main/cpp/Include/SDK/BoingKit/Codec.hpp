#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct Codec : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "Codec");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetFnvDefaultBasis() {
            static BNM::Field<int> _field = GetClass().GetField(O("FnvDefaultBasis"));
            return _field.Get();
        }
        static int GetFnvPrime() {
            static BNM::Field<int> _field = GetClass().GetField(O("FnvPrime"));
            return _field.Get();
        }
        static int Hash(int i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"i"});
            return _m.Call(i);
        }
        static int Hash(int64_t i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"i"});
            return _m.Call(i);
        }
        static int Hash(float f) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"f"});
            return _m.Call(f);
        }
        static int Hash(bool b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"b"});
            return _m.Call(b);
        }
        static int Hash(::BNM::Structures::Mono::Array<int>* ints) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"ints"});
            return _m.Call(ints);
        }
        static int Hash(::BNM::Structures::Mono::Array<float>* floats) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"floats"});
            return _m.Call(floats);
        }
        static int Hash(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"v"});
            return _m.Call(v);
        }
        static int Hash(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"v"});
            return _m.Call(v);
        }
        static int Hash(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"v"});
            return _m.Call(v);
        }
        static int Hash(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"q"});
            return _m.Call(q);
        }
        static int Hash(::BNM::Structures::Unity::Color c) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Hash"), {"c"});
            return _m.Call(c);
        }
        static int HashConcat(int hash, int i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "i"});
            return _m.Call(hash, i);
        }
        static int HashConcat(int hash, int64_t i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "i"});
            return _m.Call(hash, i);
        }
        static int HashConcat(int hash, float f) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "f"});
            return _m.Call(hash, f);
        }
        static int HashConcat(int hash, bool b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "b"});
            return _m.Call(hash, b);
        }
        static int HashConcat(int hash, ::BNM::Structures::Mono::Array<int>* ints) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "ints"});
            return _m.Call(hash, ints);
        }
        static int HashConcat(int hash, ::BNM::Structures::Mono::Array<float>* floats) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "floats"});
            return _m.Call(hash, floats);
        }
        static int HashConcat(int hash, ::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "v"});
            return _m.Call(hash, v);
        }
        static int HashConcat(int hash, ::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "v"});
            return _m.Call(hash, v);
        }
        static int HashConcat(int hash, ::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "v"});
            return _m.Call(hash, v);
        }
        static int HashConcat(int hash, ::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "q"});
            return _m.Call(hash, q);
        }
        static int HashConcat(int hash, ::BNM::Structures::Unity::Color c) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "c"});
            return _m.Call(hash, c);
        }
        static int HashConcat(int hash, ::Transform* t) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashConcat"), {"hash", "t"});
            return _m.Call(hash, t);
        }
        static int HashTransformHierarchy(::Transform* t) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashTransformHierarchy"), {"t"});
            return _m.Call(t);
        }
        static int HashTransformHierarchyRecurvsive(int hash, ::Transform* t) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HashTransformHierarchyRecurvsive"), {"hash", "t"});
            return _m.Call(hash, t);
        }
        static int IntReinterpret(float f) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IntReinterpret"), {"f"});
            return _m.Call(f);
        }
        static ::BNM::Structures::Unity::Vector2 OctWrap(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("OctWrap"), {"v"});
            return _m.Call(v);
        }
        static uint32_t Pack8888(uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Pack8888"), {"x", "y", "z", "w"});
            return _m.Call(x, y, z, w);
        }
        static float PackNormal(::BNM::Structures::Unity::Vector3 n) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PackNormal"), {"n"});
            return _m.Call(n);
        }
        static uint32_t PackRgb(::BNM::Structures::Unity::Color color) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("PackRgb"), {"color"});
            return _m.Call(color);
        }
        static uint32_t PackRgba(::BNM::Structures::Unity::Color color) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("PackRgba"), {"color"});
            return _m.Call(color);
        }
        static float PackSaturated(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PackSaturated"), {"v"});
            return _m.Call(v);
        }
        static float PackSaturated(float a, float b) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PackSaturated"), {"a", "b"});
            return _m.Call(a, b);
        }
        static void Unpack8888(uint32_t i, uint32_t& x, uint32_t& y, uint32_t& z, uint32_t& w) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unpack8888"), {"i", "x", "y", "z", "w"});
            _m.Call(i, &x, &y, &z, &w);
        }
        static ::BNM::Structures::Unity::Vector3 UnpackNormal(float f) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UnpackNormal"), {"f"});
            return _m.Call(f);
        }
        static ::BNM::Structures::Unity::Color UnpackRgb(uint32_t i) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("UnpackRgb"), {"i"});
            return _m.Call(i);
        }
        static ::BNM::Structures::Unity::Color UnpackRgba(uint32_t i) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("UnpackRgba"), {"i"});
            return _m.Call(i);
        }
        static ::BNM::Structures::Unity::Vector2 UnpackSaturated(float f) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("UnpackSaturated"), {"f"});
            return _m.Call(f);
        }
    };
}
