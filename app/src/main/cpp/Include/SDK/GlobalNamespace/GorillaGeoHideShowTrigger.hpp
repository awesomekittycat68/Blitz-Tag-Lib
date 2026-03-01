#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTriggerBox.hpp"
#include "../GorillaTag_GuidedRefs/GuidedRefReceiverArrayInfo.hpp"

namespace GlobalNamespace {
    struct GorillaGeoHideShowTrigger : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaGeoHideShowTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetGuidedRefsAreFullyResolved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_guidedRefsAreFullyResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMakeSureThisIsDisabled() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo GetMakeSureThisIsDisabledGRefs() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo> _field = GetClass().GetField(O("makeSureThisIsDisabled_gRefs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMakeSureThisIsEnabled() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo GetMakeSureThisIsEnabledGRefs() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo> _field = GetClass().GetField(O("makeSureThisIsEnabled_gRefs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGuidedRefsAreFullyResolved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_guidedRefsAreFullyResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMakeSureThisIsDisabled(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMakeSureThisIsDisabledGRefs(::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo> _field = GetClass().GetField(O("makeSureThisIsDisabled_gRefs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMakeSureThisIsEnabled(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMakeSureThisIsEnabledGRefs(::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo> _field = GetClass().GetField(O("makeSureThisIsEnabled_gRefs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
