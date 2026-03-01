#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTriggerBox.hpp"

namespace GlobalNamespace {
    struct BuilderRoomBoundary : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderRoomBoundary");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SizeChangerTrigger* GetDisableOnExitTrigger() {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("disableOnExitTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SizeChangerTrigger*>* GetEnableOnEnterTrigger() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SizeChangerTrigger*>*> _field = GetClass().GetField(O("enableOnEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRigRef() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rigRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableOnExitTrigger(::GlobalNamespace::SizeChangerTrigger* value) {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("disableOnExitTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableOnEnterTrigger(::BNM::Structures::Mono::List<::GlobalNamespace::SizeChangerTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SizeChangerTrigger*>*> _field = GetClass().GetField(O("enableOnEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigRef(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rigRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnteredBoundary(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnteredBoundary"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnExitedBoundary(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnExitedBoundary"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
