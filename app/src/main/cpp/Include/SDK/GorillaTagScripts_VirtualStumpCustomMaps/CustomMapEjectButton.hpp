#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaPressableButton.hpp"
#include "CustomMapEjectButton_EjectType.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct CustomMapEjectButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapEjectButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapEjectButton_EjectType GetEjectType() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapEjectButton_EjectType> _field = GetClass().GetField(O("ejectType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProcessing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("processing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEjectType(::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapEjectButton_EjectType value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapEjectButton_EjectType> _field = GetClass().GetField(O("ejectType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("processing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ButtonPressed_Local() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ButtonPressed_Local"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CopySettings(::BNM::IL2CPP::Il2CppObject* customMapEjectButtonSettings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySettings"), {"customMapEjectButtonSettings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(customMapEjectButtonSettings);
        }
        void FinishTeleport(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinishTeleport"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void HandleTeleport() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTeleport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
