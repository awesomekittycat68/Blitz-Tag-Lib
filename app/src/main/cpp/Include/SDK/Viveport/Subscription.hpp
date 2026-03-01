#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct Subscription : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "Subscription");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport_Internal::StatusCallback2* GetIsReadyIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            return _field.Get();
        }
        static void SetIsReadyIl2cppCallback(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            _field.Set(value);
        }
        static ::Viveport::SubscriptionStatus* GetUserStatus() {
            static BNM::Method<::Viveport::SubscriptionStatus*> _m = GetClass().GetMethod(O("GetUserStatus"));
            return _m.Call();
        }
        static void IsReady(::Viveport::StatusCallback2* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            _m.Call(callback);
        }
        static void IsReadyIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReadyIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
    };
}
