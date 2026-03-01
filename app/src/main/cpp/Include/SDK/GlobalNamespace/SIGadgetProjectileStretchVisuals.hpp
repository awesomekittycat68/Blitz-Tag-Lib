#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct SIGadgetProjectileStretchVisuals : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetProjectileStretchVisuals");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetBaseVisuals() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("baseVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistancePerFrame() {
            static BNM::Field<float> _field = GetClass().GetField(O("distancePerFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFramesPerPosition() {
            static BNM::Field<float> _field = GetClass().GetField(O("framesPerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrontDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("frontDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFrontStretch() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("frontStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMaxSizeReached() {
            static BNM::Field<bool> _field = GetClass().GetField(O("maxSizeReached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxStretchRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxStretchRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlasterProjectile* GetProjectile() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRearStretch() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rearStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSpawned() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseVisuals(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("baseVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistancePerFrame(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distancePerFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramesPerPosition(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("framesPerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrontDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frontDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrontStretch(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("frontStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSizeReached(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("maxSizeReached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxStretchRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxStretchRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectile(::GlobalNamespace::SIGadgetBlasterProjectile* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRearStretch(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rearStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSpawned(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
