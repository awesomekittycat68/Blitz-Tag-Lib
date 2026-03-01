#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaCameraSceneTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaCameraSceneTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaCameraTriggerIndex* GetCurrentSceneTrigger() {
            static BNM::Field<::GlobalNamespace::GorillaCameraTriggerIndex*> _field = GetClass().GetField(O("currentSceneTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaCameraTriggerIndex* GetMostRecentSceneTrigger() {
            static BNM::Field<::GlobalNamespace::GorillaCameraTriggerIndex*> _field = GetClass().GetField(O("mostRecentSceneTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSceneCamera* GetSceneCamera() {
            static BNM::Field<::GlobalNamespace::GorillaSceneCamera*> _field = GetClass().GetField(O("sceneCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentSceneTrigger(::GlobalNamespace::GorillaCameraTriggerIndex* value) {
            static BNM::Field<::GlobalNamespace::GorillaCameraTriggerIndex*> _field = GetClass().GetField(O("currentSceneTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMostRecentSceneTrigger(::GlobalNamespace::GorillaCameraTriggerIndex* value) {
            static BNM::Field<::GlobalNamespace::GorillaCameraTriggerIndex*> _field = GetClass().GetField(O("mostRecentSceneTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSceneCamera(::GlobalNamespace::GorillaSceneCamera* value) {
            static BNM::Field<::GlobalNamespace::GorillaSceneCamera*> _field = GetClass().GetField(O("sceneCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ChangeScene(::GlobalNamespace::GorillaCameraTriggerIndex* triggerLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeScene"), {"triggerLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerLeft);
        }
    };
}
