#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BoundsInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BoundsInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetSizeComputed() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_sizeComputed"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetSizeComputedAA() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_sizeComputedAA"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCenterAA() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("centerAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInflate() {
            static BNM::Field<float> _field = GetClass().GetField(O("inflate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInflateAA() {
            static BNM::Field<float> _field = GetClass().GetField(O("inflateAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetScaleAA() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("scaleAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSize() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSizeAA() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sizeAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterAA(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("centerAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInflate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inflate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInflateAA(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inflateAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleAA(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("scaleAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeAA(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sizeAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::BoundsInfo ComputeBounds(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* vertices) {
            static BNM::Method<::GlobalNamespace::BoundsInfo> _m = GetClass().GetMethod(O("ComputeBounds"), {"vertices"});
            return _m.Call(vertices);
        }
        static ::BoxCollider* CreateBoxCollider(::GlobalNamespace::BoundsInfo bounds) {
            static BNM::Method<::BoxCollider*> _m = GetClass().GetMethod(O("CreateBoxCollider"), {"bounds"});
            return _m.Call(bounds);
        }
        static ::BoxCollider* CreateBoxColliderAA(::GlobalNamespace::BoundsInfo bounds) {
            static BNM::Method<::BoxCollider*> _m = GetClass().GetMethod(O("CreateBoxColliderAA"), {"bounds"});
            return _m.Call(bounds);
        }
        ::BNM::Structures::Unity::Vector3 get_sizeComputed() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_sizeComputed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_sizeComputedAA() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_sizeComputedAA"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
