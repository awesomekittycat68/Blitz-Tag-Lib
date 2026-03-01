#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "InitConfigOptions.hpp"

namespace Oculus_Platform {
    struct Core : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Core");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool GetIsPlatformInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPlatformInitialized"));
            return _field.Get();
        }
        static bool GetLogMessages() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LogMessages"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPlatformUninitializedError() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlatformUninitializedError"));
            return _field.Get();
        }
        static void SetIsPlatformInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPlatformInitialized"));
            _field.Set(value);
        }
        static void SetLogMessages(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LogMessages"));
            _field.Set(value);
        }
        static void SetPlatformUninitializedError(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlatformUninitializedError"));
            _field.Set(value);
        }
        static void ForceInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceInitialized"));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* getAppID(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("getAppID"), {"appId"});
            return _m.Call(appId);
        }
        static ::BNM::Structures::Mono::String* GetAppIDFromConfig() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAppIDFromConfig"));
            return _m.Call();
        }
        static void Initialize(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"appId"});
            _m.Call(appId);
        }
        static bool IsInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInitialized"));
            return _m.Call();
        }
    };
}
