#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActorSettings.hpp"

namespace GlobalNamespace {
    struct CrittersCageSettings : ::GlobalNamespace::CrittersActorSettings {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersCageSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetCagePoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cagePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGrabPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCagePoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cagePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void UpdateActorSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActorSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
