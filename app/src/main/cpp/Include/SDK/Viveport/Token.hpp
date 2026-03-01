#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct Token : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "Token");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport_Internal::StatusCallback2* GetGetSessionTokenIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("getSessionTokenIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetIsReadyIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            return _field.Get();
        }
        static void SetGetSessionTokenIl2cppCallback(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("getSessionTokenIl2cppCallback"));
            _field.Set(value);
        }
        static void SetIsReadyIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            _field.Set(value);
        }
        static void GetSessionToken(::Viveport::StatusCallback2* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSessionToken"), {"callback"});
            _m.Call(callback);
        }
        static void GetSessionTokenIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSessionTokenIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
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
