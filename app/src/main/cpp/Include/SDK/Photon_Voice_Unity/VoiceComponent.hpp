#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"

namespace Photon_Voice_Unity {
    struct VoiceComponent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "VoiceComponent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCurrentPlatform() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CurrentPlatform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIgnoreGlobalLogLevel() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IgnoreGlobalLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIgnoreGlobalLogLevel(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IgnoreGlobalLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::VoiceLogger* GetLogger() {
            static BNM::Method<::Photon_Voice_Unity::VoiceLogger*> _method = GetClass().GetMethod(O("get_Logger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogger(::Photon_Voice_Unity::VoiceLogger* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Logger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::DebugLevel GetLogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _method = GetClass().GetMethod(O("get_LogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::String* GetCurrentPlatform_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentPlatform"));
            return _field.Get();
        }
        bool GetIgnoreGlobalLogLevel_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreGlobalLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceLogger* GetLogger_f() {
            static BNM::Field<::Photon_Voice_Unity::VoiceLogger*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetLogLevel_f() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("logLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetCurrentPlatform(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentPlatform"));
            _field.Set(value);
        }
        void SetIgnoreGlobalLogLevel_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreGlobalLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogger_fs(::Photon_Voice_Unity::VoiceLogger* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceLogger*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogLevel_fs(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("logLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_CurrentPlatform() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CurrentPlatform"));
            return _m.Call();
        }
        bool get_IgnoreGlobalLogLevel() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IgnoreGlobalLogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::VoiceLogger* get_Logger() {
            static BNM::Method<::Photon_Voice_Unity::VoiceLogger*> _m = GetClass().GetMethod(O("get_Logger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel get_LogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _m = GetClass().GetMethod(O("get_LogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_IgnoreGlobalLogLevel(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IgnoreGlobalLogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Logger(::Photon_Voice_Unity::VoiceLogger* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Logger"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
