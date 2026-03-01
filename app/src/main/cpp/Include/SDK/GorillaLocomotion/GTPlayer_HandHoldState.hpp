#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion {
    struct GTPlayer_HandHoldState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion", "GTPlayer").GetInnerClass("HandHoldState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetApplyRotation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaGrabber* GetGrabber() {
            static BNM::Field<::GlobalNamespace::GorillaGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalPositionHeld() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localPositionHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalRotationalOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("localRotationalOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetObjectHeld() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("objectHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyRotation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabber(::GlobalNamespace::GorillaGrabber* value) {
            static BNM::Field<::GlobalNamespace::GorillaGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPositionHeld(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localPositionHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRotationalOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("localRotationalOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectHeld(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("objectHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
