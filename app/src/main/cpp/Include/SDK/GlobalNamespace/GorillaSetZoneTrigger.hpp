#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTriggerBox.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct GorillaSetZoneTrigger : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSetZoneTrigger");
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
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
