#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EchoUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EchoUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static T Echo(T message) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Echo"), {"message"});
            return _m.Call(message);
        }
        template <typename T>
        static T Echo(T message, ::BNM::IL2CPP::Il2CppObject* context) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Echo"), {"message", "context"});
            return _m.Call(message, context);
        }
    };
}
