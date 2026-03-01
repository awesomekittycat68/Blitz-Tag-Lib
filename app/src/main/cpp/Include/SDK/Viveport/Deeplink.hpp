#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct Deeplink : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "Deeplink");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MaxIdLength = 256;
        static ::Viveport_Internal::StatusCallback2* GetGoToAppIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToAppIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback2* GetGoToAppOrGoToStoreIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToAppOrGoToStoreIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback2* GetGoToAppWithBranchNameIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToAppWithBranchNameIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback2* GetGoToStoreIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToStoreIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetIsReadyIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            return _field.Get();
        }
        static void SetGoToAppIl2cppCallback(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToAppIl2cppCallback"));
            _field.Set(value);
        }
        static void SetGoToAppOrGoToStoreIl2cppCallback(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToAppOrGoToStoreIl2cppCallback"));
            _field.Set(value);
        }
        static void SetGoToAppWithBranchNameIl2cppCallback(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToAppWithBranchNameIl2cppCallback"));
            _field.Set(value);
        }
        static void SetGoToStoreIl2cppCallback(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("goToStoreIl2cppCallback"));
            _field.Set(value);
        }
        static void SetIsReadyIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* GetAppLaunchData() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAppLaunchData"));
            return _m.Call();
        }
        static void GoToApp(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* launchData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToApp"), {"checker", "appId", "launchData"});
            _m.Call(checker, appId, launchData);
        }
        static void GoToApp(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* launchData, ::BNM::Structures::Mono::String* branchName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToApp"), {"checker", "appId", "launchData", "branchName"});
            _m.Call(checker, appId, launchData, branchName);
        }
        static void GoToAppOrGoToStore(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* launchData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToAppOrGoToStore"), {"checker", "appId", "launchData"});
            _m.Call(checker, appId, launchData);
        }
        static void GoToStore(::Viveport::Deeplink_DeeplinkChecker* checker, ::BNM::Structures::Mono::String* appId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToStore"), {"checker", "appId"});
            _m.Call(checker, appId);
        }
        static void IsReady(::Viveport::StatusCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            _m.Call(callback);
        }
        static void IsReadyIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReadyIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
    };
}
