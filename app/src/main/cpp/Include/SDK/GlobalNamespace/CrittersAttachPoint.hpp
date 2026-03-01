#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"
#include "CrittersAttachPoint_AnchoredLocationTypes.hpp"

namespace GlobalNamespace {
    struct CrittersAttachPoint : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersAttachPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes GetAnchorLocation() {
            static BNM::Field<::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes> _field = GetClass().GetField(O("anchorLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFixedOrientation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fixedOrientation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes value) {
            static BNM::Field<::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes> _field = GetClass().GetField(O("anchorLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFixedOrientation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fixedOrientation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ProcessRemote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRemote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
