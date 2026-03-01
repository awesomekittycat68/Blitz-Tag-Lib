#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "JoinTriggerVisualState.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct JoinTriggerUI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "JoinTriggerUI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDidStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetJoinTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJoinTriggerIsRefResolved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinTrigger_isRefResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetJoinTriggerRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("joinTriggerRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMilestoneRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("milestoneRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetScreenBGRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("screenBGRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetScreenText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate* Get$template() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate*> _field = GetClass().GetField(O("template"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDidStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinTriggerIsRefResolved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinTrigger_isRefResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinTriggerRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("joinTriggerRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("milestoneRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("screenBGRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set$template(::GlobalNamespace::JoinTriggerUITemplate* value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate*> _field = GetClass().GetField(O("template"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool _IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetState(::GlobalNamespace::JoinTriggerVisualState state, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* oldZone, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* newZone, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* oldGameMode, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* newGameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"state", "oldZone", "newZone", "oldGameMode", "newGameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, oldZone, newZone, oldGameMode, newGameMode);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
