#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KinematicTestMotion_MoveType.hpp"
#include "KinematicTestMotion_UpdateType.hpp"

namespace GlobalNamespace {
    struct KinematicTestMotion : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KinematicTestMotion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KinematicTestMotion_MoveType GetMoveType() {
            static BNM::Field<::GlobalNamespace::KinematicTestMotion_MoveType> _field = GetClass().GetField(O("moveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPeriod() {
            static BNM::Field<float> _field = GetClass().GetField(O("period"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KinematicTestMotion_UpdateType GetUpdateType() {
            static BNM::Field<::GlobalNamespace::KinematicTestMotion_UpdateType> _field = GetClass().GetField(O("updateType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveType(::GlobalNamespace::KinematicTestMotion_MoveType value) {
            static BNM::Field<::GlobalNamespace::KinematicTestMotion_MoveType> _field = GetClass().GetField(O("moveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeriod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("period"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStart(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateType(::GlobalNamespace::KinematicTestMotion_UpdateType value) {
            static BNM::Field<::GlobalNamespace::KinematicTestMotion_UpdateType> _field = GetClass().GetField(O("updateType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePosition(float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePosition"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
    };
}
