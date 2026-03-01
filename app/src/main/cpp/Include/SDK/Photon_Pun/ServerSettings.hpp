#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PunLogLevel.hpp"

namespace Photon_Pun {
    struct ServerSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "ServerSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBestRegionSummaryInPreferences() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BestRegionSummaryInPreferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::AppSettings* GetAppSettings() {
            static BNM::Field<::Photon_Realtime::AppSettings*> _field = GetClass().GetField(O("AppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDevRegion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DevRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableSupportLogger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableSupportLogger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PunLogLevel GetPunLogging() {
            static BNM::Field<::Photon_Pun::PunLogLevel> _field = GetClass().GetField(O("PunLogging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetRpcList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("RpcList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunInBackground() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RunInBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartInOfflineMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("StartInOfflineMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAppSettings(::Photon_Realtime::AppSettings* value) {
            static BNM::Field<::Photon_Realtime::AppSettings*> _field = GetClass().GetField(O("AppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDevRegion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DevRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableSupportLogger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableSupportLogger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPunLogging(::Photon_Pun::PunLogLevel value) {
            static BNM::Field<::Photon_Pun::PunLogLevel> _field = GetClass().GetField(O("PunLogging"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("RpcList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunInBackground(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RunInBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartInOfflineMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("StartInOfflineMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* get_BestRegionSummaryInPreferences() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BestRegionSummaryInPreferences"));
            return _m.Call();
        }
        static bool IsAppId(::BNM::Structures::Mono::String* val) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAppId"), {"val"});
            return _m.Call(val);
        }
        static void ResetBestRegionCodeInPreferences() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetBestRegionCodeInPreferences"));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UseCloud(::BNM::Structures::Mono::String* cloudAppid, ::BNM::Structures::Mono::String* code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UseCloud"), {"cloudAppid", "code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cloudAppid, code);
        }
    };
}
