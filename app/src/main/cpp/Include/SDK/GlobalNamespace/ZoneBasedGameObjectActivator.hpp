#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct ZoneBasedGameObjectActivator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ZoneBasedGameObjectActivator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GameObject*>* GetGameObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* GetZones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZones(::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ZoneManagement_OnZoneChange(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>* zoneData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ZoneManagement_OnZoneChange"), {"zoneData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneData);
        }
    };
}
