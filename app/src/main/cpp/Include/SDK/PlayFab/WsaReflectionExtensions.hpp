#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct WsaReflectionExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "WsaReflectionExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::MonoType* AsType(::BNM::MonoType* type) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("AsType"), {"type"});
            return _m.Call(type);
        }
        template <typename TP2 = void*>
        static ::BNM::IL2CPP::Il2CppObject* CreateDelegate(::BNM::IL2CPP::Il2CppObject* methodInfo, ::BNM::MonoType* delegateType, TP2 instance) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CreateDelegate"), {"methodInfo", "delegateType", "instance"});
            return _m.Call(methodInfo, delegateType, instance);
        }
        static ::BNM::Structures::Mono::String* GetDelegateName(::BNM::IL2CPP::Il2CppObject* delegateInstance) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDelegateName"), {"delegateInstance"});
            return _m.Call(delegateInstance);
        }
        static ::BNM::MonoType* GetTypeInfo(::BNM::MonoType* type) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetTypeInfo"), {"type"});
            return _m.Call(type);
        }
    };
}
