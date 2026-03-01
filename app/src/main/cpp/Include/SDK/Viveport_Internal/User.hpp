#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct User : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "User");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetUserAvatarUrl() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserAvatarUrl"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserId"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetUserName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserName"));
            return _m.Call();
        }
        static int IsReady(::Viveport_Internal::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            return _m.Call(callback);
        }
    };
}
