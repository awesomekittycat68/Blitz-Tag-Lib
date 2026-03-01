#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message_MessageType.hpp"

namespace Oculus_Platform {
    struct Callback : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Callback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool GetHasRegisteredJoinIntentNotificationHandler() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRegisteredJoinIntentNotificationHandler"));
            return _field.Get();
        }
        static ::Oculus_Platform::Message* GetLatestPendingJoinIntentNotifications() {
            static BNM::Field<::Oculus_Platform::Message*> _field = GetClass().GetField(O("latestPendingJoinIntentNotifications"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Oculus_Platform::Message_MessageType, ::Oculus_Platform::Callback_RequestCallback*>* GetNotificationCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Oculus_Platform::Message_MessageType, ::Oculus_Platform::Callback_RequestCallback*>*> _field = GetClass().GetField(O("notificationCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<uint64_t, ::Oculus_Platform::Request*>* GetRequestIDsToRequests() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint64_t, ::Oculus_Platform::Request*>*> _field = GetClass().GetField(O("requestIDsToRequests"));
            return _field.Get();
        }
        static void SetHasRegisteredJoinIntentNotificationHandler(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRegisteredJoinIntentNotificationHandler"));
            _field.Set(value);
        }
        static void SetLatestPendingJoinIntentNotifications(::Oculus_Platform::Message* value) {
            static BNM::Field<::Oculus_Platform::Message*> _field = GetClass().GetField(O("latestPendingJoinIntentNotifications"));
            _field.Set(value);
        }
        static void SetNotificationCallbacks(::BNM::Structures::Mono::Dictionary<::Oculus_Platform::Message_MessageType, ::Oculus_Platform::Callback_RequestCallback*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Oculus_Platform::Message_MessageType, ::Oculus_Platform::Callback_RequestCallback*>*> _field = GetClass().GetField(O("notificationCallbacks"));
            _field.Set(value);
        }
        static void SetRequestIDsToRequests(::BNM::Structures::Mono::Dictionary<uint64_t, ::Oculus_Platform::Request*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint64_t, ::Oculus_Platform::Request*>*> _field = GetClass().GetField(O("requestIDsToRequests"));
            _field.Set(value);
        }
        static void AddRequest(::Oculus_Platform::Request* request) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRequest"), {"request"});
            _m.Call(request);
        }
        static void FlushJoinIntentNotificationQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FlushJoinIntentNotificationQueue"));
            _m.Call();
        }
        static void HandleMessage(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleMessage"), {"msg"});
            _m.Call(msg);
        }
        static void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.Call();
        }
        static void RunCallbacks() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunCallbacks"));
            _m.Call();
        }
        static void RunLimitedCallbacks(uint32_t limit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunLimitedCallbacks"), {"limit"});
            _m.Call(limit);
        }
        static void SetNotificationCallback(::Oculus_Platform::Message_MessageType type, ::Oculus_Platform::Message_Callback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNotificationCallback"), {"type", "callback"});
            _m.Call(type, callback);
        }
    };
}
