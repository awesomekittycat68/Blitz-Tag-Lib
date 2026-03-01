#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct ZoneBasedObject : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ZoneBasedObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* GetZones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetZones(::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool IsLocalPlayerInZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalPlayerInZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::ZoneBasedObject* SelectRandomEligible(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* objects, ::BNM::Structures::Mono::String* overrideChoice) {
            static BNM::Method<::GlobalNamespace::ZoneBasedObject*> _m = GetClass().GetMethod(O("SelectRandomEligible"), {"objects", "overrideChoice"});
            return _m.Call(objects, overrideChoice);
        }
    };
}
