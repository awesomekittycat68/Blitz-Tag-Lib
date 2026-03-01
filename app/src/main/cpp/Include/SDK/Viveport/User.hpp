#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct User : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "User");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport_Internal::StatusCallback* GetIsReadyIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            return _field.Get();
        }
        static void SetIsReadyIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* GetUserAvatarUrl() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserAvatarUrl"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserId"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetUserName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserName"));
            return _m.Call();
        }
        static int IsReady(::Viveport::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            return _m.Call(callback);
        }
        static void IsReadyIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReadyIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
    };
}
