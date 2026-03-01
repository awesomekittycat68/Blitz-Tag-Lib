#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ReflectionMetaNames : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ReflectionMetaNames");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>* GetReflectedNames() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>*> _field = GetClass().GetField(O("ReflectedNames"));
            return _field.Get();
        }
        static void SetReflectedNames(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, void*>*> _field = GetClass().GetField(O("ReflectedNames"));
            _field.Set(value);
        }
    };
}
