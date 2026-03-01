#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DeepLinkSender : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DeepLinkSender");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetCurrentDeepLinkSentCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("currentDeepLinkSentCallback"));
            return _field.Get();
        }
        static void SetCurrentDeepLinkSentCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("currentDeepLinkSentCallback"));
            _field.Set(value);
        }
        static bool SendDeepLink(uint64_t deepLinkAppID, ::BNM::Structures::Mono::String* deepLinkMessage, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSent) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SendDeepLink"), {"deepLinkAppID", "deepLinkMessage", "onSent"});
            return _m.Call(deepLinkAppID, deepLinkMessage, onSent);
        }
    };
}
