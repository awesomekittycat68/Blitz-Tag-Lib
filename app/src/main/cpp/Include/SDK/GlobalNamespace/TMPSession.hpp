#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EKIDFeatures.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct TMPSession : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TMPSession");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsValidSession() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValidSession"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("Age"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAgeStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AgeStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDateOfBirth() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DateOfBirth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetEtag() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Etag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDefault() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetJurisdiction() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Jurisdiction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetKidStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("KidStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetKUID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("KUID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetManagedBy() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ManagedBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOptedInPermissions() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OptedInPermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::IL2CPP::Il2CppObject*>* GetPermissions() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("Permissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSessionId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SessionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SessionStatus GetSessionStatus() {
            static BNM::Field<::GlobalNamespace::SessionStatus> _field = GetClass().GetField(O("SessionStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOptedInPermissions(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OptedInPermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissions(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::EKIDFeatures, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("Permissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsValidSession() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValidSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetAgeFromDateOfBirth() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAgeFromDateOfBirth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetAllPermissions() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetAllPermissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetOptedInPermissions_1() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetOptedInPermissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasOptedInToPermission(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasOptedInToPermission"), {"feature"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(feature);
        }
        bool HasPermissionForFeature(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasPermissionForFeature"), {"feature"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(feature);
        }
        void InitialiseDefaultPermissionSet(::GlobalNamespace::KIDDefaultSession* defaultSession) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseDefaultPermissionSet"), {"defaultSession"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(defaultSession);
        }
        void OptInToPermission(::GlobalNamespace::EKIDFeatures feature, bool optIn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptInToPermission"), {"feature", "optIn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature, optIn);
        }
        void SetOptInPermissions(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* optedInPermissions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOptInPermissions"), {"optedInPermissions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(optedInPermissions);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool TryGetPermission(::GlobalNamespace::EKIDFeatures feature, ::BNM::IL2CPP::Il2CppObject*& permission) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetPermission"), {"feature", "permission"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(feature, &permission);
        }
        void UpdatePermission(::GlobalNamespace::EKIDFeatures feature, ::BNM::IL2CPP::Il2CppObject* newData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePermission"), {"feature", "newData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(feature, newData);
        }
    };
}
