#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Arc : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Arc");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetControl() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("control"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEnd() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStart() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetControl(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("control"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnd(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStart(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Unity::Vector3 BezierLerp(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, ::BNM::Structures::Unity::Vector3 c, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("BezierLerp"), {"a", "b", "c", "t"});
            return _m.Call(a, b, c, t);
        }
        template <typename TP2 = void*>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* ComputeArcPoints(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, TP2 c, int count) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("ComputeArcPoints"), {"a", "b", "c", "count"});
            return _m.Call(a, b, c, count);
        }
        template <typename TP2 = void*, typename TP3 = void*>
        static ::BNM::Structures::Unity::Vector3 DeriveArcControlPoint(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b, TP2 dir, TP3 height) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("DeriveArcControlPoint"), {"a", "b", "dir", "height"});
            return _m.Call(a, b, dir, height);
        }
        void DrawGizmo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawGizmo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::Arc From(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end) {
            static BNM::Method<::GlobalNamespace::Arc> _m = GetClass().GetMethod(O("From"), {"start", "end"});
            return _m.Call(start, end);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetArcPoints(int count) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _m = GetClass().GetMethod(O("GetArcPoints"), {"count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(count);
        }
    };
}
