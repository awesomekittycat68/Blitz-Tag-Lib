#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    struct Log : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "Log");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Debug(::BNM::Structures::Mono::String* text, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Debug"), {"text", "args"});
            _m.Call(text, args);
        }
        static void Error(::BNM::Structures::Mono::String* text, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Error"), {"text", "args"});
            _m.Call(text, args);
        }
        static void Info(::BNM::Structures::Mono::String* text, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Info"), {"text", "args"});
            _m.Call(text, args);
        }
        static void Warning(::BNM::Structures::Mono::String* text, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Warning"), {"text", "args"});
            _m.Call(text, args);
        }
    };
}
