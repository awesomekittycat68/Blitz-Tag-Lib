#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Request.hpp"

namespace Oculus_Platform {
    template <typename T>
    struct Request$1 : ::Oculus_Platform::Request {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Request`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void HandleMessage(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleMessage"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
    };
}
