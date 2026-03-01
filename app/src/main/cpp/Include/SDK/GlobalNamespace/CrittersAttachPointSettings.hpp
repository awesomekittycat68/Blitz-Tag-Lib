#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActorSettings.hpp"
#include "CrittersAttachPoint_AnchoredLocationTypes.hpp"

namespace GlobalNamespace {
    struct CrittersAttachPointSettings : ::GlobalNamespace::CrittersActorSettings {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersAttachPointSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes GetAnchoredLocation() {
            static BNM::Field<::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes> _field = GetClass().GetField(O("anchoredLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchoredLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes value) {
            static BNM::Field<::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes> _field = GetClass().GetField(O("anchoredLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
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
