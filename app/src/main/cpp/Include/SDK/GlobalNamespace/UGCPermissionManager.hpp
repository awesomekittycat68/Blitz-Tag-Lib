#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UGCPermissionManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UGCPermissionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsUGCDisabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsUGCDisabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static void* GetIsUGCEnabled() {
            static BNM::Field<void*> _field = GetClass().GetField(O("isUGCEnabled"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnUGCDisabled() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onUGCDisabled"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnUGCEnabled() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onUGCEnabled"));
            return _field.Get();
        }
        static void* GetPermissions() {
            static BNM::Field<void*> _field = GetClass().GetField(O("permissions"));
            return _field.Get();
        }
        static void SetIsUGCEnabled(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("isUGCEnabled"));
            _field.Set(value);
        }
        static void SetOnUGCDisabled(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onUGCDisabled"));
            _field.Set(value);
        }
        static void SetOnUGCEnabled(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onUGCEnabled"));
            _field.Set(value);
        }
        static void SetPermissions(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("permissions"));
            _field.Set(value);
        }
        static void CheckPermissions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckPermissions"));
            _m.Call();
        }
        static bool get_IsUGCDisabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsUGCDisabled"));
            return _m.Call();
        }
        static void SetUGCEnabled(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUGCEnabled"), {"enabled"});
            _m.Call(enabled);
        }
        static void SubscribeToUGCDisabled(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeToUGCDisabled"), {"callback"});
            _m.Call(callback);
        }
        static void SubscribeToUGCEnabled(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeToUGCEnabled"), {"callback"});
            _m.Call(callback);
        }
        static void UnsubscribeFromUGCDisabled(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsubscribeFromUGCDisabled"), {"callback"});
            _m.Call(callback);
        }
        static void UnsubscribeFromUGCEnabled(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsubscribeFromUGCEnabled"), {"callback"});
            _m.Call(callback);
        }
        static void UseKID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UseKID"));
            _m.Call();
        }
        static void UsePlayFabSafety() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UsePlayFabSafety"));
            _m.Call();
        }
    };
}
