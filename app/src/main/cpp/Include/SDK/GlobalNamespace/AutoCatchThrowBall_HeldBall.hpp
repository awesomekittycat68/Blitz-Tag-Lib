#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AutoCatchThrowBall_HeldBall : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AutoCatchThrowBall").GetInnerClass("HeldBall");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCatchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("held"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetTransferrable() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCatchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("held"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
