#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Core {
    struct Logger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Core", "Logger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* LoggerTypeNameUnity = "UnityEngine.Debug";
        static bool GetHasDetected() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasDetected"));
            return _field.Get();
        }
        static ::BNM::MonoType* GetUnityLogType() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("_unityLogType"));
            return _field.Get();
        }
        static bool GetUsingUnityLog() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_usingUnityLog"));
            return _field.Get();
        }
        static void SetHasDetected(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasDetected"));
            _field.Set(value);
        }
        static void SetUnityLogType(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("_unityLogType"));
            _field.Set(value);
        }
        static void SetUsingUnityLog(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_usingUnityLog"));
            _field.Set(value);
        }
        static void ConsoleLog(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConsoleLog"), {"message"});
            _m.Call(message);
        }
        static ::BNM::MonoType* GetType_1(::BNM::Structures::Mono::String* typeName) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetType"), {"typeName"});
            return _m.Call(typeName);
        }
        static void Log(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"message"});
            _m.Call(message);
        }
        static void UnityLog(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnityLog"), {"message"});
            _m.Call(message);
        }
    };
}
