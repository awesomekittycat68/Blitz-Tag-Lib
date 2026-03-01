#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct RichPresence : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "RichPresence");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* Clear() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("Clear"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* Set(::Oculus_Platform::RichPresenceOptions* richPresenceOptions) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("Set"), {"richPresenceOptions"});
            return _m.Call(richPresenceOptions);
        }
    };
}
