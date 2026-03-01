#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message_MessageType.hpp"

namespace Oculus_Platform {
    struct PlatformInternal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "PlatformInternal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void CrashApplication() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CrashApplication"));
            _m.Call();
        }
        static ::Oculus_Platform::Message* ParseMessageHandle(::BNM::Types::nint messageHandle, ::Oculus_Platform::Message_MessageType messageType) {
            static BNM::Method<::Oculus_Platform::Message*> _m = GetClass().GetMethod(O("ParseMessageHandle"), {"messageHandle", "messageType"});
            return _m.Call(messageHandle, messageType);
        }
    };
}
