#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"

namespace GlobalNamespace {
    struct CrittersGrabber : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersGrabber");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetGrabbedActors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("grabbedActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGrabPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbedActors(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("grabbedActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ProcessLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ProcessRemote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRemote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
