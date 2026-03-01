#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GroupJoinZoneAB.hpp"
#include "GTSubZone.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct ZoneEntityBSP : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ZoneEntityBSP");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GTSubZone GetCurrentSubZone() {
            static BNM::Method<::GlobalNamespace::GTSubZone> _method = GetClass().GetMethod(O("get_currentSubZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GTZone GetCurrentZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _method = GetClass().GetMethod(O("get_currentZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRig* GetEntityRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_entityRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GroupJoinZoneAB GetGroupZone() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _method = GetClass().GetMethod(O("get_GroupZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetEmitTelemetry() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_emitTelemetry"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetEntityRig_f() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_entityRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneDef* GetCurrentNode() {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsUpdateDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUpdateDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneDef* GetLastEnteredNode() {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("lastEnteredNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneDef* GetLastExitedNode() {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("lastExitedNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEmitTelemetry(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_emitTelemetry"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_entityRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentNode(::GlobalNamespace::ZoneDef* value) {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsUpdateDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUpdateDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastEnteredNode(::GlobalNamespace::ZoneDef* value) {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("lastEnteredNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastExitedNode(::GlobalNamespace::ZoneDef* value) {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("lastExitedNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DisableZoneChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableZoneChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableZoneChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableZoneChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GTSubZone get_currentSubZone() {
            static BNM::Method<::GlobalNamespace::GTSubZone> _m = GetClass().GetMethod(O("get_currentSubZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GTZone get_currentZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _m = GetClass().GetMethod(O("get_currentZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_entityRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_entityRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GroupJoinZoneAB get_GroupZone() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _m = GetClass().GetMethod(O("get_GroupZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
