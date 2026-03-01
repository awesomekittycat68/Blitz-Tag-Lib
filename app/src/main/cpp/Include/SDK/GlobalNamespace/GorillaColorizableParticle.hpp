#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaColorizableBase.hpp"

namespace GlobalNamespace {
    struct GorillaColorizableParticle : ::GlobalNamespace::GorillaColorizableBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaColorizableParticle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetGradientColorPower() {
            static BNM::Field<float> _field = GetClass().GetField(O("gradientColorPower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseLinearColor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLinearColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGradientColorPower(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gradientColorPower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseLinearColor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLinearColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
    };
}
