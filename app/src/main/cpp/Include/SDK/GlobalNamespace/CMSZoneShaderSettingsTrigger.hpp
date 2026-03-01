#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CMSZoneShaderSettingsTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CMSZoneShaderSettingsTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActivateCustomMapDefaults() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activateCustomMapDefaults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetActivateOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activateOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetShaderSettingsObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shaderSettingsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivateCustomMapDefaults(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activateCustomMapDefaults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivateOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activateOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderSettingsObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shaderSettingsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateShaderSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateShaderSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopySettings(::BNM::IL2CPP::Il2CppObject* triggerSettings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySettings"), {"triggerSettings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerSettings);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
