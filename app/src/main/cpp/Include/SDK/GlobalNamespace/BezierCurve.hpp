#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BezierCurve : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BezierCurve");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("points"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReferenceTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("points"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Unity::Vector3 GetDirection(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetDirection"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetPoint(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPoint"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetVelocity"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
