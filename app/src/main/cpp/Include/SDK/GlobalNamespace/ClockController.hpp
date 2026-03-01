#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ClockController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ClockController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMaxAngleDeflection() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxAngleDeflection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPendulum() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Pendulum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeedOfPendulum() {
            static BNM::Field<float> _field = GetClass().GetField(O("SpeedOfPendulum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxAngleDeflection(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxAngleDeflection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendulum(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Pendulum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedOfPendulum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("SpeedOfPendulum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
