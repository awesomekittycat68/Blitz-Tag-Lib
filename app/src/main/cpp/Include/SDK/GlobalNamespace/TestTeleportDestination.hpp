#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct TestTeleportDestination : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestTeleportDestination");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetTeleportTransform() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("teleportTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* GetZones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTeleportTransform(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("teleportTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZones(::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
