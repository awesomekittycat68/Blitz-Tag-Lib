#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct YorickLook : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "YorickLook");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetLeftEye() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookAtAngleDegrees() {
            static BNM::Field<float> _field = GetClass().GetField(O("lookAtAngleDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLookRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("lookRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLookTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lookTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* GetOverlapRigs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("overlapRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightEye() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* GetRigs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLeftEye(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookAtAngleDegrees(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lookAtAngleDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lookRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lookTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapRigs(::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("overlapRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightEye(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigs(::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
