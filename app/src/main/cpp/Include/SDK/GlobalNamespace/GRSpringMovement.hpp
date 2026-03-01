#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRSpringMovement : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSpringMovement");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDampening() {
            static BNM::Field<float> _field = GetClass().GetField(O("dampening"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHardStopAtTarget() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hardStopAtTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPos() {
            static BNM::Field<float> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTarget() {
            static BNM::Field<float> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTension() {
            static BNM::Field<float> _field = GetClass().GetField(O("tension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasAlreadyAtTargetLastUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasAlreadyAtTargetLastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDampening(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dampening"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHardStopAtTarget(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hardStopAtTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPos(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTension(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasAlreadyAtTargetLastUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasAlreadyAtTargetLastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool HitTargetLastUpdate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HitTargetLastUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAtTarget() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAtTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetHardStopAtTarget_1(bool _hardStopAtTarget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHardStopAtTarget"), {"_hardStopAtTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_hardStopAtTarget);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
