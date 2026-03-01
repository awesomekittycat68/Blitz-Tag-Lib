#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor_CrittersActorType.hpp"

namespace GlobalNamespace {
    struct CrittersActorDeposit : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersActorDeposit");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CrittersActor_CrittersActorType GetActorType() {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("actorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowMultiAttach() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowMultiAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetAttachPoint() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("attachPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetCurrentAttach() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("currentAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableGrabOnAttach() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableGrabOnAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSnapOnAttach() {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapOnAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActorType(::GlobalNamespace::CrittersActor_CrittersActorType value) {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("actorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowMultiAttach(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowMultiAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachPoint(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("attachPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAttach(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("currentAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableGrabOnAttach(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableGrabOnAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapOnAttach(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapOnAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanDeposit(::GlobalNamespace::CrittersActor* depositActor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDeposit"), {"depositActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(depositActor);
        }
        void HandleDeposit(::GlobalNamespace::CrittersActor* depositedActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDeposit"), {"depositedActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(depositedActor);
        }
        void HandleDetach(::GlobalNamespace::CrittersActor* detachingActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDetach"), {"detachingActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(detachingActor);
        }
        bool IsAttachAvailable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAttachAvailable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
