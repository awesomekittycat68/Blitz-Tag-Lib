#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRAbilityAgent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityAgent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAbilityBase* GetCurrAbility() {
            static BNM::Field<::GlobalNamespace::GRAbilityBase*> _field = GetClass().GetField(O("currAbility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrAbility(::GlobalNamespace::GRAbilityBase* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityBase*> _field = GetClass().GetField(O("currAbility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
