#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/ConnectionProtocol.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"
#include "AuthModeOption.hpp"

namespace Photon_Realtime {
    struct AppSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "AppSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsBestRegion() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsBestRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDefaultNameServer() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDefaultNameServer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDefaultPort() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDefaultPort"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMasterServerAddress() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMasterServerAddress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetAppIdChat() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdChat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAppIdFusion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdFusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAppIdRealtime() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdRealtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAppIdVoice() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAppVersion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::AuthModeOption GetAuthMode() {
            static BNM::Field<::Photon_Realtime::AuthModeOption> _field = GetClass().GetField(O("AuthMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBestRegionSummaryFromStorage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BestRegionSummaryFromStorage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableLobbyStatistics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableLobbyStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableProtocolFallback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableProtocolFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFixedRegion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FixedRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetNetworkLogging() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("NetworkLogging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPort() {
            static BNM::Field<int> _field = GetClass().GetField(O("Port"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::ConnectionProtocol GetProtocol() {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionProtocol> _field = GetClass().GetField(O("Protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetProxyServer() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProxyServer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetServer() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Server"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseNameServer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseNameServer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAppIdChat(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdChat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppIdFusion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdFusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppIdRealtime(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdRealtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppIdVoice(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppIdVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AppVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAuthMode(::Photon_Realtime::AuthModeOption value) {
            static BNM::Field<::Photon_Realtime::AuthModeOption> _field = GetClass().GetField(O("AuthMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestRegionSummaryFromStorage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BestRegionSummaryFromStorage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableLobbyStatistics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableLobbyStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableProtocolFallback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableProtocolFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFixedRegion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FixedRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkLogging(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("NetworkLogging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPort(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Port"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProtocol(::ExitGames_Client_Photon::ConnectionProtocol value) {
            static BNM::Field<::ExitGames_Client_Photon::ConnectionProtocol> _field = GetClass().GetField(O("Protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProxyServer(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProxyServer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServer(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Server"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseNameServer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseNameServer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Photon_Realtime::AppSettings* CopyTo(::Photon_Realtime::AppSettings* d) {
            static BNM::Method<::Photon_Realtime::AppSettings*> _m = GetClass().GetMethod(O("CopyTo"), {"d"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(d);
        }
        bool get_IsBestRegion() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsBestRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDefaultNameServer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDefaultNameServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDefaultPort() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDefaultPort"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMasterServerAddress() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMasterServerAddress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* HideAppId(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("HideAppId"), {"appId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(appId);
        }
        static bool IsAppId(::BNM::Structures::Mono::String* val) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAppId"), {"val"});
            return _m.Call(val);
        }
        ::BNM::Structures::Mono::String* ToStringFull() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
