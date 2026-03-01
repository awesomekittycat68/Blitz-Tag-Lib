#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct PhotonUtils_EmptyArray$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonUtils").GetInnerClass("EmptyArray`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<T>* GetGEmpty() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("gEmpty"));
            return _field.Get();
        }
        static T& Ref() {
            static BNM::Method<T&> _m = GetClass().GetMethod(O("Ref"));
            return _m.Call();
        }
    };
}
