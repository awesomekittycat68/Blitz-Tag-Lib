#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ESubscriptionTransactionType.hpp"

namespace Viveport_Internal {
    struct Subscription : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Subscription");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport_Internal::ESubscriptionTransactionType GetTransactionType() {
            static BNM::Method<::Viveport_Internal::ESubscriptionTransactionType> _m = GetClass().GetMethod(O("GetTransactionType"));
            return _m.Call();
        }
        static bool IsAndroidSubscriber() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAndroidSubscriber"));
            return _m.Call();
        }
        static int IsReady(::Viveport_Internal::StatusCallback2* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            return _m.Call(callback);
        }
        static bool IsWindowsSubscriber() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsWindowsSubscriber"));
            return _m.Call();
        }
    };
}
