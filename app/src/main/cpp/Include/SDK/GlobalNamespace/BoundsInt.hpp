#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BoundsInt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BoundsInt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int SCALE_FACTOR = 1000;
        ::BNM::Structures::Unity::Vector3 GetCenterFloat() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_centerFloat"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetSizeFloat() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_sizeFloat"));
            return _method.Call();
        }
        void* GetMax() {
            static BNM::Field<void*> _field = GetClass().GetField(O("max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMin() {
            static BNM::Field<void*> _field = GetClass().GetField(O("min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMax(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Contains(::GlobalNamespace::BoundsInt other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Contains"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        bool Contains(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Contains"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point);
        }
        void Encapsulate(::GlobalNamespace::BoundsInt other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Encapsulate"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        void Expand(float amount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Expand"), {"amount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount);
        }
        static void* FloatToInt(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FloatToInt"), {"v"});
            return _m.Call(v);
        }
        template <typename TP0 = void*>
        static ::GlobalNamespace::BoundsInt FromBounds(TP0 bounds) {
            static BNM::Method<::GlobalNamespace::BoundsInt> _m = GetClass().GetMethod(O("FromBounds"), {"bounds"});
            return _m.Call(bounds);
        }
        void* get_center() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_center"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_centerFloat() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_centerFloat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_size() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_size"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_sizeFloat() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_sizeFloat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BoundsInt GetIntersection(::GlobalNamespace::BoundsInt other) {
            static BNM::Method<::GlobalNamespace::BoundsInt> _m = GetClass().GetMethod(O("GetIntersection"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        bool Intersects(::GlobalNamespace::BoundsInt other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Intersects"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Unity::Vector3 IntToFloat(TP0 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("IntToFloat"), {"v"});
            return _m.Call(v);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void SetMinMax(TP0 min, TP1 max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMinMax"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(min, max);
        }
        void SetMinMax(::BNM::Structures::Unity::Vector3 min, ::BNM::Structures::Unity::Vector3 max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMinMax"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(min, max);
        }
        void* ToBounds() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToBounds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t Volume() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Volume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float VolumeFloat() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("VolumeFloat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
