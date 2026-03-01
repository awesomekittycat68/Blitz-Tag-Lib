#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritter.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterShadeHidden : ::GlobalNamespace::CosmeticCritter {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterShadeHidden");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetInitialAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOrbitCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("orbitCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOrbitDegreesPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitDegreesPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOrbitDirection() {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOrbitRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVerticalBobFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalBobFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVerticalBobMagnitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalBobMagnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitialAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrbitCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("orbitCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrbitDegreesPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitDegreesPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrbitDirection(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrbitRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("orbitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalBobFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalBobFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalBobMagnitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalBobMagnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterAndRadius(::BNM::Structures::Unity::Vector3 center, float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCenterAndRadius"), {"center", "radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(center, radius);
        }
        void SetRandomVariables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRandomVariables"));
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
