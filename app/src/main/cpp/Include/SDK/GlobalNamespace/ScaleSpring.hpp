#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../BoingKit/Vector3Spring.hpp"

namespace GlobalNamespace {
    struct ScaleSpring : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ScaleSpring");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float GetKInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("kInterval"));
            return _field.Get();
        }
        static float GetKLargeScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("kLargeScale"));
            return _field.Get();
        }
        static float GetKMoveDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("kMoveDistance"));
            return _field.Get();
        }
        static float GetKSmallScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("kSmallScale"));
            return _field.Get();
        }
        float GetMLastTickTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_lastTickTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetMSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("m_spring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMTargetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_targetScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMLastTickTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_lastTickTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("m_spring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTargetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_targetScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
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
