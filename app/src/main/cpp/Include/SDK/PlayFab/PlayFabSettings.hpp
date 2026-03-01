#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayFabLogLevel.hpp"
#include "WebRequestType.hpp"

namespace PlayFab {
    struct PlayFabSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SdkVersion = "2.87.200602";
        static constexpr const char* BuildIdentifier = "jbuild_unitysdk__sdk-unity-3-slave_0";
        static constexpr const char* VersionString = "UnitySDK-2.87.200602";
        static constexpr const char* AD_TYPE_IDFA = "Idfa";
        static constexpr const char* AD_TYPE_ANDROID_ID = "Adid";
        bool GetCompressApiData() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CompressApiData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCompressApiData(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CompressApiData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetDeviceUniqueIdentifier() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_DeviceUniqueIdentifier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        bool GetEnableRealTimeLogging() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EnableRealTimeLogging"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEnableRealTimeLogging(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EnableRealTimeLogging"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetLocalApiServer() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_LocalApiServer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLocalApiServer(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LocalApiServer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLogCapLimit() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LogCapLimit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogCapLimit(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LogCapLimit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetLoggerHost() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_LoggerHost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLoggerHost(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LoggerHost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLoggerPort() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LoggerPort"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLoggerPort(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LoggerPort"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::PlayFab::PlayFabLogLevel GetLogLevel() {
            static BNM::Method<::PlayFab::PlayFabLogLevel> _method = GetClass().GetMethod(O("get_LogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogLevel(::PlayFab::PlayFabLogLevel value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::PlayFabSharedSettings* GetPlayFabSharedPrivate() {
            static BNM::Method<::GlobalNamespace::PlayFabSharedSettings*> _method = GetClass().GetMethod(O("get_PlayFabSharedPrivate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRequestKeepAlive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RequestKeepAlive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequestKeepAlive(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RequestKeepAlive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRequestTimeout() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RequestTimeout"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequestTimeout(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RequestTimeout"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::PlayFab::WebRequestType GetRequestType() {
            static BNM::Method<::PlayFab::WebRequestType> _method = GetClass().GetMethod(O("get_RequestType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequestType(::PlayFab::WebRequestType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RequestType"));
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
        static ::BNM::Structures::Mono::String* GetAmpersandStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_ampersandStr"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetEqualsStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_equalsStr"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetHttpsStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_httpsStr"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetHttpStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_httpStr"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetLocalApiServer_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_localApiServer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPeriodtStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_periodtStr"));
            return _field.Get();
        }
        static ::GlobalNamespace::PlayFabSharedSettings* GetPlayFabShared() {
            static BNM::Field<::GlobalNamespace::PlayFabSharedSettings*> _field = GetClass().GetField(O("_playFabShared"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetQuestStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_questStr"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetDefaultPlayFabApiUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DefaultPlayFabApiUrl"));
            return _field.Get();
        }
        static ::PlayFab::PlayFabAuthenticationContext* GetStaticPlayer() {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("staticPlayer"));
            return _field.Get();
        }
        static ::PlayFab::PlayFabApiSettings* GetStaticSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("staticSettings"));
            return _field.Get();
        }
        static void SetAmpersandStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_ampersandStr"));
            _field.Set(value);
        }
        static void SetEqualsStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_equalsStr"));
            _field.Set(value);
        }
        static void SetHttpsStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_httpsStr"));
            _field.Set(value);
        }
        static void SetHttpStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_httpStr"));
            _field.Set(value);
        }
        static void SetLocalApiServer_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_localApiServer"));
            _field.Set(value);
        }
        static void SetPeriodtStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_periodtStr"));
            _field.Set(value);
        }
        static void SetPlayFabShared(::GlobalNamespace::PlayFabSharedSettings* value) {
            static BNM::Field<::GlobalNamespace::PlayFabSharedSettings*> _field = GetClass().GetField(O("_playFabShared"));
            _field.Set(value);
        }
        static void SetQuestStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_questStr"));
            _field.Set(value);
        }
        static void SetStaticPlayer(::PlayFab::PlayFabAuthenticationContext* value) {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("staticPlayer"));
            _field.Set(value);
        }
        static bool get_CompressApiData() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CompressApiData"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_DeviceUniqueIdentifier() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_DeviceUniqueIdentifier"));
            return _m.Call();
        }
        static bool get_DisableAdvertising() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisableAdvertising"));
            return _m.Call();
        }
        static bool get_DisableDeviceInfo() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisableDeviceInfo"));
            return _m.Call();
        }
        static bool get_DisableFocusTimeCollection() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DisableFocusTimeCollection"));
            return _m.Call();
        }
        static bool get_EnableRealTimeLogging() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EnableRealTimeLogging"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_LocalApiServer() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_LocalApiServer"));
            return _m.Call();
        }
        static int get_LogCapLimit() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LogCapLimit"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_LoggerHost() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_LoggerHost"));
            return _m.Call();
        }
        static int get_LoggerPort() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LoggerPort"));
            return _m.Call();
        }
        static ::PlayFab::PlayFabLogLevel get_LogLevel() {
            static BNM::Method<::PlayFab::PlayFabLogLevel> _m = GetClass().GetMethod(O("get_LogLevel"));
            return _m.Call();
        }
        static ::GlobalNamespace::PlayFabSharedSettings* get_PlayFabSharedPrivate() {
            static BNM::Method<::GlobalNamespace::PlayFabSharedSettings*> _m = GetClass().GetMethod(O("get_PlayFabSharedPrivate"));
            return _m.Call();
        }
        static bool get_RequestKeepAlive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RequestKeepAlive"));
            return _m.Call();
        }
        static int get_RequestTimeout() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RequestTimeout"));
            return _m.Call();
        }
        static ::PlayFab::WebRequestType get_RequestType() {
            static BNM::Method<::PlayFab::WebRequestType> _m = GetClass().GetMethod(O("get_RequestType"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_TitleId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_TitleId"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_VerticalName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_VerticalName"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetFullUrl(::BNM::Structures::Mono::String* apiCall, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* getParams, ::PlayFab::PlayFabApiSettings* apiSettings) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFullUrl"), {"apiCall", "getParams", "apiSettings"});
            return _m.Call(apiCall, getParams, apiSettings);
        }
        static ::GlobalNamespace::PlayFabSharedSettings* GetSharedSettingsObjectPrivate() {
            static BNM::Method<::GlobalNamespace::PlayFabSharedSettings*> _m = GetClass().GetMethod(O("GetSharedSettingsObjectPrivate"));
            return _m.Call();
        }
        static void set_CompressApiData(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CompressApiData"), {"value"});
            _m.Call(value);
        }
        static void set_DisableAdvertising(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisableAdvertising"), {"value"});
            _m.Call(value);
        }
        static void set_DisableDeviceInfo(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisableDeviceInfo"), {"value"});
            _m.Call(value);
        }
        static void set_DisableFocusTimeCollection(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DisableFocusTimeCollection"), {"value"});
            _m.Call(value);
        }
        static void set_EnableRealTimeLogging(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EnableRealTimeLogging"), {"value"});
            _m.Call(value);
        }
        static void set_LocalApiServer(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LocalApiServer"), {"value"});
            _m.Call(value);
        }
        static void set_LogCapLimit(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LogCapLimit"), {"value"});
            _m.Call(value);
        }
        static void set_LoggerHost(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LoggerHost"), {"value"});
            _m.Call(value);
        }
        static void set_LoggerPort(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LoggerPort"), {"value"});
            _m.Call(value);
        }
        static void set_LogLevel(::PlayFab::PlayFabLogLevel value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LogLevel"), {"value"});
            _m.Call(value);
        }
        static void set_RequestKeepAlive(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RequestKeepAlive"), {"value"});
            _m.Call(value);
        }
        static void set_RequestTimeout(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RequestTimeout"), {"value"});
            _m.Call(value);
        }
        static void set_RequestType(::PlayFab::WebRequestType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RequestType"), {"value"});
            _m.Call(value);
        }
        static void set_TitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TitleId"), {"value"});
            _m.Call(value);
        }
        static void set_VerticalName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VerticalName"), {"value"});
            _m.Call(value);
        }
    };
}
