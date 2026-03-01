#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MetroSpotlight : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MetroSpotlight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBlimp() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_blimp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLight() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_light"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("_offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("_radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTheta() {
            static BNM::Field<float> _field = GetClass().GetField(O("_theta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_time"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlimp(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_blimp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLight(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_light"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTheta(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_theta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_time"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Unity::Vector3 Figure8(::BNM::Structures::Unity::Vector3 origin, ::BNM::Structures::Unity::Vector3 xDir, ::BNM::Structures::Unity::Vector3 yDir, float scale, float t, float offset, float theta) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Figure8"), {"origin", "xDir", "yDir", "scale", "t", "offset", "theta"});
            return _m.Call(origin, xDir, yDir, scale, t, offset, theta);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
