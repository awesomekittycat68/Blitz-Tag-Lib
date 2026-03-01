#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct ComputePenetration : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ComputePenetration");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Collider* GetColliderA() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("colliderA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetColliderB() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("colliderB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("direction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetLastUpdate() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverlapped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overlapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColliderA(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("colliderA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderB(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("colliderB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("direction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastUpdate(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overlapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Compute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Compute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DrawCollider(::Collider* c, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCollider"), {"c", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(c, color);
        }
        void OnDrawGizmos() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
