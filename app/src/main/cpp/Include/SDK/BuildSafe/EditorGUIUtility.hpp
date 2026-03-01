#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct EditorGUIUtility : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "EditorGUIUtility");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void PingObject(::BNM::IL2CPP::Il2CppObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PingObject"), {"obj"});
            _m.Call(obj);
        }
    };
}
