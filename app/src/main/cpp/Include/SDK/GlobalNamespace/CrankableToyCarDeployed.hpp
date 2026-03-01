#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CrankableToyCarDeployed : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrankableToyCarDeployed");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetDrivingAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("drivingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExpiresAtTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("expiresAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrankableToyCarHoldable* GetHoldable() {
            static BNM::Field<::GlobalNamespace::CrankableToyCarHoldable*> _field = GetClass().GetField(O("holdable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRemote() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMaxThrust() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("maxThrust"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetOffGroundDrivingAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("offGroundDrivingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartedAtTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("startedAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetThrustCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("thrustCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FakeWheelDriver* GetWheelDriver() {
            static BNM::Field<::GlobalNamespace::FakeWheelDriver*> _field = GetClass().GetField(O("wheelDriver"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDrivingAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("drivingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpiresAtTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("expiresAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldable(::GlobalNamespace::CrankableToyCarHoldable* value) {
            static BNM::Field<::GlobalNamespace::CrankableToyCarHoldable*> _field = GetClass().GetField(O("holdable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRemote(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxThrust(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("maxThrust"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffGroundDrivingAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("offGroundDrivingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartedAtTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startedAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrustCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("thrustCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelDriver(::GlobalNamespace::FakeWheelDriver* value) {
            static BNM::Field<::GlobalNamespace::FakeWheelDriver*> _field = GetClass().GetField(O("wheelDriver"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Deploy(::GlobalNamespace::CrankableToyCarHoldable* holdable, ::BNM::Structures::Unity::Vector3 launchPos, ::BNM::Structures::Unity::Quaternion launchRot, ::BNM::Structures::Unity::Vector3 releaseVel, float lifetime, bool isRemote) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deploy"), {"holdable", "launchPos", "launchRot", "releaseVel", "lifetime", "isRemote"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable, launchPos, launchRot, releaseVel, lifetime, isRemote);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
