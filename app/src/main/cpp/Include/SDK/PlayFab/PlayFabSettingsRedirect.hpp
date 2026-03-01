#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayFabApiSettings.hpp"

namespace PlayFab {
    struct PlayFabSettingsRedirect : ::PlayFab::PlayFabApiSettings {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabSettingsRedirect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAdvertisingIdType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AdvertisingIdType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAdvertisingIdType(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AdvertisingIdType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetAdvertisingIdValue() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AdvertisingIdValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAdvertisingIdValue(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AdvertisingIdValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDisableAdvertising() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DisableAdvertising"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisableAdvertising(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DisableAdvertising"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDisableDeviceInfo() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DisableDeviceInfo"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisableDeviceInfo(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DisableDeviceInfo"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDisableFocusTimeCollection() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DisableFocusTimeCollection"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisableFocusTimeCollection(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DisableFocusTimeCollection"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetProductionEnvironmentUrl() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ProductionEnvironmentUrl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetProductionEnvironmentUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ProductionEnvironmentUrl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTitleId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_TitleId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TitleId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetVerticalName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_VerticalName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVerticalName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VerticalName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Func<::GlobalNamespace::PlayFabSharedSettings*>* GetGetSO() {
            static BNM::Field<::BNM::Structures::Mono::Func<::GlobalNamespace::PlayFabSharedSettings*>*> _field = GetClass().GetField(O("GetSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* get_AdvertisingIdType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AdvertisingIdType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_AdvertisingIdValue() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AdvertisingIdValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DisableAdvertising() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisableAdvertising"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DisableDeviceInfo() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisableDeviceInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DisableFocusTimeCollection() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisableFocusTimeCollection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ProductionEnvironmentUrl() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ProductionEnvironmentUrl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_TitleId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_TitleId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_VerticalName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_VerticalName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_AdvertisingIdType(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AdvertisingIdType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AdvertisingIdValue(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AdvertisingIdValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DisableAdvertising(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisableAdvertising"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DisableDeviceInfo(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisableDeviceInfo"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DisableFocusTimeCollection(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisableFocusTimeCollection"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ProductionEnvironmentUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ProductionEnvironmentUrl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TitleId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VerticalName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VerticalName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
