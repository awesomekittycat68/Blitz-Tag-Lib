#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct OrientedBounds : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OrientedBounds");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::OrientedBounds GetEmpty() {
            static BNM::Method<::GlobalNamespace::OrientedBounds> _method = GetClass().GetMethod(O("get_Empty"));
            return _method.Call();
        }
        ::GlobalNamespace::OrientedBounds GetIdentity() {
            static BNM::Method<::GlobalNamespace::OrientedBounds> _method = GetClass().GetMethod(O("get_Identity"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSize() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::OrientedBounds get_Empty() {
            static BNM::Method<::GlobalNamespace::OrientedBounds> _m = GetClass().GetMethod(O("get_Empty"));
            return _m.Call();
        }
        static ::GlobalNamespace::OrientedBounds get_Identity() {
            static BNM::Method<::GlobalNamespace::OrientedBounds> _m = GetClass().GetMethod(O("get_Identity"));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Matrix4x4 TRS() {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("TRS"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
