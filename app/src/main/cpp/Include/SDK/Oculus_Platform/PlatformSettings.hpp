#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct PlatformSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "PlatformSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::PlatformSettings* get_Instance() {
            static BNM::Method<::Oculus_Platform::PlatformSettings*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::Oculus_Platform::PlatformSettings* GetInstance() {
            static BNM::Field<::Oculus_Platform::PlatformSettings*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::BNM::Structures::Mono::String* GetAppID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AppID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAppID(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AppID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Oculus_Platform::PlatformSettings* GetInstance_pg() {
            static BNM::Method<::Oculus_Platform::PlatformSettings*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::Oculus_Platform::PlatformSettings* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetMobileAppID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MobileAppID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMobileAppID(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MobileAppID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseMobileAppIDInEditor() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseMobileAppIDInEditor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseMobileAppIDInEditor(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseMobileAppIDInEditor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseStandalonePlatform() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseStandalonePlatform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseStandalonePlatform(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseStandalonePlatform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::Oculus_Platform::PlatformSettings* GetInstance_f() {
            static BNM::Field<::Oculus_Platform::PlatformSettings*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOvrAppID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ovrAppID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOvrMobileAppID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ovrMobileAppID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOvrUseMobileAppIDInEditor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ovrUseMobileAppIDInEditor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOvrUseStandalonePlatform() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ovrUseStandalonePlatform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance_fs(::Oculus_Platform::PlatformSettings* value) {
            static BNM::Field<::Oculus_Platform::PlatformSettings*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetOvrAppID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ovrAppID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOvrMobileAppID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ovrMobileAppID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOvrUseMobileAppIDInEditor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ovrUseMobileAppIDInEditor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOvrUseStandalonePlatform(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ovrUseStandalonePlatform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* get_AppID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AppID"));
            return _m.Call();
        }
        static ::Oculus_Platform::PlatformSettings* get_Instance_1() {
            static BNM::Method<::Oculus_Platform::PlatformSettings*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MobileAppID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MobileAppID"));
            return _m.Call();
        }
        static bool get_UseMobileAppIDInEditor() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseMobileAppIDInEditor"));
            return _m.Call();
        }
        static bool get_UseStandalonePlatform() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseStandalonePlatform"));
            return _m.Call();
        }
        static void set_AppID(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AppID"), {"value"});
            _m.Call(value);
        }
        static void set_Instance(::Oculus_Platform::PlatformSettings* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        static void set_MobileAppID(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MobileAppID"), {"value"});
            _m.Call(value);
        }
        static void set_UseMobileAppIDInEditor(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseMobileAppIDInEditor"), {"value"});
            _m.Call(value);
        }
        static void set_UseStandalonePlatform(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseStandalonePlatform"), {"value"});
            _m.Call(value);
        }
    };
}
