#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* WaitForMothershipSessionToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForMothershipSessionToken"));
            return _m.Call();
        }
    };
}
