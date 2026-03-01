#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadgetGrenade.hpp"
#include "SIGadgetGrenadeDisrupt_State.hpp"

namespace GlobalNamespace {
    struct SIGadgetGrenadeDisrupt : ::GlobalNamespace::SIGadgetGrenade {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetGrenadeDisrupt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDisruptTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("disruptTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExplosionRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("explosionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetGrenadeDisrupt_State GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetGrenadeDisrupt_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisruptTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("disruptTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExplosionRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("explosionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetGrenadeDisrupt_State value) {
            static BNM::Field<::GlobalNamespace::SIGadgetGrenadeDisrupt_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void HandleActivated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleHitSurface() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHitSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleThrown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleThrown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetState_1(::GlobalNamespace::SIGadgetGrenadeDisrupt_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeDisrupt_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void TriggerExplosion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerExplosion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
