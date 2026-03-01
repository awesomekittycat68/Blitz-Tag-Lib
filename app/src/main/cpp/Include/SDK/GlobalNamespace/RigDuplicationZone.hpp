#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RigDuplicationZone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RigDuplicationZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsApplyingDisplacement() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsApplyingDisplacement"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnEnabled(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnEnabled(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::String* GetId_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOffsetToOtherZone() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetToOtherZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* GetOnEnabled() {
            static BNM::Field<::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*> _field = GetClass().GetField(O("OnEnabled"));
            return _field.Get();
        }
        ::GlobalNamespace::RigDuplicationZone* GetOtherZone() {
            static BNM::Field<::GlobalNamespace::RigDuplicationZone*> _field = GetClass().GetField(O("otherZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerInZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetToOtherZone(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetToOtherZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnEnabled(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* value) {
            static BNM::Field<::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*> _field = GetClass().GetField(O("OnEnabled"));
            _field.Set(value);
        }
        void SetOtherZone(::GlobalNamespace::RigDuplicationZone* value) {
            static BNM::Field<::GlobalNamespace::RigDuplicationZone*> _field = GetClass().GetField(O("otherZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerInZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnEnabled_1(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnabled"), {"value"});
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* get_Id() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsApplyingDisplacement() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsApplyingDisplacement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetVisualOffsetForRigs(::BNM::Structures::Unity::Vector3 cachedOffset) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetVisualOffsetForRigs"), {"cachedOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cachedOffset);
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
        static void remove_OnEnabled_1(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnabled"), {"value"});
            _m.Call(value);
        }
        void RigDuplicationZone_OnEnabled(::GlobalNamespace::RigDuplicationZone* z) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RigDuplicationZone_OnEnabled"), {"z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(z);
        }
        void SetOtherZone_1(::GlobalNamespace::RigDuplicationZone* z) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOtherZone"), {"z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(z);
        }
    };
}
