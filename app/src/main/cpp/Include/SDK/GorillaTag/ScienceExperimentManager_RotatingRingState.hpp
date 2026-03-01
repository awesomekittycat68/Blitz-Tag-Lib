#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct ScienceExperimentManager_RotatingRingState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ScienceExperimentManager").GetInnerClass("RotatingRingState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetInitialAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResultingAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("resultingAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRingTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ringTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitialAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultingAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resultingAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ringTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
