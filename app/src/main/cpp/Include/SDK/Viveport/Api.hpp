#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct Api : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "Api");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetAppId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_appId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetAppKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_appKey"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetInitIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("initIl2cppCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Viveport_Internal::GetLicenseCallback*>* GetInternalGetLicenseCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport_Internal::GetLicenseCallback*>*> _field = GetClass().GetField(O("InternalGetLicenseCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Viveport::Api_LicenseChecker*>* GetInternalLicenseCheckers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport::Api_LicenseChecker*>*> _field = GetClass().GetField(O("InternalLicenseCheckers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Viveport_Internal::QueryRuntimeModeCallback*>* GetInternalQueryRunTimeCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport_Internal::QueryRuntimeModeCallback*>*> _field = GetClass().GetField(O("InternalQueryRunTimeCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Viveport_Internal::StatusCallback2*>* GetInternalStatusCallback2s() {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport_Internal::StatusCallback2*>*> _field = GetClass().GetField(O("InternalStatusCallback2s"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Viveport_Internal::StatusCallback*>* GetInternalStatusCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport_Internal::StatusCallback*>*> _field = GetClass().GetField(O("InternalStatusCallbacks"));
            return _field.Get();
        }
        static ::Viveport_Internal::QueryRuntimeModeCallback* GetQueryRuntimeModeIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::QueryRuntimeModeCallback*> _field = GetClass().GetField(O("queryRuntimeModeIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetShutdownIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("shutdownIl2cppCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetVERSION() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VERSION"));
            return _field.Get();
        }
        static void SetAppId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_appId"));
            _field.Set(value);
        }
        static void SetAppKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_appKey"));
            _field.Set(value);
        }
        static void SetInitIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("initIl2cppCallback"));
            _field.Set(value);
        }
        static void SetQueryRuntimeModeIl2cppCallback(::Viveport_Internal::QueryRuntimeModeCallback* value) {
            static BNM::Field<::Viveport_Internal::QueryRuntimeModeCallback*> _field = GetClass().GetField(O("queryRuntimeModeIl2cppCallback"));
            _field.Set(value);
        }
        static void SetShutdownIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("shutdownIl2cppCallback"));
            _field.Set(value);
        }
        static void GetLicense(::Viveport::Api_LicenseChecker* checker, ::BNM::Structures::Mono::String* appId, ::BNM::Structures::Mono::String* appKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLicense"), {"checker", "appId", "appKey"});
            _m.Call(checker, appId, appKey);
        }
        static int Init(::Viveport::StatusCallback* callback, ::BNM::Structures::Mono::String* appId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Init"), {"callback", "appId"});
            return _m.Call(callback, appId);
        }
        static void InitIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
        static int Shutdown(::Viveport::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Shutdown"), {"callback"});
            return _m.Call(callback);
        }
        static void ShutdownIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShutdownIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
        static ::BNM::Structures::Mono::String* Version() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Version"));
            return _m.Call();
        }
    };
}
