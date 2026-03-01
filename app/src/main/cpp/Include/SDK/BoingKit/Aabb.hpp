#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingEffector_Params.hpp"

namespace BoingKit {
    struct Aabb : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "Aabb");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetCenter() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_Center"));
            return _method.Call();
        }
        ::BoingKit::Aabb GetEmpty() {
            static BNM::Method<::BoingKit::Aabb> _method = GetClass().GetMethod(O("get_Empty"));
            return _method.Call();
        }
        float GetMaxX() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MaxX"));
            return _method.Call();
        }
        void SetMaxX(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxX"));
            _method.Call(value);
        }
        float GetMaxY() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MaxY"));
            return _method.Call();
        }
        void SetMaxY(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxY"));
            _method.Call(value);
        }
        float GetMaxZ() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MaxZ"));
            return _method.Call();
        }
        void SetMaxZ(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxZ"));
            _method.Call(value);
        }
        float GetMinX() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MinX"));
            return _method.Call();
        }
        void SetMinX(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MinX"));
            _method.Call(value);
        }
        float GetMinY() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MinY"));
            return _method.Call();
        }
        void SetMinY(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MinY"));
            _method.Call(value);
        }
        float GetMinZ() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MinZ"));
            return _method.Call();
        }
        void SetMinZ(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MinZ"));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetSize() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_Size"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMin() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMax(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Contains(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Contains"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p);
        }
        bool ContainsX(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsX"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p);
        }
        bool ContainsY(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsY"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p);
        }
        bool ContainsZ(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsZ"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p);
        }
        ::BoingKit::Aabb Expand(float amount) {
            static BNM::Method<::BoingKit::Aabb> _m = GetClass().GetMethod(O("Expand"), {"amount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(amount);
        }
        static ::BoingKit::Aabb FromPoint(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<::BoingKit::Aabb> _m = GetClass().GetMethod(O("FromPoint"), {"p"});
            return _m.Call(p);
        }
        static ::BoingKit::Aabb FromPoints(::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b) {
            static BNM::Method<::BoingKit::Aabb> _m = GetClass().GetMethod(O("FromPoints"), {"a", "b"});
            return _m.Call(a, b);
        }
        ::BNM::Structures::Unity::Vector3 get_Center() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_Center"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BoingKit::Aabb get_Empty() {
            static BNM::Method<::BoingKit::Aabb> _m = GetClass().GetMethod(O("get_Empty"));
            return _m.Call();
        }
        float get_MaxX() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MaxX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MaxY() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MaxY"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MaxZ() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MaxZ"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MinX() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MinX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MinY() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MinY"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MinZ() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MinZ"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_Size() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_Size"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Include(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Include"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p);
        }
        bool Intersects(::BoingKit::Aabb rhs) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Intersects"), {"rhs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rhs);
        }
        bool Intersects(::BoingKit::BoingEffector_Params& effector) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Intersects"), {"effector"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&effector);
        }
        void set_MaxX(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxX"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxY(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxY"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxZ(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxZ"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MinX(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MinX"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MinY(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MinY"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MinZ(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MinZ"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
