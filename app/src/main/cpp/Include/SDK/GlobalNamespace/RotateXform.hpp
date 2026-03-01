#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RotateXform_Mode.hpp"

namespace GlobalNamespace {
    struct RotateXform : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RotateXform");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RotateXform_Mode GetMode() {
            static BNM::Field<::GlobalNamespace::RotateXform_Mode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpeed() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeedFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("speedFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("xform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMode(::GlobalNamespace::RotateXform_Mode value) {
            static BNM::Field<::GlobalNamespace::RotateXform_Mode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeed(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speedFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("xform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
