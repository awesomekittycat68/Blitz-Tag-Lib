#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Users : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Users");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static uint64_t GetLoggedInUserID() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("GetLoggedInUserID"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetLoggedInUserLocale() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLoggedInUserLocale"));
            return _m.Call();
        }
    };
}
