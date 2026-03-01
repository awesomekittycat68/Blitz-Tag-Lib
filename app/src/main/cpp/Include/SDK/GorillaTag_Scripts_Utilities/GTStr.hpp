#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Scripts_Utilities {
    struct GTStr : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Scripts.Utilities", "GTStr");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* Bullet(TP0 strings, ::BNM::Structures::Mono::String* bulletStr) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Bullet"), {"strings", "bulletStr"});
            return _m.Call(strings, bulletStr);
        }
        template <typename TP1 = void*>
        static void Bullet(::BNM::IL2CPP::Il2CppObject* builder, TP1 strings, ::BNM::Structures::Mono::String* bulletStr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Bullet"), {"builder", "strings", "bulletStr"});
            _m.Call(builder, strings, bulletStr);
        }
    };
}
