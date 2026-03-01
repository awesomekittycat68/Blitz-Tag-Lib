#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab/PlayFabLogLevel.hpp"
#include "../PlayFab/WebRequestType.hpp"

namespace GlobalNamespace {
    struct PlayFabSharedSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayFabSharedSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAdvertisingIdType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AdvertisingIdType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAdvertisingIdValue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AdvertisingIdValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCompressApiData() {
            static BNM::Field<bool> _field = GetClass().GetField(O("CompressApiData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableAdvertising() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableAdvertising"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableDeviceInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableFocusTimeCollection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableFocusTimeCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableRealTimeLogging() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableRealTimeLogging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLogCapLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("LogCapLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLoggerHost() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LoggerHost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoggerPort() {
            static BNM::Field<int> _field = GetClass().GetField(O("LoggerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabLogLevel GetLogLevel() {
            static BNM::Field<::PlayFab::PlayFabLogLevel> _field = GetClass().GetField(O("LogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetProductionEnvironmentUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProductionEnvironmentUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequestKeepAlive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RequestKeepAlive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRequestTimeout() {
            static BNM::Field<int> _field = GetClass().GetField(O("RequestTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::WebRequestType GetRequestType() {
            static BNM::Field<::PlayFab::WebRequestType> _field = GetClass().GetField(O("RequestType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVerticalName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VerticalName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdvertisingIdType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AdvertisingIdType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdvertisingIdValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AdvertisingIdValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressApiData(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("CompressApiData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableAdvertising(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableAdvertising"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableDeviceInfo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableFocusTimeCollection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableFocusTimeCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableRealTimeLogging(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableRealTimeLogging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogCapLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LogCapLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoggerHost(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LoggerHost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoggerPort(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LoggerPort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogLevel(::PlayFab::PlayFabLogLevel value) {
            static BNM::Field<::PlayFab::PlayFabLogLevel> _field = GetClass().GetField(O("LogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProductionEnvironmentUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProductionEnvironmentUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestKeepAlive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RequestKeepAlive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestTimeout(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RequestTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestType(::PlayFab::WebRequestType value) {
            static BNM::Field<::PlayFab::WebRequestType> _field = GetClass().GetField(O("RequestType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VerticalName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
