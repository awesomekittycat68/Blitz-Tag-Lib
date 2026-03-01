#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"

namespace Photon_Voice_Unity {
    struct VoiceLogger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "VoiceLogger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsDebugEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDebugEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsErrorEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsErrorEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsInfoEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInfoEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsWarningEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsWarningEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::BNM::Structures::Mono::String* GetTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Tag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTag(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Tag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* GetContext() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool get_IsDebugEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDebugEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsErrorEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsErrorEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsInfoEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInfoEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsWarningEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsWarningEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel get_LogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _m = GetClass().GetMethod(O("get_LogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Tag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Tag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetFormatString(::BNM::Structures::Mono::String* fmt) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFormatString"), {"fmt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fmt);
        }
        ::BNM::Structures::Mono::String* GetTimestamp() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LogDebug(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogDebug"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogError(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogError"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogInfo(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogInfo"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogWarning(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogWarning"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void set_LogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Tag(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Tag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
