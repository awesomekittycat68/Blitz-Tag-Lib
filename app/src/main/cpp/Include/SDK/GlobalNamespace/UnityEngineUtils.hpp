#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Id128.hpp"

namespace GlobalNamespace {
    struct UnityEngineUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnityEngineUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static int Color32ToId(TP0 c, bool distinct) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Color32ToId"), {"c", "distinct"});
            return _m.Call(c, distinct);
        }
        static void CopyTo(::BNM::Structures::Unity::Quaternion& q, ::BNM::Structures::Unity::Vector4& v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTo"), {"q", "v"});
            _m.Call(&q, &v);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool EqualsColor(TP0 c, TP1 other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EqualsColor"), {"c", "other"});
            return _m.Call(c, other);
        }
        static void* IdToColor32(::BNM::IL2CPP::Il2CppObject* obj, int alpha, bool distinct) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IdToColor32"), {"obj", "alpha", "distinct"});
            return _m.Call(obj, alpha, distinct);
        }
        static void* IdToColor32(int id, int alpha, bool distinct) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IdToColor32"), {"id", "alpha", "distinct"});
            return _m.Call(id, alpha, distinct);
        }
        static uint64_t MergeTo64(int a, int b) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("MergeTo64"), {"a", "b"});
            return _m.Call(a, b);
        }
        static void* QuantizedHash128(::BNM::Structures::Unity::Matrix4x4 m) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("QuantizedHash128"), {"m"});
            return _m.Call(m);
        }
        static void* QuantizedHash128(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("QuantizedHash128"), {"v"});
            return _m.Call(v);
        }
        static int64_t QuantizedHash64(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("QuantizedHash64"), {"v"});
            return _m.Call(v);
        }
        static int64_t QuantizedHash64(::BNM::Structures::Unity::Matrix4x4 m) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("QuantizedHash64"), {"m"});
            return _m.Call(m);
        }
        static ::GlobalNamespace::Id128 QuantizedId128(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("QuantizedId128"), {"v"});
            return _m.Call(v);
        }
        static ::GlobalNamespace::Id128 QuantizedId128(::BNM::Structures::Unity::Matrix4x4 m) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("QuantizedId128"), {"m"});
            return _m.Call(m);
        }
        static ::GlobalNamespace::Id128 QuantizedId128(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("QuantizedId128"), {"q"});
            return _m.Call(q);
        }
        template <typename TP0 = void*>
        static void* ToHighViz(TP0 c) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToHighViz"), {"c"});
            return _m.Call(c);
        }
        static ::BNM::Structures::Unity::Vector4 ToVector(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("ToVector"), {"q"});
            return _m.Call(q);
        }
    };
}
