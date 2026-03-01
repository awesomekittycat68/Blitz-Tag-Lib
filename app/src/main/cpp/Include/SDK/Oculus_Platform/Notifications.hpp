#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Notifications : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Notifications");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* MarkAsRead(uint64_t notificationID) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("MarkAsRead"), {"notificationID"});
            return _m.Call(notificationID);
        }
    };
}
