#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_GuidedRefs {
    struct GuidedRefIdBaseSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefIdBaseSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void GuidedRefInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GuidedRefInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
