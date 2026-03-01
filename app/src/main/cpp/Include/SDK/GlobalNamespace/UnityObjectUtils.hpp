#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UnityObjectUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnityObjectUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static T AsNull(T obj) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("AsNull"), {"obj"});
            return _m.Call(obj);
        }
        static void SafeDestroy(::BNM::IL2CPP::Il2CppObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SafeDestroy"), {"obj"});
            _m.Call(obj);
        }
    };
}
