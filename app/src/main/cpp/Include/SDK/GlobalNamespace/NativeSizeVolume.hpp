#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NativeSizeVolume_NativeSizeVolumeAction.hpp"

namespace GlobalNamespace {
    struct NativeSizeVolume : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NativeSizeVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction GetOnEnterAction() {
            static BNM::Field<::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction> _field = GetClass().GetField(O("OnEnterAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction GetOnExitAction() {
            static BNM::Field<::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction> _field = GetClass().GetField(O("OnExitAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NativeSizeChangerSettings* GetSettings() {
            static BNM::Field<::GlobalNamespace::NativeSizeChangerSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetTriggerVolume() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("triggerVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnEnterAction(::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction value) {
            static BNM::Field<::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction> _field = GetClass().GetField(O("OnEnterAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnExitAction(::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction value) {
            static BNM::Field<::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction> _field = GetClass().GetField(O("OnExitAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::GlobalNamespace::NativeSizeChangerSettings* value) {
            static BNM::Field<::GlobalNamespace::NativeSizeChangerSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerVolume(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("triggerVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
