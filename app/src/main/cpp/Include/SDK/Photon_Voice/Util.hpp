#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct Util : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "Util");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void SetThreadName(::BNM::IL2CPP::Il2CppObject* t, ::BNM::Structures::Mono::String* name) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetThreadName"), {"t", "name"});
            _m.Call(t, name);
        }
    };
}
