#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRBehaviorsBase.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct GRBehaviors$1 : ::GlobalNamespace::GRBehaviorsBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRBehaviors`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void AddBehavior(T behavior, ::GlobalNamespace::GRAbilityBase* ability) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddBehavior"), {"behavior", "ability"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behavior, ability);
        }
    };
}
