#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTriggerBox.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct GorillaTriggerBoxShaderSettings : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTriggerBoxShaderSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_Rendering::ZoneShaderSettings* GetSameSceneSettingsRef() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("sameSceneSettingsRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings* GetSettings() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetSettingsRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("settingsRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSameSceneSettingsRef(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("sameSceneSettingsRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettingsRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("settingsRef"));
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
