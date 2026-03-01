#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MatrixUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MatrixUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Clear(::BNM::Structures::Unity::Matrix4x4& m) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"), {"m"});
            _m.Call(&m);
        }
        static void Copy(::BNM::Structures::Unity::Matrix4x4& from, ::BNM::Structures::Unity::Matrix4x4& to) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Copy"), {"from", "to"});
            _m.Call(&from, &to);
        }
        static void MultiplyXYZ(::BNM::Structures::Unity::Matrix4x4& m, ::BNM::Structures::Unity::Vector4& point) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MultiplyXYZ"), {"m", "point"});
            _m.Call(&m, &point);
        }
        static void MultiplyXYZ3x4(::BNM::Structures::Unity::Matrix4x4& m, ::BNM::Structures::Unity::Vector4& point) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MultiplyXYZ3x4"), {"m", "point"});
            _m.Call(&m, &point);
        }
    };
}
